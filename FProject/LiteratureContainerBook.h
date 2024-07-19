#pragma once
#ifndef LITERATURECONTAINER_H
#define LITERATURECONTAINER_H

#include "Literature.h"
#include <vector>
#include <memory>
#include <algorithm>

class LiteratureContainer {
private:
    std::vector<std::unique_ptr<Literature>> collection;

public:
    void addLiterature(std::unique_ptr<Literature> literature);
    void removeLiterature(int sourceCode);
    void editLiterature(int sourceCode, const Literature& newLiterature);
    Literature* findLiterature(int sourceCode) const;
    void displayAll() const;
};

#endif // LITERATURECONTAINER_H


