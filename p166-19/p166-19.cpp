// p166-19.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
int deleteit(char a[] ,  char b [] ) {
	for (int i = 0; a[i] != '\0'; i++) {
		if (b[0] == a[i]) {
			a[i] = ' ';  
		}
	}
	printf("%s", a);
	return 0 ;
}
int main()
{
	char a[] = "abcde";
	char b[] = "b";
	deleteit(a, b);
}