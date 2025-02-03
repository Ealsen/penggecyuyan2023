#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main1()
{
	// 指针
	int arr[10] = { 0 };
	printf("%d\n", &arr[9] - &arr[0]); // 9 ？
	
	// 指针减去指针得到的是元素的个数

	// 不是所有指针都能相减

	// 指向同一空间的两个指针才能相减

	return 0;
}





// 求字符串长度
// 普通求法
int my_strlen1(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++; 
		str++;
	}
	return count;
}


// 指针 - 指针
int my_strlen(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}



int main2()
{
	int len = my_strlen("abcdef");
	printf("%d\n", len);


	return 0;
}





int main3()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	return 0;
}









int main4()
{
	int arr[10] = { 0 };
	// 通过指针访问数组
	int* p = &arr;

	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
	
		printf("%d ", *(p + i));
	}
	printf("\n");
	return 0;
}












int main5()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int* p = arr; //指针存放数组首元素的地址
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d] = %p   <====> p+%d = %p\n", i, &arr[i], i, p + i);
	}
	return 0;
}




void test(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}


int main6()
{
	int arr[10] = { 0 };
	test(arr, 10);

	return 0;
}









int main7()
{
	// 二级指针
	int a = 10;
	int* pa = &a; // pa 是一个一级指针变量
	
	// *pa = 20;
	

	int** ppa = &pa; // 二级指针
	
	//**ppa = 30;

	printf("%p\n", ppa);
	printf("%d\n", a);


	return 0;
}







int main8()
{
	int a = 10;
	int b = 20;
	int c = 30;
	
	int arr[10];

	int* pa = &a;
	int* pb = &b;
	int* pc = &c;

	int* parr[10] = { &a,&b ,&c }; // 存放指针的指针数组

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(parr[i]));
	}
	printf("\n");

	return 0;
}









int main9()
{
	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 2,2,3,4 };
	int arr3[4] = { 3,2,3,4 };
	int* parr[3] = { arr1,arr2,arr3 };
	// 指针数组—》二维数组

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", parr[i][j]);

		}
		printf("\n");
	}
	printf("\n");

	return 0;
}








