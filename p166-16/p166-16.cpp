// p166-16.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#define f(a) ((a)=fabs(a))
#define N 10
int max(int a[]) {
	int t = 0;//中间值
	for (int i = 0; i < sizeof(a); i++) {
		a[i] = f(a[i]);
	}//先全部转为绝对值的数
	for (int k = 0; k < N - 1; k++) {
		for (int j = 0; j < N - k - 1; j++) {
			if (a[j] < a[j + 1]) {
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	return a[N];
}
int main()
{
	int b[N]; 
	for (int i = 0; i < N; i++) {
		scanf("%d", &b[i]);
	}
	max(b);//利用max函数进行转换
	for (int k = 0; k < N - 1; k++) {
		printf("%d\n", b[k]);
	}//直接输出转换后的数组b
}