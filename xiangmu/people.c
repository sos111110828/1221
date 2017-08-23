#include<stdio.h>
#include<stdlib.h>
#include "people.h"
#include<string.h>
#include "menu.h"
void add_tea()
{
	tea t = {};
	FILE *fp = fopen("teacher.txt","a");	
	if(fp==NULL)
	{
		printf("打开文件异常\n");
	}
	tea t1[50] = {};
	for(int i=0;i<50;i++)
	{
		fread(&t1[i],sizeof(tea),1,fp);
	}
//	fclose(fp);
//	FILE *fp1 =  fopen("teacher.txt",w);
	printf("请输入教师的姓名，教师序号，登录密码，任教班级\n");
	scanf("%s %s %s %s",t.name,t.id,t.password,t.classid);
/*	for(int i=0;i<50;i++)
	{	
		if(strcmp(t1[i].id,t.id)==0)
		{
			printf("你输入的老师以存在，请重新选择输入界面\n");break;			
		}else 
		{		
			printf("添加成功\n");break;
		}
	}*/
	fwrite(&t,sizeof(tea),1,fp);
	fclose(fp);
	fp = NULL;
    tea_menu();
	system("clear");
}

void change_tea()
{	
	tea t[50] = {};
	FILE *fp = fopen("teacher.txt","r+");
	if(fp==NULL)
	{
		printf("打开文件异常");
	}
	for(int i=0;i<50;i++)
	{
		fread(&t[i],sizeof(tea),1,fp);
	}
//	fclose(fp);
//	FILE *fp1=fopen("teacher.txt","w");
	printf("请输入要修改老师的序号");
	char name[10];
	char id[10];
	char password[24];
	char classid[10];
	scanf("%s",id);	
    for(int i=0;i<50;i++)
	{
		if(strcmp(t[i].id,id)==0)
		{
	         printf("请输入修该后教师的姓名，教师序号，登录密码，任教班级\n");
	         scanf("%s %s %s %s",name,id,password,classid);
			 strcpy(t[i].name,name);
			 strcpy(t[i].id,id);
			 strcpy(t[i].password,password);
			 strcpy(t[i].classid,classid);
			 fseek(fp,(i)*sizeof(tea),SEEK_SET);
			 fwrite(&t[i],sizeof(tea),1,fp);
			 break;
		}
	}
	fclose(fp);
    tea_menu();
	system("clear");
}


void delete_tea()
{	
	tea t[50] = {};
	FILE *fp = fopen("teacher.txt","r+");
	if(fp==NULL)
	{
		printf("打开文件异常");
	}
	for(int i=0;i<50;i++)
	{
		fread(&t[i],sizeof(tea),1,fp);
	}
//	fclose(fp);
//	FILE *fp1=fopen("teacher.txt","w");
	printf("请输入要删除的老师的序号");
	char name[10] = {};
	char id[10] = {};
	char password[24] = {};
	char classid[10] = {};
	scanf("%s",id);	
    for(int i=0;i<50;i++)
	{
		if(strcmp(t[i].id,id)==0)
		{
	        // printf("请输入修该后教师的姓名，教师序号，登录密码，任教班级\n");
	        //scanf("%s %s %s %s",name,id,password,classid);
			 strcpy(t[i].name,name);
			 strcpy(t[i].id,"");
			 strcpy(t[i].password,password);
			 strcpy(t[i].classid,classid);
			 fseek(fp,(i)*sizeof(tea),SEEK_SET);
			 fwrite(&t[i],sizeof(tea),1,fp);
			 break;
		}
	}
	fclose(fp);
    tea_menu();
	system("clear");
}


void print_tea()
{
	tea t[50] = {};
	FILE *fp = fopen("teacher.txt","r");
	if(fp==NULL)
	{
		printf("打开文件异常");	
	}
	for(int i=0;i<50;i++)
	{
		fread(&t[i],sizeof(tea),1,fp);
	}
	fclose(fp);
	fp = NULL;
	printf("请输入要查询的教师序号:");
	char id[24] ;
	scanf("%s",id);
	for(int i=0;i<50;i++)
	{
		if(strcmp(t[i].id,id)==0)
		{
			printf("\t\t教师序号:%s\n",t[i].id);
			printf("\t\t教师姓名:%s\n",t[i].name);
			printf("\t\t登录密码:%s\n",t[i].password);
			printf("\t\t任课班级:%s\n",t[i].classid);
		}
	}
    tea_menu();
	system("clear");
}
void printall_tea()
{
	tea t[50] = {};
	FILE *fp = fopen("teacher.txt","r");
	if(fp==NULL)
	{
		printf("打开文件异常");	
	}
	for(int i=0;i<50;i++)
	{
		fread(&t[i],sizeof(tea),1,fp);
	}
	fclose(fp);
	fp = NULL;
//	printf("请输入要查询的教师序号:");
	printf("\t\t所有老师的信息:\n");
	for(int i=0;i<50;i++)
	{	
		if(strcmp(t[i].id,"\0"))
		{		
			printf("\t\t教师序号:%s\n",t[i].id);	
			printf("\t\t教师姓名:%s\n",t[i].name);
			printf("\t\t登录密码:%s\n",t[i].password);
			printf("\t\t任课班级:%s\n",t[i].classid);
			printf("\n");
		}	
	}
	tea_menu();
	system("clear");
}
