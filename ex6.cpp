#include <iostream>
#include <string>

class Book {
public:
    // Constructor to set the values of the book
    Book(std::string title, std::string author, int year) {
        title_ = title;
        author_ = author;
        year_ = year;
    }

    // Getter methods to access the values of the book
    std::string getTitle() const { return title_; }
    std::string getAuthor() const { return author_; }
    int getYear() const { return year_; }

private:
    std::string title_;
    std::string author_;
    int year_;
};

int main() {
    // Create some books
    Book book1("tôi thấy hoa vàng trên cỏ xanh", "Nguyễn Ánh", 2010);
    Book book2("To Kill a Mockingbird", "Harper Lee", 1960);
    Book book3("1984", "George Orwell", 1949);

    // Print information about the books
    std::cout << "Book 1: " << book1.getTitle() << " by " << book1.getAuthor() << " (" << book1.getYear() << ")" << std::endl;
    std::cout << "Book 2: " << book2.getTitle() << " by " << book2.getAuthor() << " (" << book2.getYear() << ")" << std::endl;
    std::cout << "Book 3: " << book3.getTitle() << " by " << book3.getAuthor() << " (" << book3.getYear() << ")" << std::endl;

    return 0;
}
