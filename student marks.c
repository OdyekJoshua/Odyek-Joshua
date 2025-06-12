#include <stdio.h>
#include <string.h>
/* Write a C program to read the roll no, name and marks of three
 subjects and calculate the total, percentage and division.
 Test Data :
 Input the Roll Number of the student :784
 Input the Name of the Student :James
 Input the marks of Physics, Chemistry and Computer Application : 70 80 90
 Expected Output :
 Roll No : 784
 Name of Student : James
 Marks in Physics : 70
 Marks in Chemistry : 80
 Marks in Computer Application : 90
 Total Marks = 240
 Percentage = 80.00
 Division = First
 */

 int main()
 {
 //i will represent each student
 int i, rollNo, phy, chem, commApp, total;
 char name[50], division[10];
 float percentage;

 for (i = 1; i <= 3; i++)
 {
 printf("\nStudent %d:\n", i);

 printf("Input the Roll Number of the Student : ");
 scanf("%d", &rollNo);

 printf("Input the Name of the Student : ");
 scanf(" %d[^\n]", name);

 printf("Input the marks of Physics, Chemistry and Computer Application : ")
;
 scanf("%d %d %d", &phy, &chem, &commApp);

 total = phy + chem + commApp;
 percentage = (float)total / 300 * 100;

 if(percentage >=80)
 {
  strcpy(division, "First");
 }

 else if(percentage >= 60)
 {
  strcpy(division, "Second");
 }

 else if(percentage >=40)
 {
  strcpy(division, "Third");
 }

 else
 {
  strcpy(division, "Fourth");
 }
 printf("\nRoll No : %d : \n", rollNo);
 printf("Name of Student: %s\n", name);
 printf("Marks in Physics: %d\n", phy);
 printf("Marks in Chemistry: %d\n", chem);
 printf("Marks in Computer Application: %d\n", commApp);
 printf("Total Marks = %d\n", total);
 printf("Percentage = %.2f\n", percentage);
 printf("Division = %s\n", division);
 }
 return 0;
 }