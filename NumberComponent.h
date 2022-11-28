#ifndef _NUMBERCOMPONENT
#define _NUMBERCOMPONENT

class NumberComponent {
 public:
  int getNumberComponent();
  void setNumberComponent(int numComponent);
  void addToNumberComponent(int operand);
  void subtractFromNumberComponent(int operand);

  NumberComponent* getUpperComponent();
  NumberComponent* getLowerComponent();

 private:
  int numComponent;
  NumberComponent* upperComponent;
  NumberComponent* lowerComponent;
};

#endif