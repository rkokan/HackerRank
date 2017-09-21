#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s1,s2;
    cin >> s1 >> s2;
    int polje1[26] , polje2[26];
    for(int i = 0 ; i < 26 ; i++){
        polje1[i] = 0;
        polje2[i] = 0;
    }
    for(int i = 0 ; i < s1.size() ; i++)
        polje1[s1[i] - 97]++;
    for(int i = 0 ; i < s2.size() ; i++)
        polje2[s2[i] - 97]++;
    int rezultat = 0;
    for(int i = 0 ; i < 26 ; i++)
        rezultat += abs(polje1[i] - polje2[i]);
    cout << rezultat ;
    return 0;
}
