#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    if(n<=5)
    {
        printf("1");
    }

    else if(n%5==0 && n>5)
    {
        printf("%d",(n/5));
    }
    else if(n>5)
    {
        printf("%d",(n/5)+1);
    }





    return 0;
}