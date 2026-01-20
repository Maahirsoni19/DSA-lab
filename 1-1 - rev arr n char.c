#include <stdio.h>
void main(){
    int n;
    char arr[100];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter element %d: ", i+1);
        scanf(" %c",&arr[i]);
    }
    printf("The reversed order is: ")
    for(int i=0;i<n;i++){
        printf("%c\t",arr[n-i-1]);
    }
}
