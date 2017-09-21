#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    int *ar;
    ar = (int*)malloc(N*sizeof(int));
    for(int i = 0 ; i < N; i++){
        cin >> ar[i];
    }
    int koliko[100];
    for(int i = 0 ; i <= 99 ; i++){
        koliko[i] = 0;
    }
    for(int i = 0 ; i <= 99 ; i++){
        for(int j = 0 ; j < N ; j++){
            if(i == ar[j])
                koliko[i]++;
        }
    }
    for(int i = 0 ; i <= 99 ; i++){
        cout << koliko[i] << " " ;
    }
    return 0;
}
