/*Create a Book structure containing book_id, title, author name and price. Write a C program to pass a structure as a function argument and print the book details.*/
#include <stdio.h>
#include <string.h>

// Define structure
struct Book {
    int book_id;
    char title[100];
    char author_name[100];
    float price;
};

// Function to print book details
void printBook(struct Book b) {
    printf("Book ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author Name: %s\n", b.author_name);
    printf("Price: %.2f\n", b.price);
}

int main() {
    struct Book book;

    // Assign values
    book.book_id = 12313;
    strcpy(book.title, "A King");
    strcpy(book.author_name, "JP");
    book.price = 600.00;

    // Pass structure to function
    printBook(book);

    return 0;
}
