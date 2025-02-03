#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ��̬�ڴ����

/*
��̬�ڴ溯���Ľ���
malloc
free
calloc
realloc
*/


int main1()
{
	int a = 10;    // 4���ֽ�
	int arr[10];   // 40���ֽ�



	return 0;
}









int main2()
{
	int arr[10] = { 0 };
	// ��̬�ڴ濪��
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}

	// ʹ��
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}

	// û��free ������˵���������
	// �������˳���ʱ��
	// ϵͳ���Զ������ڴ�ռ�

	free(p);
	p = NULL;

	return 0;
}









int main3()
{
	// ����10�����εĿռ�
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}

	free(p);
	p = NULL;

	return 0;
}





int main4()
{
	int arr[10] = { 0 };
	// ��̬�ڴ濪��
	int* p = (int*)malloc(40);
	// realloc(NULL, 40);   ==>>   malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}

	// 1 2 3 4 5 6 7 8 9 10 
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i + 1;
	}

	// ����
	int* ptr = realloc(p, 80);
	if (ptr != NULL)
	{
		p = ptr;
	}

	// ��ӡ
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}


	// �ͷ�
	free(p);
	p = NULL;

	return 0;
}



/*
3.1 ��NULLָ��Ľ����ò���
*/
void test1()
{
	int* p = (int*)malloc(INT_MAX / 4);
	*p = 20;//���p��ֵ��NULL���ͻ�������
	free(p);
}



/*
3.2 �Զ�̬���ٿռ��Խ�����
*/
void test2()
{
	int i = 0;
	int* p = (int*)malloc(10 * sizeof(int));
	if (NULL == p)
	{
		exit(EXIT_FAILURE);
	}
	for (i = 0; i <= 10; i++)
	{
		*(p + i) = i;//��i��10��ʱ��Խ�����
	}
	free(p);
}



//3.3 �ԷǶ�̬�����ڴ�ʹ��free�ͷ�
void test3()
{
	int a = 10;
	int* p = &a;
	free(p);//ok?
}



//3.4 ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
void test4()
{
	int* p = (int*)malloc(100);
	p++;
	free(p);//p����ָ��̬�ڴ����ʼλ��
}


//3.5 ��ͬһ�鶯̬�ڴ����ͷ�
void test5()
{
	int* p = (int*)malloc(100);
	free(p);
	free(p);//�ظ��ͷ�
}


//3.6 ��̬�����ڴ������ͷţ��ڴ�й©��
void test6()
{
	int* p = (int*)malloc(100);
	if (NULL != p)
	{
		*p = 20;
	}
}
int main11()
{
	test();
	while (1);
}

/*
�����ͷŲ���ʹ�õĶ�̬���ٵĿռ������ڴ�й©��
�мǣ�
��̬���ٵĿռ�һ��Ҫ�ͷţ�������ȷ�ͷ� ��
*/



int main()
{

	return 0;
}