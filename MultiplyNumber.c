/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
  int x, y, z;

  printf("Enter two numbers to multiply\n");
  scanf("%d%d", &x, &y);

  z = x * y;

  printf("Sum of the numbers = %d\n", z);

  return 0;
}
