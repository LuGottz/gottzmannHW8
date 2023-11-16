#!/bin/bash
echo "Building the gpioApp application"
g++ -c LED.cpp -o LED.o
g++ -c myGPIO.cpp -o myGPIO.o
g++ -c AnalogIn.cpp -o AnalogIn.o
g++ -c gpioApp.cpp -o gpioApp.o
g++ LED.o GPIO.o AnalogIn.o gpioApp.o -o gpioApp
echo "Finished"