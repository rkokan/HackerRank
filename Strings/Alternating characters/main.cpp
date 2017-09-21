#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    int T;
    cin >> T;
    while(T--){
        string s ;
        cin >> s;
        int i = 0;
        int cnt = 0;
        while(i < s.size()){
            if(s[i] != s[i+1])
                i++;
            else{
                s.erase(i+1,1);
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
