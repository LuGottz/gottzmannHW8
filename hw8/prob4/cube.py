"""
cube.py

Description: Takes values from 0 to 19 and prints out the cube of any odd number and prints even numbers as is

Command Line Arguments: None

Example Invocation: python3 cube.py

"""

for i in range(20):
	if i % 2 == 1 : print(i*i*i)
	else: print(i)
