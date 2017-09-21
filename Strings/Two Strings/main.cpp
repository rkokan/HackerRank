#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin >> T;
    while(T--){
        string A , B;
        cin >> A >> B;
        int index = 0;
        int polje1[26] , polje2[26];
        for(int i = 0; i < 26 ; i++){
            polje1[i] = 0;
            polje2[i] = 0;
        }
        for(int i = 0; i < A.size(); i++)
            polje1[A[i] - 97]++;
        for(int i = 0; i < B.size(); i++)
            polje2[B[i] - 97]++;
        for(int i = 0; i < 26 ; i++){
            if(polje1[i] > 0 && polje2[i] > 0){
                cout << "YES" << endl;
                index = 1;
                break;
            }
        }
        if(index == 0)
            cout << "NO" << endl;
    }
    return 0;
}
