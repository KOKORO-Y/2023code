#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <set>

using namespace std;
const long long int N = 1e6;
long long int arr[N] = { 0 };
int main()
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	set<long long int> s1, s2, s3;
	int n = 0, k = 0;
	set<long long int>::iterator it;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		if (k == 1)
		{
			s1.insert(arr[i]);
		}
		else if (k == 2)
		{
			s2.insert(arr[i]);
		}
		else if (k == 3)
		{
			s3.insert(arr[i]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		if (k == 1)
		{
			s1.insert(arr[i]);
		}
		else if (k == 2)
		{
			s2.insert(arr[i]);
		}
		else if (k == 3)
		{
			s3.insert(arr[i]);
		}
	}
	int person = 0;
	cin >> person;
	for (int i = 0; i < person; i++)
	{
		cin >> k;
		if (k == 1)
		{
			if (s1.size() > 0)
			{
				it = s1.begin();
				cout << *it << ' ';
				s2.erase(*it);
				s3.erase(*it);
				s1.erase(it);
			}
			else
			{
				cout << "-1" << ' ';
			}
		}
		else if (k == 2)
		{
			if (s2.size() > 0)
			{
				it = s2.begin();
				cout << *it << ' ';
				s1.erase(*it);
				s3.erase(*it);
				s2.erase(it);
			}
			else
			{
				cout << "-1" << ' ';
			}
		}
		else if (k == 3)
		{
			if (s3.size() > 0)
			{
				it = s3.begin();
				cout << *it << ' ';
				s1.erase(*it);
				s2.erase(*it);
				s3.erase(it);
			}
			else
			{
				cout << "-1" << ' ';
			}
		}
	}

	return 0;
}

