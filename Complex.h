
#ifndef COMPLEX_H__
#define COMPLEX_H__

// ===========================================================================
//                                  Includes
// ===========================================================================

class Complex {
 public :
  // =========================================================================
  //                               Constructors
  // =========================================================================
  Complex();
  Complex(const Complex&);
  Complex(double, double);
  

  // =========================================================================
  //                                Destructor
  // =========================================================================
  virtual ~Complex();

  // =========================================================================
  //                                  Getters
  // =========================================================================


  // =========================================================================
  //                                  Setters
  // =========================================================================
  // =========================================================================
  //                                 Operators
  // =========================================================================


  // =========================================================================
  //                              Public Methods
  // =========================================================================


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

// ===========================================================================
//                            Getters' definitions
// ===========================================================================
	double get_Re();
	double get_Im();
	double get_r();

// ===========================================================================
//                            Setters' definitions
// ===========================================================================
	void set_norm();
	
	void set_Re(double);
	void set_Im(double);

// ===========================================================================
//                           Operators' definitions
// ===========================================================================
	friend Complex operator+(const Complex& A,const Complex& B);
	friend Complex operator-(const Complex& A,const Complex& B);
	friend Complex operator*(const Complex& A,const Complex& B);
	friend Complex operator/(const Complex& A,const Complex& B);
// ===========================================================================
//                        Inline functions' definition
// ===========================================================================

};

#endif

