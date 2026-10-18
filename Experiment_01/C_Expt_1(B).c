#include <stdio.h>

int main()
{
    float Physics,Chemistry,Mathematics,Total,Average;

    //Reading PCM Marks

    printf("Enter marks for Physics:");
    scanf("%f",&Physics);
    printf("Enter marks for Chemistry:");
    scanf("%f",&Chemistry);
    printf("Enter marks for Mathematics:");
    scanf("%f",&Mathematics);

    //Calculations
    Total=Physics+Chemistry+Mathematics;
    Average=Total/3.0;

    printf("------------------------------\n");
    printf("PCM Total:%.2f%%\n",Average);
    printf("                                     \n");

    //Eligible check using the conditional operator(condition? true_case:false_case)

    printf("Status:\t%s\n",(Average>=50)?"Eligible for Admission":"Not Eligible for Admission");

    printf("-------------------------------\n");



    return 0;
}
