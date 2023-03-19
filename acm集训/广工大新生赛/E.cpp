#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <cstring>

using namespace std;
char str[114514191] = { 0 };
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		//memset(str, 0, sizeof(str));
		long long int k = 0;
		cin >> str >> k;
		long long int len = strlen(str);
		cout << (str[len - 1]) - '0' << endl;
	}

	return 0;
}

