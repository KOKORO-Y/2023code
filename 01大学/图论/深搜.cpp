//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#define MAXN 100
//typedef struct ArcCell {
//    char vexnum[MAXN];         //顶点
//    int arcnum[MAXN][MAXN];    //弧
//    int n, e;                  //顶点数， 弧数
//}Graph;
//int Visit[MAXN] = { 0 };         //定义Visit来判断顶点是否被访问，并初始化 
//
//void CreateGraph(Graph* G) {        //创建图 ，此处注意&G 
//    int s, t;
//    scanf("%d %d", &G->n, &G->e);
//    getchar();
//    for (int i = 0; i < G->n; i++) {
//        scanf("%c", &G->vexnum[i]);
//        getchar();
//    }
//    for (int i = 0; i < G->n; i++) {              //初始化数据 
//        for (int j = 0; j < G->n; j++) {
//            G->arcnum[i][j] = 0;
//        }
//    }
//    for (int i = 0; i < G->e; i++) {              //创建图的邻接矩阵
//        scanf("%d %d", &s, &t);
//        G->arcnum[s][t] = 1;
//        G->arcnum[t][s] = 1;
//    }
//}
