#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main1()
{
    // 100~200的素数
    int i, j, isPrime;

    printf("100到200之间的素数有：");

    for (i = 101; i <= 199; i += 2)
    { // 只需要判断奇数是否为素数
        isPrime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            { // 如果能被整除，则不是素数
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
    // 打印1000~2000年之间的闰年
    // 1.能被4整除，不能被100整除,2.能被400整除

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
    // printf("\n1000年~2000年之间有%d\n", count);

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
    // 二分查找
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
    // 每次调用一次这个函数吗，参数+1
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
    // 嵌套调用
    three_line();
    return 0;
}











int main7()
{
    // 链式访问 函数必须要用返回值才行
    int len = strlen("asdsadasd");
    printf("%d\n", len);
    printf("%d\n", strlen("asdsadasd"));
    return 0;
}









// void明确说明main函数不需要参数，
//但本质上main有参数
//main函数有3个参数
//int main(int argc, char* argv[]，char * envp[])
int main8(void)
{

    return 0;
}










int main()
{


    return 0;
}