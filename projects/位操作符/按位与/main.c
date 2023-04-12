#include <stdio.h>
#include <stdlib.h>


int main() {
	int a=3;
	//3的二进制序列是011 
	int b=5;
	//5的二进制序列是101 
	int c=a&b;
	//按位与即一个为假则为假
	//011
	//101
	//001 (按位与的结果)
	printf("%d",c);
	return 0;
}
