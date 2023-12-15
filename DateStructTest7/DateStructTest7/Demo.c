//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#define N 20
//#define TRUE 1
//#define FALSE 0
//int visited[N];
//typedef struct    /*���еĶ���*/
//{
//    int data[N];
//    int front, rear;
//}queue;
//typedef struct    /*ͼ���ڽӾ���*/
//{
//    int vexnum, arcnum;
//    char vexs[N];
//    int arcs[N][N];
//}
//graph;
//
//void createGraph(graph* g);  /*����һ������ͼ���ڽӾ���*/
//void dfs(int i, graph* g);    /*�ӵ�i��������������������*/
//void tdfs(graph* g);          /*���������������ͼ*/
//void bfs(int k, graph* g);    /*�ӵ�k����������������*/
//void tbfs(graph* g);          /*���������������ͼ*/
//void init_visit();            /*��ʼ�����ʱ�ʶ����*/
//
//void createGraph(graph* g)   /*����һ������ͼ���ڽӾ���*/
//{
//    int i, j;
//    char v;
//    g->vexnum = 0;
//    g->arcnum = 0;
//    i = 0;
//    printf("���붥������(��#����)��\n");
//    while ((v = getchar()) != '#')
//    {
//        g->vexs[i] = v;        /*���붥����Ϣ*/
//        i++;
//    }
//    g->vexnum = i;             /*������Ŀ*/
//    for (i = 0;i < g->vexnum;i++) /*�ڽӾ����ʼ��*/
//        for (j = 0;j < g->vexnum;j++)
//            g->arcs[i][j] = 0;
//    printf("����ߵ���Ϣ��\n");
//    scanf("%d,%d", &i, &j);  /*�����i,j*/
//    while (i != -1)              /*����i,jΪ��1ʱ����*/
//    {
//        g->arcs[i][j] = 1;
//        g->arcs[j][i] = 1;
//        scanf("%d,%d", &i, &j);
//    }
//}
//
//void dfs(int i, graph* g) /*�ӵ�i��������������������*/
//{
//    int j;
//    printf("%c", g->vexs[i]);
//    visited[i] = TRUE;
//    for (j = 0;j < g->vexnum;j++)
//        if ((g->arcs[i][j] == 1) && (!visited[j]))
//            dfs(j, g);
//}
//
//void tdfs(graph* g)      /*���������������ͼ*/
//{
//    int i;
//    printf("\n�Ӷ���%C��ʼ��������������У�", g->vexs[0]);
//    for (i = 0;i < g->vexnum;i++)
//        if (visited[i] != TRUE)
//            dfs(i, g);
//}
//
//void bfs(int k, graph* g)  /*�ӵ�k����������������*/
//{
//    int i, j;
//    queue qlist, * q;
//    q = &qlist;
//    q->rear = 0;
//    q->front = 0;
//    printf("%c", g->vexs[k]);
//    visited[k] = TRUE;
//    q->data[q->rear] = k;
//    q->rear = (q->rear + 1) % N;
//    while (q->rear != q->front)
//    {
//        i = q->data[q->front];
//        q->front = (q->front + 1) % N;
//        for (j = 0;j < g->vexnum;j++)
//            if ((g->arcs[i][j] == 1) && (!visited[j]))
//            {
//                printf("%c", g->vexs[j]);
//                visited[j] = TRUE;
//                q->data[q->rear] = j;
//                q->rear = (q->rear + 1) % N;
//            }
//    }
//}
//
//void tbfs(graph* g) /*���������������ͼ*/
//{
//    int i;
//    printf("\n�Ӷ���%C��ʼ��������������У�", g->vexs[0]);
//    for (i = 0;i < g->vexnum;i++)
//        if (visited[i] != TRUE)
//            bfs(i, g);
//}
//
//void init_visit()   /*��ʼ�����ʱ�ʶ����*/
//{
//    int i;
//    for (i = 0;i < N;i++)
//        visited[i] = FALSE;
//}
//
//int main()
//{
//    graph ga;
//    int i, j;
//    createGraph(&ga);
//    printf("����ͼ���ڽӾ���\n");
//    for (i = 0;i < ga.vexnum;i++)
//    {
//        for (j = 0;j < ga.vexnum;j++)
//            printf("%3d", ga.arcs[i][j]);
//        printf("\n");
//    }
//    init_visit();
//    tdfs(&ga);
//    init_visit();
//    tbfs(&ga);
//    return 0;
//}
