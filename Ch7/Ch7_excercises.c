#include <stdio.h>


int main(void)
{

// Excercise 1 and 2
for (int i = 1; i < 100; i ++)
{

    printf("Square of i (int): %d\n",(int)i*i);

    int check = i%24;
    if (check == 0)
    {
        printf("Press Enter to Continue:");
    // Always do single quotes in this context, this if statement is looking for the enter key to continue
        if (getchar() == '\r')
        continue;
    }

}

short x = 81*81;

short bits_short = sizeof(x)*8; 
// Short is 16 bits
printf("number of short bits: %hd\n", bits_short);

int y = 46340*46340;

short bits_int_long = sizeof(y)*8; 
// int and long is 32 bits
printf("number of int and long bits: %hd\n", bits_int_long);



// Excercise 9

int hour, minute, hour_24;
char TOD1, TOD2;

printf("Enter the 12 hour time:");
scanf( "%d:%d %c%c", &hour, &minute, &TOD1, &TOD2);

if (TOD1 == 'P')
hour_24 = hour+12;
else
hour_24 = hour;

printf("The Equivalent 24 hour time is: %d:%d\n",hour_24, minute);


// Excercise 10

char c;
int vowel = 0;

printf ("Enter a Sentence: ");

while ((c = getchar()) != '\n');

while ((c = getchar()) != '\n')

    {
        if (c == 'a' || c == 'A' || c == 'i'|| c == 'I'|| c == 'e'|| c == 'E'|| c == 'o'|| c == 'O'|| c == 'u'|| c == 'U')

        {
            vowel ++;
        }

    }

printf("The number of vowels in the sentence is: %d\n", vowel);

// Excercise 15

int pos_int;
short int factorial;

printf("Enter a positive integer: ");
scanf("%d", &pos_int);

factorial = pos_int;

for (int n = pos_int; n > 1; n--)

    {

    factorial = factorial*(n-1);


    }

printf("Factorial of %d: %hd",pos_int, factorial);



return 0;


}