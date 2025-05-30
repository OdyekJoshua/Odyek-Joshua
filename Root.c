#include <stdio.h>
 #include <math.h>
 /*
 Write a C program to calculate the root of a quadratic equation.
 Test Data: 1 5 7
 */
 int main()
 {
 float a, b, c, d, r1, r2, real, imag;
 printf("Enter coefficients a, b and c: ");
 scanf("%f %f %f", &a, &b, &c);
 d = b * b - 4 * a * c;

 if (d > 0)
 {

 r1 = (-b + sqrt(d)) / (2 * a);
 r2 = (-b - sqrt(d)) / (2 * a);
 printf("Roots are real and distinct: %.2f and %.2f\n", r1, r2);
 }
 else if (d == 0)
 {

 r1 = r2 = -b / (2 * a);
 printf("Roots are real and equal: %.2f\n", r1);
 }
 else
 {
 real = -b / (2 * a);
 imag = sqrt(-d) / (2 * a);
 printf("Roots are complex: %.2f + %.2fi and %.2f -%.2fi\n", real, imag,
real, imag);
 }

 return 0;
}