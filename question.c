#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {     
    int i, k, array[20];
    //code of different diameters ball entering
    printf("Enter the size of array \n");
    scanf("%d", &k);
    printf("Enter different diameter's ball\n", k);
    for(i = 0; i < k; i++) {
        scanf("%d", &array[i]);
    }
    
    //code of show entered ball
    printf("Your entered balls are : \n");
    printf("[");
    for(i = 0; i < k; i++) {
        printf("%d ", array[i]);
    }
    printf("]");
    
    //code of largest ball
    for(i = 0; i < k; i++) {
        if(array[0] < array[i]) {
            array[0] = array[i];
        }
    }
    printf("\nHeyy Akash! your largest ball, which has daimeter of %d", array[0]);
    return 0;
}