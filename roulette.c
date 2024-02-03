#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <time.h>

/*
    colour 0 = green
    colour 1 = black
    colour 2 = red

*/
bool roulette(int colour){
    int pickednumber;
    int winningcolour;
    srand(time(NULL));
    pickednumber = rand() % 37;
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
    return (winningcolour==colour);   
}
 
float simGame(int colour, float bet){
    if((roulette(colour) == 1)){
        return(bet*2);
    }
    else{
        return(0);
    }
}
