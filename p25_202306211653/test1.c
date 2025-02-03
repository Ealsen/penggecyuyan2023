#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//分支语句if
int main()
{
	/*if (5 == 5)
	{
		printf("hehe\n");
	}*/

	//int age = 10;
	//if (age >= 18)
		//printf("成年\n");
	//else
		//printf("未成年\n");

	//int age = 32;
	//if (age < 18)
	//{
	//	printf("少年\n");
	//}
	//else if (age >= 18 && age < 27)
	//{
	//	printf("青年\n");
	//}
	//else if (age >= 27 && age < 40)
	//{
	//	printf("壮年\n");
	//}
	//else if (age >= 40 && age <50)
	//{
	//	printf("中年\n");
	//}


	//int a = 0;
	//int b = 2;
	//if (a == 1)
	//	//-----
	//	if (b == 2)
	//		printf("hehe\n");
	//	else
	//		printf("haha\n");
	//	//------


	/*int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)
		{
			printf("hehe\n");
		}
	}
	else
	{
		printf("haha\n");
	}*/

	//// 输出1-100之间的奇数
	//for (int i = 1; i <= 100 ; i++)
	//{
	//	if (i % 2 != 0)
	//	{
	//		printf("%d ", i);
	//	}
	//}
	

	////打印星期
	//int day = 0;
	//scanf("%d", &day);
	//switch (day)
	//{
	//default:
	//	printf("无效值\n");
	//	break;
	//case 1:
	//	printf("星期1\n");
	//	break;
	//case 2:
	//	printf("星期2\n");
	//	break;
	//case 3:
	//	printf("星期3\n");
	//	break;
	//case 4:
	//	printf("星期4\n");
	//	break;
	//case 5:
	//	printf("星期5\n");
	//	break;
	//case 6:
	//	printf("星期6\n");
	//	break;
	//case 7:
	//	printf("星期日\n");
	//	break;
	//}






	//int n = 1;	//int m = 2;
	//switch (n)
	//{
	//case 1:
	//	m++;
	//case 2:
	//	n++;
	//case 3:
	//	switch (n)
	//	{//switch允许嵌套使用
	//	case 1:
	//		n++;
	//	case 2:
	//		m++;
	//		n++;
	//		break;
	//	}
	//case 4:
	//	m++;
	//	break;
	//default:
	//	break;
	//}
	//printf("m = %d, n = %d\n", m, n);





// 循环语句

////打印1~10的数字
//int i = 1;
//while (i <= 10)
//{
//	printf("%d ", i);
//	i++;
//}



//！！！！键盘输入缓存区！！！！
	//int ch = 0;
	//while ((ch = getchar()) != (-1))
	//	putchar(ch);

//char passwd[30] = { 0 };
//printf("Enter your password\n");
//scanf("%s", &passwd);
//printf("YES or NO(Y/N)\n");
////getchar();//临时读取'\n'
//int ch = 0;
//
//// 清理缓存区'\n'
//while (ch = getchar() != '\n')
//{
//	;
//}
//
//int ret = getchar();
//if (ret == 'Y')
//{
//	printf("YES\n");
//	printf("your password is:\n");
//	printf("%s\n", passwd);
//}
//else
//{
//	printf("NO\n");
//}



char ch = '\0';
while ((ch = getchar()) != EOF)
{
	if (ch < '0' || ch > '9')
		continue;
	putchar(ch);
}


	return 0;
}