#include <iostream>
#include <malloc.h>
#include <math.h>

using namespace std;

int main()
{
    int T ;
    cin >> T;
    int pom ;
    int cnt ;
    while ( T > 0 ){
        int N, C , M;
        cin >> N >> C >> M;
        pom = N ;
        cnt = 0;
        while(N >= C){
            if(N-C >= 0){
            N = N - C;
            cnt++;
            }
            if(cnt % M == 0)
                cnt++;
        }
        cout << cnt << endl;
        T--;
    }
    return 0;
}
