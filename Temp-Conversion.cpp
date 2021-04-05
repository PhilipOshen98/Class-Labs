/*

   Programmer’s name:   lab1_EricTan.cpp

   Programmer:     Eric Tan

   Date:     3/14/2021

   Version: 1.0

   Description of the program: This program converts Fahrenheit degree to Celsius degree Temperature using a standard formula. 

*/

#include <iostream>
#include <iomanip> // this is for input/output manipulation

using namespace std;
void main()
{
	float f = 0.0; // f is Fahrenhiet 
	float c = 0.0; // c is for Celsius 

	cout << "Enter the Fahrenheit value: " << endl; // Outputs prompt for user imput
	cin >> f; // user input

	c = (5.0 / 9.0) * (f - 32.0); // formula for Fahrenhiet to Celsius conversion.


	cout << "The celsius value is " << c << endl; // Reveals the output.



}
