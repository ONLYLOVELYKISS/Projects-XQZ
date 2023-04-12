#include <stdio.h>
int main() {
	int num = 0;
	int reminder = 0;
	printf("请输入一个大于1的数\n");
	scanf("%d", &num);
	for (int n = 2; n <= num - 1; n++) 
	{
		reminder = num % n;
		if (num % n == 0) 
		{       
		     //如果条件成立，要执行多条语句，要使用代码块 {} 
			printf("不是素数\n");
			break;
		}
	}
	if (reminder == 1)
		printf("是素数");
	if (num == 2)
		printf("是素数");
	return 0;
}
