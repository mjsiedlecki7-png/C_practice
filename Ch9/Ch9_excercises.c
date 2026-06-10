#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int check(int x, int y, int n);
int digits(int n);
int digit(int n,int k);
float compute_GPA(char grades[], int n);
int GCD(int m, int n);
void selection_sort(int array[],int n);
double pow(double base, double exponent);
double poly(double x);
int pow_upd(int base, int exponent);
int roll_dice(void);
bool play_game(void);


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
GPA = compute_GPA(grades, array_length);
printf("Your GPA is: %.2f",GPA);

//Problem 18: Write a recursive version of the Euclidean algorithim for finding the greatest common denominator between integers

int high_n = 78;
int low_n = 66;
int gcd;

gcd = GCD(high_n,low_n);

printf("\nThe greatest common denominator of %d and %d using the Euclidean Algorithim is: %d",high_n,low_n,gcd);

//********************************************************************************************************************************

//Excercise 1
//Write a program that asks the user to enter a series of integers, then sorts the integers by calling a function. The function
//must search the array to find the largest elements, then move it to the last position of the array. It also must call itself
//recursively to sort the first n-1 elements of the array

printf("Enter a series of Integers: ");
int int_array[40];
int array_count = 0;

while (scanf("%d",&int_array[array_count]) == 1)//checks to make sure scanf returns a 1 after each entered value, a 1 means an integer was inputted
{
    array_count++;

    int c;
    if ((c = getchar()) == '\n')
    break;

}

printf("%d\n",array_count);
selection_sort(int_array, array_count);
printf ("\n The sorted array is: ");

for (int i = 0; i < array_count; i++)
{
    printf("%d ",int_array[i]);
}

//Excercise 6: Write a function that computes the value of the following polynomial. Write a program that asks the user to
//enter a value for x, calls the function to comput e the value of the polynomial, and then displays the result

double x;
printf("\nEnter a value of x to solve the polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6: ");
scanf("%lf",&x);
double sol;
sol = poly(x);
printf("The answer to the polynomial with the user input of x = %.2lf is: %.2lf",x,sol);


//Excercise 7: Write an updated version of the power function that uses a formula for when n is even and one for when n is
//odd. Write a recursive function that computes x^n

int base;
int exponent;
int ans;

printf("\nEnter a base value: ");
scanf("%d",&base);

printf("Enter an Exponent: ");
scanf("%d",&exponent);

ans = pow_upd(base,exponent);

printf("%d to the power of %d is: %d",base,exponent,ans);

//Excercise 8: Write a program that simulates the game of craps, which is played with two dice

srand(time(NULL));
char replay;
bool outcome;
int win = 0;
int loss = 0;

printf("\nStart a game of Craps(Y or N)?: ");
scanf(" %c",&replay);

while (replay == 'Y')
{
    outcome = play_game();

    if (outcome == true)
        win++;
    else
        loss++;
    printf("\nPlay Again (Y or N)?: ");
    scanf(" %c",&replay);

}

printf("Thank you for playing. Wins: %d Losses: %d",win,loss);

return 0;
}

//Functions

int check(int x, int y, int n) //For problem 2
{

if (x >= 0 && y >= 0 && x <= (n-1) && y <= (n-1))
    return 1;
else
    return 0;
}

int digits(int n) // For problem 5
{
int i = 0;
while (n > 0)
{
    n = n/10;
    i++;
}
return i;
}

int digit(int n, int k) // For problem 6
{
int remainder;
for (int i = 1; i <= k; i++)
{
    remainder = n%10;
    n = n/10; 
}
return remainder;
}

float compute_GPA(char grades[], int n) //For problem 11
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

int GCD(int m, int n) // For problem 18
{
 
int val = m/n;
int rem = m%n;

if (rem == 0)
    return n;
else
    return GCD(n,rem);

}

void selection_sort(int array[],int n)
{

if (n <= 1) return;

int max = 0;
int temp;

for (int i = 0; i < n; i++)
{
    if (array[i] > array[max])
    {
        max = i;
    }
}

temp = array[max];
array[max] = array[n-1];
array[n-1] = temp;

   return selection_sort(array, n-1);

}

double pow(double base, double exponent)

{
double ans = 1;

if (exponent == 0)
    return 1;

for (int i = 1; i <= exponent; i++)
{
    ans = ans*base;
}

return ans;

}

double poly(double x)
{

double y = 3*pow(x,5) + 2*pow(x,4) - 5*pow(x,3) - pow(x,2) + 7*x - 6;

return y;

}

int pow_upd(int base, int exponent)
{

int i;

if (exponent == 0)
    return 1;

if (exponent % 2 == 0)//even
    {
    i = pow_upd(base,exponent/2);
    return i*i;
    }
else
    return base*pow_upd(base,exponent-1);
}

int roll_dice(void)//simulates two dice being thrown and sums the total
{

int dice_1 = (rand()%6)+1;

int dice_2 = (rand()%6)+1;

int sum = dice_1 + dice_2;

return sum;
}

bool play_game(void)//
{

int dice_sum;
int point;
bool outcome = false;



dice_sum = roll_dice();

if (dice_sum == 7 || dice_sum == 11)
{
    printf("You rolled: %d",dice_sum);
    printf("\nYou win!");
    outcome = true;
    return outcome;
}
else if (dice_sum == 2 || dice_sum == 3 || dice_sum == 12)
{
    printf("You rolled: %d",dice_sum);
    printf("\nYou Lose :(");
    outcome = false;
    return outcome;
}
else
{
    point = dice_sum;
    printf("Your point is %d\n",point);
   

    do 
    {
        dice_sum = roll_dice();
        printf("You rolled: %d\n",dice_sum);

        if (dice_sum == 7)
        {
            printf("You Lose :(");
            outcome = false;
            return outcome;
        }  
        else if (dice_sum == point)
        {
            printf("You win!");
            outcome = true;
            return outcome;
        }


    } while (point != dice_sum); 
}





}