#ifndef _NUMBERCOMPONENT
#define _NUMBERCOMPONENT

class NumberComponent {
 public:
  int getNumberComponent();
  void setNumberComponent(int numComponent);
  void addToNumberComponent(int operand);
  void subtractFromNumberComponent(int operand);

  NumberComponent* getUpperGroup();
  NumberComponent* getLowerGroup();

 private:
  int numComponent;
  NumberComponent* upperGroup;
  NumberComponent* lowerGroup;
};

#endif