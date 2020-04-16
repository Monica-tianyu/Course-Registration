#include"data.h"
#include<iostream>


using namespace std;


int main()
{	
	
	Login();
	return 0;
}

void choice1()
{
	cout << "菜单栏：" << endl;
	cout << "===================================================================================" << endl;
	cout << "1.录入课程 2.增加课程 3.删除课程 4.修改课程 5.查看全部课程 6.查看具体课程 7.退出" << endl;
	cout << "===================================================================================" << endl;


	cout << "请选择操作：";
	int n;
	cin >> n;
	if (n == 1)
		Input();
	if (n == 2)
		add_course();
	if (n == 3)
		delete_course();
	if (n == 4)
		change_course();
	if (n == 5)
		show_course();
	if (n == 6)
		specific();
	if (n == 7)
		Login();
	
}
void choice2(char *ID)
{
	cout << "菜单栏：" << endl;
	cout << "===========================================================================================================" << endl;
	cout << "1.查看课程信息 2.选课 3.退课 4.查看个人课表 5.举手报名助教 6.选择个人助教 7.退出 8.修改密码 9.课程评分 " << endl;
	cout << "===========================================================================================================" << endl;

	cout << "请选择操作：";
	int n;
	cin >> n;
	if (n == 1)
		show_course2(ID);
	if (n == 2)
		select(ID);
	if (n == 3)
		quit_course(ID);
	if (n == 4)
		 check(ID);
	if (n == 5)
		signup_assistant(ID);
	if (n == 6)
		choose_assistant(ID);
	if (n == 7)
		Login();
	if (n == 8)
		change_password(ID);
	if (n == 9)
		evaluation(ID);
}
