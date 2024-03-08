#include<stdio.h>
int main(){

    int size;

    do{
        scanf("%d",&size);

    }while(size < 1);

    //}while(size <= 4); until true it gets the size, when false it breaks the loop and updates the size.

    for(int i= 0; i<size; i++){
        for(int j=0; j<size; j++){
            printf("#");
        }
        printf("\n");
    }
}