#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>



int main1()
{
	// 二分查找
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int mid = 0;

	while (left <= right)
	{
		//mid = (left + right) / 2;
		mid = left + (right - left) / 2;  // 左+左右差的一半
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			break;
		}
	}

	if (left <= right)
	{
		printf("key No. is %d\n", mid);
	}
	else
	{
		printf("No this num.\n");
	}

	return 0;
}







int main2()
{
	//编写代码，演示多个字符从两端移动，向中间汇聚
	char arr1[] = "welcome to bit!!!!"; //str默认有"\0"
	char arr2[] = "##################";

	int left = 0;
	int right = strlen(arr2) - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(500);
		// 清理屏幕
		system("cls");
		left++;
		right--;
	}
	printf("%s\n", arr2);

	return 0;
}





int main3()
{
	//编写代码实现，模拟用户登录情景，并且只能登录三次。
	//(只允许输入三次密码，如果密码正确则提示登录成，
	//如果三次均输入错误，则退出程序。

	int i = 0;
	char passwd[30] = { 0 };//数组名本来就是地址
	// 假设密码是：abcdef
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", passwd);
		if (strcmp(passwd,"abcdef") == 0)
		// 比较两个字符串相等不能使用“==”
		//应该用strcmp
		{
			printf("HELLO\n"); 
			break;
		}
		else
		{
			printf("error\n");
		}
	}
	if (i == 3)
	{
		printf("end\n");
	}

	return 0;
}












int main()
{
	//猜数字游戏
	 
	return 0;
}