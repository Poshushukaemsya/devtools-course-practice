// Copyright 2023 Eremin Aleksandr

#ifndef MODULES_POLYNOMIAL_CALCULATOR_INCLUDE_POLYNOMIAL_CALCULATOR_H_
#define MODULES_POLYNOMIAL_CALCULATOR_INCLUDE_POLYNOMIAL_CALCULATOR_H_

#include <string>
#include <vector>
#include <iostream>

class polynomial_calculator {
 public:
    std::vector<double> coeff_a;
    polynomial_calculator();
    ~polynomial_calculator();
    explicit polynomial_calculator(double a0);
    polynomial_calculator(std::vector<double> A, int len);
    polynomial_calculator(const polynomial_calculator& P);

    int GetSize() const;
    double value(double x);

    bool operator ==
        (const polynomial_calculator& P) const;
    bool operator !=
        (const polynomial_calculator& P) const;
    polynomial_calculator operator +
        (const polynomial_calculator& P);
    polynomial_calculator operator -
        (const polynomial_calculator& P);
    polynomial_calculator operator *
        (const polynomial_calculator& P);
    polynomial_calculator operator + (const double& _Num) const;
    polynomial_calculator operator - (const double& _Num) const;
    polynomial_calculator operator * (const double& _Num) const;
};
#endif  // MODULES_POLYNOMIAL_CALCULATOR_INCLUDE_POLYNOMIAL_CALCULATOR_H_
