#pragma once

#include <print>
#include <string>

// Une class : tout est prive par defaut. Sans le public: plus bas, main.cc ne
// compile pas.
class Ennemi {
 public:
  Ennemi(std::string nom, int pv) : nom_(std::move(nom)), pv_(pv) {}

  void Afficher() const { std::println("{} : {} pv", nom_, pv_); }

  void Heal(int heal_points) { pv_ += heal_points; }

 private:
  std::string nom_;
  int pv_ = 0;
};
