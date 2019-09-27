/* A solution to in ProblemSet2.2.

To compile and run this program type:
gcc ProblemSet2.2.c -o 2.2 && ./2.2
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

 
  int m = 69;
  int m1 = ((m-69)/12);
  double p= pow(2,m1);
  float f = 440*p;   /* i split the equation into three part, 
  first I calculated the power value m-69/12 then I calculate the power value of 2^m1 as double,
  at last I calculate the final converted frequency as integer */

  printf("MIDI note is: %d\n", m );
  printf("Frequency value of this MIDI note is %f\n", f);

 
  
  return 0;
}
