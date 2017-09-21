#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    int N ;
    cin >> N ;
    int **koliko ;
    koliko = (int**)malloc(N*sizeof(int*));
    for(int i = 0 ; i < N ; i++){
        koliko[i] = (int*)malloc(26*sizeof(int));
    }
    for(int i = 0 ; i < N ; i++){
            for(int k = 0 ; k < 26 ; k++){
                koliko[i][k] = 0;
            }
        }
    for(int i = 0 ; i < N ; i++){
        string s ;
        cin >> s;
        for(int k = 0 ; k < 26 ; k++){
            for(int j = 0 ; j < s.size(); j++){
            if(s[j] == k + 'a')
                koliko[i][k]++;
        }

    }
    }
    int index = 0 ;
    int cnt = 0;
    for(int k = 0 ; k < 26 ; k++){
        index = 0;
        for(int i = 0 ; i < N ; i++){
            if(koliko[i][k] <= 0)
                index = 1;
        }
        if(index == 0)
            cnt++;
    }
    cout << cnt ;
    return 0;
}
