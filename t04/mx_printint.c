#include <unistd.h>
void mx_printchar(char c);
void mx_printint(int n);

void mx_printint(int n){
    int div = 1;
    
    if(n == -2147483648) write(1, "-2147483648", 11);
    else{
        if(n < 0){
            n *= -1;
            mx_printchar('-');
        }
        int num = n;
    	while (num > 9 || num < -9) div *= 10, num/=10;
    	while (div > 0) mx_printchar((n / div) + '0'), n %= div, div /= 10;
	}
}
