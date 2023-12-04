
class Character{
  public:
    Character();
    inline float speed() const{
      return speed_;
    };
    inline float max_speed() const{
      return max_speed_;
    };
    // ~Character;
    void Accelerate();
    // void Break();
  private:
    float speed_;
    float max_speed_;
};
