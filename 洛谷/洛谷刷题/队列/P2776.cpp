#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <queue>
using namespace std;
#include <iostream>
#include <iomanip>
using namespace std;
template <typename T>
T compare(T x, T y) {
    if (x < y)
    {
        return -1;
    }
    else if (x == y)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main() 
{
    int n1, n2;
    cin >> n1 >> n2;
    double d1, d2;
    cin >> d1 >> d2;
    char ch1, ch2;
    cin >> ch1 >> ch2;
    cout << compare(n1, n2) << endl;
    cout << compare(d1, d2) << endl;
    cout << compare(ch1, ch2) << endl;
    return 0;
}

//int g[1000005];
//
//queue <int> order;
//queue <int> que[514];
//int main()
//{
//	int n = 0, group = 0;
//	cin >> n >> group;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &g[i]);
//	}
//	int t = 0;
//	cin >> t;
//	for (int i = 0; i < t; i++)
//	{
//		string a;
//		cin >> a;
//		if (a == "push")
//		{
//			int temp;
//			scanf("%d", &temp);
//			int number = g[temp];
//			if (que[number].empty())
//			{
//				order.push(number);
//			}
//			que[number].push(temp);
//		}
//		else
//		{
//			int index = order.front();
//			printf("%d\n", que[index].front());
//			que[index].pop();
//			if (que[index].empty())
//			{
//				order.pop();
//			}
//		}
//	}
//
//	return 0;
//}

