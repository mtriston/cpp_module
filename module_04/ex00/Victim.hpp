#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <string>
# include <iostream>

class Victim
{
protected:
    std::string _name;
public:
    Victim(std::string const & name = "Victim");
    Victim(Victim const &);
    Victim & operator=(Victim const &);
    virtual ~Victim();
    std::string const & getName() const;
    virtual void getPolymorphed() const;
};

std::ostream & operator << (std::ostream &os, const Victim &p);

#endif
