#!/bin/bash
echo "Building the AnalogIn object"
g++ -c AnalogIn.cpp -o AnalogIn.o
echo "Building the test_analog object"
g++ -c test_analog.cpp -o test_analog.o
echo "Linking the AnalogIn.o and test_analog.o objects to test_analog"
g++ AnalogIn.o test_analog.o -o test_analog
echo "Finished"