#include <stdio.h>

int main() {
    unsigned int num, bit, result = 0, place = 1;

    printf("Enter a binary number (as an integer): ");
    scanf("%u", &num);

    while (num > 0) {
        bit = num % 10;          
        bit = (bit == 0) ? 1 : 0; 
        result += bit * place;    
        place *= 10;
        num /= 10;                
    }

    printf("1's complement: %u\n", result);
    return 0;
}
