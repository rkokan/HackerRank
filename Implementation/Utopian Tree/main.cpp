#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N , T , i , *sum , *niz, j;
    scanf ("%d", &T);
    niz = (int*)malloc(T*sizeof(int));
    sum = (int*)malloc(T*sizeof(int));
    for(i = 0 ; i < T ; i++)
        scanf("%d" ,&niz[i]);
    for(i = 0 ; i < T ; i++)
        sum[i] = 1;
    for(i = 0 ; i < T ; i++){
        for(j = 1 ; j <= niz[i]; j++){
            if(j%2 == 1)
                sum[i] = 2*sum[i] ;
            else
                sum[i] = sum[i] + 1;
        }
    }
    for (i = 0 ; i < T ; i++){
        printf("%d\n", sum[i]);
    }
    return 0;
}
