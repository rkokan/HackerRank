#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ar , V ,n ,i,j,k,m ;
    scanf("%d",&n);
    ar = (int*)malloc(n*sizeof(int));
    for (i = 0 ; i < n ; i++){

        scanf("%d",&ar[i]);
    }
    for(m = 2 ; m <= n ; m++){
    V = ar[m-1];
    j = m-2 ;
    k = m-1 ;
    while (V <= ar[j]){

        ar[k] = ar[j];
        j-- ;
        k-- ;
        ar[j+1] =  V;
    }

       for (i = 0 ; i < n ; i++){

        printf("%d ",ar[i]);
    }
    printf("\n");
    }
}
