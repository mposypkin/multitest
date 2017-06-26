/*
 * To change this license header, choose License Headers in Project Properties.
* File:   testshaffer.cpp
 * Author: mposypkin
 *
 * Created on June 26, 2017, 4:34 PM
 */

#include <cstdlib>
#include <iostream>

#include <expression/expr.hpp>
#include <interval/interval_air.hpp>
#include <math.h>

using namespace snowgoose::expression;
using namespace snowgoose::interval;

template <class T> Expr<T> ShafferF1()
{
	Expr<T> x;
	auto y = sqr(x[0]);
	return y;
}

/*
 * 
 */
int main(int argc, char** argv) {

    auto sf1 = ShafferF1<double>();
    std::cout << "expression " <<  sf1 << "\n";
    
    auto res = sf1.calc({3}, FuncAlg<double>());
    std::cout << "result " << res << "\n";
    return 0;
}
