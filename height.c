#include <stdio.h>
 /*
 Write a C program to accept the height of a person in centimeters and
 categorize the person according to their height.
 Test Data: 135
 */
 int main()
 {
 int height;
 printf("Enter your height in centimeters\n");
 scanf("%d", &height);
 if (height > 0 && height <= 70)
 {
 printf("You are a short person");
 }
 else if (height < 0)
 {
 printf("Height can not be less than 0.\n");
 }

 else if (height >= 70 && height <= 100)
 {
 printf("You are a normal height person.\n");
 }
 else
 {
 printf("You are a tall human being.\n");
 }
 return 0;

 }