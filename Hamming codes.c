#include<stdio.h>

int main(){
int _parity_check(int* message){
    int i = 0, c[16] , count = 0 , out;
    while(i < 16){
        if (message[i]){
            count ++;
            c[count] = i;
        };
    };
    i = 1 ;
    while(c[i] != '\0'){
        out = c[i-1] ^ c[i];
    };
    return out ;
};
}