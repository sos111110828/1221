#include<stdio.h>
#include"stu.h"
#include"loadfile.h"
int Loadfile(Stu *s2,int ilen)
{	
	FILE *fp=fopen("a.txt","r");
	if(fp==NULL)
	{
		printf("打开文件失败");
		return -1;
	}
	int sum=0;
	for(int i=0;i<ilen;i++)
	{
		int flag=fread(s2+i,sizeof(Stu),1,fp);
		if(flag==0)
		{
			break;	
		}else
		{
			sum++;	
		}
	}fclose(fp);
	return sum;	
}
