#include <iostream>

using namespace std;

int main()
{
	int V, T, K;
	cout << "Enter 2 integers" << endl;
	cin >> V;
	cin >> T;
	if (0 <= T && T <= 1000 && -1000 <= V && V <= 1000)
	{
		if (V >= 0)
		{
			K = V * T;
			while (K > 109)
			{
				K -= 109;
			}
			cout << K << endl;
		}
		if (V < 0)
		{
			K = 109 + (V * T);
			while (K < 0)
			{
				K += 109;
			}
			cout << K << endl;
		}
	}
	else
	{
		cout << "The numbers enterned do not satisfy the conditions of the problem\n";
	}
	system("pause");
	return 0;
}