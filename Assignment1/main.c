#include <stdio.h>
#include <string.h>

void printBinary(unsigned char byte)
{
    for(int i=7; i>=0; i--) {
        int bit = (byte >> i) & 0x01;
        printf("%d", bit);
    }
}

void printDecimal(char str[]){
	int sum = 0;
	for(int i = 7; i >= 0; i--){
		sum += (str[i] -'0')*(1<<(7-i));
	}
	printf("%d", sum);
}

int main()
{
	char str[] = "10000000";
    unsigned char byte = 127;
	printf("\nYour value in binary: ");
    //printBinary(byte);
	printDecimal(str);
	return 0;
}