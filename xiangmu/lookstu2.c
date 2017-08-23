#include<stdio.h>
#include"lookstu2.h"
#include<string.h>
#include<stdlib.h>
#include"teacherwindow.h"
void lookstu(int l)
{
	system("clear");
    typedef struct student
	{
		char id[24];
		char mima[24];
		char name[24];
		char banji[24];
		char sex[24];
		int chinese;
		int math;
		int english;
		int zhengzhi;
	}Stu;
	FILE * fp=fopen("a.txt","r");
/*	if(fp==NULL)
	{
		ptintf("打开文件异常！\n");
		return -1;
	}*/
	Stu s[100]={};
	for(int i=0;i<100;i++)
	{
	fread(&s[i],sizeof(Stu),1,fp);
	}
	char str[10]={};
	printf("请输入学号");
	scanf("%s",str);
	int i=0;
	for(i=0;i<100;i++)
	{
		if(strcmp(str,s[i].id)==0)
		{
	    	 printf("学号:%s\n 姓名:%s\n 班级:%s\n 性别:%s\n 语文:%d\n 数字:%d\n 英语:%d\n 政治:%d\n",s[i].id,s[i].name,s[i].banji,s[i].sex,s[i].chinese,s[i].math,s[i].english,s[i].zhengzhi);
		break;
		}
	}
	fclose(fp);
	if(i>=100)
	{
		printf("没有这个学生\n");

    }
	printf("是否继续查询\n其他键-----继续\n0-----返回\n");
	while(1)
	{
	char cNum='0';
	scanf("%s",&cNum);
	if(cNum=='0')
	{
		teacher(l);
	}else{
		lookstu(l);
	}
	}



}
