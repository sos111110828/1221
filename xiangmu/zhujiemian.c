#include<stdio.h>
#include"zhujiemian.h"
#include<stdlib.h>
#include"stu.h"
#include"loadfile.h"
#include"message.h"
#include"score.h"
#include"change.h"
#include"denglujiemian.h"
int  Zhujiemian(int j)
{	int choice=0;
	system("clear");
	printf("1.查看个人信息\n");
	printf("2.查看个人成绩\n");
	printf("3.修改登录密码\n");
	printf("4.返回登录界面\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:Message(j);
		break;
		case 2:Score(j);
		break;
		case 3:Change(j);
		break;
		case 4:return 1;
		break;
	}
}
