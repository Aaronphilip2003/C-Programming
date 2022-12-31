#include<stdio.h>
#include<stddef.h>
int main()
{
    long num1=0L;
    long num2=0L;

    long *pnum=NULL;

    pnum=&num1;
    *pnum=2L;
    


    return 0;
}