#include"txl.h"

int kan(struct ps* s)
{
	printf("������Ҫ����������:>");
	char a[MAX_NAME];
	scanf("%s", a);
	int i = 0;
	for (i = 0; i < s->size; i++)
	{
		if (strcmp(s->renshu[i].name, a) == 0)
		{
			break;
		}
	}
	return i;
}
void Contacth(struct ps* s)
{
	memset(s->renshu, 0, sizeof(s->renshu));
	s->size = 0;//����ͨѶ¼���Ԫ��Ϊ0
	
}
void Contacttj(struct ps* s)
{
	if (s->size == MAX) 
	{
		printf("ͨѶ¼�Ѿ�����");
	}
	else
	{
		printf("���������֣�>\n");
		scanf("%s", s->renshu[s->size].name);
		printf("���������䣺>\n");
		scanf("%d", &(s->renshu[s->size].age));
		printf("�������Ա�>\n");
		scanf("%s", s->renshu[s->size].sex);
		printf("������绰��>\n");
		scanf("%s", s->renshu[s->size].dianhua);
		printf("�������ַ��>\n");
		scanf("%s", s->renshu[s->size].dizi);
		s->size++;
		printf("��ӳɹ�\n");
	}
}
void Contactck(const struct ps* s)
{
	if (s->size == 0)
		printf("ͨѶ¼Ϊ��\n");
	else
	{
		int i = 0;
		printf("%-5s\t%-4s\t%-5s\t%-12s\t%-20s\n","����","����","�Ա�","�绰","��ַ");
		for (i = 0; i < s->size; i++)
		{
			printf("%-5s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				s->renshu[i].name,
				s->renshu[i].age,
				s->renshu[i].sex,
				s->renshu[i].dianhua,
				s->renshu[i].dizi);
		}
	}
}
void Contactsc(struct ps* s)
{
	
	int i=kan(s);
	if (i == s->size) {
		printf("ɾ�����󲻴���\n");
	}
	else
	{
		int j = i;
		for (j = i; j < (s->size) - 1; i++)
		{
			s->renshu[j] = s->renshu[j + 1];
		}
		s->size--;
		printf("ɾ���ɹ�\n");
	}
}
void Contactxg(struct ps* s)
{
	int i = kan(s);
	if (i == s->size)
	{
		printf("�������󲻴���\n");
	}
	else
	{
		printf("���������֣�>\n");
		scanf("%s", s->renshu[i].name);
		printf("���������䣺>\n");
		scanf("%d", &(s->renshu[i].age));
		printf("�������Ա�>\n");
		scanf("%s", s->renshu[i].sex);
		printf("������绰��>\n");
		scanf("%s", s->renshu[i].dianhua);
		printf("�������ַ��>\n");
		scanf("%s", s->renshu[i].dizi);
		printf("�޸ĳɹ�\n");
	}
}
void Contactcz(const struct ps* s)
{
	int i = kan(s);
	if (i == s->size)
	{
		printf("�������󲻴���\n");
	}
	else
	{
		printf("%-5s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-5s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				s->renshu[i].name,
				s->renshu[i].age,
				s->renshu[i].sex,
				s->renshu[i].dianhua,
				s->renshu[i].dizi);
	}
}