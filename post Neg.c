#include <stdio.h>
 /*
 Write a C program to check whether a given number is positive or negative.
 Test Data: 15
 */
 int main()
 {
 int num;
 printf("Enter a number: ");
 scanf("%d", &num);
 if (num > 0)
 {
 printf("The number you entered is positive\n");
 }
 else
 {
 printf("The number you entered is negative\n");
 }
 return 0;
}