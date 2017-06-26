/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
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
	auto y = sqr(x);
	return y;
}


/*
 * 
 */
int main(int argc, char** argv) {

    auto sf1 = ShafferF1<double>();
    std::cout <<  sf1 << "\n";
    return 0;
}

