// p166-14.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
int main()
{	
	int al = 0, s = 0;//al是数组A的长度,s是子串在字符串中的位置
	char A[]="abcde" ;
	char B[] = "fg";
	for (int i = 0;A[i]!='\0';i++) {
		if (B[0] == A[i]) {
		printf("在第%d位", i+1);	
	}
		else {
			printf("这个不是子串！");
			break;
		}
								}
	
}