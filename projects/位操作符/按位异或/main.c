#include <stdio.h>
#include <stdlib.h>


int main() {
	int a = 3;
		//3的二进制序列是011
		int b = 5;
		//5的二进制序列是101
		int c = a ^ b;
		//按位异或即
		//对应的二进制位相同则为假0
		//对应的二进制位相异则为真1 
		//011
		//101
		//110(按位或的结果)
		printf("%d", c);
	return 0;
}
