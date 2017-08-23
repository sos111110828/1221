#include<stdio.h>
#include"stu.h"
#include"message.h"
#include<stdlib.h>
#include"loadfile.h"
#include"zhujiemian.h"
int Message(int j)
{	system("clear");
	Stu s3[100]={};int choice=0;
	Loadfile(s3,100);
	printf("%s:%s:%s",s3[j].name,s3[j].sex,s3[j].banji);//显示名字，性别，，班级
	printf("按1键返回\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		Zhujiemian(j);	
	}
}
