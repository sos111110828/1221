#include<stdio.h>
#include"denglujiemian.h"
#include"stu.h"
#include<string.h>
#include"zhujiemian.h"
#include"loadfile.h"
#include<stdlib.h>
#include"menu.h"
int Studentlogin()
{	Stu s1[100]={};int choice=0;
	char zhanghao[24]={};char mima[24]={};
	int sum=Loadfile(s1,100);//读取学生数据
	while(1)
	{	int sun=Loadfile(s1,100);
		system("clear");	
		printf("请输入你的选择\n1.返回主界面\n2.登录\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:showmenu();
			break;
			case 2:
			printf("请输入用户名和密码\n");
			scanf("%s",zhanghao);
			scanf("%s",mima);
			int flag=0;
			int j=0;
			for(j=0;j<sum;j++)
			{	
				if(strcmp(s1[j].id,zhanghao)==0&&strcmp(s1[j].mima,mima)==0)
				{	
					flag=1;break;
				}
			}
			if(flag==1)
			{
				printf("登录成功\n");
				Zhujiemian(j);
			}else
			{
				printf("帐号或者密码错误");	
			}
		}
	}	
}
