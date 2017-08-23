#include<stdio.h>
#include"teacherdr1.h"
#include<stdlib.h>
#include"teacherwindow.h"
#include<string.h>
#include"menu.h"
void  teacherdr()
{
	system("clear");
	printf("***教师登入****\n");
	printf("教师帐号\n");
	printf("教师密码\n");
	printf("***************\n");
	typedef struct teacher
	{
		char name[10];
		char id[10];
		char password[24];
		char classid[10];
	}tea;
	FILE * fp =fopen("teacher.txt","r");
/*	if(fp==NULL)
	{
		printf("读取异常\n");
		exit(0);
	}*/
	tea t[30]={};
	int i=0;
	for(i=0;i<30;i++)
	{
		fread(&t[i],sizeof(tea),1,fp);
	}
	char id1[24]={};
	char password1[24]={};
    printf("请输入帐号");
	scanf("%s",id1);
	printf("请输入密码");
	scanf("%s",password1);
	for(i=0;i<30;i++)
	{
		if(strcmp(t[i].id,id1)==0&&strcmp(t[i].password,password1)==0)
		{
			fclose(fp);
			int l=i;
			teacher(l);
		}
	}
		printf("登入失败\n");
	fclose(fp);
	char xz='0';
	while(1)
	{
		printf("是否返回主程序？\n0-----返回\n其他键------重新登入\n");
		scanf("%s",&xz);
		if(xz=='0')
		{
			showmenu();
		}else{
			teacherdr();
		}
		printf("请规范输入！\n");
	}
}
