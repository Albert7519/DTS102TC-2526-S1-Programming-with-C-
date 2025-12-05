#include "Loan.h"
#include <cmath>

using namespace std;

Loan::Loan(){
    annualInterestRate = 2.5;
    numberOfYears = 2;
    loanAmount = 1000;
}

Loan::Loan(double rate, int year, double amount){
    annualInterestRate = rate;
    numberOfYears = year;
    loanAmount = amount;
}

double Loan::getAnnualInterestRate(){ return annualInterestRate; }

int Loan::getNumberOfYears(){ return numberOfYears; }

double Loan::getLoanAmount(){ return loanAmount; }

void Loan::setAnnualInterestRate(double rate){ annualInterestRate = rate; }

void Loan::setNumberOfYears(int year){ numberOfYears = year; }

void Loan::setLoanAmount(double amount){ loanAmount = amount; }

double Loan::getMonthlyPayment(){
    double mouthlyInterestRate = annualInterestRate / 1200;
    return loanAmount * mouthlyInterestRate / (1 - 
        pow(1 / (1 + mouthlyInterestRate), numberOfYears * 12));
}

double Loan::getTotalPayment(){
    return getMonthlyPayment() * numberOfYears * 12;
}