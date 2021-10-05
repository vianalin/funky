#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	//tested 1
	int hi[5];
	srand(time(NULL));
	int i; 
	for(i = 0; i < 5; i++) {
		hi[i] = rand();
	}
	printA(hi, 5);
	
	printf("/n");
	
	//tested 2
	
}
	
//1. write a function that takes an array of int values as a parameter and prints it out
//[v0 v1 v2 ...]
int printA(int* arr, int len) {
	int i;
	printf("[ ");
	for(i = 0; i < len; i++) {
		printf("%d ", *(arr + i));
	}
	printf("]");
}

//2. write a function that takes an array of int values as a parameter and returns the average of those values
int avg(int* arr, int len) {
	int i; 
	int sum = 0;
	for(i = 0; i < len; i++) {
		sum += *(arr + i);
	}
	return sum / len;
}

//3. write a function that takes 2 arrays of equal size as parameters (you can choose the type). the function should copy the values of the first array into the second.
int copy(int* arr, int* arr2, int len) {
	int i;
	for(i = 0; i < len; i++) {
		*(arr2 + i) = *(arr + i);
	}
}

