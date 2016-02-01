
// ===========================================================================
//                                  Includes
// ===========================================================================
#include "Array.h"

// ===========================================================================
//                       Definition of static attributes
// ===========================================================================

// ===========================================================================
//                                Constructors
// ===========================================================================
Array::Array(){
	size = 0;
	tab = nullptr;
}

//~ Array::Array(const Array& array2){
//~ }

Array::Array(int nbelem){
	size = nbelem;
	double* tab = new double[size];
	for(int i=0;i<size;i++){
		tab[i]=0;
	}
}

Array::Array(int nbelem, double data){
	
	tab = new double[nbelem];
	for(int i=0;i<nbelem;i++){
		tab[i]=data;
	}
}

// ===========================================================================
//                                 Destructor
// ===========================================================================
Array::~Array() {
	delete tab;
}

// ===========================================================================
//                               Public Methods
// ===========================================================================
int Array::get_size(){
	return size;
}

double Array::get_val(int index){
	return tab[index];
}

void Array::change_element(int index, double value){
	tab[index]=value;
}

// ===========================================================================
//                              Protected Methods
// ===========================================================================

