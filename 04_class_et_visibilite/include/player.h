#pragma once

#include <string>

class Player {
 public:
  // Le nom passe par une methode : la class peut refuser une valeur.
  void ChangeName(const std::string& new_name) {
    if (!new_name.empty()) {
      nom_ = new_name;
    }
  }

  const std::string& nom() const { return nom_; }

  int stamina() const { return stamina_; }
  void set_stamina(int new_stamina) { stamina_ = new_stamina; }

 private:
  std::string nom_ = "Sans nom";
  int stamina_ = 100;
};
