#include <stdio.h>

int main(void){

int arr[100];

for (int i = 0; i < 100; i++) {
        arr[i] = i;
        printf("%i ", arr[i]);  // Added a space after %i for better readability
    }
    printf("\n");  // Print a newline at the end for better formatting
     return 0;
}
