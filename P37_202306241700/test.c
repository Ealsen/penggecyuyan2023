#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>



int main1()
{
	// ���ֲ���
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int mid = 0;

	while (left <= right)
	{
		//mid = (left + right) / 2;
		mid = left + (right - left) / 2;  // ��+���Ҳ��һ��
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
	//��д���룬��ʾ����ַ��������ƶ������м���
	char arr1[] = "welcome to bit!!!!"; //strĬ����"\0"
	char arr2[] = "##################";

	int left = 0;
	int right = strlen(arr2) - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(500);
		// ������Ļ
		system("cls");
		left++;
		right--;
	}
	printf("%s\n", arr2);

	return 0;
}





int main3()
{
	//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
	//(ֻ���������������룬���������ȷ����ʾ��¼�ɣ�
	//������ξ�����������˳�����

	int i = 0;
	char passwd[30] = { 0 };//�������������ǵ�ַ
	// ���������ǣ�abcdef
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", passwd);
		if (strcmp(passwd,"abcdef") == 0)
		// �Ƚ������ַ�����Ȳ���ʹ�á�==��
		//Ӧ����strcmp
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
	//��������Ϸ
	 
	return 0;
}