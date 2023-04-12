#include <stdio.h>
#include <stdlib.h>



int main() {
	int a = 3;
	//3的二进制序列是011
	int b = 5;
	//5的二进制序列是101
	int c = a | b;
	//按位或即一个为真则为真
	//011
	//101
	//111 (按位或的结果)
	printf("%d", c);
	return 0;
}
