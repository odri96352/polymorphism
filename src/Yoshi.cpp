# include "Yoshi.h"
# include <string>


Yoshi::Yoshi(): Character(){

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
