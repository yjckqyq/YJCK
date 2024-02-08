#include <stdio.h>  
#include <stdbool.h>   
bool is_prime(int n) {  
    if (n <= 1) {  
        return false;  
    } 
	int i; 
    for (i = 2; i * i <= n; i++) {  
        if (n % i == 0) {  
            return false;  
        }  
    }  
    return true;  
}  
  
int main() {  
     int i;
    for ( i = 100; i <= 200; i++) {  
        if (is_prime(i)) {  
            printf("%d ", i);  
        }  
    }  
    return 0;  
}
