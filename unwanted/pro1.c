#include <stdio.h>
void display(int n)
{
    //int fuck;
    if (n < 1){
        //printf("%d",n);
        printf("\n");
        return;
    }
    else
        //printf(">>in else part and return is %d",n);
        printf("%d ", n);
        display(n - 1);
        printf("%d ", n);
        printf("*");
    }
int main()
{
    int n = 10;
    display(n);
    return 0;
}
