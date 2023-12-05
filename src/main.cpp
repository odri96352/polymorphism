# include "Mario.h"
# include "Yoshi.h"
# include <iostream>

void testing_constructors();
void testing_accelerate();
void testing_break();
void testing_what_am_i();

int main(){
  testing_constructors();
  std::cout<<std::endl;
  testing_accelerate();
  std::cout<<std::endl;
  testing_break();
  std::cout<<std::endl;
  testing_what_am_i();
  std::cout<<std::endl;
  std::exit(EXIT_SUCCESS);
}

void testing_constructors(){
  std::cout<<"Testing the default constructor"<<std::endl;
  Mario default_chara =Mario();
  std::cout<<"Speed:"<<std::endl;
  std::cout<<default_chara.speed()<<std::endl;
  std::cout<<"Max speed:"<<std::endl;
  std::cout<<default_chara.max_speed();
  std::cout<<std::endl;
};

void testing_accelerate(){
  std::cout<<"Testing the accelerate function"<<std::endl;
  Yoshi test =Yoshi();
  std::cout<<"Speed before acceleration:"<<std::endl;
  std::cout<<test.speed()<<std::endl;
  test.Accelerate();
  std::cout<<"Speed after acceleration:"<<std::endl;
  std::cout<<test.speed();
  std::cout<<std::endl;
};

void testing_break(){
  std::cout<<"Testing the break function"<<std::endl;
  Mario test =Mario();
  std::cout<<"Speed before decelerate:"<<std::endl;
  std::cout<<test.speed()<<std::endl;
  test.Break();
  std::cout<<"Speed after decelerate:"<<std::endl;
  std::cout<<test.speed()<<std::endl;
  std::cout<<"Speed before and after decelerate for a case that works:"<<std::endl;
  test.Accelerate();
  std::cout<<test.speed()<<std::endl;
  test.Break();
  std::cout<<test.speed();
  std::cout<<std::endl;
};

void testing_what_am_i(){
  std::cout<<"Testing the different WhatAmI"<<std::endl;
  Mario italian =Mario();
  std::cout<<"What is the first character ?"<<std::endl;
  std::cout<<italian.WhatAmI()<<std::endl;
  Yoshi lizard =Yoshi();
  std::cout<<"What is the second character ?"<<std::endl;
  std::cout<<lizard.WhatAmI()<<std::endl;
  std::cout<<std::endl;
};
