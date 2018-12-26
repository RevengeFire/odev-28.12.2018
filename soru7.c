#include <stdio.h>
int main()
{
    int a;
    printf("a: ");scanf("%d",&a);
    printf("%d",F(a));
}
int F(int a)
{
 if(a<=0)return 0;
 return a%3+F(a/3);
}
