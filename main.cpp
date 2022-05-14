#include <iostream>
#include "lib.h"
using namespace std;
int main(){
   char elenco_nomi [10][20];
    char nome [20];

    init (elenco_nomi, 10);
    init (nome, 20);

    for (int i=0; i<10; i++){
        cin>>elenco_nomi[i];
    }
    cin>> nome;

    int q= ricerca (elenco_nomi, nome);
    if (q==-1){
        cout<<"non presente"<<endl;
    } else {
        cout<<q<<endl;
    }
  
  return 0;
}
