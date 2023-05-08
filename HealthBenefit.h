#ifndef HEALTHBENEFIT_H
#define HEALTHBENEFIT_H
#include"Benefits.h"

class HealthBenefit : public Benefits
{
    public:
        void getBenefits();
        double calculateBenefits();

    protected:
      double  HealthBenefit=0;

};

#endif // HEALTHBENEFIT_H
