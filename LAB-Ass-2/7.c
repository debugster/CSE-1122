/*
* Program to simulate ROCK, SCISSOR, PAPER game
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char player1, player2;
    printf("Options :\nR for Rock\nS for Scissor\nP for Paper\n");
    printf("Enter choices of Player 1 and Player 2 : ");
    scanf("%c %c", &player1, &player2);
    player1 = toupper(player1);
    player2 = toupper(player2);

    if (player1 == 'P' && player2 == 'R') {
        printf("Player 1 wins\n");
    }
    else if (player1 == 'R' && player2 == 'P') {
        printf("Player 2 wins\n");
    }
    else if (player1 == 'R' && player2 == 'S') {
        printf("Player 1 wins\n");
    }
    else if (player1 == 'S' && player2 == 'R') {
        printf("Player 2 wins\n");
    }
    else if (player1 == 'S' && player2 == 'P') {
        printf("Player 1 wins\n");
    }
    else if (player1 == 'P' && player2 == 'S') {
        printf("Player 2 wins\n");
    }
    else {
        printf("Match drawn\n");
    }
    return 0;
}
