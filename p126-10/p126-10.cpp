// p126-10.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
int jc() {
	int a = 1, sum = 0, i = 1;
	for (; i < 10; i++) {
		a *= i;
		sum += a;
	}
	printf("%d", sum);
	return 0;
}
int main()
{
	printf("%d", jc());
}