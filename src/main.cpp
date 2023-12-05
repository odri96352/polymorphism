# include "Mario.h"
# include "Yoshi.h"
# include <iostream>
# include <vector>

void testing_constructors();
void testing_accelerate();
void testing_break();
void testing_what_am_i();
void race_with_iterator_for_loop();
void mario_kart();


int main(){
  testing_constructors();
  std::cout<<std::endl;
  testing_accelerate();
  std::cout<<std::endl;
  testing_break();
  std::cout<<std::endl;
  testing_what_am_i();
  std::cout<<std::endl;
  mario_kart();
  std::cout<<std::endl;
  std::exit(EXIT_SUCCESS);
}

void testing_constructors(){
  std::cout<<"Testing the default constructor of Mario"<<std::endl;
  Mario default_chara =Mario();
  std::cout<<"Speed:"<<std::endl;
  std::cout<<default_chara.speed()<<std::endl;
  std::cout<<"Max speed:"<<std::endl;
  std::cout<<default_chara.max_speed()<<std::endl;
  std::cout<<"Testing the default constructor of Yoshi"<<std::endl;
  Yoshi default_lizard =Yoshi();
  std::cout<<"Speed:"<<std::endl;
  std::cout<<default_lizard.speed()<<std::endl;
  std::cout<<"Max speed:"<<std::endl;
  std::cout<<default_lizard.max_speed()<<std::endl;
  std::cout<<"Number of crests:"<<std::endl;
  std::cout<<default_lizard.get_crests()<<std::endl;
  std::cout<<"Testing the constructor of Yoshi"<<std::endl;
  Yoshi lizard =Yoshi(7);
  std::cout<<"Speed:"<<std::endl;
  std::cout<<lizard.speed()<<std::endl;
  std::cout<<"Max speed:"<<std::endl;
  std::cout<<lizard.max_speed()<<std::endl;
  std::cout<<"Number of crests:"<<std::endl;
  std::cout<<lizard.get_crests()<<std::endl;
  std::cout<<std::endl;
};

void testing_accelerate(){
  std::cout<<"Testing the accelerate function with Yoshi"<<std::endl;
  Yoshi test =Yoshi();
  std::cout<<"Speed before acceleration:"<<std::endl;
  std::cout<<test.speed()<<std::endl;
  test.Accelerate();
  std::cout<<"Speed after acceleration:"<<std::endl;
  std::cout<<test.speed()<<std::endl;

  std::cout<<"Testing the accelerate function with Mario"<<std::endl;
  Mario fat_plumber =Mario();
  std::cout<<"Speed before acceleration:"<<std::endl;
  std::cout<<fat_plumber.speed()<<std::endl;
  fat_plumber.Accelerate();
  std::cout<<"Speed after acceleration:"<<std::endl;
  std::cout<<fat_plumber.speed();
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

void mario_kart(){
  int race_length = 100; // meters
  int time_interval = 5; // seconds
  int winner_position = 0; //meters
  int winner_number = -1; //none yet

  std::vector<Character*> runner;
  runner.push_back(new Yoshi());
  runner.push_back(new Mario());

  std::vector<int> position; // on the starting block
  position.push_back(0);
  position.push_back(0);

  std::cout << "1"<<std::endl;
  std::cout << "2"<<std::endl;
  std::cout << "3"<<std::endl;
  std::cout << "Go !"<<std::endl;

  while( winner_position < race_length ){
    for (int i = 0; i<2; i++){
      runner[i]->Accelerate();
      position[i]+=runner[i]->speed()*time_interval;;
      if (position[i]>winner_position){
        winner_position=position[i];
        winner_number = i;
      }
    }
  std::cout << "At this stage of the race, ";
  std::cout << runner[winner_number] -> WhatAmI();
  std::cout << " is winning, at ";
  std::cout << position[winner_number];
  std::cout << " meters."<<std::endl;
  }
  std::cout << "The winner is:"<<std::endl;
  std::cout << runner[winner_number] -> WhatAmI();
  std::cout << "!"<<std::endl;

  for (auto participant : runner){
    delete participant;
  }


};
