/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 24.11
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HSERIAL
#define HCPP_HSERIAL

namespace HalconCpp
{

// Represents an instance of a connection via a serial port.
class LIntExport HSerial : public HHandle
{

public:

  // Create an uninitialized instance
  HSerial():HHandle() {}

  // Copy constructor
  HSerial(const HSerial& source) : HHandle(source) {}

#if __cplusplus >= 201103
  // C++11 deprecates declaration of an implicit default assignment operator if
  // the class has a custom copy constructor.
  HSerial& operator=(const HSerial&) = default;
#endif

  // Copy constructor
  HSerial(const HHandle& handle);

  // Create HSerial from handle, taking ownership
  explicit HSerial(Hlong handle);

  bool operator==(const HHandle& obj) const
  {
    return HHandleBase::operator==(obj);
  }

  bool operator!=(const HHandle& obj) const
  {
    return HHandleBase::operator!=(obj);
  }

protected:

  // Verify matching semantic type ('serial')!
  virtual void AssertType(Hphandle handle) const;

public:



/*****************************************************************************
 * Operator-based class constructors
 *****************************************************************************/

  // open_serial: Open a serial device.
  explicit HSerial(const HString& PortName);

  // open_serial: Open a serial device.
  explicit HSerial(const char* PortName);

#ifdef _WIN32
  // open_serial: Open a serial device.
  explicit HSerial(const wchar_t* PortName);
#endif




  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Clear the buffer of a serial connection.
  void ClearSerial(const HString& Channel) const;

  // Clear the buffer of a serial connection.
  void ClearSerial(const char* Channel) const;

#ifdef _WIN32
  // Clear the buffer of a serial connection.
  void ClearSerial(const wchar_t* Channel) const;
#endif

  // Write to a serial connection.
  void WriteSerial(const HTuple& Data) const;

  // Write to a serial connection.
  void WriteSerial(Hlong Data) const;

  // Read from a serial device.
  HTuple ReadSerial(Hlong NumCharacters) const;

  // Get the parameters of a serial device.
  Hlong GetSerialParam(Hlong* DataBits, HString* FlowControl, HString* Parity, Hlong* StopBits, Hlong* TotalTimeOut, Hlong* InterCharTimeOut) const;

  // Set the parameters of a serial device.
  void SetSerialParam(const HTuple& BaudRate, const HTuple& DataBits, const HString& FlowControl, const HString& Parity, const HTuple& StopBits, const HTuple& TotalTimeOut, const HTuple& InterCharTimeOut) const;

  // Set the parameters of a serial device.
  void SetSerialParam(Hlong BaudRate, Hlong DataBits, const HString& FlowControl, const HString& Parity, Hlong StopBits, Hlong TotalTimeOut, Hlong InterCharTimeOut) const;

  // Set the parameters of a serial device.
  void SetSerialParam(Hlong BaudRate, Hlong DataBits, const char* FlowControl, const char* Parity, Hlong StopBits, Hlong TotalTimeOut, Hlong InterCharTimeOut) const;

#ifdef _WIN32
  // Set the parameters of a serial device.
  void SetSerialParam(Hlong BaudRate, Hlong DataBits, const wchar_t* FlowControl, const wchar_t* Parity, Hlong StopBits, Hlong TotalTimeOut, Hlong InterCharTimeOut) const;
#endif

  // Close a serial device.
  void CloseSerial() const;

  // Open a serial device.
  void OpenSerial(const HString& PortName);

  // Open a serial device.
  void OpenSerial(const char* PortName);

#ifdef _WIN32
  // Open a serial device.
  void OpenSerial(const wchar_t* PortName);
#endif

};

// forward declarations and types for internal array implementation

template<class T> class HSmartPtr;
template<class T> class HHandleBaseArrayRef;

typedef HHandleBaseArrayRef<HSerial> HSerialArrayRef;
typedef HSmartPtr< HSerialArrayRef > HSerialArrayPtr;


// Represents multiple tool instances
class LIntExport HSerialArray : public HHandleBaseArray
{

public:

  // Create empty array
  HSerialArray();

  // Create array from native array of tool instances
  HSerialArray(const HSerial* classes, Hlong length);

  // Copy constructor
  HSerialArray(const HSerialArray &tool_array);

  // Destructor
  virtual ~HSerialArray();

  // Assignment operator
  HSerialArray &operator=(const HSerialArray &tool_array);

  // Clears array and all tool instances
  virtual void Clear();

  // Get array of native tool instances
  const HSerial* Tools() const;

  // Get number of tools
  virtual Hlong Length() const;

  // Create tool array from tuple of handles
  virtual void SetFromTuple(const HTuple& handles);

  // Get tuple of handles for tool array
  virtual HTuple ConvertToTuple() const;

protected:

// Smart pointer to internal data container
   HSerialArrayPtr *mArrayPtr;
};

}

#endif
