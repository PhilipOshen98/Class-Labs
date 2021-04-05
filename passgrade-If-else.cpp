#include <iostream>
#include <iomanip>

using namespace std;

/*



We want the to be able to calculate the average score of 3 tests from the user. Furthermore, if the user has an average score higher than 75, then they are passing. 

Get user input of 3 test scores

Add the 3 test scores then divide by 3

Output the results of the average score.



*/

int main()
{

	const int Max_Average_Score = 75;

	double average;

	double Test1, Test2, Test3;


	cout << "Please enter your 3 test scores.";

	cin >> Test1 >> Test2 >> Test3;

	average = (Test1+Test2+Test3) / 3.0;
	cout << fixed << showpoint << setprecision(1);

	if (average > 75)
	{
		cout << "\n\nYour average is " << average << endl;
		cout << "Congrats you've passed!\n\n";
	}

	else if (average < 75)
	{
		cout << "\n\nYour average is " << average << endl;
		cout << "study harder next time\n\n" << endl;
	}


		






}
