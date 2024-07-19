#ifndef SCIENTIFICTECHNICAL_H
#define SCIENTIFICTECHNICAL_H

#include "Literature.h"

class ScientificTechnicalLiterature : public Literature {
private:
    std::string fieldOfScience;
    int copies;

public:
    ScientificTechnicalLiterature(int sourceCode, const std::string& title, int year, const std::string& publisher, int pageCount, const std::string& author, const std::string& fieldOfScience, int copies);
    ~ScientificTechnicalLiterature() {}

    std::string getFieldOfScience() const;
    int getCopies() const;

    void setFieldOfScience(const std::string& fieldOfScience);
    void setCopies(int copies);

    void display() const override;
};

#endif // SCIENTIFICTECHNICAL_H
