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
int main() {
    string s;
    getline(cin , s);
    int alphabet[26];
    for(int i = 0 ; i < 26 ; i++){
        alphabet[i] = 0;
    }
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] != ' '){
            alphabet[tolower(s[i]) - 'a']++;
        }
    }
    int index = 0;
    for(int i = 0 ; i < 26 ; i++){
        if(alphabet[i] == 0){
            index = 1;
            cout << "not pangram" << endl;
            break;
        }
    }
    if(index == 0){
        cout << "pangram" << endl;
    }
    return 0;
}
