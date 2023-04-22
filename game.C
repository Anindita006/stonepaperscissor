#include<stdio.h>

int stonepaperscissor( char you, char comp){
    // returns 1 if you win, returns -1 if you lose and 0 if you draw

    //conditions for draw
    if (you==comp){
        return 0;
    }

    //not draw conditions
    if (you=='s'&& comp=='sc'){
        return 1;
    }
    else if(you=='sc'&& comp=='s'){
        return -1;
    }
    if (you=='s'&& comp=='p'){
        return -1;
    }
    else if(you=='p'&& comp=='s'){
        return 1;
    if (you=='sc'&& comp=='p'){
        return 1;
    }
    else if(you=='p'&& comp=='sc'){
        return -1;    

}

int main(){
    char you, comp;
    comp= 's';
    printf("s for stone,p for paper, sc for scissor");
    scanf("%c", &you);
    int result= stonepaperscissor(you,comp);
    printf ("You chose %c and computer chose %c.", you , comp)
    if (result ==0){
        printf("Game Draw\n");
    }
    else if (result ==1){
        printf("You Win\n");
    }
    else (result ==-1){
        printf("You Lose\n");
    }

    return 0;
}