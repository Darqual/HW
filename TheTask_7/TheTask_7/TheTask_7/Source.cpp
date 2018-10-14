#include <iostream>

using namespace std;

int main()
{
unsigned int H, A, B, t;

cout << "Enter the height of the pole\n";
cin >> H;
cout << "Enter lift height\n";
cin >> A;
cout << "Enter lowering height\n";
cin >> B;

while (A < B || B > H) 
        {
	cout << "Enter lifting speed\n" << endl;
    cin >> A;
	cout << "Enter descent rate\n" << endl;
    cin >> B;
		}
t = (H - B) / (A - B);
cout << "Will rise in " << t << " days" << endl;
system("pause");
return 0;
		
}