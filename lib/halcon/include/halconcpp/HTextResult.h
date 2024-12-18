/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 24.11
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HTEXTRESULT
#define HCPP_HTEXTRESULT

namespace HalconCpp
{

// Represents an instance of a text segmentation result.
class LIntExport HTextResult : public HHandle
{

public:

  // Create an uninitialized instance
  HTextResult():HHandle() {}

  // Copy constructor
  HTextResult(const HTextResult& source) : HHandle(source) {}

#if __cplusplus >= 201103
  // C++11 deprecates declaration of an implicit default assignment operator if
  // the class has a custom copy constructor.
  HTextResult& operator=(const HTextResult&) = default;
#endif

  // Copy constructor
  HTextResult(const HHandle& handle);

  // Create HTextResult from handle, taking ownership
  explicit HTextResult(Hlong handle);

  bool operator==(const HHandle& obj) const
  {
    return HHandleBase::operator==(obj);
  }

  bool operator!=(const HHandle& obj) const
  {
    return HHandleBase::operator!=(obj);
  }

protected:

  // Verify matching semantic type ('text_result')!
  virtual void AssertType(Hphandle handle) const;

public:



/*****************************************************************************
 * Operator-based class constructors
 *****************************************************************************/

  // find_text: Find text in an image.
  explicit HTextResult(const HImage& Image, const HTextModel& TextModel);




  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Clear a text result.
  static void ClearTextResult(const HTextResultArray& TextResultID);

  // Clear a text result.
  void ClearTextResult() const;

  // Query an iconic value of a text segmentation result.
  HObject GetTextObject(const HTuple& ResultName) const;

  // Query an iconic value of a text segmentation result.
  HObject GetTextObject(const HString& ResultName) const;

  // Query an iconic value of a text segmentation result.
  HObject GetTextObject(const char* ResultName) const;

#ifdef _WIN32
  // Query an iconic value of a text segmentation result.
  HObject GetTextObject(const wchar_t* ResultName) const;
#endif

  // Query a control value of a text segmentation result.
  HTuple GetTextResult(const HTuple& ResultName) const;

  // Query a control value of a text segmentation result.
  HTuple GetTextResult(const HString& ResultName) const;

  // Query a control value of a text segmentation result.
  HTuple GetTextResult(const char* ResultName) const;

#ifdef _WIN32
  // Query a control value of a text segmentation result.
  HTuple GetTextResult(const wchar_t* ResultName) const;
#endif

  // Find text in an image.
  void FindText(const HImage& Image, const HTextModel& TextModel);

};

// forward declarations and types for internal array implementation

template<class T> class HSmartPtr;
template<class T> class HHandleBaseArrayRef;

typedef HHandleBaseArrayRef<HTextResult> HTextResultArrayRef;
typedef HSmartPtr< HTextResultArrayRef > HTextResultArrayPtr;


// Represents multiple tool instances
class LIntExport HTextResultArray : public HHandleBaseArray
{

public:

  // Create empty array
  HTextResultArray();

  // Create array from native array of tool instances
  HTextResultArray(const HTextResult* classes, Hlong length);

  // Copy constructor
  HTextResultArray(const HTextResultArray &tool_array);

  // Destructor
  virtual ~HTextResultArray();

  // Assignment operator
  HTextResultArray &operator=(const HTextResultArray &tool_array);

  // Clears array and all tool instances
  virtual void Clear();

  // Get array of native tool instances
  const HTextResult* Tools() const;

  // Get number of tools
  virtual Hlong Length() const;

  // Create tool array from tuple of handles
  virtual void SetFromTuple(const HTuple& handles);

  // Get tuple of handles for tool array
  virtual HTuple ConvertToTuple() const;

protected:

// Smart pointer to internal data container
   HTextResultArrayPtr *mArrayPtr;
};

}

#endif
