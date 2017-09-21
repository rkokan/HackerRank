#include <iostream>

using namespace std;

int main()
{
    string N;
    cin >> N;
    string sati , minute , sekunde , doba_dana;
    int pomocni ;
    char pom;
    sati = N.substr(0,2);
    minute = N.substr(3,3);
    sekunde = N.substr(6,2);
    doba_dana = N.substr(8,2);
    if(doba_dana == "PM"){
         if(sati != "12" && sati != "11" && sati != "10"){
        pomocni = N[0] - '0' + N[1] - '0';
        pomocni += 12;
        cout << pomocni << ":" << minute << sekunde;
        }
         if(sati == "10")
        cout << "22" << ":" << minute << sekunde;
         if(sati == "11")
        cout << "23" << ":" << minute << sekunde;
        if(sati == "12")
            cout << sati << ":" << minute << sekunde;
    }
    if(doba_dana == "AM"){
        if(sati != "12")
        cout << sati << ":" << minute << sekunde;
        else
        cout << "00" << ":" << minute <<sekunde;
    }
    return 0;
}
