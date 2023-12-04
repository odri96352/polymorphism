# include "Character.h"
# include <iostream>

void testing_constructors();
void testing_accelerate();

int main(){
  testing_constructors();
  testing_accelerate();
  std::exit(EXIT_SUCCESS);
}

void testing_constructors(){
  std::cout<<"Testing the default constructor"<<std::endl;
  Character default_chara =Character();
  std::cout<<"Speed:"<<std::endl;
  std::cout<<default_chara.speed()<<std::endl;
  std::cout<<"Max speed:"<<std::endl;
  std::cout<<default_chara.max_speed()<<std::endl;
};

void testing_accelerate(){
  std::cout<<"Testing the accelerate function"<<std::endl;
  Character test =Character();
  std::cout<<"Speed before acceleration:"<<std::endl;
  std::cout<<test.speed()<<std::endl;
  test.Accelerate();
  std::cout<<"Speed after acceleration:"<<std::endl;
  std::cout<<test.speed()<<std::endl;
};
