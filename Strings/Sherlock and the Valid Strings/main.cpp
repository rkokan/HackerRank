#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string S;
    cin >> S;
    int koliko_znamenki[26];
    for(int i = 0 ; i < 26 ; i++)
        koliko_znamenki[i] = 0;
    for(int i = 0 ; i < S.size() ; i++)
        koliko_znamenki[S[i] - 97]++;
    sort(koliko_znamenki , koliko_znamenki + 26 );
    int ne_nul = 0;
    for(int i = 0 ; i < 26 ; i++)
        if(koliko_znamenki[i] == 0)
            ne_nul++;
    int index = 0;
    int index2 = 0;
    int pusi_kurac = 0;
    for(int i = 24 ; i >= ne_nul ; i--)
        if(koliko_znamenki[25] != koliko_znamenki[i])
            pusi_kurac = 1;
    if(pusi_kurac == 0)
        cout << "YES";
    else{
    for(int i = 25 ; i >= ne_nul ; i--){
        if(index2 == 1)
            break;
        koliko_znamenki[i]--;
        index = 0;
        index2 = 0;
        for(int j = 25 ; j >= ne_nul ; j--){
             for(int k = 25 ; k >= ne_nul ; k--){
                 if(koliko_znamenki[j] != koliko_znamenki[k] && koliko_znamenki[k] != 0 && koliko_znamenki[j] != 0){
                     index = 1;
                 }

    }
        }
        if(index == 0){
                     cout << "YES" ;
                     index2 = 1;
             }
        koliko_znamenki[i]++;
    }
    if(index == 1)
        cout << "NO";
    }
    return 0;
}
