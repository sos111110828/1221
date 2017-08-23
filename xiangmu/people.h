#ifndef PEOPLE_H_
#define PEOPLE_H_
typedef struct teacher
{
	char name[10];//教师名字
	char  id[10];//教师序号
	char password[24];//教师登录密码
	char classid[10];//教师任教班级
}tea;
typedef struct admin
{
	char name[10];//管理员登录名字
	char password[24];//管理员登录密码
}adm;
void add_tea();
void print_tea();
void delete_tea();
void change_tea();
void printall_tea();
#endif
