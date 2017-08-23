#include<stdio.h>
#include<stdlib.h>
#include"looktea.h"
#include<string.h>
#include<stdlib.h>
#include"teacherwindow.h"
void lookteacher(int l)
{
	system("clear");
    typedef struct teacher
	{
		char id[10];
		char name[10];
		char password[24];
		char classid[10];
	}tea;
	FILE * fp=fopen("teacher.txt","r");
//	if(fp==NULL)
//	{
//		printf("打开文件异常！\n");
//		return -1;
//	}
	tea t[100]={};
	for(int i=0;i<100;i++)
	{
	fread(&t[i],sizeof(tea),1,fp);
	}
//	char str[10]={};
//	printf("请输入ID");
//	scanf("%s",str);
//	int i=0;
//	for(i=0;i<100;i++)
//	{
//		if(strcmp(str,t[i].id)==0)
		{
	    printf("ID:%s\n 姓名:%s\n 密码:%s\n 任教班级:%s\n",t[l].id,t[l].name,t[l].password,t[l].classid);
	//	break;
		}
//	}
	fclose(fp);
	printf("0------返回\n");
	while(1)
	{
	char cNum='0';
	scanf("%s",&cNum);
	if(cNum=='0')
	{
	teacher(l);
	}
	printf("请规范输入！\n");
	}
}
