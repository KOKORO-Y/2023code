#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdlib>
using namespace std;

#define MAXEDGE 20
#define MAXVEX 20
#define INFINITY 65535

int Path[20], PathValue[20];

typedef struct
{
	int edge[MAXEDGE][MAXEDGE];
	int vex[MAXVEX];
	int num_vex, num_edge;
}Graph;

void creatGraph(Graph* G)
{
	int i, j;
	G->num_vex = 9;
	G->num_edge = 16;

	for (int i = 0; i < G->num_vex; i++)
	{
		G->vex[i] = i;
	}
	for (int i = 0; i < G->num_vex; i++)
	{
		for (int j = 0; j < G->num_vex; j++)
		{
			if (i == j)
			{
				G->edge[i][j] = 0;
			}
			else
			{
				G->edge[i][j] = INFINITY;
			}
		}
	}

	G->edge[0][1] = 1;
	G->edge[0][2] = 5;
	G->edge[1][2] = 3;
	G->edge[1][3] = 7;
	G->edge[1][4] = 5;

	G->edge[2][4] = 1;
	G->edge[2][5] = 7;
	G->edge[3][4] = 2;
	G->edge[3][6] = 3;
	G->edge[4][5] = 3;

	G->edge[4][6] = 6;
	G->edge[4][7] = 9;
	G->edge[5][7] = 5;
	G->edge[6][7] = 2;
	G->edge[6][8] = 7;

	G->edge[7][8] = 4;

	for (int i = 0; i < G->num_vex; i++)
	{
		for (int j = 0; j < G->num_vex; j++)
		{
			G->edge[j][i] = G->edge[i][j];
		}
	}

}

void Dijkstra(Graph* G, int v, int *Path, int *PathValue)
{
	int flag[20] = { 0 };
	for (int i = 0; i < G->num_vex; i++)
	{
		flag[i] = 0;
		Path[i] = -1;
		PathValue[i] = G->edge[v][i];
	}
	flag[v] = 1;
	Path[v] = 0;
	int minn = INFINITY;
	for (int i = 1; i < G->num_vex; i++)
	{
		minn = INFINITY; int index = 0;
		for (int j = 0; j < G->num_vex; j++)
		{
			if (minn > PathValue[j] && !flag[j])
			{
				minn = PathValue[j];
				index = j;
			}
		}
		flag[index] = 1;
		for (int j = 0; j < G->num_vex; j++)
		{
			if ((minn + G->edge[index][j]) < PathValue[j] && !flag[j])
			{
				PathValue[j] = (minn + G->edge[index][j]);
				Path[j] = index;
			}
		}
	}
}

int main()
{
	Graph G;
	int v = 0;
	creatGraph(&G);
	Dijkstra(&G, v, Path, PathValue);
	int j = 0;
	for (int i = 1; i < G.num_vex; i++)
	{
		printf("v%d - v%d : ", v, i);
		j = i;
		while (Path[j] != -1)
		{
			printf("%d", Path[j]);
			j = Path[j];
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 1; i < G.num_vex; i++)
	{
		printf("%d - %d:%d\n", G.vex[0], G.vex[i], PathValue[i]);
	}

	return 0;
}

