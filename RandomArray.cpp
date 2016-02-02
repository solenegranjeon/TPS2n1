
// ===========================================================================
//                                  Includes
// ===========================================================================
#include "RandomArray.h"
#include "Array.h"

#include <cstdlib>
#include <cmath>

// ===========================================================================
//                       Definition of static attributes
// ===========================================================================

// ===========================================================================
//                                Constructors
// ===========================================================================
RandomArray::RandomArray(){
}

RandomArray::RandomArray(const RandomArray& array2){
}

RandomArray::RandomArray(int N, int A, int B){
	size = N ;
	tab = new double[size];
	for(int i=0;i<size;i++){
		tab[i]=rand() % B+A;
	}
}


// ===========================================================================
//                                 Destructor
// ===========================================================================
RandomArray::~RandomArray() {
}

// ===========================================================================
//                               Public Methods
// ===========================================================================
double RandomArray::mean(){
	double sum = 0;
	for(int i=0;i<size;i++){
		sum += tab[i];
	}
	return sum/size;
}

double RandomArray::sd(){
	double m=this->mean();
	double sum = 0;
	for(int i=0;i<size;i++){
		sum += (tab[i]-m)*(tab[i]-m) ;
	}
	return (sqrt(sum/size));
	
}

// ===========================================================================
//                              Protected Methods
// ===========================================================================

// ===========================================================================
//                              External Methods
// ===========================================================================


