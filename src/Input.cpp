//============================================================================
// Name        : Input.cpp
// Author      : D_Green
// Version     :
// Copyright   : D_Green
// Description : Input in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	// << these are known as the insertion operator.

	string input;

	cout << "Please enter your name: " << flush;

	// >> extraction operator.

	cin >> input;

	cout << "Hello " << input << endl;


	int value;
	cout << "Please enter a number between 1 -10: " << flush;
	cin >> value;
	cout << "The number you chose is: " << value << endl;



	return 0;
}
