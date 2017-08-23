#include<stdio.h>
#include<stdlib.h>
#include"addstu1.h"
#include"teacherwindow.h"
#include<string.h>
void addstu(int l)
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

	FILE * fp=fopen("a.txt","a+");
    if(fp==NULL)
	{
		printf("打开文件失败!\n");
		exit(0);
	}
	Stu s={};
	Stu k[100]={};
	for(int i=0;i<100;i++)
    {
	fread(&k[i],sizeof(Stu),1,fp);
	}
	    printf("学生学号:\n");
    	scanf("%s",s.id);
		for(int i=0;i<100;i++)
		{
			if(strcmp(k[i].id,s.id)==0)
			{
				printf("已经有此学生学号\n");
				fclose(fp);
				char cj='0';
				while(1)
				{
					printf("是否重新添加？\n");
					printf("1-------继续添加\n");
					printf("0-------返回上一级\n");
					scanf("%s",&cj);
					if(cj=='1')
					{
						addstu(l);
					}
					if(cj=='0')
					{
						teacher(l);
					}
					printf("请规范输入！\n");
				}
			}
		}
	    printf("学生密码:\n");
		scanf("%s",s.mima);
		printf("学生姓名:\n");
		scanf("%s",s.name);
		printf("学生班级:\n");
		scanf("%s",s.banji);
		printf("学生性别:\n");
		scanf("%s",s.sex);
		printf("语文成绩:\n");
		scanf("%d",&s.chinese);
		printf("数学成绩:\n");
		scanf("%d",&s.math);
		printf("英语成绩:\n");
		scanf("%d",&s.english);
		printf("政治成绩:\n");
		scanf("%d",&s.zhengzhi);
		fwrite(&s,sizeof(Stu),1,fp);
    	fclose(fp);
		fp=NULL;

		teacher(l);

	
}
