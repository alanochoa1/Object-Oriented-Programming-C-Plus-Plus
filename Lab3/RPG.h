#ifndef RPG_H
#define RPG_H

#include <string>
using namespace std;

const int SKILL_SIZE = 2;

class RPG
{
public:
    RPG(); // Default constructor
    RPG(string name, int health, int strength, int defense, string type); // Overloaded constructor

    bool isAlive() const;
    string getName() const;
    int getHealth() const;
    int getStrength() const;
    int getDefense() const;

    void updateHealth(int amount);

    // Commenting out functions not yet implemented
    // void setSkill(string skill1, string skill2);
    // void printAction(string action, RPG* target);
    // void attack(RPG* target);
    // void useSkill(RPG* target);

private:
    string name;
    int health;
    int strength;
    int defense;
    string type;
    string skills[SKILL_SIZE];
    bool alive;

    void setSkills(); // Helper function called in the overloaded constructor
};

#endif

