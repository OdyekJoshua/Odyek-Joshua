// No 1
 #include <stdio.h>
 /*
 Write a C program to accept two integers and check whether they are equal or not.
 Test Data: 15 15
 */
 int main()
 {
 int num1;
 int num2;
 printf("Enter the first number: ");
 scanf("%d", &num1);
 printf("\nEnter the second number: ");
 scanf("%d", &num2);
 if (num1 == num2)
 {
 printf("\nThe first number is equal to the second number.");
 printf("\nGreat work!!!!\n");
 }
 else
 {


printf("\nThe two numbers are not equal.\n");
 }

return 0;
 }