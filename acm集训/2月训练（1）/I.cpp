#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int alice = 0, bob = 0;
		cin >> alice >> bob;
		if (alice == bob)
		{
			cout << alice - 1 << ' ' << bob << endl;
		}
		else if (bob > alice)
		{
			cout << alice - 1 << ' ' << bob << endl;
		}
		else if (alice > bob)
		{
			cout << (alice - 1) << ' ' << bob << endl;
		}
	}

	return 0;
}

