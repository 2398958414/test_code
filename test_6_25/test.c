#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", &password);
//		if (strcmp(password, "123456") == 0)// == �������ڱȽ������ַ����Ƿ����,Ӧ��ʹ�ÿ⺯��-strcmp
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (3 == i)
//		printf("��¼ʧ��\n");
//	return 0;
//}

//int main()
//{
//	char arr1[] =  "welcome to bit!!!!!!" ;
//	char arr2[] =  "####################" ;
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0])-2;//���黹����'\0',-2����ȷ
//	int right = strlen(arr1)-1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//��Ϣ1��
//		system("cls");//ִ��ϵͳ�����һ������ - cls - �����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int key = 9;
//	int left = 0;//���±�
//	int right = sz-1;//���±�
//	int mid = 0;
//	while (left<=right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//	return 0;
//}

//int main()
//{
//	//дһ�����룬��arr������ģ��������ҵ�6
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int key = 10;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (key == arr[i])
//		{
//			printf("�ҵ���,�±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int ch = 1;
//	for (n = 1; n <= 10; n++)
//	{
//		ch = ch * n;
//		sum = sum + ch;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int ch = 1;
//	for (n = 1; n <= 10; n++)
//	{
//		ch = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ch = ch * i;
//			//n�Ľ׳�
//		}
//		sum = sum + ch;
//	}
//	//ch = 1*1
//	//ch = 1*1*2
//	//ch = 2*1*2*3
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ch = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ch *= i;
//	}
//	printf("ch = %d\n", ch);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//			printf("haha\n");//ʡ��j�ĳ�ʼ����ֻ���ӡ10��
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//10��ѭ��
//	//10��Ԫ��
//	//10�δ�ӡ
//	for (i = 0; i < 10; i++)//����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱��д��
//		printf("%d ", arr[i]);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)//error:������forѭ�������޸�ѭ������
//	{
//		if (i = 5)
//			printf("hehe\n");
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 7)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;//��ʼ��
//	while (i <= 10)//�ж�
//	{
//		//......
//		i++;//����
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	int ref = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//�������룬����ŵ�password�����У�123456/n
//	//��������ʣһ��'\n'
//	//��ȡ'\n'
//	while (ref = getchar() != '\n') //123456 ABCD\n
//	{
//		;
//	}
//	printf("�Ƿ�ȷ������(Y/N):>");
//	ch = getchar();
//	if (ch == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ȡ��\n");
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

