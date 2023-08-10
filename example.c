#include "include/stdrand.h"
#include <stdio.h>

int main() {
    long randomNum = rand_int(10, 20);
    printf("Random number between 10 and 20: %ld\n", randomNum);
    
    char choices[] = "ABCDEF";
    char randomChar = rand_choice_char(choices);
    printf("Random character: %c\n", randomChar);
    
    int numArray[] = {100, 200, 300, 400, 500};
    long randomIntArray = rand_choice_int(numArray, sizeof(numArray) / sizeof(int));
    printf("Random integer from array: %ld\n", randomIntArray);
    
    char randomGeneratedChar = rand_char('A', 'Z');
    printf("Random generated character between A and Z: %c\n", randomGeneratedChar);
    
    return 0;
}
