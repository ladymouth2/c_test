// p126-7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
int week(char num) {
	switch (num) {
	case(1):printf("这是星期一"); break;
	case(2):printf("这是星期二"); break;
	case(3):printf("这是星期三"); break;
	case(4):printf("这是星期四"); break;
	case(5):printf("这是星期五"); break;
	case(6):printf("这是星期六"); break;
	case(7):printf("这是星期七"); break;
	}
	return num;
}
int main()
{
	char s = 0;
	scanf("%d", &s);
	week(s);
	return 0;
}