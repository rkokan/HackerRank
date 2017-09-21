#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int heights[n]; int max = 0; int br = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> heights[i];
        if(heights[i] > max){
            max = heights[i];
            br = 0;
        }
        if(heights[i] == max){
            br++;
        }
    }
    cout << br << endl;
    return 0;
}
