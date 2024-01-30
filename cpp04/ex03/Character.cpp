#include "Character.hpp"

std::string const & Character::getName() const {
    return (_name);
}

AMateria * Character::getMater(int array) {
    if (array >= 0 && array <= 3)
        return (_item[array]);
    else
        return (NULL);
}

Character::Character(std::string name) {
    _name = name;
    _item[0] = NULL;
    _item[1] = NULL;
    _item[2] = NULL;
    _item[3] = NULL;
}

Character::Character(ICharacter &chara) {
    _name = chara.getName();
    _item[0] = chara.getMater(0);
    _item[1] = chara.getMater(1);
    _item[2] = chara.getMater(2);
    _item[3] = chara.getMater(3);
}

Character::~Character() {
    std::cout << "Character destructor called" << std::endl;
};

void Character::equip(AMateria *mater) {
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

void Character::unequip(int idx) {
    _item[idx] = NULL;
}

void Character::use (int idx, ICharacter& target) {
    if (_item[idx])
    {
        std::cout << "I CAST !\n";
        _item[idx]->use(target);
    }
}
