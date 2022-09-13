#include<stdio.h>
int main()
{
    int i,n,req[5],mov=0,cp;
    printf("enter the current position");
    scanf("%d",&cp);
    printf("enter the number of requests");
    scanf("%d",&n);
    printf("enter the request order");
    for(i=0;i<n;i++)
    {
        scanf("%d",&req[i]);
    }
    mov=mov+abs(cp,req[0]); 
    printf("-> %d",cp,req[0]);
    for(i=1;i<n;i++)
    {
        mov=mov+abs(req[i]-req[i-1]);
        printf(" -> %d",req[i]);
    }
    printf("\n");
    printf("total head movement = %d",mov);
    return 0;
}
