// p178-1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#define f(a) ((a)=fabs(a))
#define max(a,b) ((a)>(b)?(a):(b))
int main(){
	int a = 0, b = 0, c = 0, d = 0, e= 0;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	f(a), f(b), f(c), f(d), f(e);
	printf("%d", max(a, max(b, max(c, max(d, e)))));
}