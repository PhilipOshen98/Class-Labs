#include <iostream>
#include <iomanip>

using namespace std;

/*
Problem 1- Write an if statement that performs the following logic: if the variable sales
is greater than 50,000, then assign 0.25 to the commissionRate variable, and
assign 250 to the bonus variable.

*/

int main()

{

	double sales, Total, commisionRate;
	int bonus;

	cout << "Please enter total Sales ammount" << endl;
	cin >> sales;

	if (sales > 50000)
	{
		commisionRate = 0.25;
		bonus = 250;
		Total = (commisionRate * sales / 100) + bonus;
		cout << "Your total comission is " << Total << endl;
	}

	


}