#!/bin/bash
echo "Building the myGpio application"
g++ -g -o myGpio.cpp myGpio
echo "Building the myGpioApp application"
g++ -g -o myGpioApp.cpp myGpioApp
echo "Finished"
