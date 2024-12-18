/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 24.11
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HDLMODELOCR
#define HCPP_HDLMODELOCR

namespace HalconCpp
{

// Represents an instance of a Deep Neural Network based OCR model.
class LIntExport HDlModelOcr : public HHandle
{

public:

  // Create an uninitialized instance
  HDlModelOcr():HHandle() {}

  // Copy constructor
  HDlModelOcr(const HDlModelOcr& source) : HHandle(source) {}

#if __cplusplus >= 201103
  // C++11 deprecates declaration of an implicit default assignment operator if
  // the class has a custom copy constructor.
  HDlModelOcr& operator=(const HDlModelOcr&) = default;
#endif

  // Copy constructor
  HDlModelOcr(const HHandle& handle);

  // Create HDlModelOcr from handle, taking ownership
  explicit HDlModelOcr(Hlong handle);

  bool operator==(const HHandle& obj) const
  {
    return HHandleBase::operator==(obj);
  }

  bool operator!=(const HHandle& obj) const
  {
    return HHandleBase::operator!=(obj);
  }

protected:

  // Verify matching semantic type ('deep_ocr')!
  virtual void AssertType(Hphandle handle) const;

public:



/*****************************************************************************
 * Operator-based class constructors
 *****************************************************************************/

  // create_deep_ocr: Create a Deep OCR model.
  explicit HDlModelOcr(const HTuple& GenParamName, const HTuple& GenParamValue);

  // create_deep_ocr: Create a Deep OCR model.
  explicit HDlModelOcr(const HString& GenParamName, const HString& GenParamValue);

  // create_deep_ocr: Create a Deep OCR model.
  explicit HDlModelOcr(const char* GenParamName, const char* GenParamValue);

#ifdef _WIN32
  // create_deep_ocr: Create a Deep OCR model.
  explicit HDlModelOcr(const wchar_t* GenParamName, const wchar_t* GenParamValue);
#endif

  // read_deep_ocr: Read a Deep OCR model from a file.
  explicit HDlModelOcr(const HString& FileName);

  // read_deep_ocr: Read a Deep OCR model from a file.
  explicit HDlModelOcr(const char* FileName);

#ifdef _WIN32
  // read_deep_ocr: Read a Deep OCR model from a file.
  explicit HDlModelOcr(const wchar_t* FileName);
#endif




  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Apply a Deep OCR model on a set of images for inference.
  HDictArray ApplyDeepOcr(const HImage& Image, const HString& Mode) const;

  // Apply a Deep OCR model on a set of images for inference.
  HDictArray ApplyDeepOcr(const HImage& Image, const char* Mode) const;

#ifdef _WIN32
  // Apply a Deep OCR model on a set of images for inference.
  HDictArray ApplyDeepOcr(const HImage& Image, const wchar_t* Mode) const;
#endif

  // Create a Deep OCR model.
  void CreateDeepOcr(const HTuple& GenParamName, const HTuple& GenParamValue);

  // Create a Deep OCR model.
  void CreateDeepOcr(const HString& GenParamName, const HString& GenParamValue);

  // Create a Deep OCR model.
  void CreateDeepOcr(const char* GenParamName, const char* GenParamValue);

#ifdef _WIN32
  // Create a Deep OCR model.
  void CreateDeepOcr(const wchar_t* GenParamName, const wchar_t* GenParamValue);
#endif

  // Return the parameters of a Deep OCR model.
  HTuple GetDeepOcrParam(const HString& GenParamName) const;

  // Return the parameters of a Deep OCR model.
  HTuple GetDeepOcrParam(const char* GenParamName) const;

#ifdef _WIN32
  // Return the parameters of a Deep OCR model.
  HTuple GetDeepOcrParam(const wchar_t* GenParamName) const;
#endif

  // Read a Deep OCR model from a file.
  void ReadDeepOcr(const HString& FileName);

  // Read a Deep OCR model from a file.
  void ReadDeepOcr(const char* FileName);

#ifdef _WIN32
  // Read a Deep OCR model from a file.
  void ReadDeepOcr(const wchar_t* FileName);
#endif

  // Set the parameters of a Deep OCR model.
  void SetDeepOcrParam(const HString& GenParamName, const HTuple& GenParamValue) const;

  // Set the parameters of a Deep OCR model.
  void SetDeepOcrParam(const HString& GenParamName, double GenParamValue) const;

  // Set the parameters of a Deep OCR model.
  void SetDeepOcrParam(const char* GenParamName, double GenParamValue) const;

#ifdef _WIN32
  // Set the parameters of a Deep OCR model.
  void SetDeepOcrParam(const wchar_t* GenParamName, double GenParamValue) const;
#endif

  // Write a Deep OCR model in a file.
  void WriteDeepOcr(const HString& FileName) const;

  // Write a Deep OCR model in a file.
  void WriteDeepOcr(const char* FileName) const;

#ifdef _WIN32
  // Write a Deep OCR model in a file.
  void WriteDeepOcr(const wchar_t* FileName) const;
#endif

};

// forward declarations and types for internal array implementation

template<class T> class HSmartPtr;
template<class T> class HHandleBaseArrayRef;

typedef HHandleBaseArrayRef<HDlModelOcr> HDlModelOcrArrayRef;
typedef HSmartPtr< HDlModelOcrArrayRef > HDlModelOcrArrayPtr;


// Represents multiple tool instances
class LIntExport HDlModelOcrArray : public HHandleBaseArray
{

public:

  // Create empty array
  HDlModelOcrArray();

  // Create array from native array of tool instances
  HDlModelOcrArray(const HDlModelOcr* classes, Hlong length);

  // Copy constructor
  HDlModelOcrArray(const HDlModelOcrArray &tool_array);

  // Destructor
  virtual ~HDlModelOcrArray();

  // Assignment operator
  HDlModelOcrArray &operator=(const HDlModelOcrArray &tool_array);

  // Clears array and all tool instances
  virtual void Clear();

  // Get array of native tool instances
  const HDlModelOcr* Tools() const;

  // Get number of tools
  virtual Hlong Length() const;

  // Create tool array from tuple of handles
  virtual void SetFromTuple(const HTuple& handles);

  // Get tuple of handles for tool array
  virtual HTuple ConvertToTuple() const;

protected:

// Smart pointer to internal data container
   HDlModelOcrArrayPtr *mArrayPtr;
};

}

#endif
