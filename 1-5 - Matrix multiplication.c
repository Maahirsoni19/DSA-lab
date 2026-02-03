#include<stdio.h>
void main(){
    int n;
    printf("Enter the size of a matrix: ");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
    printf("Input of first array")
    //taking inputs of first array
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter element %d: ", j+1);
            scanf("%d",&a[i][j]);
        }
    }
    //taking inputs of second array
    printf("Iput of second array");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter element %d: ", j+1);
            scanf("%d",&b[i][j]);
        }
    }
    //initialising result matrix with zero to avoid garbage values
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=0;
        }
    }
    //matrix multiplication
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    //printing the resultant matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
