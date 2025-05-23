#include <stdio.h>
/*Write a C program to find the largest of three numbers.
 Test Data: 12 25 52
 */
int main()
 {
 int num1;
 int num2;
 int num3;
 int largest;

 printf("Please enter three numbers.\n");
 printf("Enter first number.\n");
 scanf("%d", &num1);
 printf("Enter second number.\n");
 scanf("%d", &num2);
 printf("Enter third number.\n");
 scanf("%d", &num3);

 if (num1 >= num2 && num1 >= num3)
 {
 largest = num1;
 }
 else if (num2 >= num1 && num2 >= num3)
 {
 largest = num2;
 }
 else
 {
 largest = num3;
 }

 // Print the largest number
 printf("The largest number is: %d\n", largest);

 return 0;
 }