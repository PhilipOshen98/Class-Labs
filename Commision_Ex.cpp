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

	/* I feel like there's a better way to write what I have here using Assignment Operators. 
	If I could do something like Total += 250 I think it would look nicer. The class activity asked for 250 to be assigned to a bonus variable
	so I just thought it required it to be declared as a regular variable. If I wanted to get rid of the variable however and I knew the bonus would never
	CHange from 250, I think I could have used "+="
	
	*/


}
