#include <stdio.h>
#include <stdlib.h>


int main() {
	int arr[6]={0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	//Ԫ�ظ���=������ܴ�С/������һ��Ԫ�صĴ�С 
	printf("%d",sz);
	return 0;
}
