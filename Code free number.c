#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n==8||n==16||n==24||n==32)
    {
        printf("Not Cube Free");
    }
    else
        printf("%d",n);

}
