#include"txl.h"

int kan(struct ps* s)
{
	printf("请输入要操作的名字:>");
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
	s->size = 0;//设置通讯录最初元素为0
	
}
void Contacttj(struct ps* s)
{
	if (s->size == MAX) 
	{
		printf("通讯录已经满了");
	}
	else
	{
		printf("请输入名字：>\n");
		scanf("%s", s->renshu[s->size].name);
		printf("请输入年龄：>\n");
		scanf("%d", &(s->renshu[s->size].age));
		printf("请输入性别：>\n");
		scanf("%s", s->renshu[s->size].sex);
		printf("请输入电话：>\n");
		scanf("%s", s->renshu[s->size].dianhua);
		printf("请输入地址：>\n");
		scanf("%s", s->renshu[s->size].dizi);
		s->size++;
		printf("添加成功\n");
	}
}
void Contactck(const struct ps* s)
{
	if (s->size == 0)
		printf("通讯录为空\n");
	else
	{
		int i = 0;
		printf("%-5s\t%-4s\t%-5s\t%-12s\t%-20s\n","名字","年龄","性别","电话","地址");
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
		printf("删除对象不存在\n");
	}
	else
	{
		int j = i;
		for (j = i; j < (s->size) - 1; i++)
		{
			s->renshu[j] = s->renshu[j + 1];
		}
		s->size--;
		printf("删除成功\n");
	}
}
void Contactxg(struct ps* s)
{
	int i = kan(s);
	if (i == s->size)
	{
		printf("操作对象不存在\n");
	}
	else
	{
		printf("请输入名字：>\n");
		scanf("%s", s->renshu[i].name);
		printf("请输入年龄：>\n");
		scanf("%d", &(s->renshu[i].age));
		printf("请输入性别：>\n");
		scanf("%s", s->renshu[i].sex);
		printf("请输入电话：>\n");
		scanf("%s", s->renshu[i].dianhua);
		printf("请输入地址：>\n");
		scanf("%s", s->renshu[i].dizi);
		printf("修改成功\n");
	}
}
void Contactcz(const struct ps* s)
{
	int i = kan(s);
	if (i == s->size)
	{
		printf("操作对象不存在\n");
	}
	else
	{
		printf("%-5s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-5s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				s->renshu[i].name,
				s->renshu[i].age,
				s->renshu[i].sex,
				s->renshu[i].dianhua,
				s->renshu[i].dizi);
	}
}