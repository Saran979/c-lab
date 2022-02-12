#include <stdio.h>

//  Get the count of digits in the given number.
// Then extract each digit from the given number from right to left by dividing with 10 using % operator.
// Since we are extracting right to left, the position starts at count of digits and will be decreased by 1 for each digit.
// Get the power of that digit with its position and add it to the sum.
// Repeat the process as long as the given number is greater than zero


// computes a power b
int power(int a, int b) {
	int result;
	if (a == 0) {
		result = 0;
	} else {
		result = 1;
	}
	while (b > 0) {
		result *= a;
		b = b - 1;
	}
	return result;
}

int sumOfDigitsRaisedToPosPower(int n) {
	int countOfDigits = 0;
    int digit, sum=0;
    int temp = n;
    while(temp > 0) {
        countOfDigits += 1;
        temp /= 10;
    }
    for(int pos=countOfDigits;n>0;n/=10) {
        digit = n % 10;
        sum = sum + power(digit, pos);
        pos--;
    }
    return sum;

}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", sumOfDigitsRaisedToPosPower(n));
	return 0;
}
