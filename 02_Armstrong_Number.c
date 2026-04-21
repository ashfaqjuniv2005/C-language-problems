// Armstrong Number

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

    int rem,number,temp,num=0,result=0;
   
    scanf("%d",&number);
    temp=number;

    while(temp!=0){
        temp/=10;
        num++;
    }

    
   temp=number;
    while(temp!=0){
        rem=temp%10;
        result+=pow(rem,num);
        temp/=10;
    }

    if(result==number){
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
