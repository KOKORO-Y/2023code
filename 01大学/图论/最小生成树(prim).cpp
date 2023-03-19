//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//const int N = 100;
//typedef struct
//{
//	int Vertices[N];  //顶点集合
//	int Edge[N][N];  //边集合
//	int numV;  //顶点个数
//	int numE;  //边的个数
//}AdjMatrix;
//int inf = 65535;
//int lowcost[N];
//void prim(AdjMatrix G)
//{
//	int cnt = 0; int minn = 114514, index = 0, sum = 0;
//	int adV[N];
//	for (int i = 1; i <= G.numV; i++)
//	{
//		if (i == 1)
//		{
//			lowcost[i] = 0;
//			adV[0] = 0;
//		}
//		else
//		{
//			lowcost[i] = G.Edge[1][i];
//			adV[i] = 1;
//		}
//	}
//	cnt++;
//	for (int i = 2; i <= G.numV; i++)
//	{
//		minn = inf;
//		for (int j = 1; j <= G.numV; j++)
//		{
//			if (minn > lowcost[j] && lowcost[j] != 0)
//			{
//				minn = lowcost[j];
//				index = j;
//			}
//		}
//		if (minn == inf)
//		{
//			break;
//		}
//		cnt++;
//		sum += lowcost[index];
//		lowcost[index] = 0;
//		printf("%d %d\n", adV[index], index);
//		//pre = index;
//		for (int j = 2; j <= G.numV; j++)
//		{
//			if (lowcost[j] != 0 && lowcost[j] > G.Edge[index][j])
//			{
//				lowcost[j] = G.Edge[index][j];
//				adV[j] = index;
//			}
//		}
//	}
//	cout << sum << endl;
//}
//
//int main()
//{
//	AdjMatrix G;
//	cin >> G.numV >> G.numE;
//	for (int i = 0; i <= G.numV; i++)
//	{
//		for (int j = 0; j <= G.numV; j++)
//		{
//			G.Edge[i][j] = inf;
//		}
//	}
//	for (int i = 1; i <= G.numV; i++)
//	{
//		cin >> G.Vertices[i];
//	}
//	for (int i = 1; i <= G.numE; i++)
//	{
//		int x, y, w;
//		cin >> x >> y >> w;
//		G.Edge[x][y] = w;
//		G.Edge[y][x] = w;
//	}
//
//	prim(G);
//
//	return 0;
//}
//
