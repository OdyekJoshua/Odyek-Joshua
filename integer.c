#include <stdio.h>
 /*
 Write a C program to read the value of an integer m and display the value
 of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.
 Test Data: -5
 */
 int main()
 {
 int m;
 int n;
 printf("Enter an integer m ..: ");
 scanf("%d", &m);
 if (m > 0)
 {
 n = 1;
 printf("%d", n);
 printf("\n");
 }
 else if (m == 0)
 {
 n = 0;
 printf("%d", n);
 printf("\n");
 }
 else
 {
 n = -1;
 printf("%d", n);
 printf("\n");
 }

 return 0;
 }
