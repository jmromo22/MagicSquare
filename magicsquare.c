#include <stdio.h>
#include <stdlib.h> 
#include <time.h>


int main(){
   
    int i; 
   
    time_t t; 
    srand((unsigned) time(&t));

    sleep(1);
    
    int magicSquare[3][3]; 

    int randomArray[9];
    
    for(int i = 0; i < 9; i++){
        
        randomArray[i] = i; 

         for(int i = 0; i<9; i++){

        int temp = randomArray[i];

        int randomInteger = rand() % 8;

        randomArray[i] =  randomArray[randomInteger]; 

        randomArray[randomInteger] = temp; 
