#include <stdio.h>
#include <stdlib.h>

int ADD(int x, int y) {
	 int z = x + y;
	return z;
}
int main() {
	int num1;
	int num2;
	int sum;
	printf("请输入两个数\n");
	scanf("%d%d", &num1, &num2);
	sum = ADD(num1, num2);
	printf("%d", sum);
	return 0;
}
