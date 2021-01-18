#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <string>
# include <iostream>

class Victim
{
protected:
    std::string _name;
public:
    Victim(std::string const & name = "Passerby");
    Victim(Victim const & other);
    Victim & operator=(Victim const & other);
    virtual ~Victim();
    std::string const & getName() const;
    virtual void getPolymorphed() const;
};

std::ostream & operator << (std::ostream &os, const Victim &p)

#endif