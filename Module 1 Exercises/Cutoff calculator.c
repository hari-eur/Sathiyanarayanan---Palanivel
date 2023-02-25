#include <stdio.h>
int main() {
    int mat, phy, che, cutoff;
    printf("Enter your Mathematics score: \n");
    scanf("%d", &mat);
    printf("Enter your Physics score: \n");
    scanf("%d", &phy);
    printf("Enter your Chemistry score: \n");
    scanf("%d", &che);
    cutoff= ((((phy*5)/10) + ((che*5)/10)) + mat);
    printf("Your Engineering cutoff is %d \n\n",cutoff);
    
    printf("----------------------------------------\n");
    printf("Your Counselling Eligibility: \n");
    cutoff>=180? printf("Counselling Round 1 \n") : (cutoff>=170) || (cutoff<=161)? printf("Counselling Round 2 \n") : printf("Counselling Round 3 \n");
    return 0;
}