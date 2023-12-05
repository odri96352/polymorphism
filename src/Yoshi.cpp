# include "Yoshi.h"
# include <string>


Yoshi::Yoshi(): Character(){
      *crests_= 0;
};

Yoshi::Yoshi(int crest_number){
  *crests_= crest_number ;
};

int Yoshi::get_crests(){
  return *crests_;
};


std::string Yoshi::WhatAmI() const{
  std::string output = "Yoshi";
  return output;
};

void Yoshi::Accelerate(){
  if( this -> speed_ + 3 <= this -> max_speed_){
    this -> speed_ += 3;
  }
};
