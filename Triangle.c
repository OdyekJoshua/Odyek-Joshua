#include <stdio.h>
#include <string.h>
 /*
 Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
 Test Data: 50 50 60
 */
 int main ()
 {
 int equalSides, lines;
 char comment[120];

 do {
 printf("Enter the number of equal sides (0, 1, 2 or 3): ");
 scanf("%d", &equalSides);

 printf("Enter the number of lines of symmetry (0, 1, 2 or 3): ");
 scanf("%d", &lines);

 if (equalSides < 0 || equalSides > 3 || lines < 0 || lines > 3)
 {
 printf("Invalid choice. Please enter values between 0 and 3.\n");
 }

 } while (equalSides < 0 || equalSides > 3 || lines < 0 || lines > 3);

 if (equalSides == 3 && lines == 3)
 {
 strcpy(comment, "The Triangle is Equilateral");
 }

 else if (equalSides == 2 && lines == 1)
 {
 strcpy(comment, "The Triangle is Isosceles");
 }

 else if (equalSides == 0 && lines == 0)
 {
 strcpy(comment, "The Triangle is Scalene");
 }

 else
 {
 strcpy(comment, "The Triangle is not a valid triangle");
 }

 printf("%s\n", comment);

return 0;
}