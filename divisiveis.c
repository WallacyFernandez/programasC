#include <stdio.h>
#include <stdlib.h>

int main() {

 int rest;

   
    for(int n = 0; n <= 20; n++){

        rest = n % 2;

        if(rest != 0) {

            printf("%d\n", n);
            
        }
    }

    return 0;
}

