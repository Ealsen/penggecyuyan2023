#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <time.h>
#include <math.h>



/*
��������Ϸ
������������
�´��� ��С��
ֱ���¶ԣ�end
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
	
	// ���������
	int ret = rand() % 100 + 1; // 0~99 => 1~100
	//printf("%d\n", ret);

	// ������
	while (1)
	{
		printf("������:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}


int main1()
{
	int input = 0;
	srand((unsigned int)time(((void*)0))); // ���������
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("exit game\n");
			break;
		default:
			printf("���벻�Ϸ�\n");
			break;
		}
	} while (input);

	return 0;
}







int main2()

{
/*
goto���
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
	printf("���Խ���2�����ڹػ���������룺��������ȡ���ػ�!\n������:>");
	scanf("%s", input);
	 if(0 == strcmp(input, "������"))
	 {
		printf("�㻹��˵�Լ�������\n");
        system("shutdown -a");
		printf("�ػ��Ѿ�ȡ��^_^\n");
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
		printf("���Խ���2�����ڹػ���������룺��������ȡ���ػ�!\n������:>");
		scanf("%s", input);
		if (0 == strcmp(input, "������"))
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}








int main6()
{
	// ����
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
	/*���������ϴ�ֵ*/
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
	/*дһ���������Խ����������α��������ݡ�*/
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









/*4.1 ��ֵ����
�������βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ�飬���β�
���޸Ĳ�
��Ӱ��ʵ�Ρ�
4.2 ��ַ����
��ַ�����ǰѺ����ⲿ�����������ڴ��ַ����
������������һ�ֵ��ú����ķ�ʽ��
���ִ��η�ʽ�����ú����ͺ�����ߵı�����
������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ�
�������ⲿ�ı�����*/





//int main()
//{
//	/*дһ�������ж�һ�����Ƿ�������*/
//	/*��ӡ100~200֮�������*/
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		// �ж�i�Ƿ�������
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
	/*дһ�������ж�һ�����Ƿ�������*/
	/*��ӡ100~200֮�������*/
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		// �ж�i�Ƿ�������
		if (is_prime(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}