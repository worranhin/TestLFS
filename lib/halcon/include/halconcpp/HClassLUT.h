/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 24.11
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HCLASSLUT
#define HCPP_HCLASSLUT

namespace HalconCpp
{

// Represents an instance of a classification lookup table
class LIntExport HClassLUT : public HHandle
{

public:

  // Create an uninitialized instance
  HClassLUT():HHandle() {}

  // Copy constructor
  HClassLUT(const HClassLUT& source) : HHandle(source) {}

#if __cplusplus >= 201103
  // C++11 deprecates declaration of an implicit default assignment operator if
  // the class has a custom copy constructor.
  HClassLUT& operator=(const HClassLUT&) = default;
#endif

  // Copy constructor
  HClassLUT(const HHandle& handle);

  // Create HClassLUT from handle, taking ownership
  explicit HClassLUT(Hlong handle);

  bool operator==(const HHandle& obj) const
  {
    return HHandleBase::operator==(obj);
  }

  bool operator!=(const HHandle& obj) const
  {
    return HHandleBase::operator!=(obj);
  }

protected:

  // Verify matching semantic type ('class_lut')!
  virtual void AssertType(Hphandle handle) const;

public:



/*****************************************************************************
 * Operator-based class constructors
 *****************************************************************************/

  // create_class_lut_knn: Create a look-up table using a k-nearest neighbors classifier (k-NN) to classify byte images.
  explicit HClassLUT(const HClassKnn& KNNHandle, const HTuple& GenParamName, const HTuple& GenParamValue);

  // create_class_lut_gmm: Create a look-up table using a gaussian mixture model to classify byte images.
  explicit HClassLUT(const HClassGmm& GMMHandle, const HTuple& GenParamName, const HTuple& GenParamValue);

  // create_class_lut_svm: Create a look-up table using a Support-Vector-Machine to classify byte images.
  explicit HClassLUT(const HClassSvm& SVMHandle, const HTuple& GenParamName, const HTuple& GenParamValue);

  // create_class_lut_mlp: Create a look-up table using a multi-layer perceptron to classify byte images.
  explicit HClassLUT(const HClassMlp& MLPHandle, const HTuple& GenParamName, const HTuple& GenParamValue);




  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Classify a byte image using a look-up table.
  HRegion ClassifyImageClassLut(const HImage& Image) const;

  // Clear a look-up table classifier.
  static void ClearClassLut(const HClassLUTArray& ClassLUTHandle);

  // Clear a look-up table classifier.
  void ClearClassLut() const;

  // Create a look-up table using a k-nearest neighbors classifier (k-NN) to classify byte images.
  void CreateClassLutKnn(const HClassKnn& KNNHandle, const HTuple& GenParamName, const HTuple& GenParamValue);

  // Create a look-up table using a gaussian mixture model to classify byte images.
  void CreateClassLutGmm(const HClassGmm& GMMHandle, const HTuple& GenParamName, const HTuple& GenParamValue);

  // Create a look-up table using a Support-Vector-Machine to classify byte images.
  void CreateClassLutSvm(const HClassSvm& SVMHandle, const HTuple& GenParamName, const HTuple& GenParamValue);

  // Create a look-up table using a multi-layer perceptron to classify byte images.
  void CreateClassLutMlp(const HClassMlp& MLPHandle, const HTuple& GenParamName, const HTuple& GenParamValue);

};

// forward declarations and types for internal array implementation

template<class T> class HSmartPtr;
template<class T> class HHandleBaseArrayRef;

typedef HHandleBaseArrayRef<HClassLUT> HClassLUTArrayRef;
typedef HSmartPtr< HClassLUTArrayRef > HClassLUTArrayPtr;


// Represents multiple tool instances
class LIntExport HClassLUTArray : public HHandleBaseArray
{

public:

  // Create empty array
  HClassLUTArray();

  // Create array from native array of tool instances
  HClassLUTArray(const HClassLUT* classes, Hlong length);

  // Copy constructor
  HClassLUTArray(const HClassLUTArray &tool_array);

  // Destructor
  virtual ~HClassLUTArray();

  // Assignment operator
  HClassLUTArray &operator=(const HClassLUTArray &tool_array);

  // Clears array and all tool instances
  virtual void Clear();

  // Get array of native tool instances
  const HClassLUT* Tools() const;

  // Get number of tools
  virtual Hlong Length() const;

  // Create tool array from tuple of handles
  virtual void SetFromTuple(const HTuple& handles);

  // Get tuple of handles for tool array
  virtual HTuple ConvertToTuple() const;

protected:

// Smart pointer to internal data container
   HClassLUTArrayPtr *mArrayPtr;
};

}

#endif
