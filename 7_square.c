#include <stdio.h>

int main()
{
   int side, area;

   printf("\n-------------------------------\n");

   printf("Enter side  : ");
   scanf("%d", &side);

   area = side * side;
   printf("Area of square : %d", area);

   printf("\n-------------------------------\n");
}