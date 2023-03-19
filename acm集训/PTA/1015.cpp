//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//using namespace std;
//struct student
//{
//	long long int id;
//	long long int virture;
//	long long int talent;
//};
//bool cmp(student x, student y)
//{
//	if ((x.talent + x.virture) > (y.talent + y.virture))
//	{
//		return 1;
//	}
//	else if ((x.talent + x.virture) == (y.talent + y.virture))
//	{
//		if (x.virture > y.virture)
//		{
//			return 1;
//		}
//		else if (x.virture == y.virture)
//		{
//			if (x.id < y.id)
//			{
//				return 1;
//			}
//			else
//			{
//				return 0;
//			}
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	else
//	{
//		return 0;
//	}
//}
//student stu[114514];
//student stu1[114514], stu2[114514], stu3[114514], stu4[114514];
//int main()
//{
//	
//	int num, low, up;
//	int j = 0, k = 0, l = 0, m = 0;
//	cin >> num >> low >> up;
//	int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
//	for (int i = 0; i < num; i++)
//	{
//		cin >> stu[i].id >> stu[i].virture >> stu[i].talent;
//	}
//	for (int i = 0; i < num; i++)
//	{
//		if (stu[i].virture >= up && stu[i].talent >= up)
//		{
//			stu1[j].id = stu[i].id;
//			stu1[j].virture = stu[i].virture;
//			stu1[j].talent = stu[i].talent;
//			j++;
//			count1++;
//		}
//		else if (stu[i].virture >= up && stu[i].talent < up && stu[i].talent >= low)
//		{
//			stu2[k].id = stu[i].id;
//			stu2[k].virture = stu[i].virture;
//			stu2[k].talent = stu[i].talent;
//			k++;
//			count2++;
//		}
//		else if (stu[i].virture < up && stu[i].talent < up && stu[i].talent >= low &&
//			stu[i].virture >= low && stu[i].virture >= stu[i].talent)
//		{
//			stu3[l].id = stu[i].id;
//			stu3[l].virture = stu[i].virture;
//			stu3[l].talent = stu[i].talent;
//			l++;
//			count3++;
//		}
//		else if (stu[i].talent >= low &&
//			stu[i].virture >= low)
//		{
//			stu4[m].id = stu[i].id;
//			stu4[m].virture = stu[i].virture;
//			stu4[m].talent = stu[i].talent;
//			m++;
//			count4++;
//		}
//	}
//	sort(stu1, stu1 + count1, cmp);
//	sort(stu2, stu2 + count2, cmp);
//	sort(stu3, stu3 + count3, cmp);
//	sort(stu4, stu4 + count4, cmp);
//	cout << (count1 + count2 + count3 + count4) << endl;
//	for (int i = 0; i < count1; i++)
//	{
//		cout << stu1[i].id << ' ' << stu1[i].virture << ' ' << stu1[i].talent << endl;
//	}
//	for (int i = 0; i < count2; i++)
//	{
//		cout << stu2[i].id << ' ' << stu2[i].virture << ' ' << stu2[i].talent << endl;
//	}
//	for (int i = 0; i < count3; i++)
//	{
//		cout << stu3[i].id << ' ' << stu3[i].virture << ' ' << stu3[i].talent << endl;
//	}
//	for (int i = 0; i < count4; i++)
//	{
//		cout << stu4[i].id << ' ' << stu4[i].virture << ' ' << stu4[i].talent << endl;
//	}
//
//	return 0;
//}
//
