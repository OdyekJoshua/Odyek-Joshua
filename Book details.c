
/*Defines a struct for a book.
Takes input for book details.
Saves the details to a file.
Reads from the file and displays the book information.*/
#include <stdio.h>
#include <stdlib.h>

// Define structure for a book//
struct Book {
    char title[100];
    char author[100];
    char publisher[100];
    int edition[100];
    float price;
};

int main() {
    struct Book book;
    FILE *file;

    // Taking input for book details//
    printf("Enter book title: ");
    fgets(book.title, sizeof(book.title), stdin);

    printf("Enter author's name: ");
    fgets(book.author, sizeof(book.author), stdin);

    printf("Enter publisher: ");
    fgets(book.publisher, sizeof(book.publisher), stdin);

    printf("Enter book edition: ");
    scanf("%d", &book.edition);

    printf("Enter price of the book: ");
    scanf("%f", &book.price);

    // Saving details to file//
    file = fopen("book_details.txt", "w+");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(file, "Title: %sAuthor: %sPublisher: %sEdition: %d\nPrice: %.2f\n", 
            book.title, book.author, book.publisher, book.edition, book.price);
    fclose(file);

    // Read from the file and display book information//
    file = fopen("book_details.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("\nBook Information:\n");
    char line[100];

 while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    //close file//
    fclose(file);
    printf("Thank you for using the Book Information System!\n");

    return 0;
}
        

   

                        /*Name: ODYEK JOSHUA
                        REG NO: 2024/DCS/DAY/0675
                                GROUP B/*

