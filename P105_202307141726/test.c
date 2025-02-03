#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>


int main1()
{
	char* p = "abcdef";//把a的地址赋值给p
	char arr[] = "abcdef";//把字符串放进数组
	//*p = 'w'; // 常量字符串不能修改，
	//在*p前加const让语法更好
	printf("%s\n", p);
	return 0;
}



int main2()
{
	const char* p1 = "abcdef";
	const char* p2 = "abcdef";
	
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";

	if (p1 == p2)
	{
		printf("p1 == p2\n");//
	}
	else
	{
		printf("p1 != p2\n");
	}

	if (arr1 == arr2)
	{
		printf("arr1 == arr2\n");
	}
	else
	{
		printf("arr1 != arr2\n");//
	}

	return 0;
}







int main3()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5 };
	int arr3[] = { 1,2,3,4,5 };

	int* parr[3] = { arr1,arr2,arr3 };

	int i = 0;
	for (i = 0; i <3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			//printf("%d ", *(parr[i] + j));
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}





int main()
{
	int arr[10] = { 0 };
	printf("arr = %p\n", arr);
	printf("&arr= %p\n", &arr);
	printf("arr+1 = %p\n", arr + 1);
	printf("&arr+1= %p\n", &arr + 1);


	/*实际上： &arr 表示的是数组的地址，
	而不是数组首元素的地址。（细细体会一下）
本例中 &arr 的类型是： int(*)[10] ，
是一种数组指针类型
数组的地址+1，跳过整个数组的大小，
所以 &arr+1 相对于 &arr 的差值是40.*/
	return 0;
}