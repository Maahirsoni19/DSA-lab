#include <stdio.h>
void main() {
    //ARRAY OF POINTERS
    int a=10,b=20,c=30;
    int *p[3]={&a,&b,&c};
    printf("Array of pointer has values: \n");
    for(int i=0;i<3;i++){
        printf("%d\n",*p[i]);
    }
    
    
    
    //POINTERS TO ARRAY
    int x[3]={5,6,7};
    int (*ptr)[3];
    ptr=&x;
    printf("Pointer to array: \n");
    for(int i=0;i<3;i++){
        printf("Element at a[%d] is: %d\n",i,(*ptr)[i]);
    }
}
