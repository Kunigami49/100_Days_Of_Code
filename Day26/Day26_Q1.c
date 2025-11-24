/*Write a program to print the following pattern:
    5
   45
  345
 2345
12345*/

#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Enter the number of rows for the right-angled triangle pattern:");
    scanf("%d",&n);
    if(n<1){
        printf("Enter a number greater than 0.\n");
    }
    else{
        for(int i=1;i<=n;i++){ // Loop for each row
            for(int j=1;j<=(n-i);j++){ // Loop for spaces in the row
                printf(" "); // Print space without newline
            }
            for(int k=(n-i+1);k<=n;k++){ // Loop for numbers in the row
                printf("%d",k); // Print number without newline
            }
            printf("\n"); // Move to the next line after printing one row
        }
    }
    return 0;
}
