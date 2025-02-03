#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 动态内存管理

/*
动态内存函数的介绍
malloc
free
calloc
realloc
*/


int main1()
{
	int a = 10;    // 4个字节
	int arr[10];   // 40个字节



	return 0;
}









int main2()
{
	int arr[10] = { 0 };
	// 动态内存开辟
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}

	// 使用
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}

	// 没有free 并不是说不会回收了
	// 当程序退出的时候，
	// 系统会自动回收内存空间

	free(p);
	p = NULL;

	return 0;
}









int main3()
{
	// 开辟10个整形的空间
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
	// 动态内存开辟
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

	// 扩容
	int* ptr = realloc(p, 80);
	if (ptr != NULL)
	{
		p = ptr;
	}

	// 打印
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}


	// 释放
	free(p);
	p = NULL;

	return 0;
}



/*
3.1 对NULL指针的解引用操作
*/
void test1()
{
	int* p = (int*)malloc(INT_MAX / 4);
	*p = 20;//如果p的值是NULL，就会有问题
	free(p);
}



/*
3.2 对动态开辟空间的越界访问
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
		*(p + i) = i;//当i是10的时候越界访问
	}
	free(p);
}



//3.3 对非动态开辟内存使用free释放
void test3()
{
	int a = 10;
	int* p = &a;
	free(p);//ok?
}



//3.4 使用free释放一块动态开辟内存的一部分
void test4()
{
	int* p = (int*)malloc(100);
	p++;
	free(p);//p不再指向动态内存的起始位置
}


//3.5 对同一块动态内存多次释放
void test5()
{
	int* p = (int*)malloc(100);
	free(p);
	free(p);//重复释放
}


//3.6 动态开辟内存忘记释放（内存泄漏）
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
忘记释放不再使用的动态开辟的空间会造成内存泄漏。
切记：
动态开辟的空间一定要释放，并且正确释放 。
*/



int main()
{

	return 0;
}