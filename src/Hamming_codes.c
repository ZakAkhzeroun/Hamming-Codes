#include<stdio.h>

int main(){
int hamming(int *message){
    int i = 0, c[16] , count = 0 , out;
    while(i < 16){
        if (message[i] == 1){
            c[count] = i;
            count ++;
        };
        i++;
    };
    i = 1 ;
    while(i < count){
        out = c[i-1] ^ c[i];
        c[i] = out;
        i ++;
    };
    if (message[out] == 1 ){
        message[out] = 0;
        
    }else{
        message[out] = 1 ;
    };

    for (int i = 0; i < 16 ; i ++){
        printf("%d",message[i]);
    };
};
int message[16] = {1,0,1,0,1,1,1,1,0,0,1,0,1,0,0,0};
hamming(message);
}