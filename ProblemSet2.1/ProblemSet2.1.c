/* A solution to in ProblemSet2.1.

To compile and run this program type:
gcc ProblemSet2.1.c -o 2.1 && ./2.1
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {


  char C = 'A';   
  int X;
  X =(int) C;    //defining the uppercase letter and convert value from character into decimals



  printf("%c letter is uppercase!\n", C );
  int Y = X/97; //since all uppercase symbol has a decimal value smaller than 97, when taking int value of c/97, the int part is always gonna be 0
  printf("Value of this letter is: %d\n", Y);

char c = 'z';
  int x;
  x =(int) c;


  printf("%c letter is lowercase!\n", c );
  int y = x/97;//since all lowercase symbol has a decimal value larger than 97 and smaller than 123, when taking int value of c/97, the int part is always gonna be 1
  printf("Value of this letter is: %d\n", y);
  

 
  
  return 0;
}
