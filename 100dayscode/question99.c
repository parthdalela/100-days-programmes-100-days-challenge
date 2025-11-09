/*Change the date format from dd/04/yyyy to dd-Apr-yyyy.*/
#include <stdio.h>
#include <string.h>

int main() {
    char input_date[] = "15/04/2023";
    char output_date[20];
    char day[3], month[3], year[5];
    strncpy(day, input_date, 2);
    day[2] = '\0';

    strncpy(month, input_date + 3, 2);
    month[2] = '\0';

    strncpy(year, input_date + 6, 4);
    year[4] = '\0';
    if (strcmp(month, "04") == 0) {
        sprintf(output_date, "%s-Apr-%s", day, year);
    } else {
        sprintf(output_date, "%s-%s-%s", day, month, year); 
    }
printf("Formatted date: %s\n", output_date);
    return 0;
}