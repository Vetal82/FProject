#include "Literature.h"

Literature::Literature(int sourceCode, const std::string& type, const std::string& title, int year, const std::string& publisher, int pageCount, const std::string& author)
    : sourceCode(sourceCode), type(type), title(title), year(year), publisher(publisher), pageCount(pageCount), author(author) {}

int Literature::getSourceCode() const { return sourceCode; }
std::string Literature::getType() const { return type; }
std::string Literature::getTitle() const { return title; }
int Literature::getYear() const { return year; }
std::string Literature::getPublisher() const { return publisher; }
int Literature::getPageCount() const { return pageCount; }
std::string Literature::getAuthor() const { return author; }

void Literature::setSourceCode(int sourceCode) { this->sourceCode = sourceCode; }
void Literature::setType(const std::string& type) { this->type = type; }
void Literature::setTitle(const std::string& title) { this->title = title; }
void Literature::setYear(int year) { this->year = year; }
void Literature::setPublisher(const std::string& publisher) { this->publisher = publisher; }
void Literature::setPageCount(int pageCount) { this->pageCount = pageCount; }
void Literature::setAuthor(const std::string& author) { this->author = author; }

void Literature::display() const {
    std::cout << "Source Code: " << sourceCode << "\nType: " << type << "\nTitle: " << title
        << "\nYear: " << year << "\nPublisher: " << publisher << "\nPage Count: " << pageCount
        << "\nAuthor: " << author << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Literature& lit) {
    os << "Source Code: " << lit.sourceCode << "\nType: " << lit.type << "\nTitle: " << lit.title
        << "\nYear: " << lit.year << "\nPublisher: " << lit.publisher << "\nPage Count: " << lit.pageCount
        << "\nAuthor: " << lit.author;
    return os;
}
