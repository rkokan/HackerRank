#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    int T ;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int a ,b ;
        cin >> a >> b;
        set<int> zadnja;
        for(int i = 0 ; i <= N - 1 ; i++)
            zadnja.insert((N-1-i)*a + i*b);
        set<int>::iterator si;
        for(si = zadnja.begin() ; si != zadnja.end() ; si++)
            cout << *si << " ";
        cout << endl;
    }
    return 0;
}
