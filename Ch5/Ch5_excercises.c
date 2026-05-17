#include <stdio.h>


int main(void)
{

// Excercise Practice

int i, j, k;
i = 5; j = 0;
k = -5;

printf("%d", i && j || k);


// Problem 4
float speed;

printf (" Wind Speed(Knots):");
scanf("%f", &speed);

if (speed > 63)
   
     printf("Hurricane");

else if (speed >= 48)

    printf("Storm");

else if (speed >= 28)

    printf("Gale");

else if (speed >= 4)

    printf("Breeze");

else if (speed >= 1)

    printf(" Light Air ");

else

    printf("Calm");






// Excercise 11

int num;
printf("\nEnter a Two Digit Number: ");
scanf("%d", &num);

int digit_first = num/10;

int digit_second = num%10;

switch (num)
{ 
case 10: printf ("Ten"); break;
case 11: printf("Eleven"); break;
case 12: printf("Twelve");break;
case 13: printf("Thirteen");break;
case 14: printf("Fourteen");break;
case 15: printf("Fifteen");break;
case 16: printf("Sixteen");break;
case 17: printf("Seventeen");break;
case 18: printf("Eighteen");break;
case 19: printf("Nineteen");break;
}

if (num > 19)
{
switch (digit_first)
{
case 2: printf("Twenty-");break;
case 3: printf("Thirty-");break;
case 4: printf("Fourty-");break;
case 5: printf("Fifety-");break;
case 6: printf("Sixety-");break;
case 7: printf("Seventy-");break;
case 8: printf("Eighty-");break;
case 9: printf("Ninety-");break;
}

switch (digit_second)
{
case 1: printf("One");break;
case 2: printf("Two");break;
case 3: printf("Three");break;
case 4: printf("Four");break;
case 5: printf("Five");break;
case 6: printf("Six");break;
case 7: printf("Seven");break;
case 8: printf("Eight");break;
case 9: printf("Nine");break;
}
}



return 0;
}