#include "BMI.h"

double BMI::getBMI() const
{
    const double KILOGRAMES_PER_POUND = 0.45359237;
    const double METERS_PER_INCH = 0.0254;
    double bmi = weight * KILOGRAMES_PER_POUND /
                 ((height * METERS_PER_INCH) * (height * METERS_PER_INCH));
    return bmi;
}

string BMI::getStatus() const
{
    double bmi = getBMI();
    if (bmi < 18.5)
        return "Underweight";
    else if (bmi < 25)
        return "Normal";
    else if (bmi < 30)
        return "Overweight";
    else
        return "Obese";
}