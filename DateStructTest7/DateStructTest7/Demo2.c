#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 20
#define TRUE 1
#define INF 32766                    /*�ڽӾ����е������Ԫ��*/
#define INFIN 32767                  /*�������Ԫ�ش����*/

typedef struct
{ /*ͼ���ڽӾ���*/
    int vexnum, arcnum;
    char vexs[N];
    int arcs[N][N];
}graph;

void createGraph_w(graph* g, int flag);
//void prim(graph* g, int u);
//void dijkstra(graph g, int v);
void showprim();
//void showdij();

/*����Ȩͼ���ڽӾ���,��flagΪ1��Ϊ����ͼ��flagΪ0Ϊ����ͼ*/
void createGraph_w(graph* g, int flag)
{
    int i, j, w;
    char v;
    g->vexnum = 0;
    g->arcnum = 0;
    i = 0;
    printf("���붥������(��#����)��\n");
    while ((v = getchar()) != '#')
    {
        g->vexs[i] = v;        /*���붥����Ϣ*/
        i++;
    }
    g->vexnum = i;
    for (i = 0;i < 6;i++)        /*�ڽӾ����ʼ��*/
        for (j = 0;j < 6;j++)
            g->arcs[i][j] = INF;
    printf("����ߵ���Ϣ��\n");
    scanf("%d,%d,%d", &i, &j, &w);  /*�����(i,j,w)*/
    while (i != -1)              /*����iΪ��1ʱ����*/
    {
        g->arcs[i][j] = w;
        if (flag == 1)
            g->arcs[j][i] = w;
        scanf("%d,%d,%d", &i, &j, &w);
    }
}

void prim(graph* g, int u,int path [6][6])/*��������u*/
{
    int min = INF;//��¼��Сֵ
    //��¼����������һ�����
    int nexti = -1;
    int nextj = -1;
    int flag = 0;
    g->vexs[u] = TRUE;//���ҵ��Ľڵ��¼
    for (int i = 0;i < g->vexnum;i++) {
        if (g->vexs[i] != TRUE) {
            flag = 1;
        }
    }
    if (flag == 0) {
        return;
    }
    for (int i = 0;i < g->vexnum;i++) {
        if (g->vexs[i]) {
            for (int j = 0;j < g->vexnum;j++) {
                if (g->arcs[i][j] < min) {
                    nexti = i;
                    nextj = j;
                }
            }
        }
    }
    //��ʱjΪ�ҵ������·������һ�����
    if (nexti != -1) {
        path[nexti][nextj] = g->arcs[nexti][nextj];
        prim(g, nextj,path);
    }
}

//void printPath(graph g, int startVex, int EndVex)
//{
//    int stack[N], top = 0;   /*��ջ*/
//    int i, k, j;
//    int flag[N];  /*���·�������־*/
//    k = EndVex;
//    for (i = 0;i < g.vexnum;i++) flag[i] = 0;
//    j = startVex;
//    printf("%c", g.vexs[j]);
//    flag[j] = 1;
//    stack[top++] = k;
//    while (top > 0) /*��j��k��·��*/
//    {
//        for (i = 0;i < g.vexnum;i++)
//        {
//            if (path[k][i] == 1 && flag[i] == 0) /*j��k��·������i����*/
//            {
//                if (g.arcs[j][i] != INF)   /*j��i��·�������м䶥��*/
//                {
//                    printf("-> %c(%d) ", g.vexs[i], g.arcs[j][i]);
//                    /*���j��k��·���Ķ���i*/
//                    flag[i] = 1;
//                    j = i;
//                    k = stack[--top];
//                    break;
//                }
//                else
//                {
//                    if (i != k) stack[top++] = i;  /*break;*/
//                }
//            }
//        }
//    }
//}


//void dijkstra(graph g, int v) {  /*dijkstra�㷨��Դ���·��*/
//    int path[N][N], dist[N], s[N];
//    int mindis, i, j, u, k;
//    for (i = 0;i < g.vexnum;i++) {
//        dist[i] = g.arcs[v][i];
//        s[i] = 0;
//        for (j = 0;j < g.vexnum;j++)
//            path[i][j] = 0;
//        if (dist[i] < INF) {
//            path[i][v] = 1;
//            path[i][i] = 1;
//        }
//    }
//    dist[v] = 0;
//    s[v] = 1;
//    for (i = 0, u = 1;i < g.vexnum;i++) {
//        mindis = INFIN;
//        for (j = 0;j < g.vexnum;j++)
//            if (s[j] == 0)
//                if (dist[j] < mindis) {
//                    u = j;
//                    mindis = dist[j];
//                }
//        s[u] = 1;
//        for (j = 0;j < g.vexnum;j++)
//            if ((s[j] == 0) && dist[u] + g.arcs[u][j] < dist[j]) {
//                dist[j] = dist[u] + g.arcs[u][j];
//                for (k = 0;k < g.vexnum;k++)
//                    path[j][k] = path[u][k];
//                path[j][j] = 1;
//            }
//    }
//    printf("\n����%c->������������·��\n", g.vexs[v]);
//    for (i = 0;i < g.vexnum;i++) {
//        printf("\n����%c->����%c��", g.vexs[v], g.vexs[i]);
//        if (dist[i] == INF || dist[i] == 0)
//            printf("��·��");
//        else {
//            printf("%d  ", dist[i]);
//            printf("�������㣺");
//            printPath(g, v, i);  /*���v��i��·��*/
//        }
//    }
//}

void showprim()/*��С������prim�㷨��ʾ*/
{
    int path[N][N];//����·��
    for (int i = 0;i < 6;i++) {
        for (int j = 0; j < 6;j++) {
            path[i][j] = INF;//��ʼ��·��
        }
    }
    graph ga;
    createGraph_w(&ga, 1);
    prim(&ga, 0,path);
    for (int i = 0;i < 6;i++) {
        for (int j = 0; j < 6;j++) {
            printf("%d ", path[i][j]);
        }
        printf("\n");
    }
}

//void showdij() {   /*dijstra�㷨��ʾ*/
//    graph ga;
//    createGraph_w(&ga, 0);
//    dijkstra(ga, 0);
//}

int main() {
    showprim(); /*prim�㷨��ʾ*/
    getchar();
    //showdij();  /*dijstra�㷨��ʾ*/
    return 0;
}
