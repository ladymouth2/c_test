// p166-17.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#define N 30
#define M 4
int input(int a [N][M]) {
	for (int i = 0; i < 30; i++) {
		printf("请输入第%d个同学的四门成绩\n", i + 1);
		for (int k = 0; k < 4; k++) {
			scanf("%d", &a[i][k]);
		}
	}
	return a[N][M];
}
int process(int a[N][M],int b[30][2]) {
	int Z = 0;
	int A = 0;
	for (int i = 0; i < 30; i++) {
		for (int k = 0; k < 4; k++) {
			Z += a[i][k];
			if (k = 3) {
				b[i][0] = Z;
				A = Z / 4;
				b[i][1] = A;
				Z = 0;
				A = 0;
			}
		}
	}
	return b[30][2];
}
int output(int b[30][2]) {
	for (int i = 0; i < 30; i++) {
		printf("第%d个同学",i+1);
				printf("总分是%d", b[i][0]);
				printf("平均分是%d\n", b[i][1]);
		
	}
	return 0;
}
int main()
{
	int a[30][4];
	int b[30][2];
	input(a);
	process(a, b);
	output(b);
}