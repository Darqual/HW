#include <iostream>

using namespace std;



int main() 
{
	int A, f1 = 1, f0 = 0, res = 0;
	cin >> A;
	while (A != f0)
	{
		f1 = f1 + f0;
		f0 = f1 - f0;
		res++;
		if (A < f0) 
		{
			res = -1;
			break;
		}
	}
	cout << res << endl;
	system("pause");
	return 0;

}