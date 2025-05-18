#include <stdio.h>
 /*
 Write a C program to check whether a triangle can be formed with the given
 values for the angles.
 Test Data: 40 55 65
 */
 int main()
 {
 int angle1, angle2, angle3;

 printf("Enter the first angle (in degrees): ");
 scanf("%d", &angle1);

 printf("Enter the second angle (in degrees): ");
 scanf("%d", &angle2);

 printf("Enter the third angle (in degrees): ");
 scanf("%d", &angle3);

 if (angle1 + angle2 + angle3 != 180)
 {
 printf("The given angles cannot form a triangle.\n");
 return 1;
 }

 // Checking if any angle is zero or negative
 if (angle1 <= 0 || angle2 <= 0 || angle3 <= 0)
 {
 printf("The angles of a triangle cannot be zero or negative.\n");
 return 1;
 }

 // Checking if the triangle is right-angled, acute, or obtuse
 if (angle1 == 90 || angle2 == 90 || angle3 == 90)
 {
 printf("The triangle is right-angled.\n");
 }

 else if (angle1 < 90 && angle2 < 90 && angle3 < 90)
 {
 printf("The triangle is acute.\n");
 }

 else
 {
 printf("The triangle is obtuse.\n");
 }

 return 0;
 }