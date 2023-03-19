#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	int t = 0;
	cin >> t;
	getchar();
	while (t--)
	{
		char ch;
		stack <char> st;
		while (1)
		{
			ch = getchar();
			if (ch == '\n' || ch == ' ' || ch == EOF)
			{
				while (!st.empty())
				{
					cout << st.top();
					st.pop();
				}
				if (ch == '\n' || ch == EOF)
				{
					break;
				}
				cout << ' ';
			}
			else
			{
				st.push(ch);
			}
		}
		cout << '\n';
	}

	return 0;
}

