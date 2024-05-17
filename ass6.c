#include <stdio.h>
int main () {
    int sum = 0;
    for(int i = 0; i <= 100; i++)   {
        
        if(i%7 == 0) {
            sum += i;
        }
        
    }
    printf("The sum of all multiples of 7 from 1 to 100 is: %d\n", sum);
    return 0;
}