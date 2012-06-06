#include <stdio.h>
 #include <conio.h>
 
struct student {
   int id;
   char *name;
   float percentage;
 } student1, student2, student3;
 int main() {
   struct student st;
   student1.id=1;
   student2.name = "Angelina";
   student3.percentage = 90.5;
   printf(" Id is: %d \n", student1.id);
   printf(" Name is: %s \n", student2.name);
   printf(" Percentage is: %f \n", student3.percentage);
   getch();
   return 0;
 }