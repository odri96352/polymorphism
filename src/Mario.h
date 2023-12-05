# include "Character.h"

class Mario: public Character{
  public:
    Mario();
    std::string WhatAmI() const override;
  private:
};
