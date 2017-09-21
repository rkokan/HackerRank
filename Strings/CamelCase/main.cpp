#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    string s;
    cin >> s;
    long long int rezultat = 1;
    for(int i = 0 ; i < s.length() ; i++){
        if(isupper(s[i]) != 0){
            rezultat++;
        }
    }
    cout << rezultat << endl;
    return 0;
}
