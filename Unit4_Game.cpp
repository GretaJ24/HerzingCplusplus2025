#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Base class: Character
class Character {
public:
    string name;
    int health;
    int attackPower;

    // Constructor
    Character(string n, int h, int a) : name(n), health(h), attackPower(a) {}

    // Method to attack another character
    virtual void attack(Character& target) {
        cout << name << " attacks " << target.name << " for " << attackPower << " damage!" << endl;
        target.takeDamage(attackPower);
    }

    // Method to take damage
    void takeDamage(int damage) {
        health -= damage;
        if (health < 0) health = 0;  // Prevent negative health
        cout << name << " now has " << health << " health." << endl;
    }

    // Check if character is alive
    bool isAlive() {
        return health > 0;
    }

    // Display character stats
    void displayStats() {
        cout << name << " | Health: " << health << " | Attack Power: " << attackPower << endl;
    }
};

// Derived class: Wizard (inherits from Character)
class Wizard : public Character {
public:
    int spellPower;

    // Constructor for Wizard (adds spell power)
    Wizard(string n, int h, int a, int s) : Character(n, h, a), spellPower(s) {}

    // Override attack method to allow spell casting
    void attack(Character& target) override {
        char choice;
        cout << name << " has two options: Regular Attack (r) or Cast Spell (s): ";
        cin >> choice;

        if (choice == 'r' || choice == 'R') {
            // Regular attack
            cout << name << " decks " << target.name << " for " << attackPower << " damage!" << endl;
            target.takeDamage(attackPower);
        } else if (choice == 's' || choice == 'S') {
            // Cast a spell (higher damage)
            cout << name << " casts Sleepy! " << target.name << " falls asleep during the battle for " << spellPower << " damage!" << endl;
            target.takeDamage(spellPower);
        } else {
            cout << "Invalid choice! Regular attack used by default." << endl;
            cout << name << " attacks " << target.name << " for " << attackPower << " damage!" << endl;
            target.takeDamage(attackPower);
        }
    }
};

//Derived class: Mage
class Mage : public Character{
    public:
    int spellPower;

    // Constructor for Mage (adds spell power)
    Mage(string n, int h, int a, int s) : Character(n, h, a), spellPower(s) {}

    // Override attack method to allow spell casting
    void attack(Character& target) override {
        char choice;
        cout << name << " has two options: Regular Attack (r) or Cast Spell (s): ";
        cin >> choice;

        if (choice == 'r' || choice == 'R') {
            // Regular attack
            cout << name << " smacks " << target.name << " for " << attackPower << " damage!" << endl;
            target.takeDamage(attackPower);
        } else if (choice == 's' || choice == 'S') {
            // Cast a spell (higher damage)
            cout << name << " uses the power of Books! " << target.name << " takes " << spellPower << " damage!" << endl;
            target.takeDamage(spellPower);
        } else {
            cout << "Invalid choice! Regular attack used by default." << endl;
            cout << name << " attacks " << target.name << " for " << attackPower << " damage!" << endl;
            target.takeDamage(attackPower);
        }
    }
};

class Warlock : public Character{
    public:
    int spellPower;

    // Constructor for Warlock (adds spell power)
    Warlock(string n, int h, int a, int s) : Character(n, h, a), spellPower(s) {}

    // Override attack method to allow spell casting
    void attack(Character& target) override {
        char choice;
        cout << name << " has two options: Regular Attack (r) or Cast Spell (s): ";
        cin >> choice;

        if (choice == 'r' || choice == 'R') {
            // Regular attack
            cout << name << " stabs " << target.name << " for " << attackPower << " damage!" << endl;
            target.takeDamage(attackPower);
        } else if (choice == 's' || choice == 'S') {
            // Cast a spell (higher damage)
            cout << name << " casts Itchy Bones! " << target.name << " takes " << spellPower << " damage!" << endl;
            target.takeDamage(spellPower);
        } else {
            cout << "Invalid choice! Regular attack used by default." << endl;
            cout << name << " attacks " << target.name << " for " << attackPower << " damage!" << endl;
            target.takeDamage(attackPower);
        }
    }
};
class Witch : public Character{
    public:
    int spellPower;

    // Constructor for Witch (adds spell power)
    Witch(string n, int h, int a, int s) : Character(n, h, a), spellPower(s) {}

    // Override attack method to allow spell casting
    void attack(Character& target) override {
        char choice;
        cout << name << " has two options: Regular Attack (r) or Cast Spell (s): ";
        cin >> choice;

        if (choice == 'r' || choice == 'R') {
            // Regular attack
            cout << name << " kicks " << target.name << " for " << attackPower << " damage!" << endl;
            target.takeDamage(attackPower);
        } else if (choice == 's' || choice == 'S') {
            // Cast a spell (higher damage)
            cout << name << " casts Rat Attack! " << target.name << " is buried under the horde of rats and takes " << spellPower << " damage!" << endl;
            target.takeDamage(spellPower);
        } else {
            cout << "Invalid choice! Regular attack used by default." << endl;
            cout << name << " attacks " << target.name << " for " << attackPower << " damage!" << endl;
            target.takeDamage(attackPower);
        }
    }
};

// Function to display available characters
void displayCharacterChoices(const std::vector<Character*>& characters) {
    cout << "Choose two characters for the WIZARD BATTLE (enter the number):" << endl;
    for (int i = 0; i < characters.size(); ++i) {
        cout << i + 1 << ". " << characters[i]->name << endl;
    }
}

int main() {
    // Create a few characters for the player to choose from
    vector<Character*> characters = {
        new Warlock("Warlock Johnson", 70, 20, 30),
        new Mage("Mage Flicity", 80, 15, 45),
        new Wizard("Wizard Dan", 100, 20, 35),  // Adding a Wizard with special spell power
        new Witch("Witch Betty", 120, 15, 20),
        new Character("Some Guy", 70, 30)
    };

    // Display available characters
    displayCharacterChoices(characters);

    int choice1, choice2;
    cout << "Enter the number of the first character: ";
    cin >> choice1;

    // Validate choice1
    if (choice1 < 1 || choice1 > 5) {
        cout << "Invalid choice. Exiting program." << endl;
        return 1;
    }

    cout << "Enter the number of the second character: ";
    cin >> choice2;

    // Validate choice2
    if (choice2 < 1 || choice2 > 5 || choice1 == choice2) {
        cout << "Invalid choice. You must choose two different characters." << endl;
        return 1;
    }

    // Get the chosen characters
    Character* char1 = characters[choice1 - 1];
    Character* char2 = characters[choice2 - 1];

    // Display the chosen characters' stats
    cout << "\nYou have chosen the following characters for the battle:" << endl;
    char1->displayStats();
    char2->displayStats();

    // Battle simulation
    cout << "\nThe battle begins!" << endl;
    while (char1->isAlive() && char2->isAlive()) {
        char1->attack(*char2);
        if (char2->isAlive()) {
            char2->attack(*char1);
        }
        cout << endl;
    }

    // Determine the winner
    if (char1->isAlive()) {
        cout << "\n" << char1->name << " wins the battle!" << endl;
    } else {
        cout << "\n" << char2->name << " wins the battle!" << endl;
    }

    // Clean up dynamically allocated memory
    for (auto character : characters) {
        delete character;
    }

    return 0;
}
