#include <stdio.h>
#include <stdlib.h>

int main() {
	int a=10;
	int b=20;
	int max=0;
	max=a>b?a:b;
	//exp1?exp2:exp3;
	//若表达式1的结果为真，则将表达式2的值作为整个表达式的值 
	//若表达式2的结果为假，则将表达式3的值作为整个表达式的值 
	printf("%d",max); 
	return 0;
}
