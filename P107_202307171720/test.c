#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1()
{
    int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
    int(*p)[10] = &arr;//������arr�ĵ�ַ��ֵ������ָ�����p
    //��������һ���������д����
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
    //������arr����ʾ��Ԫ�صĵ�ַ
    //���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��
    //�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
    //��������ָ��������
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








void test111(int arr[3][5])//ok��
{}
//void test112(int arr[][])//ok��
//{}
void test113(int arr[][5])//ok��
{}
//�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
//��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
//�����ŷ������㡣
void test114(int* arr)//ok��
{}
void test115(int* arr[5])//ok��
{}
void test116(int(*arr)[5])//ok��
{}
void test117(int** arr)//ok��
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



/*�������������ַ����������ַ�� test �����ĵ�ַ��
�����ǵĺ����ĵ�ַҪ�뱣����������ô���棿
�������ǿ����룺
���ȣ��ܸ��洢��ַ����Ҫ��pfun1����pfun2��ָ�룬���ĸ���ָ�룿
���ǣ�
pfun1���Դ�š�pfun1�Ⱥ�*��ϣ�˵��pfun1��ָ�룬ָ��ָ�����һ��������ָ��ĺ����޲�
��������ֵ����Ϊvoid��
�Ķ�������Ȥ�Ĵ��룺
ע :�Ƽ���C�����ȱ�ݡ�
�Ȿ�����ἰ���������롣
����2̫���ӣ���μ򻯣�
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
//����pfun1��pfun2�ĸ����������test�����ĵ�ַ��
void (*pfun1)();
void *pfun2();
//����1
(*(void (*)())0)();
//����2
void (*signal(int , void(*)(int)))(int);
typedef void(*pfun_t)(int);
pfun_t signal(int, pfun_t);
���ؾ�ҵ�� ���ؾ�ҵ��-רעIT��ѧ����ҵ�ľ�Ʒ�γ� ������ҳ��https://m.cctalk.com/inst/s9yewhfr
6. ����ָ������
������һ�������ͬ�������ݵĴ洢�ռ䣬�������Ѿ�ѧϰ��ָ�����飬
���磺
��Ҫ�Ѻ����ĵ�ַ�浽һ�������У����������ͽк���ָ�����飬�Ǻ���ָ���������ζ����أ�
���ǣ�parr1
parr1 �Ⱥ� [] ��ϣ�˵�� parr1�����飬�����������ʲô�أ�
�� int (*)() ���͵ĺ���ָ�롣
����ָ���������;��ת�Ʊ�*/





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
        printf("��ѡ��");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            printf("�����������");
            scanf("%d %d", &x, &y);
            ret = add(x, y);
            printf("ret = %d\n", ret);
            break;
        case 2:
            printf("�����������");
            scanf("%d %d", &x, &y);
            ret = sub(x, y);
            printf("ret = %d\n", ret);
            break;
        case 3:
            printf("�����������");
            scanf("%d %d", &x, &y);
            ret = mul(x, y);
            printf("ret = %d\n", ret);
            break;
        case 4:
            printf("�����������");
            scanf("%d %d", &x, &y);
            ret = div(x, y);
            printf("ret = %d\n", ret);
            break;
        case 0:
            printf("�˳�����\n");
            break;
        default:
            printf("ѡ�����\n");
            break;
        }
    } while (input);

    return 0;
}








//ʹ�ú���ָ�������ʵ�֣�

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
    int(*p[5])(int x, int y) = { 0, add, sub, mul, div }; //ת�Ʊ�
    while (input)
    {
        printf("*************************\n");
        printf(" 1:add           2:sub \n");
        printf(" 3:mul           4:div \n");
        printf("*************************\n");
        printf("��ѡ��");
        scanf("%d", &input);
        if ((input <= 4 && input >= 1))
        {
            printf("�����������");
            scanf("%d %d", &x, &y);
            ret = (*p[input])(x, y);
        }
        else
            printf("��������\n");
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
    //����ָ��pfun
    void (*pfun)(const char*) = test321;
    //����ָ�������pfunArr
    void (*pfunArr[5])(const char* str);
    pfunArr[0] = test321;
    //ָ����ָ������pfunArr��ָ��ppfunArr
    void (*(*ppfunArr)[5])(const char*) = &pfunArr;
    return 0;
}









/*�ص���������һ��ͨ������ָ����õĺ�����
�����Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ��
�����������ָ�뱻������������ָ��ĺ���ʱ��
���Ǿ�˵���ǻص��������ص����������ɸú���
��ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ
�������һ�����õģ����ڶԸ��¼���������
����Ӧ*/



//qosrt������ʹ���ߵ�ʵ��һ���ȽϺ���
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