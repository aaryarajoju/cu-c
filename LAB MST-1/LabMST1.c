/* Q1. 
Without using LOOPS write a program to print ODD numbers, EVEN numbers and Prime numbers between 1 and the number entered by user. 
(8 Marks) */


#include <stdio.h>

int oddNum = 1;
int evenNum = 2;
int primeNum = 2;
int fact = 0;

void odd(int num) {
	if (oddNum <= num) {
		printf("%d ", oddNum);
		oddNum = oddNum + 2;
		if (oddNum <= num) {
			odd(num);
		}
	}

}

void even(int num) {
	if (evenNum <= num) {
		printf("%d ", evenNum);
		evenNum = evenNum + 2;
		if (evenNum <= num) {
			even(num);
		}
	}
}

int factors(int p, int divisor) {
	
	if (p % divisor == 0) {
		fact++;
	}

	divisor++;

	if (divisor <= p) {
		factors(p, divisor);
	}

	return fact;
}

void prime(int num) {

	fact = 0;

	if (primeNum <= num && factors(primeNum, 2) == 1) {
		printf("%d ", primeNum);
	}

	primeNum++;
	if (primeNum <= num) {
		prime(num);
	}
}

int main(void) {

	int num;

	printf("Enter a number: ");
	scanf_s("%d", &num);

	printf("\n ODD numbers: ");
	odd(num);
	
	printf("\n EVEN numbers: ");
	even(num);
	
	printf("\n PRIME numbers: ");
	prime(num);

	printf("\n\n");

	return 0;
}
