#include "FragTrap.hpp"

int main()
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
    return 0;
}
