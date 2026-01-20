#include <stdio.h>
int main() {
    int min, max, i, j, n,temp;
    printf("How many elements do you want to enter: ");
    scanf(" %d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element %d:", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (arr[j+1] > arr[j]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("The maximum element is: %d\n",arr[0]);
    printf("The minimum element is: %d",arr[n-1]);
}
