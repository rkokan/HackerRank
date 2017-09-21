#include <iostream>
#include <string>
#include <math.h>
#include <malloc.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T > 0){
    string S;
    cin >> S;
    char *niz;
    niz = (char*)malloc(S.size()*sizeof(char));
    for(int i = 0 ; i < S.size() ; i++){
         niz[i] = S[S.size() - i - 1];
    }
    int index = 1;
    for(int i = 1 ; i < S.size() ; i++){
        if(abs(S[i] - S[i-1]) != abs(niz[i] - niz[i-1])){
           index = 0;
        }
    }
    if(index == 0)
        cout << "Not Funny" << endl;
    else
        cout << "Funny" << endl;
    free(niz);
    T--;
    }
    return 0;
}
