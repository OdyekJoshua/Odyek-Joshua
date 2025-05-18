#include <stdio.h>
#include <string.h>
 /*
 Write a C program to read temperature in centigrade and display a suitable message
according to the temperature state below:
 Temp < 0 then Freezing weather
 Temp 0-10 then Very Cold weather
 Temp 10-20 then Cold weather
 Temp 20-30 then Normal in Temp
 Temp 30-40 then Its Hot
 Temp >=40 then Its Very Hot
 Test Data: 42
 */

 int main ()
 {
 float temp;
 char comment[120];

 printf("Enter the temperature (centigrade) : ");
 scanf("%f", &temp);

 if(temp < 0)
 {
 strcpy(comment, "Freezing weather");
 }

 else if(temp >= 0 && temp < 10)
 {
 strcpy(comment, "Very Cold weather");
 }

 else if(temp >= 10 && temp < 20)
 {
 strcpy(comment, "Cold weather");
 }

 else if(temp >= 20 && temp < 30)
 {
 strcpy(comment, "Normal in Temp");
 }

 else if(temp >= 30 && temp < 40)
 {
 strcpy(comment, "Its Hot");
 }

 else if(temp >= 40)
 {
 strcpy(comment, "Its Very Hot");
 }

 printf("\nThe Temperature is : %.2f\n", temp);
 printf("Comment : %s", comment);
 }