/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 24.11
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HQUATERNION
#define HCPP_HQUATERNION

namespace HalconCpp
{

// Represents a quaternion.
class LIntExport HQuaternion : public HDataBase
{

public:

  // Create an uninitialized instance
  HQuaternion():HDataBase() {}

  // Copy constructor
  HQuaternion(const HQuaternion& source) : HDataBase(source) {}

#if __cplusplus >= 201103
  // C++11 deprecates declaration of an implicit default assignment operator if
  // the class has a custom copy constructor.
  HQuaternion& operator=(const HQuaternion&) = default;
#endif

  // Constructor from HTuple
  explicit HQuaternion(const HTuple& tuple) : HDataBase(tuple) {}

  // Deep copy of all data represented by this object instance
  HQuaternion Clone() const;



/*****************************************************************************
 * Operator-based class constructors
 *****************************************************************************/

  // axis_angle_to_quat: Create a rotation quaternion.
  explicit HQuaternion(const HTuple& AxisX, const HTuple& AxisY, const HTuple& AxisZ, const HTuple& Angle);

  // axis_angle_to_quat: Create a rotation quaternion.
  explicit HQuaternion(double AxisX, double AxisY, double AxisZ, double Angle);


/*****************************************************************************
 * Operator overloads (non-member overloads reside in HOperatorOverloads.h)
 *****************************************************************************/

// Convert to matrix
operator HHomMat3D() const;

// Convert to pose
operator HPose() const;

// Conjugate quaternion
HQuaternion operator~() const;


  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Perform a rotation by a unit quaternion.
  double QuatRotatePoint3d(double Px, double Py, double Pz, double* Qy, double* Qz) const;

  // Generate the conjugation of a quaternion.
  HQuaternion QuatConjugate() const;

  // Normalize a quaternion.
  HQuaternion QuatNormalize() const;

  // Create a rotation quaternion.
  void AxisAngleToQuat(const HTuple& AxisX, const HTuple& AxisY, const HTuple& AxisZ, const HTuple& Angle);

  // Create a rotation quaternion.
  void AxisAngleToQuat(double AxisX, double AxisY, double AxisZ, double Angle);

  // Convert a quaternion into the corresponding 3D pose.
  HPose QuatToPose() const;

  // Convert a quaternion into the corresponding rotation matrix.
  HHomMat3D QuatToHomMat3d() const;

  // Convert the rotational part of a 3D pose to a quaternion.
  static HQuaternionArray PoseToQuat(const HPoseArray& Pose);

  // Convert the rotational part of a 3D pose to a quaternion.
  void PoseToQuat(const HPose& Pose);

  // Interpolation of two quaternions.
  HQuaternion QuatInterpolate(const HQuaternion& QuaternionEnd, const HTuple& InterpPos) const;

  // Multiply two quaternions.
  HQuaternion QuatCompose(const HQuaternion& QuaternionRight) const;

  // Deserialize a serialized quaternion.
  void DeserializeQuat(const HSerializedItem& SerializedItemHandle);

  // Serialize a quaternion.
  HSerializedItem SerializeQuat() const;

};

class LIntExport HQuaternionArray : public HDataArray
{
public:
  HQuaternionArray();
  HQuaternionArray(HQuaternion* classes, Hlong length);
  /* Define a default constructor to prevent compilers that support
   * C++11 R-Value References v3.0 declaring an implicite move
   * assignment/constructor. */
  ~HQuaternionArray() {}
protected:
  virtual void CreateArray(Hlong length);
  virtual int GetFixedSize() const;
};

}

#endif
