/* A solution to in ProblemSet2.3.

To compile and run this program type:
gcc ProblemSet2.3.c -o 2.3 && ./2.3
*/

#include <stdio.h>
 
int main()
{
  int x, y, t;

  printf("Enter two integers\n");
  scanf("%d%d", &x, &y);  // use scanf fucntion to take two integer inputs;
 
  printf("Before Swapping\nFirst integer = %d\nSecond integer = %d\n", x, y);
 
  t = x;
  x = y;
  y = t;
 
  printf("After Swapping\nFirst integer = %d\nSecond integer = %d\n", x, y);
 
  return 0;
}
