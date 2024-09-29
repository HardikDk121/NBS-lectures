#include <stdio.h>
#include <stdlib.h>

int main() {
    // Seed the random number generator with the current time
    

    // Generate a random number between 1 and 6
    int winner=0;
    while (!winner)
    {
        int player1 , player2 , player3 , player4 ,max;
        
        player1 = rand()%6 +1;
        player2 = rand()%6 +1;
        player3 = rand()%6 +1;
        player4 = rand()%6 +1;

        max = player1;
         
    }
    

 
    return 0;
}
