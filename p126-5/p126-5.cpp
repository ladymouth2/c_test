// p126-5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<stdio.h>
int prm(int a, int b) {
	for (; b--; b > 0) {
		printf("%3d", a);
	}
	return b;
}
int main() {
	int x = 0,y = 0;
	scanf("%d%d", &x, &y);
	prm(x, y);
}