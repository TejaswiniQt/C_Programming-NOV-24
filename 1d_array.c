#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,sum=0;
    //printf("Enter the size of array: ");
    scanf("%d",&n);
    int *ptr = (int *)malloc(sizeof(int )*n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",(ptr+i));
    }
    for(int i=0; i<n; i++)
    {
        sum += *(ptr+i);
    }
    printf("%d\n",sum);
    return 0;
}
