#ifndef _NUMBER
#define _NUMBER

#include "NumberComponent.h"
#include <string>

class Number {
 public:
  Number(std::string number);
  Number(int number);

  NumberComponent* getHeadComponent();

 private:
  NumberComponent* headComponent;
};

#endif