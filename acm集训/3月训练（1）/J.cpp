#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
char temp[200005];
int main()
{
	stack<char> st;
	int t = 0;
	cin >> t;
	while (t--)
	{
		char a[200005];
		cin >> a;
		st.push(a[0]);
		int left = 0, right = 0, num = 0;
		for (int i = 0; i < strlen(a); i++)
		{
			if (a[i] == '(')
			{
				left++;
			}
			else if (a[i] == ')')
			{
				right++;
			}
			else
			{
				num++;
			}
		}
		for (int i = 1; i < strlen(a); i++)
		{
			if ((st.top() == '(') && (a[i] == ')') && (!st.empty()))
			{
				st.pop();
				left--;
				right--;
			}
			else
			{
				st.push(a[i]);
			}
		}
		if (left == 0 && right == 0)
		{
			if (st.size() == 2)
			{
				cout << "YES\n";
			}
			else
			{
				cout << "NO\n";
			}
		}
		else if (left == 0 && right != 0)
		{
			if (a[0] == ')')
			{
				cout << "NO\n";
			}
			else
			{
				int index = st.size();
				for (int i = index - 1; i >= 0; i--)
				{
					temp[i] = st.top();
					st.pop();
				}
			}
		}
	}

	return 0;
}

