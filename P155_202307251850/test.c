#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main1()
{
	/*
	3.1 文件指针
缓冲文件系统中，关键的概念是“文件类型指针”，
简称“文件指针”。
每个被使用的文件都在内存中开辟了一个相应的文件信息区，
用来存放文件的相关信息（如文件的名
字，文件状态及文件当前的位置等）。
这些信息是保存在一个结构体变量中的。
该结构体类型是有系统
声明的，取名FILE.
例如，VS2013编译环境提供的 stdio.h 
头文件中有以下的文件类型申明：

struct _iobuf {
        char *_ptr;
        int   _cnt;
        char *_base;
        int   _flag;
        int   _file;
        int   _charbuf;
        int   _bufsiz;
        char *_tmpfname;
       };
typedef struct _iobuf FILE;

不同的C编译器的FILE类型包含的内容不完全相同，
但是大同小异。
每当打开一个文件的时候，系统会根据文件的情况
自动创建一个FILE结构的变量，并填充其中的信息，
使用者不必关心细节。
一般都是通过一个FILE的指针来维护这个FILE结构的变量，
这样使用起来更加方便。
下面我们可以创建一个FILE*的指针变量:
FILE* pf;//文件指针变量
	*/


    /* fopen fclose example */

        FILE* pFile;
        //打开文件
        pFile = fopen("myfile.txt", "w");
        //文件操作
        if (pFile != NULL)
        {
            fputs("fopen example", pFile);
            //关闭文件
            fclose(pFile);
        }
 
	return 0;
}











int main2()
{
    FILE* pf = fopen("test.txt", "w");
    if (pf == NULL)
    {
        printf("%s\n", strerror(errno));
        return 1;
    }

    // 写文件
    char i = 0;
    for (i = 'a'; i <= 'z'; i++)
    {
        fputc(i, pf);
    }



    // 关闭文件
    fclose(pf);
    pf = NULL;

    return 0;
}












int main3()
{
    FILE* pf = fopen("test.txt", "r");
    if (pf == NULL)
    {
        printf("%s\n", strerror(errno));
        return 1;
    }


    // 读文件
    /*int ch = fgetc(pf);
    printf("%c\n", ch);
    ch = fgetc(pf);
    printf("%c\n", ch);
    ch = fgetc(pf);
    printf("%c\n", ch);
    ch = fgetc(pf);
    printf("%c\n", ch);*/

    int ch = 0;
    while ((ch = fgetc(pf)) != EOF)
    {
        printf("%c ", ch);
    }


    // 关闭文件
    fclose(pf);
    pf = NULL;

    return 0;
}












int main4()
{
    FILE* pf = fopen("han1test.txt", "w");
    if (pf == NULL)
    {
        printf("%s\n", strerror(errno));
        return 1;
    }

    // 写一行数据
    fputs("abcdefghijklmnopqrstuvwxyz",pf);

    // 关闭文件
    fclose(pf);
    pf = NULL;

    return 0;
}



int main5()
{
    FILE* pf = fopen("han1test.txt", "r");
    if (pf == NULL)
    {
        printf("%s\n", strerror(errno));
        return 1;
    }

    // 读一行数据
    char arr[36] = { 0 };
    fgets(arr,36,pf);

    printf("%s\n", arr);

    // 关闭文件
    fclose(pf);
    pf = NULL;

    return 0;
}









int main6()
{
    FILE* pf = fopen("han1test.txt", "r");
    if (pf == NULL)
    {
        //printf("%s\n", strerror(errno));
        perror("fopen");
        return 1;
    }



    // 关闭文件
    fclose(pf);
    pf = NULL;

    return 0;
}



struct S
{
    char arr[10];
    int age;
    float score;
};








int main7()
{
    struct S s = { "zhangsan", 25, 50.5f };

    FILE* pf = fopen("test1.txt", "w");
    if (pf == NULL)
    {
        //printf("%s\n", strerror(errno));
        perror("fopen");
        return 1;
    }

    // 结构体写入数据

    fprintf(pf,"%s %d %f", s.arr, s.age, s.score);


    // 关闭文件
    fclose(pf);
    pf = NULL;

    return 0;
}








int main8()
{
    struct S s = { 0 };
    FILE* pf = fopen("test1.txt", "r");
    if (pf == NULL)
    {
        //printf("%s\n", strerror(errno));
        perror("fopen");
        return 1;
    }

    // 结构体读取数据

   fscanf(pf, "%s %d %f", s.arr, &(s.age), &(s.score));
   printf("%s %d %f\n", s.arr, s.age, s.score);


    // 关闭文件
    fclose(pf);
    pf = NULL;

    return 0;
}












int main9()
{
    struct S s = { 0 };
    FILE* pf = fopen("test1.txt", "r");
    if (pf == NULL)
    {
        //printf("%s\n", strerror(errno));
        perror("fopen");
        return 1;
    }

    // 结构体读取数据

    fscanf(pf, "%s %d %f", s.arr, &(s.age), &(s.score));

    fprintf(stdout,"%s %d %f\n", s.arr, s.age, s.score);


    // 关闭文件
    fclose(pf);
    pf = NULL;

    return 0;
}







int main10()
{
    struct S s = { "zhangsan", 25, 50.5f };
    FILE* pf = fopen("test2.txt", "w");
    if (pf == NULL)
    {
        //printf("%s\n", strerror(errno));
        perror("fopen");
        return 1;
    }

    // 以二进制的形式写到文件中
    fwrite(&s, sizeof(struct S), 1, pf);



    // 关闭文件
    fclose(pf);
    pf = NULL;

    return 0;
}










int main11()
{
    struct S s = { 0 };
    FILE* pf = fopen("test2.txt", "rb");
    if (pf == NULL)
    {
        //printf("%s\n", strerror(errno));
        perror("fopen");
        return 1;
    }

    // 以二进制的形式读取文件内容
    fread(&s, sizeof(struct S), 1, pf);
    printf("%s %d %f\n", s.arr, s.age, s.score);

    // 关闭文件
    fclose(pf);
    pf = NULL;

    return 0;
}







int main12()
{
    struct S s = { "zhangsan", 25, 50.5f };
    struct S temp = { 0 };
    char buf[100] = { 0 };
    // 把一个格式化的数据转换成字符串放到buf中
    sprintf(buf, "%s %d %f", s.arr, s.age, s.score);

    printf("%s\n", buf);
    //sscanf把一个格式化的数据转发成字符串放到temp中
    sscanf(buf, "%s %d %f", temp.arr, &(temp.age), &(temp.score));

    printf("%s %d %f\n", temp.arr, temp.age, temp.score);

    return 0;
}

















int main13()
{
    FILE* pf = fopen("test1.txt", "r");
    if (pf == NULL)
    {
        //printf("%s\n", strerror(errno));
        perror("fopen");
        return 1;
    }

    // 定位文件指针
    fseek(pf, 2, SEEK_SET);
    int ch = fgetc(pf);   
    printf("%c\n", ch);
    // fell 计算文件位置的偏移量
    printf("%d\n", ftell(pf));

    /*
    5.3 rewind
让文件指针的位置回到文件的起始位置
void rewind ( FILE * stream );
    */


    fseek(pf, 2, SEEK_CUR);
    ch = fgetc(pf);    
    printf("%c\n", ch);

   /* fseek(pf, -1, SEEK_END);
    ch = fgetc(pf);
    printf("%c\n", ch);*/
    // 关闭文件
    fclose(pf);
    pf = NULL;

    return 0;
}





int main14()
{
    int a = 10000;
    FILE* pf = fopen("test3.txt", "wb");
    fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
    fclose(pf);
    pf = NULL;
    return 0;
}










/*
7.1 被错误使用的feof
牢记：在文件读取过程中，不能用feof函数的返回值直接用来判断文件的是否结束。
而是应用于当文件读取结束的时候，判断是读取失败结束，还是遇到文件尾结束。
1. 文本文件读取是否结束，判断返回值是否为 EOF （ fgetc ），或者 NULL （ fgets ）
例如：
fgetc 判断是否为 EOF .
fgets 判断返回值是否为 NULL .
2. 二进制文件的读取结束判断，判断返回值是否小于实际要读的个数。
例如：
fread判断返回值是否小于实际要读的个数。
*/






int main15(void)
{
    int c; // 注意：int，非char，要求处理EOF
    FILE* fp = fopen("test4.txt", "r");
    if (!fp) {
        perror("File opening failed");
        return EXIT_FAILURE;
    }
    //fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
    while ((c = fgetc(fp)) != EOF) // 标准C I/O读取文件循环
    {
        putchar(c);
    }
    //判断是什么原因结束的
    if (ferror(fp))
        puts("I/O error when reading");
    else if (feof(fp))
        puts("End of file reached successfully");
    fclose(fp);
}





enum { SIZE = 5 };
int main16(void)
{
    double a[SIZE] = { 1.,2.,3.,4.,5. };
    FILE* fp = fopen("test.bin", "wb"); // 必须用二进制模式
    fwrite(a, sizeof * a, SIZE, fp); // 写 double 的数组
    fclose(fp);
    double b[SIZE];
    fp = fopen("test.bin", "rb");
    size_t ret_code = fread(b, sizeof * b, SIZE, fp); // 读 double 的数组
    if (ret_code == SIZE) {
        puts("Array read successfully, contents: ");
        for (int n = 0; n < SIZE; ++n) printf("%f ", b[n]);
        putchar('\n');
    }
    else { // error handling
        if (feof(fp))
            printf("Error reading test.bin: unexpected end of file\n");
        else if (ferror(fp)) {
            perror("Error reading test.bin");
        }
    }
    fclose(fp);
}






int main17()
{
    FILE* pf = fopen("test5.txt", "w");
    fputs("abcdef", pf);//先将代码放在输出缓冲区
    printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
    Sleep(10000);
    printf("刷新缓冲区\n");
    fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
    //注：fflush 在高版本的VS上不能使用了
    printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
    Sleep(10000);
    fclose(pf);
    //注：fclose在关闭文件的时候，也会刷新缓冲区
    pf = NULL;
    return 0;
}

















/*
8. 文件缓冲区
ANSIC 标准采用“缓冲文件系统”处理的数据文件的，所谓缓冲文件系统是指系统自动地在内存中为程序
中每一个正在使用的文件开辟一块“文件缓冲区”。从内存向磁盘输出数据会先送到内存中的缓冲区，装
满缓冲区后才一起送到磁盘上。如果从磁盘向计算机读入数据，则从磁盘文件中读取数据输入到内存缓
冲区（充满缓冲区），然后再从缓冲区逐个地将数据送到程序数据区（程序变量等）。缓冲区的大小根
据C编译系统决定的。

这里可以得出一个结论：
因为有缓冲区的存在，C语言在操作文件的时候，需要做刷新缓冲区或者在文件操作结束的时候关闭文
件。
如果不做，可能导致读写文件的问题。
*/