//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//char cmy[12][10] = { "C","C#","D","D#","E","F","F#","G","G#","A","A#","B" };
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int a[3];
//		for (int i = 0; i < 3; i++)
//		{
//			char x[20];
//			scanf("%s%*c", x);
//			for (int j = 0; j < 12; j++)
//			{
//				if (strcmp(x, cmy[j]) == 0)
//				{
//					a[i] = j;
//				}
//			}
//		}
//		while (a[1] < a[0])
//		{
//			a[1] += 12;
//		}
//		while (a[2] < a[1])
//		{
//			a[2] += 12;
//		}
//		int cnt1 = a[1] - a[0];
//		int cnt2 = a[2] - a[1];
//		if (cnt1 == 3 && cnt2 == 4)
//		{
//			cout << "Minor triad" << endl;
//		}
//		else if (cnt1 == 4 && cnt2 == 3)
//		{
//			cout << "Major triad" << endl;
//		}
//		else
//		{
//			cout << "Dissonance" << endl;
//		}
//	}
//
//}
////string s[] = {"C","C#","D","D#","E","F","F#","G","G#","A","A#","B"};
////string n1, n2, n3;
////int main()
////{
////	int t = 0;
////	cin >> t;
////	while (t--)
////	{
////		cin >> n1 >> n2 >> n3;
////		int cnt1, cnt2;
////		int i = 0;
////		for (;; i++)
////		{
////			if (s[i] == n1)
////			{
////				break;
////			}
////		}
////		for (int j = i + 1;; j++)
////		{
////			if (s[j] == n2)
////			{
////				cnt1 = j - i;
////				i = j;
////				break;
////			}
////		}
////		for (int j = i + 1;; j++)
////		{
////			if (s[j] == n3)
////			{
////				cnt2 = j - i;
////				i = j;
////				break;
////			}
////		}
////		if (cnt1 == 4 && cnt2 == 3)
////		{
////			puts("Major triad");
////		}
////		else if (cnt1 == 3 && cnt2 == 4)
////		{
////			puts("Minor triad");
////		}
////		else
////		{
////			puts("Dissonance");
////		}
////	}
////
////	return 0;
////}