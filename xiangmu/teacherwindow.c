#include<stdio.h>
#include<stdlib.h>
#include"teacherwindow.h"
#include"lookstu2.h"
#include"addstu1.h"
#include"lookstu3.h"
#include"delstu1.h"
#include"changestu1.h"
#include"changetea.h"
#include"looktea.h"
#include"teacherdr1.h"
void teacher(int l)//教师增删改查界面
{
	system("clear");
	printf("***教师操作界面****\n");
	printf("1----- 查看教师信息\n");
	printf("2----- 修改教师密码\n");
	printf("3----- 增加学生信息\n");
	printf("4----- 删除学生信息\n");
	printf("5----- 修改学生信息\n");
	printf("6----- 查询学生信息\n");
	printf("7----- 查看所有学生信息\n");
	printf("0----- 返回        \n");
	printf("*******************\n");
	char iteacherxz='0';
	scanf("%s",&iteacherxz);
	while(1)
	{

		switch(iteacherxz)
		{
          	case '1':
	    	lookteacher(l);break;
	    	case '2':
	    	changeteacher(l);break;
			case '3':
			addstu(l);break;
			case '4':
			delstu(l);break;
			case '5':
			changestu(l);break;
			case '6':
			lookstu(l);break;
			case '7':
			allstu(l);break;
	    	case '0':
	     	teacherdr(l);break;
			default:teacher(l);break;
		}
	}

}
