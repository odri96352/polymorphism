# include "Mario.h"
# include <string>


Mario::Mario(): Character(){
};

std::string Mario::WhatAmI() const {
  std::string output = "Mario";
  return output;
};
