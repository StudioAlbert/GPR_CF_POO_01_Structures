#include <print>

#include "ennemi.h"

int main() {
  Ennemi gobelin;
  gobelin.nom = "Gurkg";
  gobelin.pv = 20;
  gobelin.attack = 5;
  gobelin.defense = 2;
  gobelin.est_mort = false;

  std::println("{} : {} pv, {} att, {} def", gobelin.nom, gobelin.pv,
               gobelin.attack, gobelin.defense);
  return 0;
}
