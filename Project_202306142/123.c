#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* enum Sele
{
	YES,
	NO
}; */

// ����������ӵĺ���add
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	/* //c����ע�ͷ��
	int Sele = YES;
	if (Sele != YES)
	{
		printf("0\n");
	}
	else
	{
		printf("1\n");
	}
	printf("hello\n"); */

	/* 	//����ָ�����p����ֵNULL
		int* p = NULL;
		 */
		 // c++ע�ͷ��
		 // ע�Ϳ�������˼·�����͸��Ӵ���


		 // ѡ������ѭ����� if&switch
		 /* �����ʼ������ѧϰc���ԣ��ڱ�������ʱ��������������ʾ����
		 C:\run.c(41) : error C2143: syntax error : missing ';' before 'type'
		 ����취���£���һ��������е��������ڸô�������ǰ�档
		 Ҳ����˵���ڸñ��뻷���µ�.c�ļ���һ��������к�������������Ҫ������ǰ�档 */
		 /* 	int input = 0; //��������������Ҫ������ǰ��
			 printf("�������\n");
			 printf("�ú�ѧϰ(1/0)?\n");
			 scanf("%d", &input);
			 if (input == 1)
			 {
				 printf("��offer\n");
			 }
			 else
			 {
				 printf("�����\n");
			 } */

		// ѭ�����
		//2w��Ч����Ļ���
	/*int line = 0;
	printf("�������\n");
	while (line<20000)
	{
		printf("д����:%d\n",line);
		line++;
	}
	if (line >= 20000)
	{
		printf("��offer\n");
	}
	else
	{
		printf("��������\n");
	}*/

	// c�����ǽṹ���ĳ����������
	// ѭ��ṹ��ѡ��ṹ��ѭ���ṹ

	////����
	////���������������ĺ�
	//int n1 = 0;
	//int n2 = 0;
	//// ����
	//scanf("%d %d", &n1, &n2);
	//// ���
	////int sum = n1 + n2;
	//int sum = Add(n1, n2);
	//// ���
	//printf("%d\n", sum);

	//// ����
	//int arr1[10] = {10,11,12,13,14,15,16,17,18,19};
	//printf("%d\n", arr1[8]); //��ӡ�����8��Ԫ��
	////��ӡ���������Ԫ��
	//for (int i = 0; i <= 9; i++)
	//{
	//	if (i == 0)
	//	{
	//		printf("start ");
	//	}
	//	printf("%d ", arr1[i]);
	//	if (i == 9)
	//	{
	//		printf("end\n");
	//	}
	//}
	int qw = 0;
	int wq = 0;
	scanf("%d %d", &qw, &wq);
	if (qw>wq)
	{
		printf("%d\n", qw);
	}
	else
	{
		printf("%d\n",wq);
	}
	return 0;
}