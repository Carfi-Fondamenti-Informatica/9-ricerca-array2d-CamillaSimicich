#include "lib.h"


void init (char x[][20], int a){
    for (int i=0; i<a; i++){
        for (int j=0; j<20; j++){
            x[i][j]=0;
        }
    }
}

void init (char x[], int a){
    for (int i=0; i<a; i++){
        x[i]=0;
    }

}

int cerca (char elenco_nomi [10][20], char name [20]){
    int t;
    for (int i=0; i<10; i++) {
        t = 0;
        for (int j = 0; j < 20; j++) {
            if (elenco_nomi[i][j] == name[j]) {
                t++;
            } else
                break;
        }
        if (t == 20) {
            return i;
        }
    }
    return -1;
    }
