# include <string>
#ifndef CHARACTER_H
#define CHARACTER_H
class Character{
  public:
    Character();
    inline float speed() const{
      return speed_;
    };
    inline float max_speed() const{
      return max_speed_;
    };
    ~Character();
    void Accelerate();
    void Break();
    virtual std::string WhatAmI() const = 0;
    // At compile time, the compiler will search for ovverriders
    // of WhatAmI in derived classes.

  private:
    float speed_;
    float max_speed_;
};

#endif
