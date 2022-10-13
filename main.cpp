#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/dnn/dnn.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s [imagepath]\n", argv[0]);
        return -1;
    }

    const char* imagepath = argv[1];

    cv::Mat frame = cv::imread(imagepath, 1);
    if (frame.empty())
    {
        fprintf(stderr, "cv::imread %s failed\n", imagepath);
        return -1;
    }

    // Load model weights
    cv::dnn::TextDetectionModel_DB model("DB_TD500_resnet50.onnx");
    // Post-processing parameters
    float binThresh = 0.3;
    float polyThresh = 0.5;
    uint maxCandidates = 200;
    double unclipRatio = 2.0;
    model.setBinaryThreshold(binThresh)
         .setPolygonThreshold(polyThresh)
         .setMaxCandidates(maxCandidates)
         .setUnclipRatio(unclipRatio)
    ;
    // Normalization parameters
    double scale = 1.0 / 255.0;
    Scalar mean = Scalar(122.67891434, 116.66876762, 104.00698793);
    // The input shape
    Size inputSize = Size(736, 736);
    model.setInputParams(scale, inputSize, mean);

    std::vector<std::vector<Point>> detResults;
    model.detect(frame, detResults);
    // Visualization
    polylines(frame, detResults, true, Scalar(0, 255, 0), 2);

    imwrite("out.jpg",frame);

    imshow("Text Detection", frame);
    waitKey();

    return 0;
}
