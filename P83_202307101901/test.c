#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>




/* �ṹ�� */

//��������һ��ѧ����
typedef struct Stu
{
	char name[20];//����
	int age;//����
	char sex[5];//�Ա�
	char id[20];//ѧ��
}Stu;//�ֺŲ��ܶ�





////��
//struct peo
//{
//	char name[20];//����
//	int age;//����
//	char sex[5];//�Ա�
//	char id[20];//ѧ��
//}p1,p2; //p1,p2������ȫ�ֵĽṹ�����
//
//
//




struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int hight;
};



struct St
{
	struct Peo p;
	int num;
	float f;
};

void print1(struct Peo sp)
{
	printf("%s %s %s %d\n", sp.name, sp.tele, sp.sex, sp.hight);
}

void print2(struct Peo* sp)
{
	printf("%s %s %s %d\n", sp->name,sp->tele ,sp->sex, sp->hight);
}


int main1()
{
	/*BIT - 7 - �ṹ��
		�ṹ�����͵�����
		�ṹ���ʼ��
		�ṹ���Ա����
		�ṹ�崫��*/

	//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա������
	//�ṹ��ÿ����Ա�����ǲ�ͬ���͵ı�����

	// �ṹ���������
	struct Peo p1 = { "����","19502707900","��",180 };
	struct St s = { { "lisa","19502707800","Ů",166 },100,3.14f };

	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.hight);
	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.hight, s.num, s.f);
	
	print1(p1);

	print2(&p1);
	
	return 0;
}






/* �ṹ�崫�� */

struct S
{
	int data[1000];
	int num;
};
struct S s = { {1,2,3,4}, 1000 };
//�ṹ�崫��
void print3(struct S s)
{
	printf("%d\n", s.num);
}
//�ṹ���ַ����
void print4(struct S* ps)
{
	printf("%d\n", ps->num);
}
int main2()
{
	print3(s);  //���ṹ��
	print4(&s); //����ַ
	return 0;
}

/*����� print3 �� print4 �����ĸ���Щ��
���ǣ���ѡprint4������
ԭ��
�������ε�ʱ�򣬲�������Ҫѹջ�ġ�
�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ�ĵ�ϵͳ����
�Ƚϴ����Իᵼ�����ܵ�
�½���
���ۣ�
�ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ��*/