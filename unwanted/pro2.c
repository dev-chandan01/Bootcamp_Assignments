#include <stdio.h>
int print(int a)
{
    //int fuck;
    if (a < 1)
    return a;
    else
    return 1+print(a/2);
}
int main()
{
    int x,y;
    x=print(10);
    y=print(20);
    printf("%d %d",x,y);
    return 0;
}