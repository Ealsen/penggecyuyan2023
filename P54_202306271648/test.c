#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>




int main1()
{
	// ????¡°?????????????????
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	/*char ch[5];
	double data[20];*/

	
	//??c99?????????????????????????
	//??c99???,??????¡ì???????????????????????

	//????????????¡ì????????0

	// [] ¡ì??????¡§¡ã?????

	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		/*printf("%d ",arr[i]);*/
	}
	printf("\n");

	for (i = sz - 1; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	return 0; 
}









int main2()
{
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	for (i = 0; i < sz; ++i)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);
	}
	return 0;
}








int main3()
{
	//???????????
	/* [??][??] */
	int arr11[3][4] = { 1,2,3,4 };
	int arr12[3][4] = { {1,2},{4,5} };
	int arr13[][4] = { {2,3},{4,5} };
	//???????????¡ì????????¡ì¨¢????????¡ì???????

	return 0;
}















int main4()
{
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}












int main5()
{
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p\n", i,j, &arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}











//????2
void bubble_sort(int arr[], int sz)//参数接收数组元素个数
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

}

int main6()
{
	int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);//??????????????
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}







int maopao_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1 ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}



int main7()
{
	int arr[10] = { 4,5,6,7,8,9,3,2,1,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	maopao_sort(arr, sz);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}














void Init(int arr[], int sz, int set)
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		arr[i] = set;
	}
}


void Print(int arr[], int sz)
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz-1;


	while(left<right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}











int main8()
{
	//数组名是数组首元素的地址。
	int arr[10] = { 1,2,3,4,5 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);
	return 0;
}















int main9()
{
	int arr[10] = { 1,2,3,4,5 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);

	// 但是有2个例外:
	//1. sizeof(数组名)，这里的数组名表示整个数组，
	//计算的是整个数组的大小，单位是字节
	//2.&数组名，这里的数组名表示整个数组，
	//取出的是整个数组的地址


	int arr1[10] = { 0 };
	printf("%d\n", sizeof(arr1));
	//输出结果
	return 0;
}























int main10()
{
	int arr1[10] = {0};
	int arr2[10] = {0};
	int i = 0;


	printf("请输入10个数字:>");
	for(i=0; i<10; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("请输入10个数字:>");
	for(i=0; i<10; i++)
	{
		scanf("%d", &arr2[i]);
	}
	//交换
	for(i=0; i<10; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	
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
int my_strlen12(char* str)
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























/*
思路：
			n    n < 10
DigiSum(n) =
		   DibiSum(n/10)+n%10   // 前n-1位之和+第N位
*/


int DigitSum(int n)//1729
{
	if (n > 9)
		return DigitSum(n / 10) + n % 10;
	else
		return n;
}













/*
思路：
		  1      K==0
Pow(n,K) =
		  Pow(n, K-1)*n

*/
int Pow(int n, int k)
{
	if (k == 0)
		return 1;
	else if (k >= 1)
	{
		return n * Pow(n, k - 1);
	}
}












