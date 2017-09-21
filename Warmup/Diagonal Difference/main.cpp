#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int rezultat1 = 0 , rezultat2 = 0;
    int **a;
    a=(int**)malloc(N*sizeof(int*));
    for(int i = 0 ; i < N; i++){
        a[i]=(int*)malloc(N*sizeof(int));
    }
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            int x ;
            cin >> x ;
            a[i][j] = x;
        }
    }
    for(int i = 0 ; i < N ; i++){
        rezultat1 += a[i][i];
        rezultat2 += a[i][N-1-i];
    }
    cout << abs(rezultat1-rezultat2) << endl;
}
