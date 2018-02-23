/*
 * QuadEq.cpp

 *
 *  Created on: Oct 19, 2015
 *      Author: Erika
 */

#include <iostream>
#include <cstdlib>
#include "QuadEq.h"
#include "Math.h"

using namespace std;

QuadEq::QuadEq(double a, double b, double c) {
	this->a = a;
	this->b = b;
	this->c = c;
	root1 = 0;
	root2 = 0;
}

void QuadEq::printEq() const {
	cout << "The quadratic equation is" << a <<"x^2 +"<< b <<"x+"<< c <<endl;
}

void QuadEq::solve(){
	root1 = ((-b))
}

