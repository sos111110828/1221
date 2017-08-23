#include<stdio.h>
#include"changestu1.h"
#include<stdlib.h>
#include<string.h>
#include"teacherwindow.h"
void changestu(int l)
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
	FILE * fp=fopen("a.txt","r+");
/*	if(fp==NULL)
	{
		ptintf("打开文件异常！\n");
}*/
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
		
	//	printf("学生密码:\n");
	//	scanf("%s",mima1);
		printf("学生姓名:\n");
		scanf("%s",name1);
		printf("学生班级:\n");
		scanf("%s",class1);
		printf("学生性别:\n");
		scanf("%s",sex1);
		printf("语文成绩:\n");
		scanf("%d",&chinese1);
		printf("数学成绩:\n");
		scanf("%d",&math1);
		printf("英语成绩:\n");
		scanf("%d",&english1);
		printf("政治成绩:\n");
		scanf("%d",&zhengzhi1);
	//	strcpy(s[i].mima,mima1);
		strcpy(s[i].name,name1);
		strcpy(s[i].class,class1);
		strcpy(s[i].sex,sex1);
        s[i].chinese=chinese1;
		s[i].math=math1;
		s[i].english=english1;
		s[i].zhengzhi=zhengzhi1;

    	fseek(fp,(i)*sizeof(Stu),SEEK_SET);
		fwrite(&s[i],sizeof(Stu),1,fp);
		
		break;
		



	}
	}
	fclose(fp);
	if(i>=100)
	{
		printf("没有这个学生\n");
	}
	printf("1------继续修改\n0-----返回\n");
	while(1)
	{
	char cNum='0';
	scanf("%s",&cNum);
	if(cNum=='0')
	{
	teacher(l);
	}else if(cNum=='1')
	{
		changestu(l);
	}
	system("clear");
	printf("1------继续修改\n0-----返回\n");
    printf("请规范输入！\n");
	

	}
	
	       
		   

}

