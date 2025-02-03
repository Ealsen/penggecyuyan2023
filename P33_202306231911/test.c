#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main1()
{
	// while循环
	int i = 1; //初始化

	while (i<=10)// 判断是否进入循环
	{
		printf("%d ", i);
		i++; // 调整
	}
	return 0;
}




int main2()
{
	//for循环
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
		{
			//break;
			//continue;
		}
		printf("%d ", i);
	}
	return 0;
}





int main3()
{
	//代码1
	//for (;;)
	//{
	//	printf("hehe\n");
	//}
	//for循环中的初始化部分，判断部分，调整部分是可以省略的，但是不建议初学时省略，容易导致问
	//题。



	//代码4-使用多余一个变量控制循环
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("hehe\n");
	}


	return 0;
}




int main4()
{
	// do...while循环
	int i = 1;
	do
	{
		printf("%d\n", i);
		i++;
	} 
	while (i <= 10);

	return 0;
}






int main5()
{
	// 计算n的阶乘
	int i = 1;
	int n = 1;
	int ret = 1;
	scanf("%d", &n);
	
for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	
	printf("%d\n", ret);

	return 0;
}




//int main()
//{
//	// 计算1!+2!+3!+......+10!
//	int i = 1;
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)   //内外层循环计算变量重复
//	{
//		for (i = 1; i <=n; i++)
//		{
//			ret = ret * i;
//			sum = sum + ret;// 有问题！！！
//		}
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}




int main6()
{
	// 计算1!+2!+3!+......+n!
	int n = 0;
	int sum = 0;
	int i = 0;
	int j = 0;

	printf("请输入一个正整数：");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		int ret = 1; // 每次循环前需要将ret重置为1
		for (j = 1; j <= i; j++) // 将内层循环计数器变量名改为j
		{
			ret = ret * j;
		}
		sum = sum + ret;
	}

	printf("%d\n", sum);
	return 0;
}



int main7()
{	
	//在一个数组里面找到某一个数字
	int arr[] = { 99,2,3,33,56,6,7,8,55,10 };
	int i = 0;
	int key = 99;
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (arr[i] == key)
		{
			printf("Ok!The key num No. is:%d.\n", i);
			break;
		}
	}
	if (i == sz)
	{
		printf("No num key in this arr.\n");
	}
	return 0;
}



int main8()
{
	// 二分查找
	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int key = 7;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid]>key)
		{
			right = mid - 1;
		}
		else if (arr[mid] <key)
		{
			left = mid + 1;
		}
		else
		{
			break;
		}
	}

	if (left <= right)
	{
		printf("找到了，下标是%d\n", mid);
	}
	else
	{
		printf("没有找到\n");
	}

	return 0;
}



int main9()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int mid = 0;
	while (left<=right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			break;
		}
	}
	if (left<=right)
	{
		printf("找到了，下标是:%d\n", mid);
	}
	else
	{
		printf("没有找到\n");
	}
	return 0;
}



int main10()
{
	int arr[] = { 11,12,13,14,15,16,17,18,19,20 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int key = 13;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			break;
		}
	}
	if (left <= right)
	{
		printf("找到了，下标是%d\n", mid);
	}
	else
	{
		printf("没有找到\n");
	}
	return 0;
}



int bin_search(int arr[], int left, int right, int key)
{
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) >> 1;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
			return mid;//找到了，返回下标
	}
	return -1;//找不到
}

int erfen_search(int* nums, int numsSize, int target) {
	int left = 0;
	int right = numsSize - 1;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (nums[mid] > target)
		{
			right = mid - 1;
		}
		else if (nums[mid] < target)
		{
			left = mid + 1;
		}
		else
		{
			break;
		}
	}
	if (left <= right)
		return mid;
	else
		return -1;
}




int main()
{	
	return 0;
}