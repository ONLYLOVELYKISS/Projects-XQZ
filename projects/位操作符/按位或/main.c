#include <stdio.h>
#include <stdlib.h>



int main() {
	int a = 3;
	//3�Ķ�����������011
	int b = 5;
	//5�Ķ�����������101
	int c = a | b;
	//��λ��һ��Ϊ����Ϊ��
	//011
	//101
	//111 (��λ��Ľ��)
	printf("%d", c);
	return 0;
}
