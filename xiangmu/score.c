#include<stdio.h>
#include"score.h"
#include"stu.h"
#include"loadfile.h"
#include"zhujiemian.h"
int Score(int j)
{	Stu s4[100]={};
	int choice;
	Loadfile(s4,100);
	printf("语文:%d 数学:%d 英语:%d 政治:%d\n",s4[j].chinese,s4[j].math,s4[j].english,s4[j].zhengzhi);
	printf("按1键返回\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		Zhujiemian(j);
	}	
}
