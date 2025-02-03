#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>





/*函数的递归*/

int jiec(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * jiec(n - 1);
	}
}



int main1()
{
	// n的阶乘
	int n = 0;
	scanf("%d", &n);
	int ret = jiec(n);
	printf("%d\n", ret);

	return 0;
}





int fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else if (n > 2)
	{
		return fib(n - 1) + fib(n - 2);
	}
}


int main2()
{
	//求第n个斐波那契数
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);
	return 0;
}








int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;

	while (n >= 3)
	{
		c = a + b;
		a = b; 
		b = c;
		n--;
	}
	return c;
}



int main3()
{
	//求第n个斐波那契数
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
	return 0;
}





int numsMAX(int* nums)
{
	// 求数组中（10个数）最大的数
	int MAXnums = nums[0];

	for (int i = 1; i < 10; i++)
	{
		if (MAXnums < nums[i])
		{
			MAXnums = nums[i];
		}
	}
	return MAXnums;
}

int main4()
{
	int arr[10] = { 1,2,3,4,5,6,9,7,8,10 };
	int ret = numsMAX(arr);
	printf("%d\n", ret);
	return 0;
}







int main5()
{
	// 9*9
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
		for (j = 1; j <= 9; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}
	printf("\n");
	return 0;
}




int change(int* x, int* y)
{
	int t = 0;
	t = *x;
	*x = *y;
	*y = t;

	return x, y;
}




int main6()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	change(&a, &b);
	printf("a=%d,b=%d\n", a, b);

	return 0;
}












void printMultiplicationTable(int n)
{
	int i, j;

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d*%d=%-2d ", j, i, i * j); // 使用 %-2d 格式化输出，保证对齐
		}
		printf("\n");
	}
}

int main7()
{
	int n;
	printf("请输入要输出的乘法口诀表的行数和列数：");
	scanf("%d", &n);

	printMultiplicationTable(n);

	return 0;
}












/*
strlen的含义是：求字符串中有效字符的长度，不包括\0。
*/


/*
循环实现：
1. 给一个计数，用来统计有效字符的个数
2. 遍历字符串，只要没有遇到\0, 遇到一个字符给计数加1，直到遇到\0
*/


int my_strlen(char* str)
{
	int count = 0;
	while ('\0' != *str)
	{
		count++;
		str++;
	}
	return count;
}




/*
递归实现：
				0  *str == '\0'
my_strlen(str)
				my_strlen(p+1) + 1  子问题划分
*/
int my_strlen(char* str)
{
	if ('\0' == *str)
		return 0;
	else
		return 1 + my_strlen(1 + str);
}











/*
思路：
逆置字符串，循环的方式实现非常简单
  1. 给两个指针，left放在字符串左侧，right放在最后一个有效字符位置
  2. 交换两个指针位置上的字符
  3. left指针往后走，right指针往前走，只要两个指针没有相遇，继续2，两个指针相遇后，逆置结束
*/
void reverse_string(char* arr)
{
	char* left = arr;
	char* right = arr + strlen(arr) - 1;


	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;


		left++;
		right--;
	}
}


/*
递归方式：
对于字符串“abcdefg”，递归实现的大概原理：
  1. 交换a和g，
  2. 以递归的方式逆置源字符串的剩余部分，剩余部分可以看成一个有效的字符串，再以类似的方式逆置
*/
void reverse_string(char* arr)
{
	int len = strlen(arr);
	char tmp = *arr;
	*arr = *(arr + len - 1);

	*(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2)
		reverse_string(arr + 1);

	*(arr + len - 1) = tmp;
}









