# include "Character.h"
# include <iostream>

void testing_constructors();

int main(){
  testing_constructors();
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
