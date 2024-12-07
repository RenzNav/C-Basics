// Finding out how many heart beats are in a users life time

#include <stdio.h>

int main()
{
    short age = 0;
    int heartbeats_pryear = 75 * 60 * 24 * 365;
    unsigned long heartbeats_total = 0;

    printf("%d\n", heartbeats_pryear);



    printf("Please insert your age below\n");

    scanf("%d", &age);

    heartbeats_total = age * heartbeats_pryear;
    printf("Your total heartbeats is %lu", heartbeats_total);

    return 0;
}