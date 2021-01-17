#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
    std::cout << "---------FragTrap----------" << std::endl;
    {
        FragTrap a;
        FragTrap b("b");
        FragTrap c(a);
        a = FragTrap("c");

        a.meleeAttack("pig");
        b.rangedAttack("donkey");
        a.takeDamage(110);
        c.takeDamage(5);
        c.takeDamage(20);
        c.beRepaired(30);

        c.vaulthunter_dot_exe("Monkey");
        c.vaulthunter_dot_exe("Elephant");
        c.vaulthunter_dot_exe("Stranger");
        c.vaulthunter_dot_exe("Baby");
        c.vaulthunter_dot_exe("Apple");
    }

    std::cout << "---------ScavTrap----------" << std::endl;
    {
        ScavTrap a;
        ScavTrap b("ScavBot");
        ScavTrap c(a);
        a = ScavTrap("Bender");

        a.meleeAttack("pig");
        b.rangedAttack("donkey");
        a.takeDamage(110);
        c.takeDamage(5);
        c.takeDamage(20);
        c.beRepaired(30);

        c.challengeNewcomer("Monkey");
        c.challengeNewcomer("Elephant");
        c.challengeNewcomer("Stranger");
        c.challengeNewcomer("Baby");
        c.challengeNewcomer("Apple");
    }
    std::cout << "---------NinjaTrap----------" << std::endl;
    {
        ClapTrap    clap;
        FragTrap    frag;
        ScavTrap    scav;
        NinjaTrap   ninja;
        NinjaTrap   someone;

        ninja.meleeAttack("<Shadow>");
        ninja.rangedAttack("<Shadow>");
        ninja.takeDamage(30);
        ninja.beRepaired(30);

        ninja.ninjaShoebox(clap);
        ninja.ninjaShoebox(frag);
        ninja.ninjaShoebox(scav);
        ninja.ninjaShoebox(someone);
        ninja.ninjaShoebox(ninja);
    }
    return 0;
}
