#include "NumberComponent.h"

using namespace std;

int NumberComponent::getNumberComponent() { return numComponent; }
void NumberComponent::setNumberComponent(int num) { numComponent = num; }
void NumberComponent::addToNumberComponent(int operand) {}
void NumberComponent::subtractFromNumberComponent(int operand) {}

NumberComponent* NumberComponent::getUpperGroup() {}
NumberComponent* NumberComponent::getLowerGroup() {}