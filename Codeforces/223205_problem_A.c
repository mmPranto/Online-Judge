#include<stdio.h>

int sum(int x,int y)
{
    int z=x+y;
    printf("%d",z);
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);



    return 0;
}