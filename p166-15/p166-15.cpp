// p166-15.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<stdio.h>
int main()
{
	char A[3][9];
	int a, e, i, o, u;
	a = e = i = o = u = 0;
	printf("请注意每行不应超过9个字符！\n");
	for (int b = 0; b < 3; b++) /*b是计数器*/{
		gets_s(A[b]);
	}
	for (int k = 0; k < 3; k++){
		for (int s = 0; A[k][s] != 0; s++)/*k,s都是计数器*/ {
			if (A[k][s] == 'a') { a++;  }
			if (A[k][s] == 'e') { e++;  }
			if (A[k][s] == 'i') { i++;  }
			if (A[k][s] == 'o') { o++;  }
			if (A[k][s] == 'u') { u++;  }
		}
	}
	printf("a:%d\n e:%d\n i:%d\n o:%d\n u:%d\n", a, e, i, o, u);
}