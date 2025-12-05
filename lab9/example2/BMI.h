#ifndef BMI_H
#define BMI_H

#include <string>

class BMI {
public:
    BMI(const std::string& name, int age, double weight, double height);
    BMI(const std::string& name, double weight, double height);
    
    double getBMI() const;
    std::string getStatus() const;

private:
    std::string name;
    int age;
    double weight; // in pounds
    double height; // in inches
};

#endif