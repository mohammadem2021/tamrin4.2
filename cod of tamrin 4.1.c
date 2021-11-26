#include <stdio.h>

int main() {
    char player1;
    char player2;
    int Splayer1 = 0;
    int Splayer2 = 0;
    while (Splayer1 != 3 && Splayer2 != 3) {
        printf("\nplayer1 enter: ");
        scanf(" %c",&player1);
        printf("\nplayer2 enter:  ");
        scanf(" %c",&player2);
        if (player1 == 's' && player2 == 's'||player1 == 't' && player2 == 't'||player1 == 'p' && player2 == 'p')
        {
            printf("\nis equle");
        }
        else if (player1 == 'p' && player2 == 's' || player1 == 't' && player2 == 'p' ||player1 == 's' && player2 == 't')
        {
            Splayer1++;
            printf("\nscore of player1 is : %d",Splayer1);
            printf("\n\n score of player2 is : : %d",Splayer2);
        }
        else if (player1 == 's' && player2 == 'p' || player1 == 'p' && player2 == 't' ||player1 == 't' && player2 == 's')
        {
            Splayer2++;
            printf("\nscore of player1 is : %d",Splayer1);
            printf("\n\nscore of player2 is : %d",Splayer2);
        }
    }
    if (Splayer1 == 3)
    {
        printf("\nplayer1 is win");
    }
    else
    {
        printf("\nplayer2 is win");
    }
    return 0;
}
