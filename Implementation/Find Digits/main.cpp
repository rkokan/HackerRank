#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T > 0){
        long long int N;
        cin >> N;
        long long int pomocni;
        int cnt = 0;
        pomocni = N;
        while (pomocni > 0){
            int pom = pomocni % 10 ;
            if(pom != 0 && N % pom == 0)
                cnt++;
            pomocni = pomocni/10;
        }
        cout << cnt << endl;
        T--;
    }
    return 0;
}
