#ifndef DENTALBENEFIT_H
#define DENTALBENEFIT_H
#include"Benefits.h"

class DentalBenefit : public Benefits
{
    public:
        void getBenefits(double);
        double calculateBenefits();

    protected:
       double DentalB;

};

#endif // DENTALBENEFIT_H
