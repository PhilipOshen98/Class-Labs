#include <iostream>
#include <iomanip>


using namespace std;

int main()

{
	int 
	int radius, area, width, length, height, base, quit, choice;
	const double PI = 3.14;

	const int CIRCLE_CHOICE = 1, RECTANGLE_CHOICE = 2, TRIANGLE_CHOICE = 3, QUIT_CHOICE = 4;


	
	cout << "Enter 1 for radious of a circle\n";
	cout << "Enter 2 for the width of the rectangle\n";
	cout << "Enter 3 for thje length of the triangle\n";
	cout << "Enter 4 for the program to quit" << quit << endl;
	cin >> choice;
	cout << fixed << setprecision(2);

	switch (choice)

	{
	case 1:
		cout << "Enter the radious of the circle\n";
		cin >> radius;
		if (radius < 0)
		{
			cout << "Radius can't be negative.\n\n"
				<< "Enter radius again: \n";
			cin >> radius;
		}
		area = PI * radius * radius;
		cout << "The circle area is = " << area << " square units \n\n";
		break;

	case 2:
	
		cout << "Enter the length of the rectangle: ";
		cin >> length;
		if (length < 0)
		{
			cout << "Length can't be less than 0! \n\n"
				<< "Enter length again: \n";
			cin >> length;
		}
		cout << "Enter the width of the rectangle: ";
		cin >> width;
		if (width < 0)
		{
			cout << "Width can't be less than 0! \n\n"
				<< "Enter width again: \n";
			cin >> width;
		}

		area = length * width;
		cout << "Rectangle area is = " << area << " square units \n\n";
		break;

	case 3:

		cout << "Enter base of the triangle: ";
		cin >> base;
		if (base < 0)
		{
			cout << "Base can't be less than 0! \n\n"
				<< "Enter base again: \n";
			cin >> base;
		}
		cout << "Enter height of the triangle: ";
		cin >> height;
		if (height < 0)
		{
			cout << "Height can't be less than 0! \n\n"
				<< "Enter height again: \n";
			cin >> height;
		}

	case 4:
		cout << "\n Ending Program. \n\n";
		break;

	defualt:
		cout << "The valid choises are 1-4 \n\n"
			<< "Run the program again\n\n";



	}

	return 0;
}
