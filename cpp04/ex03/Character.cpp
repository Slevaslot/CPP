#include "Character.hpp"
#include "ICharacter.hpp"

std::string const & Character::getName() const {
    return (_name);
}

AMateria * Character::getMater(int array) {
    if (array >= 0 || array <= 3)
        return (_item[array]);
    else
        return (NULL);
}

Character::Character(std::string name) {
    _name = name;
    _item[0] = NULL;
    _item[0] = NULL;
    _item[0] = NULL;
    _item[0] = NULL;
}

Character::Character(ICharacter &chara) {
    _name = chara.getName();
    _item[0] = chara.getMater(0);
    _item[1] = chara.getMater(1);
    _item[2] = chara.getMater(2);
    _item[3] = chara.getMater(3);
}

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
    std::cout << _name;
    _item[idx]->use(target);
}