#include<stdio.h>
#include"delstu1.h"
#include<string.h>
#include<stdlib.h>
#include"teacherwindow.h"
void delstu(int l)
{
	system("clear");
    typedef struct student
	{
		char id[24];
		char mima[24];
		char name[24];
		char class[24];
	    char sex[24];
		int chinese;
		int math;
		int english;
		int zhengzhi;
	}Stu;
	printf("1-------删除全部信息\n");
	printf("2-------删除单个学生信息\n");
	printf("其他键-------返回\n");
	char cNum='0';
	scanf("%s",&cNum);
	while(1)
	{
		if(cNum=='1')
		{
            FILE * fp=fopen("a.txt","w");
			fclose(fp);
			printf("删除完毕！\n");
			break;
		}else if(cNum=='2')
		{
	
/*	if(fp==NULL)
	{
		ptintf("打开文件异常！\n");
}*/
    FILE * fp=fopen("a.txt","r+");
    char str[24]={},name1[24]={},class1[24]={},sex1[24]={},mima1[24]={};
	int chinese1=0,math1=0,english1=0,zhengzhi1=0;
    printf("请输入学号");
	scanf("%s",str);
	Stu s[100]={};
	int i=0;
	for(i=0;i<100;i++)
	{
	fread(&s[i],sizeof(Stu),1,fp);
    }
	for(i=0;i<100;i++)
	{
    if(strcmp(str,s[i].id)==0)
	{
		strcpy(s[i].id,"\0");
		strcpy(s[i].name,name1);
		strcpy(s[i].class,class1);
		strcpy(s[i].sex,sex1);
		s[i].chinese=chinese1;
		s[i].math=math1;
		s[i].english=english1;
		s[i].zhengzhi=zhengzhi1;
		fseek(fp,i*sizeof(Stu),SEEK_SET);
		fwrite(&s[i],sizeof(Stu),1,fp);
		break;
	}
	}
	fclose(fp);
	if(i>=100)
	{
		printf("没有这个学生\n");
	}
		}else{
			teacher(l);
		}
		char cNum1='0';
		printf("是否继续删除?\n1------继续\n其他键------返回\n");
		while(1)
		{
		    scanf("%s",&cNum1);
			if(cNum1=='1')
			{
				delstu(l);
			}else{
				teacher(l);
			}
			
		}
 }
}
