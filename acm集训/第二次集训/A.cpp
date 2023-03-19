#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;
void tnnd(int t)
{
	if (t >= 1900)
	{
		cout << "Division 1" << endl;
	}
	else if (t >= 1600 && t <= 1899)
	{
		cout << "Division 2" << endl;
	}
	else if (t >= 1400 && t <= 1599)
	{
		cout << "Division 3" << endl;
	}
	else if (t <= 1399)
	{
		cout << "Division 4" << endl;
	}
}
//int main()
//{
//	int n = 0;
//	cin >> n;
//	while (n--)
//	{
//		int t = 0;
//		cin >> t;
//		tnnd(t);
//	}
//
//	return 0;
//}
