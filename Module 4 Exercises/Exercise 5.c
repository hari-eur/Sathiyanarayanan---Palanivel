#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,sum=0;
    printf("Enter the Array Size : ");
    scanf("%d",&n);
    
    int *ptr = (int *)malloc(n*sizeof(int));
    
    
    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);
        sum = sum + *(ptr+i);
    }
    
    printf("The sum is : %d",sum);

    free(ptr)
    return 0;
}
