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
        string s;
        cin >> s ;
        long long int suma = 0 ;
        for(int i = 0 ; i < s.size() /2 ; i++){
            if(s[i] != s[s.size() - i - 1]){
                if(s[i] > s[s.size() - i - 1]){
                    suma += s[i] - s[s.size() - i - 1] ;
                }
                else{
                    suma +=  s[s.size() - i - 1] - s[i] ;
                }
            }
        }
        cout << suma << endl;
    }
    return 0;
}
