#include <iostream>

using namespace std;

int main()
{
    int D_vracanja , M_vracanja , Y_vracanja;
    cin >> D_vracanja >> M_vracanja >> Y_vracanja;
    int D , M , Y;
    cin >> D >> M >> Y;
    if(Y_vracanja == Y ){
       if(M_vracanja == M){
           if(D_vracanja > D){
            cout << (D_vracanja - D)*15;
           }
           if(D_vracanja <= D)
            cout << "0";
       }
       if(M_vracanja > M)
       {
            cout << (M_vracanja - M)*500 ;
       }
       if(M_vracanja < M)
         cout << "0" ;
    }
    if(Y_vracanja > Y)
    cout << "10000" << endl;
    if(Y_vracanja < Y)
    cout << "0" << endl;
    return 0;
}
