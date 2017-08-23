#include<stdio.h>
#include"lookstu3.h"
#include<string.h>
#include<stdlib.h>
#include"teacherwindow.h"
void allstu(int l)
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
	int i=0;
	for(i=0;i<100;i++)
	{
		if(strcmp(s[i].id,"\0")!=0)
		{
	    printf("学号:%s 姓名:%s 班级:%s 性别:%s 语文:%d 数学:%d 英语:%d 政治:%d\n",s[i].id,s[i].name,s[i].banji,s[i].sex,s[i].chinese,s[i].math,s[i].english,s[i].zhengzhi);
        }
	}
/*	for(int i=0;i<100;i++)
	{
	    printf("学号:%s\n 姓名:%s\n 班级:%s\n 性别:%s\n 语文:%d\n 数字:%d\n 英语:%d\n 政治:%d\n",s[i].id,s[i].name,s[i].banji,s[i].sex,s[i].chinese,s[i].math,s[i].english,s[i].zhengzhi);
		
	}*/
	fclose(fp);
	printf("任意建-----返回\n");
	char cNum='0';
	scanf("%s",&cNum);
			teacher(l);
}
