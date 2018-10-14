#include <iostream>

using namespace std;

int main()
{
	int Col, L, NCol, NL; // Col(Column), L(Line), NCol(NeedColumn), NL(NeedLine) 
	cout << "Enter start column\n";
	cin >> Col;
	cout << "Enter start line\n";
	cin >> L;
	cout << "Enter end column\n";
	cin >> NCol;
	cout << "Enter end line\n";
	cin >> NL;

	if (Col > 0 && Col < 10 &&
		L > 0 && L < 10 &&
		NCol > 0 && NCol < 10 &&
		NL > 0 && NL < 10)
	{
		if (Col == NCol || L == NL)
		{
			cout << "Yes\n";
		}
		else
		{
			cout << "No\n";
		}
	}
	else
	{
		cout << "The enterned numbers are in the range from 1 to 9\n";
	}

	system("pause");
	return 0;
}
