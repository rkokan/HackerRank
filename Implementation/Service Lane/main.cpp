#include <iostream>
#include <malloc.h>

using namespace std;

int main()
{
    int N,T;
    cin >> N >> T;
    int *niz_duljina;
    niz_duljina = (int*)malloc(N*sizeof(int));
    for(int i = 0 ; i < N ; i++){
        int duljina ;
        cin >> duljina ;
        niz_duljina[i] = duljina ;
    }
    int min ;
    while(T > 0){
        int pocetni , krajnji;
        cin >> pocetni >> krajnji ;
        min = 1000000;
        for(int i = pocetni ; i <= krajnji ; i++){
            if(niz_duljina[i] < min)
                min = niz_duljina[i];
        }
        cout << min << endl;
        T--;
    }
    return 0 ;
}
