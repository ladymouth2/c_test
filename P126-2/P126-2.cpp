// P126-2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

int main()
{
	int num, result = 0;
	printf("请输入一个正整数:");
	scanf("%d", &num);
	while (num < 0)
		exit(0);
	while (num != 0)
	{
		result += (num % 10);
		num = num / 10;
	}
	printf("各个数字之和为%d\n", result);
}
