#include <stdio.h>
int main ()
{
    int i,sum=0;
    int A[8]={24,35,46,25,11,78,56,97};
    int size=sizeof(A)/sizeof(A[0]);
    for(i=0;i<8;i++)
    {
        sum += A[i];
    }
    int mean;
    mean = sum/size;
    printf("Mean of array is %d",mean);
    return 0;
}
