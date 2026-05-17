#include <stdio.h>
#include <math.h>

int main(void)
{

//Problem 4

    int input;

    printf("Enter a number between 0 and 32,767:");
    scanf("%d",&input);
    int base = 8;
    int i = 0;
    int digit;
    int final_val = 0;
    int store_val;

    while(input > 0)
{

digit = input % base;
store_val = digit*pow(10,i++);
final_val = final_val + store_val;
input = input/base;

}

printf("In Octal, your number is:%5d\n",final_val);

//Problem 6

long long EAN;
int digits_ind[12];
int j = 0;

printf("Enter the First 12 Digits of an EAN:");
scanf("%lld",&EAN);

while (j < 12)
{

digits_ind[j] = EAN%10;
EAN = EAN/10;
j++;

}

int odd = digits_ind[1]+digits_ind[3]+digits_ind[5]+digits_ind[7]+digits_ind[9]+digits_ind[11];

int even = digits_ind[0]+digits_ind[2]+digits_ind[4]+digits_ind[6]+digits_ind[8]+digits_ind[10];


int step_2 = (even*3 + odd)-1;
printf("%d\n",step_2);

int step_3 = step_2%10;
printf("%d\n",step_3);

int check_digit = 9 - step_3;


printf("Check Digit:%d",check_digit);

return 0;

}