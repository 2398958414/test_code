#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//int main()
//{
//	char input[20] = { 0 };
//	//system() - 执行系统命令
//	system("shutdown -s -t 60");//shutdown -s(关机) -t(时间） 60(秒)
//	while (1)
//	{
//		printf("请注意，你的电脑将在1分钟后关机，如果输入：我是猪，电脑取消关机\n请输入>:");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");//shutdown -a：取消关机
//			break;
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	//system() - 执行系统命令
//	system("shutdown -s -t 60");//shutdown -s(关机) -t(时间） 60(秒)
//again:
//		printf("请注意，你的电脑将在1分钟后关机，如果输入：我是猪，电脑取消关机\n请输入>:");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//			system("shutdown -a");//shutdown -a：取消关机
//		else
//			goto again;
//	return 0;
//}

//int main()
//{
//	printf("hello SZTU\n");
//	goto again;
//	printf("你好\n");
//	again:
//	printf("haha\n");
//	return 0;
//}

//void game()
//{
//	int guess = 0;
//	//1.系统生成随机数
//	int ret = 0;
//	//时间戳 - 计算机当前的时间与计算机初始时间(1970.1.1.0:0:0)的差值 - （****）秒
//	//time_t time(time_t *timer)   time_t本质上就是长整型
//	ret = rand()%100+1;//随机数在1-100之间
//	//RAND_MAX - 32767
//	//printf("%d\n", ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("猜小了\n");
//		else if (guess > ret)
//			printf("猜大了\n");
//		else
//		{
//			printf("恭喜你,猜对了\n");
//			break;
//		}
//	}
//}
//
//void menu()
//{
//	printf("**********************************\n");
//	printf("****   1. play      0.exit    ****\n");
//	printf("**********************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入;>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//		{
//			game();
//			break;
//		}
//		case 0:
//		{
//			printf("退出游戏\n");
//			break;
//		}
//		default:
//		{
//			printf("输入错误\n");
//			break;
//		}
//		}
//	}
//	while(input);
//	return 0;
//}

