//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>
enum TrafficLight {RED, YELLOW, GREEN};
int main()
{
    enum TrafficLight light;
    int choice;
    printf("Enter traffic light color (0 for RED, 1 for YELLOW, 2 for GREEN): ");
    scanf("%d", &choice);
    light = (enum TrafficLight)choice;
    switch (light)
    {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light color!\n");
            break;
    }
    return 0;
}
