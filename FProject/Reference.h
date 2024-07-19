#ifndef REFERENCEBOOKS_H
#define REFERENCEBOOKS_H

#include "Literature.h"

class ReferenceBooks : public Literature {
private:
    std::string direction;
    int volume;
    int part;

public:
    ReferenceBooks(int sourceCode, const std::string& title, int year, const std::string& publisher, int pageCount, const std::string& author, const std::string& direction, int volume, int part);
    ~ReferenceBooks() {}

    std::string getDirection() const;
    int getVolume() const;
    int getPart() const;

    void setDirection(const std::string& direction);
    void setVolume(int volume);
    void setPart(int part);

    void display() const override;
};

#endif // REFERENCEBOOKS_H
