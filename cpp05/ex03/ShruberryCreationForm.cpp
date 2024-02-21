#include "ShruberryCreationForm.hpp"

ShruberryCreationForm::ShruberryCreationForm(): AForm("ShruberryCreationForm", 145, 137)
{
	_target = "default";
}

ShruberryCreationForm::ShruberryCreationForm(std::string target): AForm("ShruberryCreationForm", 145, 137)
{
	_target = target;
}

ShruberryCreationForm::ShruberryCreationForm(const ShruberryCreationForm& Shrub): AForm(Shrub)
{
	*this = Shrub;
}

std::string ShruberryCreationForm::getTarget() const {
	return (_target);
}

ShruberryCreationForm& ShruberryCreationForm::operator=(const ShruberryCreationForm& Shrub)
{
	_target = Shrub.getTarget();
	return *this;
}

ShruberryCreationForm::~ShruberryCreationForm() {}

void ShruberryCreationForm::executeConcrete() const {
	std::fstream	fs;
	std::string target = _target + "_shrubbery";
	fs.open(target.c_str(), std::fstream::out | std::fstream::trunc);

	if (!fs.good())
		std::cerr << "Error while opening Shrubbery target file" << std::endl;

	fs <<
	"              * *\n"
	"           *    *  *\n"
	"      *  *    *     *  *\n"
	"     *     *    *  *    *\n"
	" * *   *    *    *    *   *\n"
	" *     *  *    * * .#  *   *\n"
	" *   *     * #.  .# *   *\n"
	"  *     \"#.  #: #\" * *    *\n"
	" *   * * \"#. ##\"       *\n"
	"   *       \"###\n"
	"             \"##\n"
	"              ##.\n"
	"              .##:\n"
	"              :###\n"
	"              ;###\n"
	"            ,####.\n"
	"/\\/\\/\\/\\/\\/.######.\\/\\/\\/\\/\\\n";

	fs.close();
}