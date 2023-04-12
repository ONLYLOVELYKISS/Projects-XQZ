#include <stdio.h>
#include <stdlib.h>


int main() {
	int arr[6]={0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	//元素个数=数组的总大小/数组中一个元素的大小 
	printf("%d",sz);
	return 0;
}
