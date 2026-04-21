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

    int a,b;
    scanf("%d %d",&a,&b);
    int tmp=a;
    a=b;
    b=tmp;
    printf("A=%d\nB=%d\n",a,b);

    return 0;
}
