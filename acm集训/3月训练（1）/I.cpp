//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//long long int arr[100005];
//long long int damage1[100005];
//long long int damage2[100005];
//int main()
//{
//	int column = 0, quests = 0;
//	cin >> column >> quests;
//	for (int i = 1; i <= column; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 1; i <= column; i++)
//	{
//		if (i == 1)
//		{
//			damage1[i] = 0;
//		}
//		else if (arr[i] >= arr[i - 1])
//		{
//			damage1[i] = damage1[i - 1] + 0;
//		}
//		else if (arr[i] < arr[i - 1])
//		{
//			damage1[i] = damage1[i - 1] + (arr[i - 1] - arr[i]);
//		}
//	}
//	for (int i = column; i >= 1; i--)
//	{
//		if (i == column)
//		{
//			damage2[i] = 0;
//		}
//		else if (arr[i] >= arr[i + 1])
//		{
//			damage2[i] = damage2[i + 1] + 0;
//		}
//		else if (arr[i] < arr[i + 1])
//		{
//			damage2[i] = damage2[i + 1] + (arr[i + 1] - arr[i]);
//		}
//	}
//	for (int i = 1; i <= quests; i++)
//	{
//		int st = 0, ed = 0;
//		cin >> st >> ed;
//		if (st <= ed)
//		{
//			cout << (damage1[ed] - damage1[st]) << endl;
//		}
//		else
//		{
//			cout << (damage2[ed] - damage2[st]) << endl;
//		}
//	}
//	
//
//	return 0;
//}
//
