# OpenCV_OCR_Detect_Text 
![output image]( https://qengineering.eu/github/ocr_out_cn.jpg )
## Detect text in images with a bare Raspberry Pi 4. <br/>
[![License](https://img.shields.io/badge/License-BSD%203--Clause-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)<br/><br/>
Paper: https://arxiv.org/pdf/1507.05717.pdf<br/>
Special made for a bare Raspberry Pi 4, see [Q-engineering deep learning examples](https://qengineering.eu/deep-learning-examples-on-raspberry-32-64-os.html)

------------

## Tip.
:point_right: See also [PaddleOCR-Lite](https://github.com/Qengineering/PaddleOCR-Lite-Document) solution. It is 25 times faster!

------------

## Dependencies.
To run the application, you have to:
- A raspberry Pi 4 with a 32 or 64-bit operating system. It can be the Raspberry 64-bit OS, or Ubuntu 18.04 / 20.04. [Install 64-bit OS](https://qengineering.eu/install-raspberry-64-os.html) <br/>
- OpenCV ***version 4.5.1 or higher*** 64-bit installed. [Install OpenCV 4.5](https://qengineering.eu/install-opencv-4.5-on-raspberry-64-os.html) <br/>
- Code::Blocks installed. (```$ sudo apt-get install codeblocks```)

------------

## Installing the app.
To extract and run the network in Code::Blocks <br/>
$ mkdir *MyDir* <br/>
$ cd *MyDir* <br/>
$ wget https://github.com/Qengineering/OpenCV_OCR_Detect_Text/archive/refs/heads/main.zip <br/>
$ unzip -j master.zip <br/>
Remove master.zip, LICENSE and README.md as they are no longer needed. <br/> 
$ rm master.zip <br/>
$ rm LICENSE <br/>
$ rm README.md <br/> <br/>
Your *MyDir* folder must now look like this: <br/> 
french_0.jpg <br/>
img_0491.jpg <br/>
img_0599.jpg <br/>
OpenCV_Detect_Text.cpb <br/>
main.cpp <br/>
DB_TD500_resnet.onnx <br/>

------------

## Running the app.
To run the application load the project file OpenCV_Detect_Text.cbp in Code::Blocks.<br/> 
Next, follow the instructions at [Hands-On](https://qengineering.eu/deep-learning-examples-on-raspberry-32-64-os.html#HandsOn).<br/>
More information can be found at [OpenCV tutorial](https://docs.opencv.org/4.x/d4/d43/tutorial_dnn_text_spotting.html).<br/><br/>
![output image]( https://qengineering.eu/github/ocr_out_fr.jpg )

------------

[![paypal](https://qengineering.eu/images/TipJarSmall4.png)](https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=CPZTM5BB3FCYL) 
