#include "ScientificTechnical.h"

ScientificTechnicalLiterature::ScientificTechnicalLiterature(int sourceCode, const std::string& title, int year, const std::string& publisher, int pageCount, const std::string& author, const std::string& fieldOfScience, int copies)
    : Literature(sourceCode, "Scientific Technical Literature", title, year, publisher, pageCount, author), fieldOfScience(fieldOfScience), copies(copies) {}

std::string ScientificTechnicalLiterature::getFieldOfScience() const { return fieldOfScience; }
int ScientificTechnicalLiterature::getCopies() const { return copies; }

void ScientificTechnicalLiterature::setFieldOfScience(const std::string& fieldOfScience) { this->fieldOfScience = fieldOfScience; }
void ScientificTechnicalLiterature::setCopies(int copies) { this->copies = copies; }

void ScientificTechnicalLiterature::display() const {
    Literature::display();
    std::cout << "Field of Science: " << fieldOfScience << "\nCopies: " << copies << std::endl;
}
