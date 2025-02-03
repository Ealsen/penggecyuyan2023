#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main1()
{
	/*
	3.1 �ļ�ָ��
�����ļ�ϵͳ�У��ؼ��ĸ����ǡ��ļ�����ָ�롱��
��ơ��ļ�ָ�롱��
ÿ����ʹ�õ��ļ������ڴ��п�����һ����Ӧ���ļ���Ϣ����
��������ļ��������Ϣ�����ļ�����
�֣��ļ�״̬���ļ���ǰ��λ�õȣ���
��Щ��Ϣ�Ǳ�����һ���ṹ������еġ�
�ýṹ����������ϵͳ
�����ģ�ȡ��FILE.
���磬VS2013���뻷���ṩ�� stdio.h 
ͷ�ļ��������µ��ļ�����������

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

��ͬ��C��������FILE���Ͱ��������ݲ���ȫ��ͬ��
���Ǵ�ͬС�졣
ÿ����һ���ļ���ʱ��ϵͳ������ļ������
�Զ�����һ��FILE�ṹ�ı�������������е���Ϣ��
ʹ���߲��ع���ϸ�ڡ�
һ�㶼��ͨ��һ��FILE��ָ����ά�����FILE�ṹ�ı�����
����ʹ���������ӷ��㡣
�������ǿ��Դ���һ��FILE*��ָ�����:
FILE* pf;//�ļ�ָ�����
	*/


    /* fopen fclose example */

        FILE* pFile;
        //���ļ�
        pFile = fopen("myfile.txt", "w");
        //�ļ�����
        if (pFile != NULL)
        {
            fputs("fopen example", pFile);
            //�ر��ļ�
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

    // д�ļ�
    char i = 0;
    for (i = 'a'; i <= 'z'; i++)
    {
        fputc(i, pf);
    }



    // �ر��ļ�
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


    // ���ļ�
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


    // �ر��ļ�
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

    // дһ������
    fputs("abcdefghijklmnopqrstuvwxyz",pf);

    // �ر��ļ�
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

    // ��һ������
    char arr[36] = { 0 };
    fgets(arr,36,pf);

    printf("%s\n", arr);

    // �ر��ļ�
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



    // �ر��ļ�
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

    // �ṹ��д������

    fprintf(pf,"%s %d %f", s.arr, s.age, s.score);


    // �ر��ļ�
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

    // �ṹ���ȡ����

   fscanf(pf, "%s %d %f", s.arr, &(s.age), &(s.score));
   printf("%s %d %f\n", s.arr, s.age, s.score);


    // �ر��ļ�
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

    // �ṹ���ȡ����

    fscanf(pf, "%s %d %f", s.arr, &(s.age), &(s.score));

    fprintf(stdout,"%s %d %f\n", s.arr, s.age, s.score);


    // �ر��ļ�
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

    // �Զ����Ƶ���ʽд���ļ���
    fwrite(&s, sizeof(struct S), 1, pf);



    // �ر��ļ�
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

    // �Զ����Ƶ���ʽ��ȡ�ļ�����
    fread(&s, sizeof(struct S), 1, pf);
    printf("%s %d %f\n", s.arr, s.age, s.score);

    // �ر��ļ�
    fclose(pf);
    pf = NULL;

    return 0;
}







int main12()
{
    struct S s = { "zhangsan", 25, 50.5f };
    struct S temp = { 0 };
    char buf[100] = { 0 };
    // ��һ����ʽ��������ת�����ַ����ŵ�buf��
    sprintf(buf, "%s %d %f", s.arr, s.age, s.score);

    printf("%s\n", buf);
    //sscanf��һ����ʽ��������ת�����ַ����ŵ�temp��
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

    // ��λ�ļ�ָ��
    fseek(pf, 2, SEEK_SET);
    int ch = fgetc(pf);   
    printf("%c\n", ch);
    // fell �����ļ�λ�õ�ƫ����
    printf("%d\n", ftell(pf));

    /*
    5.3 rewind
���ļ�ָ���λ�ûص��ļ�����ʼλ��
void rewind ( FILE * stream );
    */


    fseek(pf, 2, SEEK_CUR);
    ch = fgetc(pf);    
    printf("%c\n", ch);

   /* fseek(pf, -1, SEEK_END);
    ch = fgetc(pf);
    printf("%c\n", ch);*/
    // �ر��ļ�
    fclose(pf);
    pf = NULL;

    return 0;
}





int main14()
{
    int a = 10000;
    FILE* pf = fopen("test3.txt", "wb");
    fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
    fclose(pf);
    pf = NULL;
    return 0;
}










/*
7.1 ������ʹ�õ�feof
�μǣ����ļ���ȡ�����У�������feof�����ķ���ֱֵ�������ж��ļ����Ƿ������
����Ӧ���ڵ��ļ���ȡ������ʱ���ж��Ƕ�ȡʧ�ܽ��������������ļ�β������
1. �ı��ļ���ȡ�Ƿ�������жϷ���ֵ�Ƿ�Ϊ EOF �� fgetc �������� NULL �� fgets ��
���磺
fgetc �ж��Ƿ�Ϊ EOF .
fgets �жϷ���ֵ�Ƿ�Ϊ NULL .
2. �������ļ��Ķ�ȡ�����жϣ��жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����
���磺
fread�жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����
*/






int main15(void)
{
    int c; // ע�⣺int����char��Ҫ����EOF
    FILE* fp = fopen("test4.txt", "r");
    if (!fp) {
        perror("File opening failed");
        return EXIT_FAILURE;
    }
    //fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
    while ((c = fgetc(fp)) != EOF) // ��׼C I/O��ȡ�ļ�ѭ��
    {
        putchar(c);
    }
    //�ж���ʲôԭ�������
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
    FILE* fp = fopen("test.bin", "wb"); // �����ö�����ģʽ
    fwrite(a, sizeof * a, SIZE, fp); // д double ������
    fclose(fp);
    double b[SIZE];
    fp = fopen("test.bin", "rb");
    size_t ret_code = fread(b, sizeof * b, SIZE, fp); // �� double ������
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
    fputs("abcdef", pf);//�Ƚ�����������������
    printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
    Sleep(10000);
    printf("ˢ�»�����\n");
    fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
    //ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
    printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
    Sleep(10000);
    fclose(pf);
    //ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
    pf = NULL;
    return 0;
}

















/*
8. �ļ�������
ANSIC ��׼���á������ļ�ϵͳ������������ļ��ģ���ν�����ļ�ϵͳ��ָϵͳ�Զ������ڴ���Ϊ����
��ÿһ������ʹ�õ��ļ�����һ�顰�ļ��������������ڴ������������ݻ����͵��ڴ��еĻ�������װ
�����������һ���͵������ϡ�����Ӵ����������������ݣ���Ӵ����ļ��ж�ȡ�������뵽�ڴ滺
��������������������Ȼ���ٴӻ���������ؽ������͵���������������������ȣ����������Ĵ�С��
��C����ϵͳ�����ġ�

������Եó�һ�����ۣ�
��Ϊ�л������Ĵ��ڣ�C�����ڲ����ļ���ʱ����Ҫ��ˢ�»������������ļ�����������ʱ��ر���
����
������������ܵ��¶�д�ļ������⡣
*/