#include"txl.h"


void mom()
{
	printf("***************************************\n");
	printf("*****    1.���          2.ɾ��   *****\n");
	printf("*****    3.�޸�          4.����   *****\n");
	printf("*****    5.�鿴          0.�˳�   *****\n");
	printf("***************************************\n");
	printf("***************************************\n");
}
        
int main()
{
	int p= 1;
	struct ps con;
	Contacth(&con);
	do
	{
		mom();
		int input = 0;
		scanf("%d", &input);
		switch (input)
		{
		case tianjia:
			Contacttj(&con);
			break;
		case shanchu:
			Contactsc(&con);
			break;
		case xiugai:
			Contactxg(&con);
			break;
		case chazhao:
			Contactcz(&con);
			break;
		case chakan:
			Contactck(&con);
			break;
		case tuichu:
			printf("�˳��ɹ�");
			p = 0;
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (p);
	return 0;
}