// P126-4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<stdint.h>
int tot(int a, int b, int c, int d, int max)
{
	if (a > b)
		d = a;

	else
		d = b;

	if (d > c)
		max = d;

	else
	{
		max = c;
	}
	printf("%d", max);

	return 0 ;
}
int main()
{
	int a = 0, b = 0, c = 0, d = 0, x5 = 0;
	scanf("%d%d%d", &a, &b, &c);
	tot(a, b, c, d, x5);
	return 0;
}