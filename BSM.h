 // BSM.h

#ifndef __AndysPointers__BSM__
#define __AndysPointers__BSM__

#include <iostream>

class BSM
{
public:
    BSM(float, float, float, float, float, long, long);
    
    ~BSM();
    
    float getBsmAsset();
    float getBsmStrike();
    float getBsmGrowth();
    float getBsmVol();
    float getBsmYears();
    long getBsmSteps();
    long getBsmMonteCarloSims();
    
    void logNormalRandomWalk();
    
    double getCallPrice();
    double getPutPrice();
    
    double rn();

private:

    float bsmAsset;
    float bsmStrike;
    float bsmGrowth;
    float bsmVol;
    float bsmYears;
    long bsmSteps;
    long bsmMonteCarloSims;

    double bsmCallPrice;
    double bsmPutPrice;
};

#endif /* defined(__AndysPointers__BSM__) */
