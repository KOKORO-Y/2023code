//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//#include<stdio.h>
//using namespace std;
//int graph[100][100];//�����洢ͼ������
//bool isVisited[100];//�ж�������Ƿ��Ѿ�ɾ��
//int main()
//{
//	int n, e;
//	while (scanf("%d", &e) != EOF && e != 0)//��ȡ����
//	{
//		n = e + 1;
//		for (int i = 0; i < 100; i++)
//		{
//			isVisited[i] = false;
//			for (int j = 0; j < 100; j++)
//			{
//				graph[i][j] = -1;//��ʼ�����ݣ����еı߶�Ϊ-1��������������֮�䲻����ͨ
//			}
//		}
//		for (int i = 0; i < e; i++)//����ͼ
//		{
//			int a, b, c = 1;
//			scanf("%d %d", &a, &b);
//			graph[a - 1][b - 1] = c;
//		}
//		int isResult = true;
//		for (int i = 0; i < n; i++)//����n��ѭ����ÿ��ѭ��ɾ��һ�����Ϊ0�ĵ㣬���Խ���n��ѭ��
//		{
//			for (int j = 0; j < n; j++)//�������еĵ㣬�����Ϊ0�ĵ�
//			{
//				if (!isVisited[j])//�жϸõ��Ƿ�ɾ��
//				{
//					bool isCanVisited = true;//�����������ж�������Ƿ����Ϊ0
//					for (int k = 0; k < n; k++)
//					{
//						if (graph[k][j] != -1)
//						{
//							isCanVisited = false;//��������ܹ����������ıߣ���õ���Ȳ�Ϊ0
//						}
//					}
//					if (isCanVisited)//����õ����Ϊ0�����±���ɾ���õ��ɾ�������ڱ�
//					{
//						for (int k = 0; k < n; k++)
//						{
//							graph[j][k] = -1;//ɾ�����ڱߣ�����ֵ��Ϊ-1
//						}
//						isVisited[j] = true;//ɾ���õ�
//					}
//				}
//			}
//			isResult = true;
//			for (int j = 0; j < n; j++)//����ѭ���жϵ�ǰ���е��Ƿ��Ѿ�ȫ��ɾ�������ȫ��ɾ�������ȫ��ɾ�����������������ѭ��
//			{
//				if (!isVisited[j])
//				{
//					isResult = false;
//				}
//			}
//			if (isResult)
//				break;
//		}
//		isResult = true;
//		for (int i = 0; i < n; i++)//�����е��������ͨ�����ѭ�����ж��Ƿ����е㶼�Ѿ�ɾ�������ȫ��ɾ������Ϊ�޻�ͼ������Ϊ�л�ͼ
//		{
//			if (!isVisited[i])
//				isResult = false;
//		}
//		if (isResult)
//			printf("�޻�");
//		if (!isResult)
//			printf("�л�");
//	}
//	return 0;
//
//}