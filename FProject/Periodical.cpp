#include "Periodical.h"

Periodicals::Periodicals(int sourceCode, const std::string& title, int year, const std::string& publisher, int pageCount, const std::string& author, const std::string& periodicalType, const std::string& publicationPeriod)
    : Literature(sourceCode, "Periodicals", title, year, publisher, pageCount, author), periodicalType(periodicalType), publicationPeriod(publicationPeriod) {}

std::string Periodicals::getPeriodicalType() const { return periodicalType; }
std::string Periodicals::getPublicationPeriod() const { return publicationPeriod; }

void Periodicals::setPeriodicalType(const std::string& periodicalType) { this->periodicalType = periodicalType; }
void Periodicals::setPublicationPeriod(const std::string& publicationPeriod) { this->publicationPeriod = publicationPeriod; }

void Periodicals::display() const {
    Literature::display();
    std::cout << "Periodical Type: " << periodicalType << "\nPublication Period: " << publicationPeriod << std::endl;
}
