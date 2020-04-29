#include"iostream"
#include "cocos2D"
using namespace std;
struct muro
{
  bitmap = ("foto.png");
  int muroX,muroY;
};


class Enemy {
 public:
  virtual void attack() {
  }
};

class Ninja: public Enemy {
 public:
  void attack() {
    float Ataque=24.6;
    cout << "Ninja!"<<endl;
  }
};

class Monster: public Enemy {
 public:
  void attack() {
   cout << "Monster!"<<endl;
 }
};