#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 6
    int winner=0 , player1=1 , player2=1 , player3=1 , player4=1 ;
    while (!winner)
    {
        
        player1 = rand()%6 +1;
        player2 = rand()%6 +1;
        player3 = rand()%6 +1;
        player4 = rand()%6 +1;

        winner = player1;
        if (winner < player2)
            winner = player2;
        
        if (winner < player3)
            winner = player3;
        
        if (winner < player4)
            winner = player4;
        
    }
    if (player1==winner) 
        printf("player 1 won");

    else if (player2==winner) 
        printf("player 2 won");
    
    else if (player3==winner) 
        printf("player 3 won");
    
    else printf("player 4 won");

    return 0;
}
