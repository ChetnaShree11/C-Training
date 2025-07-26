#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
 int count,n = 5;
     while(n>0)
    {
        if(n%2==1)
            count++;
        else {
            n=n/2;
            continue;
        }
        printf("%d ",count);
        n=n/2;
    }
    printf("%d",count);

}
