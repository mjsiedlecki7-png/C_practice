#include <stdio.h>
#include <ctype.h>

int main(void)
{
// Excercise 6
/*
int i = 1;
char c;
char message[300];


printf("Enter a Message:");

char Biff[6] = {'4', '8', '3', '1', '0', '5'};

while ((c = getchar()) != '\n')
{
message[i-1] = c;
i++;
}

int length = i;

printf("New Message:");

for (int j = 0; j < length; j++)
{
message[j] = toupper(message[j]);


    if (message[j] == 'A')
    {
        message[j] = Biff[0];
    }

  if (message[j] == 'B')
    {
        message[j] = Biff[1];
    }

  if (message[j] == 'E')
    {
        message[j] = Biff[2];
    }

  if (message[j] == 'I')
    {
        message[j] = Biff[3];
    }

  if (message[j] == 'O')
    {
        message[j] = Biff[4];
    }

  if (message[j] == 'S')
    {
        message[j] = Biff[5];
    }

}

for (int k = 0; k <= length; k++)
{

printf("%c",message[k]);

}
printf("!!!!!!!!!\n");


// Excercise 7

// Write a program that reads a 5 by 5 array of integers and then prints the row and column sums

//Excercise 8

//Modify Excercise 7 to take in quiz scores, and computes the average and total score for each student, and the average score, high score, and low score for each quiz


int row = 5;

int column = 5; 

int input_array[row][column];

for (int i = 0; i < row; i++)

    {

    printf("Enter Quiz scores for student %d: ",i+1);

    for (int j = 0; j<column; j++)

        {

            scanf("%d",&input_array[i][j]);

        }


    }


int row_tot[5] = {0};
int col_tot[5] = {0};
int student_avg[5] = {0};
int quiz_avg[5] = {0};
int low_score[5] = {0};
int high_score[5] = {0};

for (int i = 0; i < row; i++)
{
    high_score[i] = input_array[0][i];
    low_score[i] = input_array[0][i];


    for (int j = 0; j < column; j++)
    
    {

 if (input_array[j][i] > high_score[i])
            high_score[i] = input_array[j][i];

        if (input_array[j][i] < low_score[i])
            low_score[i] = input_array[j][i];

        row_tot[i] = input_array[i][j]+row_tot[i];

        col_tot[i] = input_array[j][i]+col_tot[i];

    }

    student_avg[i] = row_tot[i]/row;
    quiz_avg[i] = col_tot[i]/column;

}

printf("Total Score for Each Student: ");

for (int i = 0; i < row; i++)

{
    printf("%d ",row_tot[i]);
}

printf("\nStudent Average: ");

for (int j = 0; j < column; j++)

{
    printf("%d ", student_avg[j]);
}

printf("\nQuiz Average: ");

for (int j = 0; j < column; j++)

{
    printf("%d ", quiz_avg[j]);
}

printf("\nQuiz High Score: ");

for (int j = 0; j < column; j++)

{
    printf("%d ", high_score[j]);
}

printf("\nQuiz Low Score: ");

for (int j = 0; j < column; j++)

{
    printf("%d ", low_score[j]);
}
*/
// Excercise 14

// Write a program that takes a sentence and then reverses the order of the words in the sentence

printf("Enter a Sentence: ");

char d;
char sentence[300];
int x = 0;
char punctuation;
int spaces[300] = {0};


while ((d = getchar()) != '\n')
{
    sentence[x] = d;

    if (sentence[x] == ' ')
    {
        spaces[x] = 1;
    }  
    if (sentence[x] == '.' || sentence[x] == '?' || sentence[x] == '!')
    {
        punctuation = sentence[x];
    }
    x++;
}

int s_length = x;
printf("Reversal of the Sentence:");

for (int j = s_length; j >= 0; j--)
{

    if (spaces[j] == 1)
    {
        int count = j;
        while (spaces[count+1] != 1 && sentence[count+1] != punctuation)
        {
            printf("%c",sentence[count+1]);
            count++;
        } 
        printf(" ");
    }

    if (j == 0)
    {
        int count = j;
        while (spaces[count] != 1)
        {
            printf("%c",sentence[count]);
            count++;
        }

    }

   
}
printf("%c\n",punctuation);

return 0;
}