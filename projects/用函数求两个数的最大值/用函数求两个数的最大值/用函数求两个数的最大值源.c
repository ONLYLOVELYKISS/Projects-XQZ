#include <stdio.h>
#include <stdlib.h>

int MAX(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
int main()
{
    int a=0;
    int b=0;
    int max = 0;
    printf("������������\n");
    scanf("%d%d",&a,&b);
    max = MAX(a, b);
    printf("%d", max);
    return 0;
}
