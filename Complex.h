
#ifndef COMPLEX_H__
#define COMPLEX_H__

// ===========================================================================
//                                  Includes
// ===========================================================================

#include <cmath>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

class Complex {
 public :
  // =========================================================================
  //                               Constructors
  // =========================================================================
  Complex();
  Complex(const Complex&);
  Complex(double, double);
  Complex& operator=(const Complex&);
  

  // =========================================================================
  //                                Destructor
  // =========================================================================
  virtual ~Complex();

  // =========================================================================
  //                                  Getters
  // =========================================================================
	inline double get_Re() const;
	inline double get_Im() const;
	inline double get_r() const;

  // =========================================================================
  //                                  Setters
  // =========================================================================
  void set_norm();
	void set_Re(double);
	void set_Im(double);
  
  // =========================================================================
  //                                 Operators
  // =========================================================================
	friend Complex operator+(const Complex& A,const Complex& B);
	friend Complex operator-(const Complex& A,const Complex& B);
	friend Complex operator*(const Complex& A,const Complex& B);
	friend Complex operator/(const Complex& A,const Complex& B);
	
	friend Complex Fractale(const Complex&, const Complex&);
	friend void Mandelbrot(const Complex& Uinit, Complex* c);
	friend double Evaluate(Complex, Complex, int);

  // =========================================================================
  //                              Public Methods
  // =========================================================================

	void display();

	protected :
  // =========================================================================
  //                             Protected Methods
  // =========================================================================

  // =========================================================================
  //                                Attributes
  // =========================================================================
	double Re;
	double Im;
	double r;
	
};

// ===========================================================================
//                            Setters' definitions
// ===========================================================================


// ===========================================================================
//                            Getters' definitions
// ===========================================================================
inline double Complex::get_Re() const {
	return Re;
}

inline double Complex::get_Im() const{
	return Im;
}

inline double Complex::get_r() const{
	return r;
}

// ===========================================================================
//                           Operators' definitions
// ===========================================================================


// ===========================================================================
//                        Inline functions' definition
// ===========================================================================


#endif


