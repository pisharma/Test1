#include <stdio.h>
 #include <conio.h>
 main() {
   clrscr();
   int *array[3];
   int x = 10, y = 20, z = 30;
   int i;
   array[0] = &x;
   array[1] = &y;
   array[2] = &z;
   for (i=0; i< 3; i++) {
   printf("The value of %d= %d ,address is %u\t \n", i, *(array[i]),
   array[i]);
   }
   getch();
   return 0;
 }