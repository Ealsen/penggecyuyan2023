#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


int main1()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i < 12; i++)
	{
		arr[i] = 0; // debug��ѭ��
		printf("hehe\n");
	}
	return 0;
}




// ����С��
//�ٶ�2015��ϵͳ����ʦ�����⣺
//���������ֽ����С���ֽ����
// ������һ��С����
//���жϵ�ǰ�������ֽ��򡣣�10�֣�

int check_sys()
{
	int i = 1;
	return (*(char*)&i);
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}
//����2
int check_sys2()
{
	union
	{
		int i;
		char c;
	}un;
	un.i = 1;
	return un.c;
}







