#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>





/*�����ĵݹ�*/

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
	// n�Ľ׳�
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
	//���n��쳲�������
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
	//���n��쳲�������
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
	return 0;
}





int numsMAX(int* nums)
{
	// �������У�10������������
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
			printf("%d*%d=%-2d ", j, i, i * j); // ʹ�� %-2d ��ʽ���������֤����
		}
		printf("\n");
	}
}

int main7()
{
	int n;
	printf("������Ҫ����ĳ˷��ھ����������������");
	scanf("%d", &n);

	printMultiplicationTable(n);

	return 0;
}












/*
strlen�ĺ����ǣ����ַ�������Ч�ַ��ĳ��ȣ�������\0��
*/


/*
ѭ��ʵ�֣�
1. ��һ������������ͳ����Ч�ַ��ĸ���
2. �����ַ�����ֻҪû������\0, ����һ���ַ���������1��ֱ������\0
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
�ݹ�ʵ�֣�
				0  *str == '\0'
my_strlen(str)
				my_strlen(p+1) + 1  �����⻮��
*/
int my_strlen(char* str)
{
	if ('\0' == *str)
		return 0;
	else
		return 1 + my_strlen(1 + str);
}











/*
˼·��
�����ַ�����ѭ���ķ�ʽʵ�ַǳ���
  1. ������ָ�룬left�����ַ�����࣬right�������һ����Ч�ַ�λ��
  2. ��������ָ��λ���ϵ��ַ�
  3. leftָ�������ߣ�rightָ����ǰ�ߣ�ֻҪ����ָ��û������������2������ָ�����������ý���
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
�ݹ鷽ʽ��
�����ַ�����abcdefg�����ݹ�ʵ�ֵĴ��ԭ��
  1. ����a��g��
  2. �Եݹ�ķ�ʽ����Դ�ַ�����ʣ�ಿ�֣�ʣ�ಿ�ֿ��Կ���һ����Ч���ַ������������Ƶķ�ʽ����
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









