//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//#define MAXEDGE 20
//#define MAXVEX 20
//#define INFINITY 65535
//
//int Path[20][20], PathValue[20][20];
//
//typedef struct
//{
//	int edge[MAXEDGE][MAXEDGE];
//	int vex[MAXVEX];
//	int num_vex, num_edge;
//}Graph;
//
//void creatGraph(Graph* G)
//{
//	int i, j;
//	G->num_vex = 9;
//	G->num_edge = 16;
//
//	for (int i = 0; i < G->num_vex; i++)
//	{
//		G->vex[i] = i;
//	}
//	for (int i = 0; i < G->num_vex; i++)
//	{
//		for (int j = 0; j < G->num_vex; j++)
//		{
//			if (i == j)
//			{
//				G->edge[i][j] = 0;
//			}
//			else
//			{
//				G->edge[i][j] = INFINITY;
//			}
//		}
//	}
//
//	G->edge[0][1] = 1;
//	G->edge[0][2] = 5;
//	G->edge[1][2] = 3;
//	G->edge[1][3] = 7;
//	G->edge[1][4] = 5;
//
//	G->edge[2][4] = 1;
//	G->edge[2][5] = 7;
//	G->edge[3][4] = 2;
//	G->edge[3][6] = 3;
//	G->edge[4][5] = 3;
//
//	G->edge[4][6] = 6;
//	G->edge[4][7] = 9;
//	G->edge[5][7] = 5;
//	G->edge[6][7] = 2;
//	G->edge[6][8] = 7;
//
//	G->edge[7][8] = 4;
//
//	for (int i = 0; i < G->num_vex; i++)
//	{
//		for (int j = 0; j < G->num_vex; j++)
//		{
//			G->edge[j][i] = G->edge[i][j];
//		}
//	}
//
//}
//
//void Floyd(Graph* G, int Path[][20], int PathValue[][20])
//{
//	for (int i = 0; i < G->num_vex; i++)
//	{
//		for (int j = 0; j < G->num_vex; j++)
//		{
//			PathValue[i][j] = G->edge[i][j];
//			Path[i][j] = j;
//		}
//	}
//	int temp = 0;
//	for (int x = 0; x < G->num_vex; x++)
//	{
//		for (int i = 0; i < G->num_vex; i++)
//		{
//			for (int j = 0; j < G->num_vex; j++)
//			{
//				temp = (PathValue[i][x] == INFINITY || PathValue[x][j] == INFINITY) ? INFINITY : (PathValue[i][x] + PathValue[x][j]);
//				if (temp < PathValue[i][j])
//				{
//					PathValue[i][j] = temp;
//					Path[i][j] = Path[i][x];
//				}
//			}
//		}
//	}
//
//	for (int i = 0; i < G->num_vex; i++)
//	{
//		for (int j = 0; j < G->num_vex; j++)
//		{
//			printf("%2d\t", PathValue[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("\n");
//
//	//打印弗洛伊德的结果
//	for (int i = 0; i < G->num_vex; i++)
//	{
//		for (int j = 0; j < G->num_vex; j++)
//		{
//			printf("%2d\t", Path[i][j]);
//		}
//		printf("\n");
//	}
//
//
//}
//
//int main()
//{
//	Graph G;
//	creatGraph(&G);
//	Floyd(&G, Path, PathValue);
//
//	return 0;
//}
//
