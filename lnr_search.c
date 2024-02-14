// In this program , the user gives the size of the array and enter numbers for array , later can search a number from the array if found will show "found" or just simply shows "not found"
#include<stdio.h>

int main(void) {
    int a ;
    printf("Enter size for array ");
    scanf("%d" , &a);
    int numbers[a];
    for (int j = 0; j < a ; j++)
    {
        printf("Enter numbers: ");
        scanf("%d" , &numbers[a]);
    }
    
    int n ;
    printf("Enter number ");
    scanf("%d" , &n);
    for(int i = 0 ; i < 7 ; i++) {
        if(numbers[i]==n) {
            printf("Found \n");
            return 0 ;
        }
    }
    printf("Not found \n");
    return 1 ;
}