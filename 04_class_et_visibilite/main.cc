#include <print>

#include "ennemi.h"
#include "player.h"

int main() {
  Ennemi michel{"Michel", 100};
  michel.Afficher();
  michel.Heal(5);
  michel.Afficher();

  // michel.pv_ = 0;  // erreur de compilation : pv_ est prive.

  Player player;
  player.ChangeName("Seb");
  player.ChangeName("");  // refuse : le nom precedent est garde.
  player.set_stamina(12);

  std::println("{} : {} stamina", player.nom(), player.stamina());
  return 0;
}
