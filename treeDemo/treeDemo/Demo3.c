//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<malloc.h>
//#define MAXVALUE 32767 //�������ֵ
//
//typedef char** huffmanCode;
//
//typedef struct 
//{
//	char data;
//	int weight;
//	int parent, lchild, rchild;
//}htNode, * huffmanTree;
//
//void InithuffmanTree(huffmanTree HT, int n) {
//	HT = (huffmanTree)malloc(sizeof(htNode) * 2 * n);
//	for (int i = 1;i <= 2 * n-1;i++) {
//		HT[i].parent = HT[i].lchild = HT[i].rchild = -1;
//	}
//	printf("���������Ҷ�ӽڵ��Ȩ�أ�\n");
//	for (int i = 1;i <= n;i++) {
//		int tmp = 0;
//		scanf("%d", &tmp);
//		HT[i].weight = tmp;
//	}
//	getchar();
//	printf("������ڵ����ݣ�char���ͣ���\n");
//	for (int i = 1;i <= n;i++) {
//		char a = getchar();
//		if (a != '\0')
//			HT[i].weight = a;
//		else
//			break;
//	}
//}
//
//void creatHuffmanTree(huffmanTree HT, int n){
//	if (n <= 1) {
//		return;
//	}//���ڵ���С�ڵ���һֱ�ӷ��ؼ��ɡ�
//	int min1, min2;
//	int lclid, rclid;
//	for (int i = n + 1;i <= 2 * n - 1;i++) {
//		min1 = MAXVALUE;
//		min2 = MAXVALUE;
//		lclid = -1;
//		rclid = -1;
//		for (int j = 1;j <= i-1;j++) {
//			if (HT[j].weight < min1 && HT[j].parent == -1) {
//				min2 = min1; rclid = lclid;
//				min1 = HT[j].weight ; lclid = j;
//			}
//			if (HT[j].weight < min2 && HT[j].parent == -1) {
//				min2 = HT[j].weight; rclid = j;
//			}
//		}
//		HT[lclid].parent = HT[rclid].parent = i;
//		HT[i].lchild = lclid;HT[i].rchild = rclid;
//		HT[i].weight = HT[lclid].weight + HT[rclid].weight;
//	}
//}
//
//void creatHuffmanCode(huffmanTree HT, huffmanCode HC) {
//
//}
//int main()
//{
//	return 0;
//}