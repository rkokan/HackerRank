#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *ar, i, pos, j, temp, k;
    scanf("%d",&n);
    ar = (int*)malloc(n*sizeof(int));
    for (i = 0 ; i < n ; i++){
        scanf("%d",&ar[i]);
    }
    pos = 0;
    for (i = 1 ; i < n ; i++){
        if (ar[pos] > ar[i]){

            temp = ar[i];
            for (j = i-1 ; j >= pos ; j--){
                ar[j+1]= ar[j];
            }
            ar[pos] = temp ;
            pos = pos + 1 ;
        }

    }
    for (i = 0 ; i < n ; i++){
            printf("%d",ar[i]);
            printf (" ");
    }
}
