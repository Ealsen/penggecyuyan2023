#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>




int main1()
{
    int i = 0, a = 0, b = 2, c = 3, d = 4;
    i = a++ && ++b && d++;
    //i = a++||++b||d++;
    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
    return 0;
}




int main2()
{
    int a = 3;
    int b = 0;

    (a > 5) ? (b = 3) : (b = -3);

    printf("%d\n", b);

    return 0;
}




int main3()
{
    //代码1
    int a = 1;
    int b = 2;
    int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式
    
    int arr[10];//创建数组
    arr[9] = 10;//实用下标引用操作符

    return 0;
}





struct Stu
{
    char name[10];
    int age;
    char sex[5];
    double score;
};

void set_age1(struct Stu stu)
{
    stu.age = 18;
}

void set_age2(struct Stu* pStu)
{
    pStu->age = 18;//结构成员访问
}

void print_stu(struct Stu ss)
{
    printf("%s %d %lf\n", ss.name, ss.age, ss.score);
}


int main4()
{
    struct Stu stu;
    struct Stu* pStu = &stu;//结构成员访问

    stu.age = 20;//结构成员访问
    set_age1(stu);

    pStu->age = 20;//结构成员访问
    set_age2(pStu);

    print_stu(stu);

    return 0;
}




int main5()
{
    int a = 7; float x = 2.5; float y = 4.7;
    float z = x + a % 3 * (int)(x + y) % 2 / 4;
    printf("%f", z);
    return 0;
}





int main6()
{
    int a = -5, b = 1, c = 1;
    int x = 0, y = 2, z = 0;
    if (c > 0)
        x = x + y;
    if (a <= 0)
    {
        if (b > 0)
            if (c <= 0)
                y = x - y;
    }
    else if (c > 0)
        y = x - y;
    else z = y;
    printf("%d,%d,%d\n", x, y, z);
    return 0;
}




main7()
{
    int x = 1, y = 0, a = 0, b = 0;
    switch (x)
    {
    case 1:
        switch (y)
        {
        case 0:a++; break;
        case 1:b++; break;
        }
    case 2:
        a++; b++; break;
    }
    printf("a=%d,b=%d\n", a, b);
}


main8()
{
    int a[] = { 1,2,3,4 }, y, * p = &a[3];
    --p; y = *p;
    printf("y=%d\n", y);
}


main9()
{
    int a = 0, b = 1, c = 2;
    if (++a > 0 || ++b > 0)
        ++c;
    printf("%d,%d,%d", a, b, c);
}





main10()
{
    int c;
    while (c = getchar() != '\n')
    {
        switch (c - '3')
        {
        case 0:
        case 1:putchar(c + 4);
        case 2:putchar(c + 4); break;
        case 3:putchar(c + 3);
        case 4:putchar(c + 3); break;

        }
    }
    printf("\n");
}





main11()
{
    char m[80];
    int c, i;
    scanf("%c", &c);
    scanf("%d", &i);
    scanf("%s", &m);
    printf("%c,%d,%s\n", c, i, m);
}








void fun(char* s[], int n)
{
    char* t; int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (strlen(s[i]) > strlen(s[j]))
            {
                t = s[i]; s[i] = s[j]; s[j] = t;
            }
}
main12()
{
    char* ss[] = { "bcc","bbcc","xy","aaaacc","aabcc" };
    fun(ss, 5);
    printf("%s,%s\n", ss[0], ss[4]);
}










#define F(x) 2.84+x
#define w(y) printf("%d",(int)(y))
#define P(y) w(y)
main()
{
    int x = 2;
    P(F(5) * x);
}