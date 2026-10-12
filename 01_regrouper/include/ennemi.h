#pragma once

#include <string>

// Six variables qui parlent du meme ennemi : on les regroupe.
struct Ennemi {
  std::string nom;
  int pv;
  int attack;
  int defense;
  bool est_mort;
};
