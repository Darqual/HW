#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int K, M2, M3, M4, C1, C2, C3, C4;
	cout << "Enter a four-digit number" << endl;
	cin >> K;
	C1 = K % 10;
	M2 = K / 10;
	C2 = M2 % 10;
	M3 = K / 100;
	C3 = M3 % 10;
	M4 = K / 1000;
	C4 = M4 % 10;

	if (C4 == C1 && C2 == C3)
	{
		cout << "1" << endl;
	}
	else
	{
		srand( time(0));
		cout << 1 + (1 + rand() % 100) << endl;
	}
	system("pause");
	return 0;
}