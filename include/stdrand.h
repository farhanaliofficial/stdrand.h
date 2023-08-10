/*
  This header file is licensed under the MIT License.
  Copyright (c) 2023 Farhan Ali
  
  Github: @farhanaliofficial

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.
*/
#ifndef STDRAND_H
#define STDRAND_H

#include<stdlib.h>
#include<string.h>

long rand_int(const long min, const long max);
char rand_choice_char(const char* arr);
long rand_choice_int(const int* arr, const int s);
char rand_char(const char a, const char b);

#endif
/*
GitHub: @farhanalioffical
Free to use
*/
long rand_int(const long min, const long max){
	if(min > max)
		return -1;
	return rand() % (max - min + 1) + min;
}
char rand_choice_char(const char* arr){
	return arr[rand_int(0, strlen(arr)-1)];
}
long rand_choice_int(const int* arr, const int s){
	return arr[rand_int(0, s)];
}
char rand_char(const char a, const char b){
	return (int) a > (int) b ? 'a' : (char)rand_int((int) a, (int) b);
}
