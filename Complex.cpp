
// ===========================================================================
//                                  Includes
// ===========================================================================
#include "Complex.h"
#include <cmath>

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


// ===========================================================================
//                                 Destructor
// ===========================================================================
Complex::~Complex() {
}

// ===========================================================================
//                               Public Methods
// ===========================================================================
double Complex::get_Re(){
	return Re;
}

double Complex::get_Im(){
	return Im;
}

double Complex::get_r(){
	return r;
}

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
