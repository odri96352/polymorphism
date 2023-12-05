# include "Character.h"

class Yoshi: public Character{
  public:
    Yoshi();
    virtual ~Yoshi();
    Yoshi(int crest_number);
    int get_crests();
    std::string WhatAmI() const override;
    void Accelerate();
  private:
    int* crests_= new int;
};
