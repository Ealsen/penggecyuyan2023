#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>






#include "add.h"

int main1()
{
	// �����������Ͷ���
	// ������̬��

	// ���뾲̬��
	//#pragma comment( lib, "add.lib")

	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = add(a, b);
	printf("%d\n", sum);

	return 0;
}







void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main2()
{
	//�����ĵݹ�
	/*�����������ı�̼��ɳ�Ϊ
	�ݹ�(recursion)��
	�ݹ���Ϊһ���㷨�ڳ������������
	�㷺Ӧ�á�һ�����̻������䶨��
	��˵������ֱ�ӻ��ӵ��������
	һ�ַ�������ͨ����һ�����͸��ӵ�
	������ת��Ϊһ����ԭ�������Ƶ�
	��ģ��С����������⣬�ݹ����
	ֻ�������ĳ���Ϳ��������������
	����Ҫ�Ķ���ظ����㣬���ؼ���
	�˳���Ĵ�������
	�ݹ����Ҫ˼����ʽ���� : �Ѵ���
	��С*/




	/*����һ������ֵ���޷��ţ���
	����˳���ӡ����ÿһλ��*/



	int num = 1234;
	print(num);
	return 0;
}











int Strlen(const char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + Strlen(str + 1);
}

int main()
{
	// ��д��������������ʱ������
	// ���ַ����ĳ���

	// ���� => ���� && �ع�

	char* p = "abcdef";
	int len = Strlen(p);
	printf("%d\n", len);
	return 0;
}
