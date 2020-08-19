# 🐭 Mouse_III - Path retracing robot
Draw a path on your screen, and the robot will retrace it in real live

## Table of contents
* [General info](#general-info)
* [Screenshots](#screenshots)
* [Technologies](#technologies)
* [Parts needed](#Parts)
* [Setup](#setup)
* [Features](#features)
* [Status](#status)
* [Contact](#contact)

## General info
This robot was made as an final project for C++ object oriented programming course at my university. The user imputs some shape in the desktop app, and the robot recreates it in real live. It is controlled by [Arduino nano](https://store.arduino.cc/arduino-nano) board and an [HC-06 Bluetooth module](https://components101.com/wireless/hc-06-bluetooth-module-pinout-datasheet). It usues the [L293D](https://www.amazon.com/NDRTJM-MSTL2930-L293D-Stepper-Driver/dp/B008XCGLNM) push-pull driver to controll 2 Brushed DC electric motors. The robot is controlled by user through an android app.

## Screenshots

![Example screenshot](https://i.imgur.com/BHl1NcV.png)

![Example screenshot](https://i.imgur.com/3efQ680.jpg)

![Example screenshot](https://i.imgur.com/5sGF2Nv.png)


## Technologies
* [Arduino IDE](https://www.arduino.cc/en/Main/Software)
*  Bluetooth 2.0
* Visual Studio 2015
![Example screenshot](https://i.imgur.com/XuGlbIz.png)
![Example screenshot](https://i.imgur.com/dKV2Z1v.png) 
## Parts needed
* Arduino nano
* L293D push-pull 2 channel motor driver
* HC-06 Bluetooth module
* Breadboard
* Breadboard jumper wires
* 2WD Robot Car Chassis
* Battery pack or other energy source. (I use 2x 9V batteries, one to power Arduino, Bluetooth module, and logic of the L293D, and the other one to power the motors)

## Setup
Upload MARK_II.ino to your arduino and connect components as shown below (bear in mind that the HC-06 operates on 3.3V logic. Arduino can recive data from it, but transmiting data with 5V Arduino's logic requires additional 1k ohm resistor between Arduino RXD and HC-06 TXD):
![Schematic](https://i.imgur.com/PmfjSp2.png)
Connect with the HC-06 module with your's desktop (connect to it like any external Bluetooth device e.g. Bluetooth speaker)
From the P.D.R. II - Serial Port, select the HC-06's serial port (you can find it in the device manager). After the user imputs the path, that he wishes to drive, click the "Finish" button. The app will animate the robot driving the path.



## Features
* Creating paths, saving and loading them
* Calculating approximate distance
* Animating current robot position

## Status
Finished, submited and graded (Got an A 😎).

## Contact
Created by Wojciech Mańczak - feel free to contact me!
