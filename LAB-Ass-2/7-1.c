/*
* Program to simulate ROCK, SCISSORS, PAPER game
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char player1, player2;
    printf("Options :\nR for Rock\nS for Scissors\nP for Paper\n");
    printf("Enter choices of Player 1 and Player 2 : ");
    scanf("%c %c", &player1, &player2);
    player1 = toupper(player1);
    player2 = toupper(player2);

    switch (player1) {
        case 'R':
            switch (player2) {
                case 'R':
                    printf("Match drawn !\n");
                    break;
                case 'S':
                    printf("Player 1 wins !\n");
                    break;
                case 'P':
                    printf("Player 2 wins !\n");
                    break;
                default:
                    printf("Invalid Choice !\n");
                    break;
            }
            break;
        case 'S':
            switch (player2) {
                case 'R':
                    printf("Player 2 wins !\n");
                    break;
                case 'S':
                    printf("Match drawn !\n");
                    break;
                case 'P':
                    printf("Player 1 wins !\n");
                    break;
                default:
                    printf("Invalid Choice !\n");
                    break;
            }
            break;
        case 'P':
            switch (player2) {
                case 'R':
                    printf("Player 1 wins !\n");
                    break;
                case 'S':
                    printf("Player 2 wins !\n");
                    break;
                case 'P':
                    printf("Match drawn !\n");
                    break;
                default:
                    printf("Invalid Choice !\n");
                    break;
            }
            break;
        default:
            printf("Invalid Choice !\n");
            break;
    }
    return 0;
}

