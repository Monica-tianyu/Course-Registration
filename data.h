#pragma once
#include<vector>
struct Course
{
	char course_number[4];	//课程编号
	char course_name[20];	//课程名
	char teacher[10];		//授课老师
	int capacity;			//容纳人数
	int current_number;		//已选人数
	char type[10];			//课程类型
	char difficulty[10];	//难易程度
	int count;				//评分人数
	float score;			//平均评分

};

struct Student
{
	char *student_ID;	//学生ID
	char *key;			//密码
};

struct PersonalCourse
{
	char course_number[4];	//课程编号
	char course_name[20];	//课程名
	char teacher[10];		//授课老师
	char type[10];			//课程类型
	char assistant[50];		//助教
	int if_evaluate;		//评分已否
};

struct Assistant
{
	char course_number[4];	//课程编号
	char assistant[50];		//助教
};




void Login();
int compare(const char ch[], const char manager[]);
void Input();
void choice1();
void show_course();
void add_course();
char * number(char num[], int n);
void delete_course();
void change_course();
void specific();
void choice2(char *ID);
void select(char *ID);
int shift(char *course_ID);
void show_course2(char *ID);
void check(char * ID);
void quit_course(char * ID);
void signup_assistant(char * ID);
int find_substring(const char ch[], const char c[]);
void choose_assistant(char * ID);
char * del_substring(char ch[], const char c[]);
void change_password(char *ID);
void evaluation(char *ID);
