#include "LiteratureContainerBook.h"


void LiteratureContainer::addLiterature(std::unique_ptr<Literature> literature) {
    collection.push_back(std::move(literature));
}

void LiteratureContainer::removeLiterature(int sourceCode) {
    auto it = std::remove_if(collection.begin(), collection.end(), [sourceCode](const std::unique_ptr<Literature>& lit) {
        return lit->getSourceCode() == sourceCode;
        });
    collection.erase(it, collection.end());
}

void LiteratureContainer::editLiterature(int sourceCode, const Literature& newLiterature) {
    for (auto& lit : collection) {
        if (lit->getSourceCode() == sourceCode) {
            *lit = newLiterature;
            break;
        }
    }
}

Literature* LiteratureContainer::findLiterature(int sourceCode) const {
    for (const auto& lit : collection) {
        if (lit->getSourceCode() == sourceCode) {
            return lit.get();
        }
    }
    return nullptr;
}

void LiteratureContainer::displayAll() const {
    for (const auto& lit : collection) {
        lit->display();
        std::cout << std::endl;
    }
}
