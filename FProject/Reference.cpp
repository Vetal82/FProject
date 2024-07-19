#include "Reference.h"
#include <iostream>


ReferenceBooks::ReferenceBooks(int sourceCode, const std::string& title, int year, const std::string& publisher, int pageCount, const std::string& author, const std::string& direction, int volume, int part)
    : Literature(sourceCode, "Reference Books", title, year, publisher, pageCount, author), direction(direction), volume(volume), part(part) {}

std::string ReferenceBooks::getDirection() const { return direction; }
int ReferenceBooks::getVolume() const { return volume; }
int ReferenceBooks::getPart() const { return part; }

void ReferenceBooks::setDirection(const std::string& direction) { this->direction = direction; }
void ReferenceBooks::setVolume(int volume) { this->volume = volume; }
void ReferenceBooks::setPart(int part) { this->part = part; }

void ReferenceBooks::display() const {
    Literature::display();
    std::cout << "Direction: " << direction << "\nVolume: " << volume << "\nPart: " << part << std::endl;
}


