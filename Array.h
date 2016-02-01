
#ifndef ARRAY_H__
#define ARRAY_H__

// ===========================================================================
//                                  Includes
// ===========================================================================

class Array {
 public :
  // =========================================================================
  //                               Constructors
  // =========================================================================
  Array();
  Array(const Array&);
  Array(int nbelem);
  Array(int nbelem, double data);
  

  // =========================================================================
  //                                Destructor
  // =========================================================================
  virtual ~Array();

  // =========================================================================
  //                                  Getters
  // =========================================================================
	int get_size() const;


  // =========================================================================
  //                                  Setters
  // =========================================================================
	void change_element(int index, double value);
  // =========================================================================
  //                                 Operators
  // =========================================================================
	double& operator[](int);
	double operator[](const int) const;

  // =========================================================================
  //                              Public Methods
  // =========================================================================
	friend Array operator+(const Array& A,const Array& B);

	protected :
  // =========================================================================
  //                             Protected Methods
  // =========================================================================

  // =========================================================================
  //                                Attributes
  // =========================================================================
	int size;
	double* tab;


// ===========================================================================
//                            Getters' definitions
// ===========================================================================


// ===========================================================================
//                            Setters' definitions
// ===========================================================================

// ===========================================================================
//                           Operators' definitions
// ===========================================================================

// ===========================================================================
//                        Inline functions' definition
// ===========================================================================

};

#endif

