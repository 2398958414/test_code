#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//结构体 - struct
// 人/书 - 复杂对象
// 人：名字、身高、年龄、身份证
// 书：书名、作者、出版社、定价、书号
//复杂对象 - 结构体 - 自己创建的一种类型

//创建一个结构体类型
//struct BOOK
//{
//	char name[20];//C语言程序设计
//	short price;//40元
//};
//
//#include <string.h>
//int main()
//{
//	//利用结构体类型 - 创建该类型的结构体变量
//	struct BOOK b1 = { "C语言程序设计",40 };
//	//b1.name = "C++";//error:数组的数组名本质上是地址
//	strcpy(b1.name, "C++");//strcpy - string copy - 字符串拷贝 - 库函数 - string.h
//	printf("%s\n", b1.name);
//	//b1.price = 15;
//	//struct BOOK* pb = &b1;
//	//利用pb打印书名和价格
//	//.  结构体变量.成员
//	//->  结构体指针->成员
//	//printf("%s\n", pb->name);
//	//printf("%d\n", pb->price);
//
//	//printf("%s\n", (*pb).name);
//	//printf("%d\n", (*pb).price);
//	//printf("书名：%s\n", b1.name);
//	//printf("价格：%d元\n", b1.price);
//	//b1.price = 25;
//	//printf("修改后的价格：%d元\n", b1.price);
//	return 0;
//}

//int main()
//{
//	char ch = 'z';
//	char* un = &ch;
//	printf("%d\n", sizeof(un));
//	//*un = 'a';
//	//printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//有一种变量是用来存放地址的 - 指针变量
//	int* p = &a;//p的类型是int*
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	*p = 30;//* - 解引用操作符/间接访问操作符 - 对p进行解引用操作，找到p所指向的对象a
//	printf("a = %d\n", a);
//	//&a - 取地址
//	//printf("%p\n", &a);//%p - 打印地址
//	return 0;
//}

//#define 定义的标识符常量
//#define MAX 200
//#define 定义宏 - 带参数

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}

//宏的定义
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX;
//	int a = 25;
//	int b = 20;
//	//函数的方式
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//宏的方式
//	int MAx = MAX(a ,b);
//	//MAx = (a>b?a:b)
//	printf("MAx = %d\n", MAx);
//	return 0;
//}


//1.static修饰局部变量
//局部变量的生命周期变长
//2.static修饰全局变量
//改变了变量的作用域 - 静态的全局变量只能在自己所在的源文件内部使用
//3.static修饰函数
//改变了函数的链接属性
//外部链接属性 -> 内部链接属性

//extern - 声明外部函数
//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 30;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

//void test()
//{
//	static int a = 2;//a是一个静态的局部变量
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//typedef - 类型定义 - 类型重定义
//	typedef unsigned int u_int;
//	unsigned int num = 10;
//	u_int num2 = 10;
//	return 0;
//}

//int main()
//{
//	//register int a = 10;//建议把a定义成寄存器变量；  register - 寄存器变量
//	int a = 3;
//	a = 5;
//	//int定义的变量是有符号的
//	// int 等价于 signed int
//	// unsigned int
//	unsigned int num = 1;
//	//struct - 结构体关键字
//	//union - 联合体/共用体
//	return 0;
//}

//int main()
//{
//	int a = 0;//局部变量 - 自动变量auto
//	return 0;
//}

//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int arr[5] = { 0 };
//	arr[2];//[] - 下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);//() - 函数调用操作符 
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 30;
//	int max = 0;
//	max = (a > b ? a : b);
//	//等价于
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	return 0;
//}

//int main()
//{
//	//假 - 0
//	//真 - 非0
//	//&& - 逻辑与
//	//|| - 逻辑或
//	int a = 3;
//	int b = 4;
//	int c = a || b;
//	printf("c = %d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//(类型):强制类型转换  double --> int
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++：先使用，再++
//	int b = ++a;//前置++：先++，再使用
//	printf("a = %d b = %d\n", a , b);
//	return 0;
//}

//int main()
//{
//	int a = 0; //4个字节，32个bit位 
//	int b = ~a;  //b是有符号的整形  ~ - 按（2进制）位取反
//	//000000000000000000000000
//	//111111111111111111111111
//	//原码 - 反码 - 补码
//	//负数在内存中存储的时候，存储的是二进制的补码
//	//111111111111111111111110
//	//100000000000000000000001
//	printf("%d\n", b); //使用的、打印的是这个数的原码
//	return 0;
//}

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int max = 0;
//	int num1 = 100;
//	int num2 = 20;
//	max = Max(num1, num2);
//	printf("Max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int num1 = 4;
//	int num2 = 10;
//	if (num1 > num2)
//		printf("max = %d\n", num1);
//	else
//		printf("max = %d\n", num2);
//	return 0;
//}