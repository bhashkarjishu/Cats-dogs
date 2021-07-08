#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int c,d,l;
        scanf("%lld%lld%lld",&c,&d,&l);
        if(l%4!=0)
        {
            printf("no\n");
        }
        else if(c<=2*d)
        {
             if(l<=4*(c+d) && l>=4*d)
                printf("yes\n");
             else
                printf("no\n");
        }
        else if(c>2*d)
        {
            if(l<=4*(c+d) && l>=4*(c-d))//4*d+4*(c-2d)
                printf("yes\n");//2d = no of cats on dogs max
            else
                printf("no\n");
        }
        else
            printf("no\n");
    }
}
