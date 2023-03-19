#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		map<string, int> m;
		int x = 0;
		cin >> x;
		for (int i = 0; i < x; i++)
		{
			string c;
			cin >> c;
			m[c]++;
		}
		cout << m.size() << endl;
		for (map<string, int>::iterator it = m.begin(); it != m.end(); it++)
		{
			cout << it->first << ':' << ' ' << it->second << endl;
		}
		cout << endl;
	}

	return 0;
}


//int main()
//{
//	stack<int> st;
//	queue<int> qu;
//	priority_queue<int> bigpri_q;
//	priority_queue<int, vector<int>, greater<int> > smallpri_q;
//
//	for (int i = 1; i <= 9; i++)
//	{
//		st.push(i);
//		qu.push(i);
//	}
//	cout << "出队顺序:";
//	while (!qu.empty())
//	{
//		cout << qu.front() << ' ';
//		qu.pop();
//	}
//	cout << endl;
//	cout << "出栈顺序:";
//	while (!st.empty())
//	{
//		 cout << st.top() << ' ';
//		st.pop();
//	}
//	for (int i = 1; i <= 9; i++)
//	{
//		qu.push(i);
//	}
//	cout << endl;
//	int arr[10] = { 2,5,8,9,6,7,1,3,4 };
//	for (int i = 0; i < 9; i++)
//	{
//		bigpri_q.push(arr[i]);
//		smallpri_q.push(arr[i]);
//	}
//	while (!bigpri_q.empty())
//	{
//		cout << bigpri_q.top() << ' ';
//		bigpri_q.pop();
//	}
//	cout << endl;
//	while (!smallpri_q.empty())
//	{
//		cout << smallpri_q.top() << ' ';
//		smallpri_q.pop();
//	}
//
//
//
//	return 0;
//}


//int main()//vector
//{
//	vector<int> asuna;
//	asuna.push_back(114514);
//	asuna.push_back(1919810);
//	//for (int i = 0; i < asuna.size(); i++)//下标遍历
//	//{
//	//	cout << asuna[i] << ' ';
//	//}
//	for (vector<int>::iterator it = asuna.begin(); it < asuna.end(); it++)//迭代器遍历
//	{
//		cout << *it << ' ';
//	}
//	cout << endl;
//	asuna.push_back(1);
//	asuna.push_back(2);
//	asuna.push_back(3);
//	asuna.push_back(4);
//	asuna.pop_back();
//	//for (int i = 0; i < asuna.size(); i++)//下标遍历
//	//{
//	//	cout << asuna[i] << ' ';
//	//}
//	for (vector<int>::iterator it = asuna.begin(); it < asuna.end(); it++)//迭代器遍历
//	{
//		cout << *it << ' ';
//	}
//
//	return 0;
//}

