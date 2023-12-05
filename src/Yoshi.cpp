# include "Yoshi.h"
# include <string>


Yoshi::Yoshi(): Character(){

};
std::string Yoshi::WhatAmI() const{
  std::string output = "Yoshi";
  return output;
};
