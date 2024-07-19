#include <iostream>
#include "ScientificTechnical.h"
#include "Periodical.h"
#include "Reference.h"
#include "LiteratureContainerBook.h"

int main() {
    setlocale(LC_ALL, "Ukr");

    LiteratureContainer library;

    try {
        auto sciTechLit = std::make_unique<ScientificTechnicalLiterature>(1, "Scientific Book", 2021, "Tech Publisher", 300, "John Doe", "Physics", 10);
        auto periodical = std::make_unique<Periodicals>(2, "Tech Magazine", 2022, "Magazine Publisher", 50, "Jane Doe", "Monthly", "Monthly");
        auto referenceBook = std::make_unique<ReferenceBooks>(3, "Reference Book", 2020, "Ref Publisher", 500, "Dr. Smith", "Engineering", 2, 1);

        library.addLiterature(std::move(sciTechLit));
        library.addLiterature(std::move(periodical));
        library.addLiterature(std::move(referenceBook));

        library.displayAll();

        // Редагування літератури
        ScientificTechnicalLiterature newSciTechLit(1, "Updated Scientific Book", 2023, "New Tech Publisher", 350, "John Doe", "Chemistry", 15);
        library.editLiterature(1, newSciTechLit);

        std::cout << "\nПісля редагування:\n";
        library.displayAll();

        // Видалення літератури
        library.removeLiterature(2);

        std::cout << "\nПісля видалення:\n";
        library.displayAll();

        // Пошук літератури
        Literature* foundLit = library.findLiterature(3);
        if (foundLit) {
            std::cout << "\nЗнайдено літературу:\n";
            foundLit->display();
        }
        else {
            std::cout << "\nЛітературу не знайдено\n";
        }

    }
    catch (const std::exception& e) {
        std::cerr << "Помилка: " << e.what() << std::endl;
    }

    return 0;
}
