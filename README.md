# stdrand.h C Library

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)
[![GitHub Follow](https://img.shields.io/github/followers/farhanaliofficial?label=Follow%20on%20GitHub&style=social)](https://github.com/farhanaliofficial)
[![Facebook](https://img.shields.io/badge/Follow%20on%20Facebook-%40Farhan%20Ali-blue)](https://www.facebook.com/profile.php?id=100092108344461)

`stdrand.h` is a simple C library that provides functions for generating random integers and making random choices from arrays of characters or integers.

## Table of Contents
- [Functions](#functions)
  - `long rand_int(const long min, const long max)` [(Details)](#long-rand_intconst-long-min-const-long-max)
  - `char rand_choice_char(const char* arr)` [(Details)](#char-rand_choice_charconst-char-arr)
  - `long rand_choice_int(const int* arr, const int s)` [(Details)](#long-rand_choice_intconst-int-arr-const-int-s)
  - `char rand_char(const char a, const char b)` [(Details)](#char-rand_charconst-char-a-const-char-b)

## Functions

### `long rand_int(const long min, const long max)`

Generates a random integer within the specified range `[min, max]` (inclusive).

- Parameters:
  - `min`: The minimum value of the range.
  - `max`: The maximum value of the range.
  
- Returns:
  - A random integer within the specified range.
  - If `min` is greater than `max`, the function returns `-1`.

### `char rand_choice_char(const char* arr)`

Selects a random character from the provided character array.

- Parameters:
  - `arr`: A pointer to a null-terminated character array.
  
- Returns:
  - A randomly chosen character from the array.

### `long rand_choice_int(const int* arr, const int s)`

Selects a random integer from the provided integer array.

- Parameters:
  - `arr`: A pointer to an array of integers.
  - `s`: The size of the integer array.
  
- Returns:
  - A randomly chosen integer from the array.

### `char rand_char(const char a, const char b)`

Generates a random character between two given characters `a` and `b`.

- Parameters:
  - `a`: The lower bound character.
  - `b`: The upper bound character.
  
- Returns:
  - A random character between `a` and `b`.

## Usage

1. Include the `stdrand.h` header in your C source code.
2. Call the appropriate functions based on your requirements.

## Example

```c
#include "stdrand.h"
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
```
# License
This library is released under the MIT License.

