/*

   Program's name:   Eric_Tan_Hwklab3_BMI.cpp

   Programmer:     Eric Tan

   Date:     03/21/2021

   Version: 1.9

   This program is meant to calculate a users BMI results and determine whether they are overweight, 
underweight, or at optimal weight. 

*/


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// h = height w = weight
	float bmi, h, w;

	// Gathering user info.
	cout << "Enter your height in inches : ";
	cin >> h;

	cout << "Enter your weight in pounds : ";
	cin >> w;

	/*
	I tried using the formula BMI = (Weight  x 703)/ Height^2 but I received an error that I couldn't solve.
	I ended up changing the formula to h * h and it worked
	*/

	
	bmi = (w * 703) /(h * h);

	
	// Outputing BMI results, using setprecision to truncate result

	cout << "Your BMI results are : " << fixed << showpoint << setprecision(1) << bmi << endl;
	


	// If bmi is less than 18.5 they are underweight
	if (bmi < 18.5)

		cout << " You are underweight";

	// If they're between 25 and 18.5 they are optimal weight
	else if (bmi < 25 && bmi>18.5)

		cout << "You are at Optimal weight";

	// If they're neither the above, they are overweight.
	else
		cout << "Overweight";

	return 0;
}