//
// Created by mtriston on 21.01.2021.
//

#ifndef MODULE_04_IMATERIASOURCE_HPP
#define MODULE_04_IMATERIASOURCE_HPP

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif //MODULE_04_IMATERIASOURCE_HPP
