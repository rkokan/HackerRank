#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int N ;
    cin >> N ;
    int *a;
    a = (int*)malloc(N*sizeof(int));
    int rez1 = 0 , rez2 = 0, rez3 = 0;
    for(int i = 0 ; i < N;i++){
        int x ;
        cin >> x ;
        a[i]=x;
    }
    for(int i = 0 ; i < N ; i++){
        if(a[i] == 0)
            rez1++;
        if(a[i] > 0)
            rez2++;
        if(a[i] < 0)
            rez3++;
    }
    cout << (double)rez2/N << endl;
    cout << (double)rez3/N << endl;
    cout << (double)rez1/N << endl;
    return 0;
}
