

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
	
	return 0;
}
