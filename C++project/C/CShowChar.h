#pragma once
#include<stdio.h>
#include<stdlib.h>

///����C�����ַ�����ʵ������

///����һ���ַ��������
void ShowChar() {
	char ch;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
}

///��ȡһ���ļ��е������ַ�
void ShowFileChar() {
	int ch;
	FILE* fp;
	char fname[50];
	printf("Enter the name of the file: ");
	scanf("%s", fname);
	fp = fopen(fname, "r");
	if (fp == NULL)
	{
		printf("Failed to open file. Bye\n");
		exit(1);//�˳�����
	}
	while ((ch = getc(fp)) != EOF)
	{
		putchar(ch);
		printf("\t");
	}
	fclose(fp);
}

///�ַ�����Ĵ����ʽ,���ã�puts()��%sֱ�������������
void StringFormat() {
	char str1[] = { "123456789" };
	printf("str1: ");
	for (int i = 0; i < 100; i++)
	{
		if (str1[i] != '\0')
		{
			printf("%c ", str1[i]);
		}
	}
	char str2[] = { "1,2,3,4,5,6,7,8,9" };
	printf("\nstr2: ");
	for (int i = 0; i < 100; i++)
	{
		if (str2[i] != '\0')
		{
			printf("%c ", str2[i]);
		}
	}
	char str3[] = "123456789";
	printf("\nstr3: ");
	for (int i = 0; i < 100; i++)
	{
		if (str3[i] != '\0')
		{
			printf("%c ", str3[i]);
		}
	}
	char str4[] = "1,2,3,4,5,6,7,8,9";
	printf("\nstr4: ");
	for (int i = 0; i < 100; i++)
	{
		if (str4[i] != '\0')
		{
			printf("%c ", str4[i]);
		}
	}
	char str5[] = { '1','2','3','4','5','6','7','8','9' };
	printf("\nstr5: ");
	for (int i = 0; i < 100; i++)
	{
		if (str5[i] != '\0')
		{
			printf("%c ", str5[i]);
		}
	}
}

void GetString() {
	char str1[2];
	char str2[2];
	printf("��������scanf����");
	scanf("%s", str1);
	for (int i = 0; i < 100; i++)
	{
		if (str1[i] != '\0')
		{
			printf("%c ", str1[i]);
		}
		else
		{
			break;
		}
	}
	printf("\n��������gets()����");
	gets_s(str2);
	for (int i = 0; i < 100; i++)
	{
		if (str2[i] != '\0')
		{
			printf("%c ", str2[i]);
		}
		else
		{
			break;
		}
	}
}