#include <iostream>
using namespace std;

int main() {
    int N, divisori, numdivisori;
    float resto;
    cout<<"Scrivi il numero"<<endl;
    cin>>N;
    divisori=1;
    numdivisori=0;
    while(divisori<=N)
    {
        resto=N%divisori;
        if(resto=0)
        {
            cout<<"Il divisore è "<<divisori<<endl;
            numdivisori=numdivisori+1;
        }
        divisori=divisori+1;
    }
    cout<<"Il numero di divisori è "<<numdivisori<<endl;
    if(numdivisori=2)
    {
        cout<<"Il numero è primo";
    }
    else
    {
        cout<<"Il numero non è primo";
    }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
