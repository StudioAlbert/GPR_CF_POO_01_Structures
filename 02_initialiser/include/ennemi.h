#pragma once

#include <string>

struct Ennemi {
  std::string nom;
  int pv = 0;
  int attack = 0;
  int defense = 0;
  bool est_mort = false;
};
