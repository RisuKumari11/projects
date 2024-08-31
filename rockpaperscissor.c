#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int game(char you, char comp)
{
    if(you==comp)
        return 3;
    else if(you=='r' && comp=='p')
        return 0;
    else if(you=='r' && comp=='s')
        return 1;
    else if(you=='p' && comp=='r')
        return 1;
    else if(you=='p' && comp=='s')
        return 0;
    else if(you=='s' && comp=='r')
        return 0;
    else if(you=='s' && comp=='p')
        return 1;
    else
        return 2;
}
int main()
{
    char a,c;
    int b,r;
    printf("Enter r for rock, p for paper and s for scissor: ");
    scanf("%c",&a);
    srand(time(NULL));
    b=rand()%100;
    if(b<=33)
        c='r';
    else if(b>33 && b<=66)
        c='p';
    else
        c='s';
    r=game(a,c);
    if(r==1)
    {
        printf("You won congrats\n");
        printf("you chose %c and comp chose %c\n",a,c);
    }
    else if(r==0)
    {
        printf("You lost better luck next time\n");
        printf("you chose %c and comp chose %c\n",a,c);
    }
    else if(r==3)
        printf("Its a draw\n");
    else
        printf("Invalid input\n");
    return 0;
}