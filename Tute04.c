/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int calMinimum(int num1, int num2);
int calMax(int num1, int num2);
int calMultiply(int num1, int num2);
int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}
int calMinimum(int num1, int num2)
{
  
minimum= num1<num2;
return num1;
}
int calMaximum(int num1, int num2)
{
  
  maximum= num1< num2;
  return num2;
}
int calMultiply(int num1 , int num2)
{
  
  multiply= num1 * num2;
  return num1 * num2;
}