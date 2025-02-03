#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <time.h>
#include <math.h>



/*
猜数字游戏
产生随机随机数
猜大了 猜小了
直到猜对，end
*/


void menu()
{
	printf("**********************************\n");
	printf("*********** 1.play     **********\n");
	printf("*********** 0.exit     **********\n");
	printf("**********************************\n");
}


void game()
{
	int guess = 0;
	
	// 生成随机数
	int ret = rand() % 100 + 1; // 0~99 => 1~100
	//printf("%d\n", ret);

	// 猜数字
	while (1)
	{
		printf("猜数字:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}


int main1()
{
	int input = 0;
	srand((unsigned int)time(((void*)0))); // 生成随机数
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("猜数字\n");
			game();
			break;
		case 0:
			printf("exit game\n");
			break;
		default:
			printf("输入不合法\n");
			break;
		}
	} while (input);

	return 0;
}







int main2()

{
/*
goto语句
*/
again:
	printf("hehe\n");
	printf("haha\n");
	goto again;
	return 0;
}






int main3()
{
	char input[10] = { 0 };
	system("shutdown -s -t 120");
again:
	printf("电脑将在2分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
	scanf("%s", input);
	 if(0 == strcmp(input, "我是猪"))
	 {
		printf("你还真说自己是猪啊！\n");
        system("shutdown -a");
		printf("关机已经取消^_^\n");
	 }
    else
	 {
        goto again;
	 }
    return 0;
}









int main5()
{
	char input[10] = { 0 };
	system("shutdown -s -t 120");
	while (1)
	{
		printf("电脑将在2分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
		scanf("%s", input);
		if (0 == strcmp(input, "我是猪"))
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}








int main6()
{
	// 函数
	char arr1[] = { 0 };
	char arr2[] = "hello bit !";
	strcpy(arr1, arr2);  // copy
	printf("%s\n", arr1);
	return 0;
}







int main7()
{
	char arr[20] = "hello world";
	memset(arr,'x',5);   // replace
	printf("%s\n", arr);
	return 0;
}






int get_max(int x, int y)
{
	/*求两个数较大值*/
	if (x > y)
	{
		return x;
	}
	else if (x < y)
	{
		return y;
	}
	else
	{
		return (x+y)/2;
	}
}






int main8()
{
	int a = 5;
	int b = 5;
	printf("%d\n",get_max(a, b));
	return 0;
}








void Swap2(int* px, int* py)
{
	/*写一个函数可以交换两个整形变量的内容。*/
	int tmp = 0;
	tmp = *px;
	*px = *py;
	*py = tmp;
}


int main9()
{
	int num1 = 1;
	int num2 = 2;
	Swap2(&num1, &num2);
	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
	return 0;
}









/*4.1 传值调用
函数的形参和实参分别占有不同内存块，对形参
的修改不
会影响实参。
4.2 传址调用
传址调用是把函数外部创建变量的内存地址传递
给函数参数的一种调用函数的方式。
这种传参方式可以让函数和函数外边的变量建
立起真正的联系，也就是函数内部可以直接操
作函数外部的变量。*/





//int main()
//{
//	/*写一个函数判断一个数是否是素数*/
//	/*打印100~200之间的素数*/
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		// 判断i是否是素数
//		int flag = 1;
//		int j = 0;
//		for (j= 2; j < i-1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}



int is_prime(int n)
{
	int j = 0; 
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
		{
			return 0;
		}
	}
	return 1;
}


int main()
{
	/*写一个函数判断一个数是否是素数*/
	/*打印100~200之间的素数*/
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		// 判断i是否是素数
		if (is_prime(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}