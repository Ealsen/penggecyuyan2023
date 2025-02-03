#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>




void swap(int* pa, int* pb)
{
	// 交换两个数的值
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}




int main1()
{
	//写一个代码打印1-100之间所有3的倍数的数字

	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d ", i);
	}

	return 0;
}









int main2()
{
	// 给定两个数，求最大公约数

	int a = 0;
	int b = 0;
	// 输入数据
	scanf("%d %d", &a, &b);
	//求最大公约数
	int min = (a < b) ? a : b;
	int m = min;
	while (1)
	{
		if (a % m == 0 && b % m == 0)
			break;
		m--;
	}
	printf("%d\n", m);
	return 0;
}








int main3()
{
	// 给定两个数，求最大公约数
	// 辗转相除法
	int a = 0;
	int b = 0;
	int c = 0;
	// 输入数据
	scanf("%d %d", &a, &b);
	//求最大公约数
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d\n", b);

	return 0;
}









int main4()
{
	//编写程序数一下1到10e的所有整数中
	// 出现多少个数字9
	//9 19 29 39 49 59 69 79 89 99 
	//90 91 92 93 94 95 96 97 98 99
	int i = 0;
	int count = 0;
	for ( i = 1; i <= 100; i++)
	{
		//判断个位是不是9
		if (i % 10 == 9)
		{
			count++;
		}
		//判断十位是不是9
		if (i /10 == 9)
		{
			count++;
		}
	}
	printf("%d\n", count);

	return 0;
}








int main5()
{
	/*//计算1/1-1/2+1/3-1/4+1/5.....+ 1/99 - 1/100的值，打印出结果//分子总是1
	11分母是1~100
	*/

	int i = 0; 
	double sum = 0;
	int flag = 1;
	for ( i = 1; i <= 100; i++)
	{
		sum = sum + flag * (1.0 / i);
		flag = -flag;
	}
	printf("%lf\n", sum);

	return 0;
}










int main6()
{
	// 找出10个整数中最大的数
	int arr[10] = {0}; // 指定数组大小
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	// 找出最大值
	int max = arr[0]; // 记住这个
	for (int i = 0; i < 10; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	printf("max=%d\n", max);
	return 0;
}










int main7()
{
	//9*9
	//1*1=1
	//2*1=2 2*2=4
	//3*1..........
	int i = 0;
	int n = 9;
	// 打印九行
	for (i = 1; i <= n; i++)
	{
		// 打印1列
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);//%2d右对齐
			
		}
		printf("\n"); //注意换行符的位置
	}
	
	return 0;
}






int chengfatab(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		// 打印1列
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);//%2d右对齐

		}
		printf("\n"); //注意换行符的位置
	}
}






int main8()
{
	int n = 9;
	scanf("%d", &n);
	chengfatab(n);
	return 0;
}











int main()
{


	return 0;
}