#include <stdio.h>
int main() {
	int num = 0;
	int reminder = 0;
	printf("������һ������1����\n");
	scanf("%d", &num);
	for (int n = 2; n <= num - 1; n++) 
	{
		reminder = num % n;
		if (num % n == 0) 
		{       
		     //�������������Ҫִ�ж�����䣬Ҫʹ�ô���� {} 
			printf("��������\n");
			break;
		}
	}
	if (reminder == 1)
		printf("������");
	if (num == 2)
		printf("������");
	return 0;
}
