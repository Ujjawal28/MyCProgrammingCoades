/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
  int x, y, z;

  printf("Enter two numbers to divide\n");
  scanf("%d%d", &x, &y);

  z = x / y;

  printf("Sum of the numbers = %d\n", z);

  return 0;
}
