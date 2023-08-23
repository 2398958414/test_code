#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//声明一个结构体类型
//声明一个学生类型，想通过学生类型创建学生变量(对象)
//描述学生:属性 - 姓名+电话+性别+年龄

//struct stu
//{
//	char name[5];
//	char tele[12];
//	char sex[5];
//	int age;
//}s4,s5,s6;
//
//struct stu s3;
//int main()
//{
//	struct stu s1;
//	struct stu s2;
//	return 0;
//}

//struct
//{
//	int a;
//	char c;
//}sa;
//
//struct
//{
//	int a;
//	char c;
//}*psa;
//
//int main()
//{
//	psa = &sa;
//	return 0;
//}

//结构体的自引用
//struct Node
//{
//	int data;//4
//	struct Node* next;//4/8
//};
//int main()
//{
//	sizeof(struct Node);
//	return 0;
//}

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//int main()
//{
//	//struct Node n1;
//	//Node n2;
//	return 0;
//}

//struct T
//{
//	double weigh;
//	short age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	//struct S s = { 'w',50,3.14,"hello world" };
//	struct S s = { 'w',{55.6,18},50,3.14,"hello world" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%f", s.st.weigh);
//	return 0;
//}

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//
//};
//struct S3
//{
//	double d;
//	char c;
//	int a;
//};
//struct S4
//{
//	char c;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof s1);
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	printf("%d\n", sizeof(struct S3));
//	printf("%d", sizeof(struct S4));
//	return 0;
//}

////设置默认对齐数为4
//#pragma pack(4)
//struct S1
//{
//	char c;//1
//	//3
//	double d;//8 4 4
//};
////取消默认对齐数
//#pragma pack()

//设置默认对齐数为1
//#pragma pack(1)
//struct S1
//{
//	char c;//1
//	double d;//8
//};
////取消默认对齐数
//#pragma pack()
//
//int main()
//{
//	printf("%d", (int)sizeof(struct S1));
//}

#include <stddef.h>
struct S
{
	char c;
	int i;
	double d;
};
int main()
{
	printf("%d\n", offsetof(struct S, c));
	printf("%d\n", offsetof(struct S, i));
	printf("%d", offsetof(struct S, d));
	return 0;
}