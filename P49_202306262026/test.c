#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>




void swap(int* pa, int* pb)
{
	// ������������ֵ
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}




int main1()
{
	//дһ�������ӡ1-100֮������3�ı���������

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
	// �����������������Լ��

	int a = 0;
	int b = 0;
	// ��������
	scanf("%d %d", &a, &b);
	//�����Լ��
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
	// �����������������Լ��
	// շת�����
	int a = 0;
	int b = 0;
	int c = 0;
	// ��������
	scanf("%d %d", &a, &b);
	//�����Լ��
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
	//��д������һ��1��10e������������
	// ���ֶ��ٸ�����9
	//9 19 29 39 49 59 69 79 89 99 
	//90 91 92 93 94 95 96 97 98 99
	int i = 0;
	int count = 0;
	for ( i = 1; i <= 100; i++)
	{
		//�жϸ�λ�ǲ���9
		if (i % 10 == 9)
		{
			count++;
		}
		//�ж�ʮλ�ǲ���9
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
	/*//����1/1-1/2+1/3-1/4+1/5.....+ 1/99 - 1/100��ֵ����ӡ�����//��������1
	11��ĸ��1~100
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
	// �ҳ�10��������������
	int arr[10] = {0}; // ָ�������С
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	// �ҳ����ֵ
	int max = arr[0]; // ��ס���
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
	// ��ӡ����
	for (i = 1; i <= n; i++)
	{
		// ��ӡ1��
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);//%2d�Ҷ���
			
		}
		printf("\n"); //ע�⻻�з���λ��
	}
	
	return 0;
}






int chengfatab(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		// ��ӡ1��
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);//%2d�Ҷ���

		}
		printf("\n"); //ע�⻻�з���λ��
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