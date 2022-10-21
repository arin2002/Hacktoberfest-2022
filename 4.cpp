#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define rounds 4 //pre-defining the total number of rounds for the game
static int userScore = 0;
static int computerScore = 0;
static int machine;
static char user;
char properInput()//returns only the first character given input as the choice
{
    char c = getchar();
    if (c >= 'A' && c <= 'Z')c = c - 'A' + 'a';//converting the uppercase into lowercase
    while (getchar() != '\n');//ignoring all other characters given input till the user presses enter
    return c;
}
char computerChoice()//returns a random choice for the computer for every round
{
    srand(time(0));//this ensures that random numbers are generated according to the given time, hence providing variety every time
    machine = rand() % 3;//this ensures that there are only three possible values: 0,1 and 2
    if (machine == 0)return 'r';
    else if (machine == 1)return 'p';
    else return 's';
}
void userChoice()//takes input the choice of the user for every round
{
    printf("\nInput your choice: ");
    user = properInput();
    while (user != 'r' && user != 'p' && user != 's') {
        printf("Invalid choice, re-input your choice: ");
        user = properInput();
    }
}
void printRules()//prints the rules of the game
{
    printf("Rock can beat scissors, paper can beat rock and scissors can beat paper");
    printf("\nInput r for rock, the p for paper and s for scissors");
}
void game(int currentRound)//recursive function to execute the game for the pre-defined number of rounds
{
    if (currentRound == rounds)return;//base case which allows complete exit from the function
    userChoice();
    char computer = computerChoice();
    if (computer == 'r')printf("Machine played rock. ");
    else if (computer == 'p')printf("Machine played paper. ");
    else printf("Machine played scissors. ");
    if (user == computer)
    {
        printf("The round is a draw.\n");
    }
    else if (user == 'r' && computer == 's' || user == 'p' && computer == 'r' || user == 's' && computer == 'p')
    {
        printf("You win this round.\n");
        userScore++;
    }
    else
    {
        printf("You lose this round.\n");
        computerScore++;
    }
    game(++currentRound);//starting the next round
}
void result()//prints the outcome of all the rounds
{
    printf("You scored %d and the system scored %d, ", userScore, computerScore);
    if (userScore == computerScore)printf("it is a draw.\n");
    else if (userScore > computerScore)printf("you win.\n");
    else printf("you lose.\n");
}
int main()//calls the required functions to execute the program
{
    printf("There will be %d round(s).\n", rounds);
    printRules();
    game(0);
    result();
    return 0;
}