#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
private:
    std::string _name;
    std::string _title;
public:
    Sorcerer
    (
        std::string const & name = "Sorcerer",
        std::string const & title = "Ordinary"
    );
    Sorcerer(Sorcerer const &);
    Sorcerer & operator=(Sorcerer const &);
    ~Sorcerer();
    std::string const & getName() const;
    std::string const & getTitle() const;
    void polymorph(Victim const &) const;
};

std::ostream & operator << (std::ostream &os, const Sorcerer &p);

#endif
