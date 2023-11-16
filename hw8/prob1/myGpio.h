/** File name: myGpio.h
*   Class for controlling GPIO on the BB
*   Written by Luke Gottzmann for CPE 422
*/

#ifndef MYGPIO_H
#define MYGPIO_H

#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>

using namespace std;

enum GPIO_DIRECTION {    
	INPUT,
	OUTPUT  
};

enum GPIO_VALUE {
	LOW = 0,
	HIGH = 1
};

class MYGPIO {
	private:
		int number;
		string name, path;
		int write(string path, string filename, string value);
		int write(string path, string filename, int value);
		string read(string path, string filename);
		ofstream stream;

	public:
		MYGPIO(int number); // Constructor
		int getNumber();
		void setDirection(GPIO_DIRECTION dir);
		GPIO_DIRECTION getDirection();
		int setValue(GPIO_VALUE val);
		GPIO_VALUE getValue();
		void toggleOutput();
		~MYGPIO(); // Destructor
};

#endif