#include "RPG.h"
#include <iostream>
using namespace std;

// Default constructor
RPG::RPG()
{
    name = "NPC";
    health = 100;
    strength = 10;
    defense = 10;
    type = "warrior";
    skills[0] = "Slash";
    skills[1] = "Parry";
    alive = true;
}

// Overloaded constructor
RPG::RPG(string name, int health, int strength, int defense, string type)
{
    this->name = name;
    this->health = health;
    this->strength = strength;
    this->defense = defense;
    this->type = type;
    alive = true;
    setSkills(); // Calls setSkills() to assign skills based on type
}

// Accessor functions
string RPG::getName() const { return name; }
int RPG::getHealth() const { return health; }
int RPG::getStrength() const { return strength; }
int RPG::getDefense() const { return defense; }

// Health update function
void RPG::updateHealth(int amount)
{
    health = amount;
    if (health <= 0)
    {
        health = 0;
        alive = false;
    }
    else
    {
        alive = true;
    }
}

// Check if character is alive
bool RPG::isAlive() const
{
    return health > 0;
}

// Set skills based on character type
void RPG::setSkills()
{
    if (type == "mage")
    {
        skills[0] = "Fire";
        skills[1] = "Thunder";
    }
    else if (type == "thief")
    {
        skills[0] = "Pilfer";
        skills[1] = "Jab";
    }
    else if (type == "archer")
    {
        skills[0] = "Parry";
        skills[1] = "Crossbow Attack";
    }
    else
    {
        skills[0] = "Slash";
        skills[1] = "Parry";
    }
}
