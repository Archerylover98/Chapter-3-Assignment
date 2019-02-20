#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

int main()
{
  const int Inventory_Max = 10;
  string inventory[Inventory_Max];
  int Gear = 0;
  inventory[Gear++] = "Sword";
  inventory[Gear++] = "Armor";
  inventory[Gear++] = "Shield";
  cout <<"Your Starting Gear:\n" << endl;
  for (int i = 0; i < Gear; ++i)
    {
      cout << inventory[i] << endl;
    }
  cout << endl <<"Congratulations on acquiring starter gear for your adventure, Hero.\n" << endl;
  cout <<"However, you will acquire new gear and items during your adventures.\n" << endl;
  cout <<"This acquisition is in aid of you succeeding against the demon lord." << endl << endl;
  cout <<"You shall find these new items due to our need for the demon to die." << endl << endl;
  cout <<"Good luck on your travels Hero, we will pray for your success." << endl << endl;
  cout <<"You have defeated the first boss of 4 on your journey, Hero." << endl;
  cout <<"Your reward is a new weapon, which you shall name." <<endl <<endl;
  int Weapon;
  cin >> Weapon;
  cout <<endl << "Your new Weapon's name is: ";
  cout << Weapon <<endl <<endl;
  inventory[Gear++] = "Excalibur";
  for (int i = 0; i < Gear; ++i)
    {
      cout << inventory[i] << endl;
    }
  cout <<endl;
  cout <<"You have defeated your second boss. Congratulations." <<endl;
  cout <<"Your reward is an infinite-use healing potion. Name your new artifact." << endl;
  int Potion;
  cin >> Potion;
  cout <<"Your new potion is named: " <<endl;
  cout << Potion <<endl <<endl;
  inventory[Gear++] = "Infinite_Potion";
  cout <<endl;
  for (int i = 0; i < Gear; ++i)
    {
      cout << inventory[i] << endl;
    }
  cout <<endl;
  cout <<"The third boss has fallen before you, well-done." << endl;
  cout <<"Your reward is an enchanted Necklace of protection. Name it." <<endl;
  int Necklace;
  cin >> Necklace;
  cout <<"Your new enchanted necklace is named: ";
  cout << Necklace <<endl <<endl;
  inventory[Gear++] = "Necklace";
  cout <<endl;
  for (int i = 0; i < Gear; ++i)
    {
      cout << inventory[i] << endl;
    }
  cout <<endl;
  cout <<"The Fourth Boss has fallen before you, consuming an item." <<endl <<endl;
  cout <<"Select which item you sacrificed for your victory." <<endl <<endl;
  if (Gear>=6)
  {
    inventory[Gear--] = "Necklace";
  }
  cout <<"To defeat the fourth, and final boss, you sacrificed your Necklace." <<endl;
   for (int i = 0; i < Gear; ++i)
    {
      cout << inventory[i] << endl;
    }
  return 0;
}