#include <print>

#include "ennemi.h"

void Afficher(const Ennemi& ennemi) {
  std::println("{} : {} pv, {} att, {} def", ennemi.nom, ennemi.pv,
               ennemi.attack, ennemi.defense);
}

int main() {
  // 1. Membre par membre, apres les valeurs par defaut de la structure.
  Ennemi gobelin;
  gobelin.nom = "Gurkg";
  gobelin.pv = 20;

  // 2. Dans l'ordre de declaration.
  Ennemi orc{"Orc", 25, 5, 3};

  // 3. Membres designes : l'ordre est libre, le reste garde son defaut.
  Ennemi michel{.nom = "Michel", .pv = 100, .defense = 10};

  Afficher(gobelin);
  Afficher(orc);
  Afficher(michel);
  return 0;
}
