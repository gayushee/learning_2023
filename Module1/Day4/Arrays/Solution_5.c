/*
Task 5
Decimal to Binary/Octal/Hex Conversion
*/

#include <stdio.h>

void decimalToBinary(int decimal)
{
   int binary[32];
   int i = 0;

   while (decimal > 0)
   {
      binary[i] = decimal % 2;
      decimal = decimal / 2;
      i++;
   }

   printf("Binary: ");
   for (int j = i - 1; j >= 0; j--)
   {
      printf("%d", binary[j]);
   }
   printf("\n");
}

void decimalToOctal(int decimal)
{
   int octal[100];
   int i = 0;

   while (decimal > 0)
   {
      octal[i] = decimal % 8;
      decimal = decimal / 8;
      i++;
   }

   printf("Octal: ");
   for (int j = i - 1; j >= 0; j--)
   {
      printf("%d", octal[j]);
   }
   printf("\n");
}

void decimalToHexadecimal(int decimal)
{
   char hexadecimal[100];
   int i = 0;

   while (decimal > 0)
   {
      int remainder = decimal % 16;
      if (remainder < 10)
      {
         hexadecimal[i] = remainder + '0';
      }
      else
      {
         hexadecimal[i] = remainder - 10 + 'A';
      }
      decimal = decimal / 16;
      i++;
   }

   printf("Hexadecimal: ");
   for (int j = i - 1; j >= 0; j--)
   {
      printf("%c", hexadecimal[j]);
   }
   printf("\n");
}

int main()
{
   int decimal;

   printf("Enter a decimal number: ");
   scanf("%d", &decimal);

   decimalToBinary(decimal);
   decimalToOctal(decimal);
   decimalToHexadecimal(decimal);

   return 0;
}