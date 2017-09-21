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
        int N ;
        cin >> N;
        int *A;
        A = (int*)malloc(N*sizeof(int));
        long long int sum = 0;
        for(int i = 0 ; i < N ; i++){
            cin >> A[i];
            sum += A[i];
        }
        long long int pom_sum = 0;
        sum -= A[0];
        if(0 == sum || sum + 2*A[0] - A[N-1] == 0)
            cout << "YES" << endl;
        else{
        int index = 0;
        for(int i = 1 ; i < N ; i++){
            pom_sum += A[i-1];
            sum -= A[i];
            if(pom_sum == sum){
                cout << "YES" << endl;
                index = 1;
                break;
            }
        }
        if(index == 0)
            cout << "NO" << endl;
        }
    }
    return 0;
}
