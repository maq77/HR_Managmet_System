#include "DentalBenefit.h"
#include <iostream>
using namespace std;

void DentalBenefit::getBenefits(double amountH){

this->amount = amountH;

}
double DentalBenefit::calculateBenefits(){
DentalB = (amount*10.0)/100.0;
return DentalB;

}
