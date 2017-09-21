#include <stdio.h>
#include <stdlib.h>

int solveMeFirst( int a , int b )
{
    return a+b;
}

int main()
{
    int x, y;
    scanf("%d %d", &x ,&y);
    int sum ;
    sum = solveMeFirst( x , y );
    printf("%d\n",sum);
    return 0;
}
