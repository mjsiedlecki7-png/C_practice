#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int check(int x, int y, int n);
int digits(int n);
int digit(int n,int k);
float compute_GPA(int n, char grades[n]);

int main (void)
{
//Problem 2: Write a function check (x,y,n) that returns 1 if both x and y fall between 0 and n-1, otherwise return 0

int x = 3;
int y = 4;
int n = 3;

if (check(x,y,n))
    printf("True");
else    
    printf("False");

//Problem 5: Write a function that returns the number of digits in n

int num_test;
int digit_count;

printf("\nEnter a Positive integer: ");
scanf("%d",&num_test);

digit_count = digits(num_test);
printf("The number has %d digits\n",digit_count);

//Problem 6: function that returns a specific digit
int digit_pos;
int final_digit;

printf("Pick the position of digit to return (From right to left):" );
scanf("%d",&digit_pos);

final_digit = digit(num_test,digit_pos);
printf("The digit at position %d is: %d\n",digit_pos,final_digit);

//Problem 11: Let the user input their grades and calculates their GPA

char grades[20];
char letter;
int i = 0;
float GPA;

printf("Enter your Grades: ");

while ((letter = getchar()) != '\n');//Clears last \n from previous user input
while ((letter = getchar()) != '\n')
{
    if (letter != ' ')
    {
        toupper(letter);
        grades[i] = letter;
        i++;
    }
}


int array_length = i;
GPA = compute_GPA(array_length, grades);
printf("Your GPA is: %f",GPA);


}

int check(int x, int y, int n)
{

if (x >= 0 && y >= 0 && x <= (n-1) && y <= (n-1))
    return 1;
else
    return 0;
}

int digits(int n)
{
int i = 0;
while (n > 0)
{
    n = n/10;
    i++;
}
return i;
}

int digit(int n, int k)
{
int remainder;
for (int i = 1; i <= k; i++)
{
    remainder = n%10;
    n = n/10; 
}
return remainder;
}

float compute_GPA(int n, char grades[n])
{

float grade_weight[5] = {4,3,2,1,0};
float grade_val[n];
float grade_tot = 0;
float GPA;

for (int i = 0; i < n; i++)
{

    if (grades[i] == 'A')
    {
        grade_val[i] = grade_weight[0];
    }
    else if (grades[i] == 'B')
    {
        grade_val[i] = grade_weight[1];
    }
    else if (grades[i] == 'C')
    {
        grade_val[i] = grade_weight[2];
    }
    else if (grades[i] == 'D')
    {
        grade_val[i] = grade_weight[3];
    }
    else if (grades[i] == 'F')
    {
        grade_val[i] = grade_weight[4];
    }
grade_tot += grade_val[i];
}

GPA = grade_tot/n;
return GPA;

}
