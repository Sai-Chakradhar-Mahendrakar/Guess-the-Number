#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//For random number generator seed

int main()
{
  int guess,random_number;
  int number_of_guess;

  //generating random number
  srand(time(NULL));

 //random number in between 1 to 20;
  random_number = (rand() % 20) + 1; //adding 1 because it generate 1 to 20 or it will generate 0 to 19
  printf("\t\t ______________________________________________________________________");
  printf("\n\t\t\a|	              ****GUESS THE NUMBER****			       |");
  printf("\n\t\t|______________________________________________________________________|");
  printf("\n\t\t|		               RULES			               |");
  printf("\n\t\t|          ==============================================              |");
  printf("\n\t\t|	     U Should chose the number between  \"1 TO 20               |");
  printf("\n\t\t|            There are 5 attempts to Guess                             | ");
  printf("\n\t\t|          ==============================================              |");
  printf("\n\t\t|______________________________________________________________________|");

  for(number_of_guess=5; number_of_guess>0 ; number_of_guess--)
  {
     printf(" \nYou have %d tr%s left", number_of_guess, number_of_guess == 1? "y" : "ies");
     //conditional operator for try and tries

     printf("\nEnter Your Guess :- ");
     scanf("%d", &guess);
  {
     if(guess == random_number)
    {
       printf("\t\t\t   ----CONGRATULATIONS YOU WON----\n");
       return 0;
       return 0;
       //to terminate the loop
     } 
     else
     if(guess < 0 || guess > 20)
      printf("INVALID GUESS \nENTER YOUR GUESS BETWEEN 1 TO 20");
     else
     if(random_number < guess)
      printf("You guessed wrong the number is less than %d",guess);
     else 
     if(random_number > guess)
      printf("You guessed wrong the number is greater than %d",guess);
   }
}
   printf("\n\t\t\t----YOU LOSE---");
   printf("\n\t\tYou have completed your 5 attempts");
   printf("\n\t\t %d is the number to be guessed\n", random_number);
   return 0;
}
