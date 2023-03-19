#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

struct MOOC
{
	string email;
	int score;
	int rank;
}m[10004];

int cmp(struct MOOC a, struct MOOC b)
{
	if (a.score == b.score)
	{
		return a.email < b.email;
	}
	else
	{
		return a.score > b.score;
	}
}

int main()
{
	int N = 0, G = 0, num = 0;
	cin >> N >> G >> num;
	for (int i = 0; i < N; i++)
	{
		cin >> m[i].email >> m[i].score;
	}
	sort(m, m + N, cmp);
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		if (m[i].score >= 60 && m[i].score < G)
		{
			sum += 20;
		}
		else if(m[i].score >= G && m[i].score <= 100)
		{
			sum += 50;
		}
	}
	cout << sum << endl;
	m[0].rank = 1;
	int r = 1;
	for (int i = 1; i < N; i++)
	{
		if (m[i].score < m[i - 1].score)
		{
			m[i].rank = ++r;
		}
		else if (m[i].score == m[i - 1].score)
		{
			m[i].rank = m[i - 1].rank;
			r++;
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (m[i].rank <= num)
		{
			cout << m[i].rank << ' ';
			cout << m[i].email << ' ' << m[i].score << endl;
		}
		else
		{
			break;
		}
	}

	return 0;
}

