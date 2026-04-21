// Pallindrome Number

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <limits.h>
#include <float.h>
#include <assert.h>
#include <errno.h>



int main()
{

    int number,temp,remainder, count = 0;
    scanf("%d", &number);
    temp = number;

    while(temp!=0){
        remainder=temp%10;
        count=count*10+remainder;
        temp/=10;
    }

    if(count==number){
        printf("The number is a palindrome.");
    }
    else{
        printf("The number is not a palindrome.");
    }

    return 0;
}
