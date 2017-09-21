#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int T;
    cin >> T ;
    while(T > 0){
        int A, B ;
        cin >> A >> B;
        if(floor(sqrt(A)) != sqrt(A))
        cout << floor(sqrt(B)) - floor(sqrt(A)) << endl;
        else
        cout << floor(sqrt(B)) - floor(sqrt(A)) + 1 << endl;
        T--;
    }
    return 0;
}
