#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main1()
{
	// whileѭ��
	int i = 1; //��ʼ��

	while (i<=10)// �ж��Ƿ����ѭ��
	{
		printf("%d ", i);
		i++; // ����
	}
	return 0;
}




int main2()
{
	//forѭ��
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
	//����1
	//for (;;)
	//{
	//	printf("hehe\n");
	//}
	//forѭ���еĳ�ʼ�����֣��жϲ��֣����������ǿ���ʡ�Եģ����ǲ������ѧʱʡ�ԣ����׵�����
	//�⡣



	//����4-ʹ�ö���һ����������ѭ��
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("hehe\n");
	}


	return 0;
}




int main4()
{
	// do...whileѭ��
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
	// ����n�Ľ׳�
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
//	// ����1!+2!+3!+......+10!
//	int i = 1;
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)   //�����ѭ����������ظ�
//	{
//		for (i = 1; i <=n; i++)
//		{
//			ret = ret * i;
//			sum = sum + ret;// �����⣡����
//		}
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}




int main6()
{
	// ����1!+2!+3!+......+n!
	int n = 0;
	int sum = 0;
	int i = 0;
	int j = 0;

	printf("������һ����������");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		int ret = 1; // ÿ��ѭ��ǰ��Ҫ��ret����Ϊ1
		for (j = 1; j <= i; j++) // ���ڲ�ѭ����������������Ϊj
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
	//��һ�����������ҵ�ĳһ������
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
	// ���ֲ���
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
		printf("�ҵ��ˣ��±���%d\n", mid);
	}
	else
	{
		printf("û���ҵ�\n");
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
		printf("�ҵ��ˣ��±���:%d\n", mid);
	}
	else
	{
		printf("û���ҵ�\n");
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
		printf("�ҵ��ˣ��±���%d\n", mid);
	}
	else
	{
		printf("û���ҵ�\n");
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
			return mid;//�ҵ��ˣ������±�
	}
	return -1;//�Ҳ���
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