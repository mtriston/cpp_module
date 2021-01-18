#ifndef PEON_HPP
# define PEON_HPP
# include <string>
# include <iostream>

class Peon : public Victim
{
public:
    Peon(std::string const & name = "Tramp");
    Peon(Peon const & other);
    Peon & operator=(Peon const & other);
    ~Peon();
    std::string const & getName() const;
    void getPolymorphed() const override;
};

std::ostream & operator << (std::ostream &os, const Peon &p)

#endif