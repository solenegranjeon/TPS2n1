
// ===========================================================================
//                                  Includes
// ===========================================================================
#include "Complex.h"


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
	double a = A.get_Re() + B.get_Re();
	double b = A.get_Im() + B.get_Im();
	Complex result = Complex(a,b);
	return result;
}

Complex operator-(const Complex& A,const Complex& B){
	double a = A.get_Re() - B.get_Re();
	double b = A.get_Im() - B.get_Im();
	Complex result = Complex(a,b);
	return result;
}

Complex operator*(const Complex& A,const Complex& B){
	double a = A.get_Re()*B.get_Re() - A.get_Im()*B.get_Im() ;
	double b = A.get_Re()*B.get_Im() + A.get_Im()*B.get_Re();
	Complex result = Complex(a,b);
	return result;
}

Complex operator/(const Complex& A,const Complex& B){
	Complex newB = Complex(B.get_Re(),-B.get_Im());
	Complex result = A*newB;
	double c = B.get_Re()*B.get_Re() + B.get_Im()*B.get_Im();
	result.Re/=c;
	result.Im/=c;
	return result;
}

Complex Fractale(const Complex& Uprev, const Complex& c){
	Complex Unext= (Uprev * Uprev) + c; 
	return Unext;
}

double Evaluate( Complex U0, Complex c, int iterations ){
  Complex Un = U0;
  for (int i = 0; i < iterations; i++){
    Un = Un * Un + c;
  }
  Un.set_norm();
  return Un.get_r();
}

void Mandelbrot(const Complex& Uinit, Complex* c){
	Complex Unext;
	ofstream monFlux("data.txt");
  monFlux << Uinit.get_Re() << " " <<Uinit.get_Im() << " " << Uinit.get_r() << endl;
	for(int index=0; index <sizeof(c) ; index++){
		Unext = Uinit;
		int iter = 0;
		while(Unext.get_r()<4 && iter<200){
			Unext = Fractale(Unext,c[index]);
			monFlux << Unext.get_Re() << " " <<Unext.get_Im() << " " << Unext.get_r() << endl;
			iter++;
		}
	}
}
