#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main1()
{
    // 100~200������
    int i, j, isPrime;

    printf("100��200֮��������У�");

    for (i = 101; i <= 199; i += 2)
    { // ֻ��Ҫ�ж������Ƿ�Ϊ����
        isPrime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            { // ����ܱ���������������
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

int main2()
{
    // ��ӡ1000~2000��֮�������
    // 1.�ܱ�4���������ܱ�100����,2.�ܱ�400����

    int year = 0;
    // int count = 0;

    for (year = 1000; year <= 2000; year++)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            printf("%d ", year);
            // count++;
        }
    }
    // printf("\n1000��~2000��֮����%d\n", count);

    return 0;
}

int is_leap_year(int y)
{
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main3()
{
    int year = 0;
    // int count = 0;
    for (int year = 1000; year <= 2000; year++)
    {
        if (is_leap_year(year))
        {
            printf("%d ", year);
            // count++;
        }
    }
    // printf("\n%d\n",count);
    return 0;
}







int binary_search(int arr[], int key, int sz)
{
    // ���ֲ���
    int left = 0;
    int right = sz - 1;
    int mid = 0;

    while (left <= right)
    {
        mid = left + (right - left) / 2;
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
            return mid;
        }
        
    }
    return -1;
}



int main4()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 7;
    int sz = sizeof(arr) / sizeof(arr[0]);
    int ret = binary_search(arr, key, sz);
    if (ret == -1)
    {
        printf("No key in arr\n");
    }
    else
    {
        printf("The key is %d", ret);
    }

    return 0;
}



void add(int* p)
{
    // ÿ�ε���һ����������𣬲���+1
    (*p)++;
}



int main5()
{
    int num = 0;
    add(&num);
    printf("%d\n", num);
    add(&num);
    printf("%d\n", num);
    return 0;
}








void new_line()
{
    printf("hehe\n");
}

void three_line()
{
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        new_line();
    }
}

int main6()
{
    // Ƕ�׵���
    three_line();
    return 0;
}











int main7()
{
    // ��ʽ���� ��������Ҫ�÷���ֵ����
    int len = strlen("asdsadasd");
    printf("%d\n", len);
    printf("%d\n", strlen("asdsadasd"));
    return 0;
}









// void��ȷ˵��main��������Ҫ������
//��������main�в���
//main������3������
//int main(int argc, char* argv[]��char * envp[])
int main8(void)
{

    return 0;
}










int main()
{


    return 0;
}