#include<stdio.h>
#include<string.h> 
struct Store { // Union Of Structures
    // price
    int price;
    struct {
    // book
        union{
        int ISBN;
        char genre[20];
        char author[20];
        }book;
    // shirt
        union{
        char size[20];
        char color[10];
        char brand[20];
        }shirt;
    } item;
};
int main(){
    struct Store b;
    b.price = 399;
    b.item.book.ISBN = 1001;
    strcpy(b.item.book.genre, "Science Fiction");
    strcpy(b.item.book.author, "Paulo Coelho");
    printf("Size of the book is: %lu bytes.", sizeof(b));
    return 0;
}