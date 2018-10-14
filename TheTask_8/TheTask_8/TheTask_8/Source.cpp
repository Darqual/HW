#include <iostream>

using namespace std;

int main()
{
	signed int n;
	cin >> n;
	if (n < 0) 
	{
		n = n * (-1);
		cout << "-";
		do cout << n % 10; while ((n /= 10) != 0);
		cout << endl;
	}
	else 
	{
		do cout << n % 10; while ((n /= 10) != 0);
		cout << endl;
	}

	system("pause");
	return 0;
}