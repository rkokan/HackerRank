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
        cin >> s;
        if(s.size() % 2 != 0)
            cout << "-1" << endl;
        else{
            string s1 , s2;
            s1 = s.substr(0,s.size()/2);
            s2 = s.substr(s.size()/2 , s.size()/2);
            int polje1[26] , polje2[26];
            for(int i = 0 ; i < 26 ; i++){
                polje1[i] = 0;
                polje2[i] = 0;
            }
            for(int i = 0 ; i < s1.size() ; i++){
                polje1[s1[i]-97]++;
                polje2[s2[i]-97]++;
            }
            int rezultat = 0;
            for(int i = 0; i < 26 ; i++){
                if(polje2[i] > polje1[i])
                    rezultat += (polje2[i] - polje1[i]);
            }
            cout << rezultat << endl;
        }
    }
    return 0;
}
