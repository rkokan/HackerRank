#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n , m;
    int *A ;
    int *B;
    cin >> n;
    A = (int*)malloc(n*sizeof(int));
    int max = -10000 , min = 100000;
    for(int i = 0 ; i < n ; i++){
        cin >> A[i];
    }
    cin >> m;
    B = (int*)malloc(m*sizeof(int));
    for(int i = 0 ; i < m ; i++){
        cin >> B[i];
        if(max < B[i])
            max = B[i];
        if(min > B[i])
            min = B[i];
    }
    int *koliko_A ;
    int *koliko_B ;
    koliko_A = (int*)malloc((max-min+1)*sizeof(int));
    koliko_B = (int*)malloc((max-min+1)*sizeof(int));
    for(int i = 0 ; i <= max - min ; i++){
        koliko_A[i] = 0 ;
        koliko_B[i] = 0 ;
    }
    for(int k = min ; k <= max ; k++){
        for(int j = 0 ; j < m ; j++){
            if(B[j] == k){
                koliko_B[k-min]++;
            }
        }
    }
    for(int i = 0 ; i <= max - min ; i++){
        for(int j = 0 ; j < n ; j++){
            if(A[j] == (min+i)){
                koliko_A[i]++;
            }
        }
    }
    for(int i = 0 ; i <= max -min ; i++){
        if(koliko_B[i] != koliko_A[i])
           cout << i + min << " " ;
    }
    return 0;
}
