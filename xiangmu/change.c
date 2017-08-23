#include<stdio.h>
#include"change.h"
#include"stu.h"
#include<string.h>
#include"zhujiemian.h"
int Change(int j)
{	Stu s[100]={};	
	FILE *fp=fopen("a.txt","r");
	if(fp==NULL)
	{
		printf("打开文件失败\n");
		return -1;
	}
	for(int i=0;i<100;i++)
	{
		fread(&s[i],sizeof(Stu),1,fp);
	}fclose(fp);
	FILE *fp1=fopen("a.txt","w");
	if(fp1==NULL)
	{
		printf("打开文件失败\n");
		return -1;
	}
	char yuanmima[24];
	char xinmima[24];
	printf("请输入新密码\n");
	scanf("%s",xinmima);
	strcpy(s[j].mima,xinmima);
	for(int i=0;i<100;i++)
	{
		fwrite(&s[i],sizeof(Stu),1,fp1);	
	}
		fclose(fp1);
	int choice=0;
	printf("按1键返回\n");
	printf("%s",s[j].mima);
	scanf("%d",&choice);
	if(choice==1)
	{
		Zhujiemian(j);	
	}
	
}
