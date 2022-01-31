#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : \
	AForm("Shrubbery Creation Form", target, 145, 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : \
	AForm(src) {}

void ShrubberyCreationForm::action() const {
    std::ofstream openFile;
    openFile.open(this->getTarget() + "_shrubbery");
    if (!openFile.is_open()) {
        std::cout << "Cannot open \"" << this->getTarget() << "_shrubbery" << "\"" << std::endl;
        return ;
    }
    openFile <<
	"                                                        .\n" <<
	"                                             .         ;\n" <<
	"                .              .              ;%     ;;\n" <<
	"                  ,           ,                :;%  %;\n" <<
	"                   :         ;                   :;%;'     .,\n" <<
	"          ,.        %;     %;            ;        %;'    ,;\n" <<
	"            ;       ;%;  %%;        ,     %;    ;%;    ,%'\n" <<
	"             %;       %;%;      ,  ;       %;  ;%;   ,%;'\n" <<
	"              ;%;      %;        ;%;        % ;%;  ,%;'\n" <<
	"               `%;.     ;%;     %;'         `;%%;.%;'\n" <<
	"                `:;%.    ;%%. %@;        %; ;@%;%'\n" <<
	"                   `:%;.  :;bd%;          %;@%;'\n" <<
	"                     `@%:.  :;%.         ;@@%;'\n" <<
	"                       `@%.  `;@%.      ;@@%;\n" <<
	"                         `@%%. `@%%    ;@@%;\n" <<
	"                           ;@%. :@%%  %@@%;\n" <<
	"                             %@bd%%%bd%%:;\n" <<
	"                               #@%%%%%:;;\n" <<
	"                               %@@%%%::;\n" <<
	"                               %@@@%(o);  . '\n" <<
	"                               %@@@o%;:(.,'\n" <<
	"                           `.. %@@@o%::;\n" <<
	"                              `)@@@o%::;\n" <<
	"                               %@@(o)::;\n" <<
	"                              .%@@@@%::;\n" <<
	"                              ;%@@@@%::;.\n" <<
	"                             ;%@@@@%%:;;;.\n" <<
	"                         ...;%@@@@@%%:;;;;,..\n";
    openFile.close();
}

void ShrubberyCreationForm::execute(const Bureaucrat &exe) const {
	AForm::execute(exe);
	this->action();
}