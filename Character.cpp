# include "Character.h"


Character::Character(): speed_(0), max_speed_(10){
};

void Character::Accelerate(){
  if( this -> speed_ + 1 <= this -> max_speed_){
    this -> speed_ += 1;
  }
};
