//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#define MAXN 100
//typedef struct ArcCell {
//    char vexnum[MAXN];         //����
//    int arcnum[MAXN][MAXN];    //��
//    int n, e;                  //�������� ����
//}Graph;
//int Visit[MAXN] = { 0 };         //����Visit���ж϶����Ƿ񱻷��ʣ�����ʼ�� 
//
//void CreateGraph(Graph* G) {        //����ͼ ���˴�ע��&G 
//    int s, t;
//    scanf("%d %d", &G->n, &G->e);
//    getchar();
//    for (int i = 0; i < G->n; i++) {
//        scanf("%c", &G->vexnum[i]);
//        getchar();
//    }
//    for (int i = 0; i < G->n; i++) {              //��ʼ������ 
//        for (int j = 0; j < G->n; j++) {
//            G->arcnum[i][j] = 0;
//        }
//    }
//    for (int i = 0; i < G->e; i++) {              //����ͼ���ڽӾ���
//        scanf("%d %d", &s, &t);
//        G->arcnum[s][t] = 1;
//        G->arcnum[t][s] = 1;
//    }
//}
