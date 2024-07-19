#ifndef LITERATURE_H
#define LITERATURE_H

#include <string>
#include <iostream>

class Literature {
protected:
    int sourceCode;
    std::string type;
    std::string title;
    int year;
    std::string publisher;
    int pageCount;
    std::string author;

public:
    Literature(int sourceCode, const std::string& type, const std::string& title, int year, const std::string& publisher, int pageCount, const std::string& author);
    virtual ~Literature() {}

    int getSourceCode() const;
    std::string getType() const;
    std::string getTitle() const;
    int getYear() const;
    std::string getPublisher() const;
    int getPageCount() const;
    std::string getAuthor() const;

    void setSourceCode(int sourceCode);
    void setType(const std::string& type);
    void setTitle(const std::string& title);
    void setYear(int year);
    void setPublisher(const std::string& publisher);
    void setPageCount(int pageCount);
    void setAuthor(const std::string& author);

    virtual void display() const;

    friend std::ostream& operator<<(std::ostream& os, const Literature& lit);
};

#endif // LITERATURE_H
