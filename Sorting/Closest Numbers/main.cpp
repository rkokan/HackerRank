#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int > arr;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    int min = 100000000;
    vector<int > pomocni;
    for(int i = 1 ; i < n ; i++){
        if(arr[i] - arr[i-1] < min){
            min = arr[i] - arr[i-1];
            pomocni.clear();
            pomocni.push_back(arr[i]); pomocni.push_back(arr[i-1]);
        }
        else if(arr[i] - arr[i-1] == min){
            pomocni.push_back(arr[i]); pomocni.push_back(arr[i-1]);
        }
    }
    sort(pomocni.begin(),pomocni.end());
    for(int i = 0 ; i < pomocni.size() ; i++){
        cout << pomocni[i] << " " ;
    }
    return 0;
}
