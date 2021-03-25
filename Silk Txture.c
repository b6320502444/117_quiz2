#include<stdio.h>
int main()
{
    int n,m,i,j,x,y,z;
    scanf("%d",&n);
    char a[n][70];
    scanf("%d",&m);
    int b[m][3];
    for(i=0;i<m;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        x=b[i][0];
        y=b[i][1];
        z=b[i][2];

    }

}
