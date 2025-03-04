#include "RPG.h"
#include <iostream>

using namespace std;

int main()
{
	RPG defaultCharacter;
	RPG customCharacter("Hero", 120, 50, 20, "mage");

	cout << "Character: " << defaultCharacter.getName() << endl;
	cout << "Health: " << defaultCharacter.getHealth() << endl;
	cout << "Is Alive?" << (defaultCharacter.isAlive() ? " Yes" : " No") << endl;

	cout << "\nCharacter: " << customCharacter.getName() << endl;
	cout << "Health: " << customCharacter.getHealth() << endl;
	cout << "Is Alive?" << (customCharacter.isAlive() ? " Yes" : " No") << endl;


	cout << "\nUpdating health of " << customCharacter.getName() << " to 0...\n";
	customCharacter.updateHealth(0);

	cout << "Health: " << customCharacter.getHealth() << endl;
	cout << "Is Alive?" << (customCharacter.isAlive() ? " Yes" : " No") << endl;

	return 0;
}
