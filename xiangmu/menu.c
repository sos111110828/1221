#include<stdio.h>
#include<stdlib.h>
#include"teacherdr1.h"
#include "people.h"
#include<string.h>
#include "denglujiemian.h"
void showmenu();
void login();
void tea_menu();


void tea_menu()
{
//	system("clear");
	printf("\t\t********************************************\n");
	printf("\t\t*--------------1-增加老师信息--------------*\n");
	printf("\t\t*--------------2-删除老师信息--------------*\n");
	printf("\t\t*--------------3-修改老师信息--------------*\n");
	printf("\t\t*--------------4-查询老师信息--------------*\n");
	printf("\t\t*--------------5-查看所有老师信息----------*\n");
	printf("\t\t*--------------0-返回主界面--------------*\n");
	printf("\t\t********************************************\n");
	int i = 0;
	printf("\t\t请输入:");
	scanf("%d",&i);
	switch(i)
	{
		case 0: showmenu();break;
		case 1: add_tea();break;
		case 2: delete_tea();break;
		case 3: change_tea();break;	
		case 4: print_tea();break;
		case 5: printall_tea();break;
	}
	
}

void login()
{
	system("clear");
	adm a = {};
	char str[24] = "admin";
	strcpy(a.name,str);
	strcpy(a.password,str);
	char str1[24] = {};
	printf("\t\t**********登录界面***********\n");
	printf("\t\t请输入用户名:");
	scanf("%s",str1);
	char str2[24] = {};
	printf("\t\t请输入密码:");
	scanf("%s",str2);
	if(strcmp(str1,a.name)==0)
	{
		if(strcmp(str2,a.password)==0)
		{
			printf("\t\t登录成功\n");	
			tea_menu();
		}
	}	
	printf("\t\t登录失败,请重新登录\n");
	printf("\t\t********************************************\n");
	printf("\t\t*--------------1返回登录界面--------------*\n");
	printf("\t\t*--------------0返回主菜单----------------*\n");
	printf("\t\t********************************************\n");
	printf("\t\t请输入:");
	int i;
	scanf("%d",&i);
	switch(i)
	{
		case 1:login();break;
		case 0:showmenu();break;
	}
	
}

void showmenu()
{
	system("clear");
	printf("\t\t******************主菜单****************\n");
	printf("\t\t*--------------1-学生登录--------------*\n");
	printf("\t\t*--------------2-教师登录--------------*\n");
	printf("\t\t*--------------3-管理员登录------------*\n");
	printf("\t\t*--------------0-退出------------------*\n");
	printf("\t\t****************************************\n");
	char usr;
	printf("\t\t请输入:");
	usr = getchar();
	if('0'==usr)
	{
		exit(0);	
	}
	if(usr!='1'&&usr!='2'&&usr!='3')
	{
		system("clear");
		printf("\t\t\t请重新输入!\n");
//		printf("\t\t\t输入回车键继续：");
//		getchar();
		showmenu();
	}
	system("clear");
	printf("\n\n\n\n");
	switch(usr)
	{
		case '1':Studentlogin();break;
		case '2':teacherdr();break;
		case '3':printf("\t\t**************************\n");
			     printf("\t\t*--------0-返回----------*\n");
			     printf("\t\t*--------1-登录----------*\n");
			     printf("\t\t**************************\n");
			   int n;
			   printf("请输入:");
			   scanf("%d",&n);
	           if(n==1) 
			   {
			  	 login();break;
			   }else{
				showmenu();	   
			  }
		     /*  switch(n)
			   {
			   	   case '0':main();break;
				  // case '1':num = read_file(usr);加载文件
					//login(num,usr);break;//登录
					default:
						printf("请重新输入!\n");
						printf("输入回车键继续\n");
						getchar();
			 			main();
			  			break;
			   }
				break;*/
	}
}
