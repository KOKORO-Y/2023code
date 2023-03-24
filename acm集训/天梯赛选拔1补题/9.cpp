#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <iomanip>
#define MAX_SIZE 10005
#define INFINITY 65535
using namespace std;
struct Edge
{
	int to, w, next;
}e[MAX_SIZE * MAX_SIZE];
int head[MAX_SIZE];
int n, m, a[MAX_SIZE], cnt = 1;
int P[MAX_SIZE], D[MAX_SIZE];

void add(int u, int v, int w)
{
	e[cnt].to = v;
	e[cnt].w = w;
	e[cnt].next = head[u];
	head[u] = cnt;
	cnt++;
}

void Dijkstra(int v)
{
	int vis[MAX_SIZE]; double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		vis[i] = 0;
		D[i] = INFINITY;
		P[i] = -1;
	}
	for (int i = head[v]; i != -1; i = e[i].next)
	{
		D[e[i].to] = e[i].w;
	}
	P[v] = 0;
	D[v] = 0;
	vis[v] = 1;
	int minn = INFINITY, index = 0;
	for (int i = 1; i < n; i++)
	{
		minn = INFINITY;
		for (int j = 1; j <= n; j++)
		{
			if (minn > D[j] && !vis[j])
			{
				minn = D[j];
				index = j;
			}
		}
		vis[index] = 1;
		for (int j = head[index]; j != -1; j = e[j].next)
		{
			if (minn + e[j].w < D[e[j].to] && !vis[e[j].to])
			{
				P[e[j].to] = index;
				D[e[j].to] = minn + e[j].w;
			}
		}
	}
	if (m < n - 1)
	{
		cout << "Cc(" << v << ")=" << "0.00" << endl;
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		sum += D[i];
	}
	double ans = (double)(n - 1) / sum;
	cout << fixed << setprecision(2) << "Cc(" << v << ")=" << ans << endl;
}

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		head[i] = -1;
	}
	int x, y, w;
	for (int i = 1; i <= m; i++)
	{
		cin >> x >> y;
		w = 1;
		add(x, y, w);
		add(y, x, w);
	}
	int k = 0;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < k; i++)
	{
		Dijkstra(a[i]);
	}

	return 0;
}


//struct Graph
//{
//	int Vnum, Mnum;
//	int G[MAX_SIZE][MAX_SIZE];
//	int V[MAX_SIZE];
//}G;
//
//int a[MAX_SIZE];
//int P[MAX_SIZE], D[MAX_SIZE];
//
//void createGraph()
//{
//	for (int i = 1; i <= G.Vnum; i++)
//	{
//		G.V[i] = i;
//	}
//	for (int i = 0; i < G.Mnum; i++)
//	{	
//		for (int j = 0; j < G.Mnum; j++)
//		{
//			if (i == j)
//			{
//				G.G[i][j] = 0;
//			}
//			else
//			{
//				G.G[i][j] = INFINITY;
//			}
//		}
//	}
//	for (int i = 0; i < G.Mnum; i++)
//	{
//		int x = 0, y = 0;
//		cin >> x >> y;
//		G.G[x][y] = 1;
//		G.G[y][x] = 1;
//	}
//}
//
//void Dijkstra(int v)
//{
//	int count = 0, sum = 0;
//	int vis[MAX_SIZE];
//	for (int i = 0; i <= G.Vnum; i++)
//	{
//		vis[i] = 0;
//		P[i] = -1;
//		D[i] = G.G[v][i];
//	}
//	count++;
//	vis[v] = 1;
//	P[v] = 0;
//	int minn = INFINITY;
//	for (int i = 1; i < G.Vnum; i++)
//	{
//		minn = INFINITY;
//		int index = 0;
//		for (int j = 1; j <= G.Vnum; j++)
//		{
//			if (minn > D[j] && !vis[j])
//			{
//				minn = D[j];
//				index = j;
//			}
//		}
//		if (index != 0)
//		{
//			vis[index] = 1;
//			count++;
//		}
//		for (int j = 1; j <= G.Vnum; j++)
//		{
//			if (minn + G.G[index][j] < D[j] && !vis[j])
//			{
//				D[j] = minn + G.G[index][j];
//				P[j] = index;
//			}
//		}
//		
//	}
//	if (G.Mnum < G.Vnum - 1)
//	{
//		cout << "Cc(" << v << ")=" << "0.00" << endl;
//		return;
//	}
//	for (int i = 1; i <= G.Vnum; i++)
//	{
//		sum += D[i];
//	}
//	double ans = (double)(G.Vnum - 1) / sum;
//	cout << fixed << setprecision(2) << "Cc(" << v << ")=" << ans << endl;
//}
//
//int main()
//{
//	cin >> G.Vnum >> G.Mnum;
//	createGraph();
//	int t = 0;
//	cin >> t;
//	for (int i = 0; i < t; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 0; i < t; i++)
//	{
//		Dijkstra(a[i]);
//	}
//	return 0;
//}
