#include <iostream>
#include <malloc.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int *niz_duljina ;
    niz_duljina =(int*)malloc(N*sizeof(int));
    for(int i = 0 ; i < N ; i++){
        int x;
        cin >> x;
        niz_duljina[i] = x ;
    }
    int index = 1 , cnt , min , pom = N;
    while(index == 1){
        index = 0; min = 10000; cnt = 0;
        if(pom != 0)
        cout << pom << endl;
        for(int i = 0 ; i < N ; i++){
            if(niz_duljina[i] < min && niz_duljina[i] != 0)
              min = niz_duljina[i];
        }
        if(min != 10000){
           index = 1;
           for(int i = 0 ; i < N ; i++){
             if(niz_duljina[i] == min){
                cnt++;
             }
             if(niz_duljina[i] != 0)
             niz_duljina[i] = niz_duljina[i] - min ;
           }
         pom = pom - cnt ;
        }
    }
    return 0;
}
