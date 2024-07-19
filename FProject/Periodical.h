#ifndef PERIODICAL_H
#define PERIODICAL_H

#include "Literature.h"

class Periodicals : public Literature {
private:
    std::string periodicalType;
    std::string publicationPeriod;

public:
    Periodicals(int sourceCode, const std::string& title, int year, const std::string& publisher, int pageCount, const std::string& author, const std::string& periodicalType, const std::string& publicationPeriod);
    ~Periodicals() {}

    std::string getPeriodicalType() const;
    std::string getPublicationPeriod() const;

    void setPeriodicalType(const std::string& periodicalType);
    void setPublicationPeriod(const std::string& publicationPeriod);

    void display() const override;
};

#endif // PERIODICAL_H
