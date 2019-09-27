/* A solution to in ProblemSet2.4.

To compile and run this program type:
gcc ProblemSet2.4.c -o 2.4 && ./2.4
*/

#include <stdio.h>
 
int main()
{
  int x;

  printf("Enter BPM\n");
  scanf("%d", &x);  // use scanf fucntion to take BPM inputs;
 
  float y = 60000/x;
  printf("The millisecond range for this BPM is: %f\n", y);
 

  
 
  return 0;
}
