
// ===========================================================================
//                                  Includes
// ===========================================================================
#include "Complex.h"
#include <cmath>
#include <iostream>

using namespace std;

// ===========================================================================
//                       Definition of static attributes
// ===========================================================================

// ===========================================================================
//                                Constructors
// ===========================================================================
Complex::Complex(){
	Re=0;
	Im=0;
	r=0;
}

Complex::Complex(const Complex& c2){
	this->Re=c2.Re;
	this->Im=c2.Im;
	this->r=c2.r;
}

Complex::Complex(double a, double b){
		Re=a;
		Im=b;
		this->set_norm();
}

Complex& Complex::operator=(const Complex& c){
	this->Re = c.Re;
	this->Im = c.Im;
	this->r = c.r;
}


// ===========================================================================
//                                 Destructor
// ===========================================================================
Complex::~Complex() {
}

// ===========================================================================
//                               Public Methods
// ===========================================================================

void Complex::set_norm(){
	r=sqrt(Re*Re+Im*Im);
}

void Complex::set_Re(double a){
	Re=a;
	this->set_norm();
}

void Complex::set_Im(double a){
	Im=a;
	this->set_norm();
}

void Complex::display(){
	cout << this->get_Re() << "+ " << this->get_Im() << "i" << endl;
}


// ===========================================================================
//                              Protected Methods
// ===========================================================================

// ===========================================================================
//                              External Methods
// ===========================================================================
Complex operator+(const Complex& A,const Complex& B){
}

Complex operator-(const Complex& A,const Complex& B){
}

Complex operator*(const Complex& A,const Complex& B){
}

Complex operator/(const Complex& A,const Complex& B){
}
