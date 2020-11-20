#include<stdio.h>
int main()
{
    int N,i,f=1;
    scanf("%d",&N);
    if(N>0 && N<13)
    {
     for(i=N;i>=1;i--)
    {
        f=f*i;
    }
    }
printf("%d\n",f);
    return 0;
}
