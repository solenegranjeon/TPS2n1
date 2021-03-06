

// ===========================================================================
//                                  Includes
// ===========================================================================
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <list>

#include "Array.h"
#include "RandomArray.h"
#include "Complex.h"
#include "Fractal.h"

using namespace std;


// ===========================================================================
//                            Function declarations
// ===========================================================================


// ===========================================================================
//                                    MAIN
// ===========================================================================

int main(int argc,char* argv[]){
	
	printf("La vie est belle!\n");
	
	Array test = Array();
	Array test2 = Array(2);
	Array test3 = Array(3,1.453);
	
	cout<< "Taille des 3 Arrays " << test.get_size()<< ", " << test2.get_size() 
	<< ", " << test3.get_size() <<endl;
	
	cout << "1st value in test3 " << test3[0] << endl;
	
	test3[0]=2.1;
	
	cout << "1st value in test3 " << test3[0] << endl;

	Array sum = test2 + test3;
	
	RandomArray ra = RandomArray(10,1,15);
	cout << "1st value in ra " << ra[0] << endl;
	cout << "mean value of ra " << ra.mean() << endl;
	cout << "sd value of ra " << ra.sd() << endl;
	
	Complex c = Complex(0,2);
	c.display();
	
	Complex u0 = Complex();
	u0.display();
	
	Complex u1 = u0*u0 + c;
	u1.display();
	
	Complex tab[1000];
	for(int i=0; i<250; i++){
		tab[i]=Complex(-2+i*0.016,2);
		tab[i+250]=Complex(-2+i*0.016,-2);
		tab[i+500]=Complex(2,-2+0.016*i);
		tab[i+750]=Complex(-2,-2+0.016*i);
	}
	
	Mandelbrot(u0,tab);
	
  /*---------------------------------*/
  /* 4) Fractals                     */
  /*---------------------------------*/
  Fractal fractal;
  Complex U0 = Complex(0.0, 0.0);
  std::ofstream output("./mandelbrot.txt", std::ios::out | std::ios::trunc);
  for (double a = -2.0; a <= 2.0; a += 0.005)
  {
    for (double b = -2.0; b <= 2.0; b += 0.005)
    {
      Complex c = Complex(a, b);
      if (fractal.evaluate(U0, c, 200) < 4)
      {
        output << a << " " << b << "\n";
      }
    }
  }
  output.close();
  
  Complex C = Complex(0.1, 0.1);
  output.open("./julia.txt", std::ios::out | std::ios::trunc);
  for (double a = -2.0; a <= 2.0; a += 0.005)
  {
    for (double b = -2.0; b <= 2.0; b += 0.005)
    {
      U0 = Complex(a, b);
      if (fractal.evaluate(U0, C, 200) < 4)
      {
        output << a << " " << b << "\n";
      }
    }
  }
  output.close();
	
	return 0;
}
