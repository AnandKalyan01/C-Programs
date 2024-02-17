#include<string.h>
#include<stdio.h>

int main(void) {
    char word[20] ; 
    char str[][20] = {"anand" , "deepak" , "anushwar"};
    char contact[][20] = {"91+ 9307491014" , "91+ 921789211" , "91+ 9238278791"};
    
    printf("enter word : ");
    scanf("%s" , &word);
    for (int i = 0; i < 3 ; i++) // loop
    {
        if (strcmp(word , str[i])==0 || strstr(contact[i] , word) != NULL)
        {
            printf("Found \n Name : %s  Contact : %s", str[i] , contact[i]);
            return 0 ; // exit status 
        }
    }
    printf("not found \n");
    return 1 ; // exit status 
}