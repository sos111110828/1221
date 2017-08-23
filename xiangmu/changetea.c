#include<stdio.h>
#include<stdlib.h>
#include"changetea.h"
#include<string.h>
#include<stdlib.h>
#include"teacherwindow.h"
void changeteacher(int l)
{
	system("clear");
    typedef struct teacher
	{
		char id[10];
		char name[10];
		char password[24];
		char classid[10];
	}tea;
	FILE * fp=fopen("teacher.txt","r+");
//	if(fp==NULL)
//	{
//		printf("打开文件异常！\n");
//		return -1;
///	}
	tea t[100]={};
	for(int i=0;i<100;i++)
	{
	fread(&t[i],sizeof(tea),1,fp);
	}
	char str[10]={};
	printf("qingshurumima \n");
	scanf("%s",str);
    strcpy(t[l].password,str);
	fseek(fp,(l)*sizeof(tea),SEEK_SET);
	fwrite(&t[l],sizeof(tea),1,fp);
	fclose(fp);
	printf("任意建返回------返回\n");
	char cNum=0;
	scanf("%s",&cNum);
	teacher(l);

}
