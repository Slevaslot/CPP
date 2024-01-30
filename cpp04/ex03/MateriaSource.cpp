#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    _item[0] = NULL;
    _item[1] = NULL;
    _item[2] = NULL;
    _item[3] = NULL;
}

void MateriaSource::learnMateria(AMateria* mater) {
    if (!_item[0])
        _item[0] = mater;
    else if (!_item[1])
        _item[1] = mater;
    else if (!_item[2])
        _item[2] = mater;
    else if (!_item[3])
        _item[3] = mater;
    else
        std::cout << "too much materia equipped" << std::endl;
}

MateriaSource::~MateriaSource() {
    if (_item[0])
        delete _item[0];
    if (_item[1])
        delete _item[1];
    if (_item[2])
        delete _item[2];
    else if (_item[3])
        delete _item[3];
};

AMateria* MateriaSource::createMateria(std::string const & type) {
    if (_item[0] && _item[0]->getType() == type)
        return (_item[0]);
    else if (_item[1] && _item[1]->getType() == type)
        return (_item[1]);
    else if (_item[2] && _item[2]->getType() == type)
        return (_item[2]);
    else if (_item[3] && _item[3]->getType() == type)
        return (_item[3]);
    else
        return (0);
}
