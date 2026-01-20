// Online C compiler to run C program online
#include <stdio.h>
struct Book {
    int bookID;
    char title[100];
    char author[100];
    float price;
};
struct library {
    char libraryname[100];
    int libraryID;
    struct Book b[3];
};
void main() {
    struct library lib[2];
    printf("Enter the name of first library: ");
    fgets(lib[0].libraryname,sizeof(lib[0].libraryname),stdin);
    printf("Enter the ID of first library: ");
    scanf("%d",&lib[0].libraryID);
    getchar();
    
    printf("Enter the name of second library: ");
    fgets(lib[1].libraryname,sizeof(lib[1].libraryname),stdin);
    printf("Enter the ID of second library: ");
    scanf("%d",&lib[1].libraryID);
    getchar();
    
    
    for(int i=0;i<3;i++){
        printf("Enter book ID for book %d in lib 1: ",i+1);
        scanf("%d", &lib[0].b[i].bookID);
        getchar();
        printf("Enter title for book %d in lib 1: ",i+1);
        fgets(lib[0].b[i].title,sizeof(lib[0].b[i].title),stdin);
        printf("Enter author for book %d in lib 1: ");
        fgets(lib[0].b[i].author,sizeof(lib[0].b[i].author),stdin);
        printf("Enter price for book %d in lib 1: ",i+1);
        scanf("%f",&lib[0].b[i].price);
        getchar();
    }
    
    
    for(int i=0;i<3;i++){
        printf("Enter book IDfor book 1 in lib 2: ");
        scanf("%d", &lib[1].b[2].bookID);
        getchar();
        printf("Enter title for book 1 in lib 2: ");
        fgets(lib[1].b[2].title,sizeof(lib[1].b[2].title),stdin);
        printf("Enter author for book 1 in lib 2: ");
        fgets(lib[1].b[2].author,sizeof(lib[1].b[2].author),stdin);
        printf("Enter price for book 1 in lib 2: ");
        scanf("%f",&lib[0].b[0].price);
        getchar();
    }
    
    //printing library one
    for(int i=0;i<3;i++){
        printf("\nBook ID for book 1 in lib 1 is: ",lib[0].b[i].bookID);
        printf("\nTitle for book 1 in lib 1 is: ",lib[0].b[i].title);
        printf("\nAuthor for book 1 in lib 1 is: ",lib[0].b[i].author);
        printf("\nPrice for book 1 in lib 1 is:",lib[0].b[i].price);
    }
    //printing library two
    for(int i=0;i<3;i++){
        printf("\nBook ID for book 1 in lib 1 is: ",lib[1].b[i].bookID);
        printf("\nTitle for book 1 in lib 1 is: ",lib[1].b[i].title);
        printf("\nAuthor for book 1 in lib 1 is: ",lib[1].b[i].author);
        printf("\nPrice for book 1 in lib 1 is:",lib[1].b[i].price);
    }
    
}
