#pragma once

#include <string>

#include "vector.h"

struct Ennemi {
  std::string nom;
  int pv = 0;
  Vector position;
};
