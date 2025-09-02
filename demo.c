#include <stdio.h>
#include <conio.h>
#include <time.h>

void main()
{
    int cc;
    int uc;
    int attempt = 0;
    int lifeline = 3;
    srand(time(0));
    clrscr();
    printf("Computer is thinking of a number");
    delay(2000);
    printf(".");
    delay(250);
    printf(".");
    delay(250);
    printf(".");
    delay(250);
    printf(".");
    delay(250);
    printf("\nThinking.......");
    delay(500);
    printf("Thinking.......");
    delay(500);
    printf("\n\nComputer has thought the number .......\n");
    delay(1500);
    printf("\nOk ! Guess the number in minimum attempts..");
    delay(2300);
    clrscr();
    textbackground(BLUE);

    cc = rand() % 10 + 1;
start:

    printf("Guess the number (1 - 10): ");
    scanf("%d", &uc);

    if (lifeline > 0)
    {
        if (uc == cc)
        {
            attempt++;
            clrscr();
            textcolor(GREEN);
            gotoxy(27, 13);
            cprintf("YOU WON THE GAME !!!!");
            textcolor(YELLOW);
            gotoxy(27, 14);
            cprintf("You Took %d Attempts..", attempt);
            sound();
            delay(2000);
            nosound();
        }
        else if (uc < cc)
        {
            attempt++;
            lifeline--;
            printf("Higher Number Please !\n\n");
            goto start;
        }
        else
        {
            attempt++;
            lifeline--;
            printf("Lower Number Please !\n\n");
            goto start;
        }
    }
    else
    {
        clrscr();
        textbackground(RED);
        textcolor(BLACK);
        gotoxy(27, 13);
        cprintf("YOU LOST THE GAME !!!!\n");
        delay(1000);
        clrscr();
        gotoxy(29, 14);
        cprintf("YOU ARE LOSER");
        sound();
        delay(3000);
        nosound();
    }

    getch();
} // end of main