#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>


void insertionSort(int N, int arr[]) {
    int i,j,k,l = 1 , temp;
    int value;
    for(i=1;i<N;i++)
    {
        value=arr[i];
        j=i-1;
        while(j>0 && value<arr[j])
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=value;
    }
      temp = arr[0];
    while (arr[0] > arr[l])
    {
        l++ ;
    }
    for (k = 1 ; k <= l - 1 ; k++){

        arr[k-1] = arr[k];

    }

    arr[l-1] = temp ;



    for(j=0;j<N;j++)
    {
        printf("%d",arr[j]);
        printf(" ");
    }

}
int main(void) {

    int N;
    scanf("%d", &N);
    int arr[N], i;
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(N, arr);

    return 0;
}

