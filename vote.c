#include <stdio.h>
 /*
 Write a C program to read the age of a candidate and determine
 whether he is eligible to cast his/her own vote in Uganda.
 Test Data: 21
 */
 int main()
 {
 int age;
 printf("Please Enter your age......: \n");
 scanf("%d", &age);
 if (age >= 18)
 {
 printf("You are eligible to cast your vote in Uganda\n");
 }
 else
 {
 printf("You are not eligible to cast your vote in Uganda\n");
 }
 return 0;
 }