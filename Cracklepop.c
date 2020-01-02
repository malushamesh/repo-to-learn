//Cracklepop without functions
#include<stdio.h>
#include<conio.h>
void main()
{
   int i;
   clrscr();
   for(i=1;i<=100;i++)
   {
      if((i%3==0)&&(i%5==0))
        printf("Cracklepop");
      if(i%3==0)
        printf("Crackle");
      if(i%5==0)
        printf("Pop");
      else
        printf(i);
   }
getch();
}
