#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1()
{
    int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
    int(*p)[10] = &arr;//把数组arr的地址赋值给数组指针变量p
    //但是我们一般很少这样写代码
    return 0;
}







void print_arr1(int arr[3][5], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        int j = 0;
        for (j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void print_arr2(int(*arr)[5], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        int j = 0;
        for (j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main2()
{
    int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
    print_arr1(arr, 3, 5);
    //数组名arr，表示首元素的地址
    //但是二维数组的首元素是二维数组的第一行
    //所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
    //可以数组指针来接收
    print_arr2(arr, 3, 5);
    return 0;
}






void test11(int arr[])//ok?
{}
void test12(int arr[10])//ok?
{}
void test13(int* arr)//ok?
{}
void test21(int* arr[20])//ok?
{}
void test22(int** arr)//ok?
{}

int main3()
{
    int arr[10] = { 0 };
    int* arr2[20] = { 0 };
    test11(arr);
    test21(arr2);
    return 0;
}








void test111(int arr[3][5])//ok？
{}
//void test112(int arr[][])//ok？
//{}
void test113(int arr[][5])//ok？
{}
//总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
//因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
//这样才方便运算。
void test114(int* arr)//ok？
{}
void test115(int* arr[5])//ok？
{}
void test116(int(*arr)[5])//ok？
{}
void test117(int** arr)//ok？
{}
int main4()
{
    int arr[3][5] = { 0 };
    test111(arr);
}








void test1111()
{
    printf("hehe\n");
}
int main5()
{
    printf("%p\n", test1111);
    printf("%p\n", &test1111);
    return 0;
}



/*输出的是两个地址，这两个地址是 test 函数的地址。
那我们的函数的地址要想保存起来，怎么保存？
下面我们看代码：
首先，能给存储地址，就要求pfun1或者pfun2是指针，那哪个是指针？
答案是：
pfun1可以存放。pfun1先和*结合，说明pfun1是指针，指针指向的是一个函数，指向的函数无参
数，返回值类型为void。
阅读两段有趣的代码：
注 :推荐《C陷阱和缺陷》
这本书中提及这两个代码。
代码2太复杂，如何简化：
#include <stdio.h>
void test()
{
 printf("hehe\n");
}
int main()
{
 printf("%p\n", test);
 printf("%p\n", &test);
 return 0;
}
void test()
{
 printf("hehe\n");
}
//下面pfun1和pfun2哪个有能力存放test函数的地址？
void (*pfun1)();
void *pfun2();
//代码1
(*(void (*)())0)();
//代码2
void (*signal(int , void(*)(int)))(int);
typedef void(*pfun_t)(int);
pfun_t signal(int, pfun_t);
比特就业课 比特就业课-专注IT大学生就业的精品课程 比特主页：https://m.cctalk.com/inst/s9yewhfr
6. 函数指针数组
数组是一个存放相同类型数据的存储空间，那我们已经学习了指针数组，
比如：
那要把函数的地址存到一个数组中，那这个数组就叫函数指针数组，那函数指针的数组如何定义呢？
答案是：parr1
parr1 先和 [] 结合，说明 parr1是数组，数组的内容是什么呢？
是 int (*)() 类型的函数指针。
函数指针数组的用途：转移表*/





int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}
int main6()
{
    int x, y;
    int input = 1;
    int ret = 0;
    do
    {
        printf("*************************\n");
        printf(" 1:add           2:sub \n");
        printf(" 3:mul           4:div \n");
        printf("*************************\n");
        printf("请选择：");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            printf("输入操作数：");
            scanf("%d %d", &x, &y);
            ret = add(x, y);
            printf("ret = %d\n", ret);
            break;
        case 2:
            printf("输入操作数：");
            scanf("%d %d", &x, &y);
            ret = sub(x, y);
            printf("ret = %d\n", ret);
            break;
        case 3:
            printf("输入操作数：");
            scanf("%d %d", &x, &y);
            ret = mul(x, y);
            printf("ret = %d\n", ret);
            break;
        case 4:
            printf("输入操作数：");
            scanf("%d %d", &x, &y);
            ret = div(x, y);
            printf("ret = %d\n", ret);
            break;
        case 0:
            printf("退出程序\n");
            break;
        default:
            printf("选择错误\n");
            break;
        }
    } while (input);

    return 0;
}








//使用函数指针数组的实现：

/*

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}
int main()
{
    int x, y;
    int input = 1;
    int ret = 0;
    int(*p[5])(int x, int y) = { 0, add, sub, mul, div }; //转移表
    while (input)
    {
        printf("*************************\n");
        printf(" 1:add           2:sub \n");
        printf(" 3:mul           4:div \n");
        printf("*************************\n");
        printf("请选择：");
        scanf("%d", &input);
        if ((input <= 4 && input >= 1))
        {
            printf("输入操作数：");
            scanf("%d %d", &x, &y);
            ret = (*p[input])(x, y);
        }
        else
            printf("输入有误\n");
        printf("ret = %d\n", ret);
    }
    return 0;
}

*/







void test321(const char* str)
{
    printf("%s\n", str);
}
int main8()
{
    //函数指针pfun
    void (*pfun)(const char*) = test321;
    //函数指针的数组pfunArr
    void (*pfunArr[5])(const char* str);
    pfunArr[0] = test321;
    //指向函数指针数组pfunArr的指针ppfunArr
    void (*(*ppfunArr)[5])(const char*) = &pfunArr;
    return 0;
}









/*回调函数就是一个通过函数指针调用的函数。
如果你把函数的指针（地址）作为参数传递给另一个
函数，当这个指针被用来调用其所指向的函数时，
我们就说这是回调函数。回调函数不是由该函数
的实现方直接调用，而是在特定的事件或条件发生时
由另外的一方调用的，用于对该事件或条件进
行响应*/



//qosrt函数的使用者得实现一个比较函数
int int_cmp(const void* p1, const void* p2)
{
    return (*(int*)p1 - *(int*)p2);
}
int main9()
{
    int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
    int i = 0;

    qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}










/*

int int_cmp(const void* p1, const void* p2)
{
    return (*(int*)p1 - *(int*)p2);
}
void _swap(void* p1, void* p2, int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        char tmp = *((char*)p1 + i);
        *((char*)p1 + i) = *((char*)p2 + i);
        *((char*)p2 + i) = tmp;
    }
}
void bubble(void* base, int count, int size, int(*cmp)(void*, void*))
{
    int i = 0;
    int j = 0;
    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
            {
                _swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
            }
        }
    }
}
int main()
{
    int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
    //char *arr[] = {"aaaa","dddd","cccc","bbbb"};
    int i = 0;
    bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

*/