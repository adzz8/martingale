#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

/*
    colour 0 = green
    colour 1 = black
    colour 2 = red

*/
bool roulette(int colour){
    int pickednumber;
    int winningcolour;
    pickednumber = rand() % 37;
    printf("%d", pickednumber);
    if (((pickednumber >= 1) && (pickednumber <= 10)) || ((pickednumber >= 19) && (pickednumber <= 28))){
        if (pickednumber%2 == 0){  
            winningcolour = 2;
        }
        else{
            winningcolour = 1;
        }
    }
    else if (pickednumber == 0){
        winningcolour = 0;
    }
    else {
        if (pickednumber%2 == 0){
            winningcolour = 1;
        }
        else{
            winningcolour = 2;
        }
    }
    return (winningcolour=colour);   
}
 
int main(){
    for(int i = 0; i<10; i++){
       printf("Run %d outputs %d \n",i,roulette(1)); 
    }
}

