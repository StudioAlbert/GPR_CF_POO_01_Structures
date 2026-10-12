#include <print>

#include "ennemi.h"

void Afficher(const Ennemi& ennemi) {
  std::println("{} : {} pv, en ({}, {})", ennemi.nom, ennemi.pv,
               ennemi.position.x, ennemi.position.y);
}

int main() {
  Ennemi michel{.nom = "Michel", .pv = 100};
  michel.position = {10.0f, 20.0f};

  // Une structure membre s'atteint membre par membre.
  michel.position.x += 5.0f;

  Afficher(michel);
  return 0;
}
