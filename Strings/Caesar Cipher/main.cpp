#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    for(int i = 0 ; i < n ; i++){
        k = k%26;
        int pom = s[i];
        if((65 <= pom && 90 >= pom)|| (97 <= pom && pom <= 122)){
            if(!isupper(s[i])){
                if(s[i] + k < 123){
                    char c = s[i] + k;
                    cout<< c ;
                }
                else{
                    char c = 96 - 122 + s[i] + k;
                    cout << c ;
                }
            }
            else{
                if(s[i] + k < 91){
                    char c = s[i] + k;
                    cout<< c ;
                }
                else{
                    char c = 64 - 90 + s[i] + k;
                    cout << c ;
                }

            }
        }
        else
            cout << s[i];
    }
    return 0;
}
