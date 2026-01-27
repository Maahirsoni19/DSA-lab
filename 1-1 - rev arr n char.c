#include<stdio.h>
int main() {
    int n;
    printf("What size array do you want?: ");
    scanf("%d", &n);
    char arr[n];
    
    for (int i=0; i<n; i++){
        printf("Enter element %d: ", i+1);
        scanf(" %c", &arr[i]);
    }
    printf("The reversed order is: ");
    for(int i=0;i<n;i++){
        printf("%c\t",arr[n-i-1]);
    }
}
