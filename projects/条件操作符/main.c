#include <stdio.h>
#include <stdlib.h>

int main() {
	int a=10;
	int b=20;
	int max=0;
	max=a>b?a:b;
	//exp1?exp2:exp3;
	//�����ʽ1�Ľ��Ϊ�棬�򽫱��ʽ2��ֵ��Ϊ�������ʽ��ֵ 
	//�����ʽ2�Ľ��Ϊ�٣��򽫱��ʽ3��ֵ��Ϊ�������ʽ��ֵ 
	printf("%d",max); 
	return 0;
}
