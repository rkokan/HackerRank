#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {

    string s;
    cin>>s;

    int flag = 1;
    int polje[26];
    for(int i = 0; i < 26 ; i++){
        polje[i] = 0;
    }
    int brojac = 0;
    for(int i = 0 ; i < s.size(); i++){
        polje[s[i] - 97]++;
    }
    if(s.size() % 2 == 0){
       for(int i = 0 ; i < 26; i++)
          if(polje[i] % 2 != 0)
               flag = 0;
    }
    else{
        for(int i = 0 ; i < 26; i++)
          if(polje[i] % 2 != 0)
            brojac++;
        if(brojac > 1)
            flag = 0;
    }
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
