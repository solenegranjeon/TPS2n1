
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

Array::Array(const Array& array2){
	this->size=array2.get_size();
	tab = new double[size];
	for(int i=0;i<size;i++){
		tab[i]=array2[i];
	}
}

Array::Array(int nbelem){
	size = nbelem;
	tab = new double[size];
	for(int i=0;i<size;i++){
		tab[i]=0;
	}
}

Array::Array(int nbelem, double data){
	size = nbelem;
	tab = new double[nbelem];
	for(int i=0;i<nbelem;i++){
		tab[i]=data;
	}
}

// ===========================================================================
//                                 Destructor
// ===========================================================================
Array::~Array() {
	delete[] tab;
}

// ===========================================================================
//                               Public Methods
// ===========================================================================
int Array::get_size() const{
	return size;
}

double& Array::operator[](int index){
	return tab[index];
}

double Array::operator[](const int index) const{
	return tab[index];
}

void Array::change_element(int index, double value){
	tab[index]=value;
}

// ===========================================================================
//                              Protected Methods
// ===========================================================================

// ===========================================================================
//                              External Methods
// ===========================================================================

Array operator+(const Array& A, const Array& B){
	
	int len = A.get_size() + B.get_size();
	Array result = Array(len);
	
	for(int i=0; i<A.get_size(); i++){
		result[i]=A[i];
	}
	for(int i=A.get_size(); i<result.get_size(); i++){
		result[i]=B[i-A.get_size()];
	}
	
	return result;
}
