#include <stdio.h>
#include <string.h>

int calculate1(char string1[1000]);
int calculate2(char string2[1000]);
int POINTS[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

int main(void)
{
    char string1[1000];
    char string2[1000];
    int sum1, sum2, i;

   
    //prompt user for a string and calculate the sum of points
    printf("Enter a string 1: ");
    scanf("%s", string1); 

    printf("Enter string 2: ");
    scanf("%s", string2);

    //calculate the sum of points
    sum1 = calculate1(string1);
    sum2 = calculate2(string2);

    
    //determine the winner based on the sum of points
    if(sum1 > sum2)
        printf("player 1 wins!\n");
    else if(sum2 > sum1)
        printf("Player 2 wins!\n");
    else
        printf("Tie!\n");
    
    return 0;  // end of main function 
}
   
    
    //function to calculate the sum of points for a given string
    int calculate2(char string2[])
    {
       int sum2 = 0;
    //calculate the sum of points for each letter in the string
    for(int i = 0; i < strlen(string2); i++)
    {
         sum2 = sum2 + POINTS[string2[i] - 'a']; 
    }
    return sum2;
    }  

   
     //function to calculate the sum of points for a given string
    int calculate1(char string1[])
   { 
        int sum1 = 0;
    //calculate the sum of points for each letter in the string
    for (int i = 0; i < strlen(string1); i++)
    {
          sum1 = sum1 + POINTS[string1[i] - 'a'];
    }       
    return sum1;
   }
