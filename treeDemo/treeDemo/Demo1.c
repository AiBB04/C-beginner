//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<malloc.h>
//#define MAX 20
//
//typedef struct BTNode {       /*�ڵ�ṹ����*/
//    char data;               /*�ڵ�����*/
//    struct BTNode* lchild;
//    struct BTNode* rchild;  /*ָ��*/
//}*BiTree;
//
//void createBiTree(BiTree* t) { /* �����������������*/
//    char s;
//    BiTree q;
//    printf("\nplease input data:(exit for #)");
//    s = getche();
//    if (s == '#') { *t = NULL; return; }
//    q = (BiTree)malloc(sizeof(struct BTNode));
//    if (q == NULL) { printf("Memory alloc failure!"); exit(0); }
//    q->data = s;
//    *t = q;
//    createBiTree(&q->lchild); /*�ݹ齨��������*/
//    createBiTree(&q->rchild); /*�ݹ齨��������*/
//}
//
//void PreOrder(BiTree p) {  /* �������������*/
//    if (p != NULL) {
//        printf("%c", p->data);
//        PreOrder(p->lchild);
//        PreOrder(p->rchild);
//    }
//}
//void InOrder(BiTree p) {  /* �������������*/
//    if (p != NULL) {
//        InOrder(p->lchild);
//        printf("%c", p->data);
//        InOrder(p->rchild);
//    }
//}
//void PostOrder(BiTree p) {  /* �������������*/
//    if (p != NULL) {
//        PostOrder(p->lchild);
//        PostOrder(p->rchild);
//        printf("%c", p->data);
//    }
//}
//void CountNode(BiTree p,int* n) {  //ʹ���������ͳ�ƽڵ�����
//    if (p != NULL) {
//        (*n)++;
//        CountNode(p->lchild,n);
//        CountNode(p->rchild,n);
//    }
//}
//void CountLeafNode(BiTree p, int* n) {  //ʹ���������ͳ��leaf�ڵ�����
//    if (p != NULL) {
//        if ((!p->lchild) && (!p->rchild)) {
//            (*n)++;
//        }
//        CountLeafNode(p->lchild, n);
//        CountLeafNode(p->rchild, n);
//    }
//}
//
//void Preorder_n(BiTree p) { /*��������ķǵݹ��㷨*/
//    BiTree stack[MAX], q;
//    int top = 0, i;
//    for (i = 0;i < MAX;i++) stack[i] = NULL;/*��ʼ��ջ*/
//    q = p;
//    while (q != NULL) {
//        printf("%c", q->data);
//        if (q->rchild != NULL) stack[top++] = q->rchild;
//        if (q->lchild != NULL) q = q->lchild;
//        else
//            if (top > 0) q = stack[--top];
//            else q = NULL;
//    }
//}
//
//void release(BiTree t) { /*�ͷŶ������ռ�*/
//    if (t != NULL) {
//        release(t->lchild);
//        release(t->rchild);
//        free(t);
//    }
//}
//
//int main() {
//    int n = 0;
//    int leftnum = 0;
//    BiTree t = NULL;
//    createBiTree(&t);
//    printf("\n\nPreOrder the tree is:");
//    PreOrder(t);
//    printf("\n\nInOrder the tree is:");
//    InOrder(t);
//    printf("\n\nPostOrder the tree is:");
//    PostOrder(t);
//    printf("\n\n����������У��ǵݹ飩:");
//    Preorder_n(t);
//    CountNode(t, &n);
//    printf("\n\n������Ϊ��%d",n);
//    CountLeafNode(t, &leftnum);
//    printf("\n\nҶ�ӽ�����Ϊ��%d", leftnum);
//    printf("\n");
//    release(t);
//    return 0;
//}
