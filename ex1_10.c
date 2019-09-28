#include <stdio.h>

int main(){

    int c;

    if((c =  getchar())  == '\t'){
        printf("\\t \n");
    } else if((c = getchar()) == '\\'){
        printf("\\ \n");
    } else if((c = getchar()) == '\b'){
        printf("\\b \n");

    }
}
