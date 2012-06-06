#include <stdio.h>
 #include <conio.h>
 int array[6]= { 1, 2, 3, 4, 5, 6 };
 void main() {
   clrscr();
   int len=sizeof(array)/sizeof(int);
   printf("Length Of Array=%d", len);
   getch();
 }