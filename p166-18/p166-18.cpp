// p166-18.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
int count(char a[] , char b[] ,int c) {
	for (int i = 0; a[i] != '\0'; i++) {
		if (b[0] == a[i]) {
			c++;
		}
	}
	return c;
}
int main()
{
	char a[] = "abcccde";
	char b[] = "c";
	int c = 0;
	printf("%d", count(a,b,c));
}