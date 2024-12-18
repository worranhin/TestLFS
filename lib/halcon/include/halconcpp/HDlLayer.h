/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 24.11
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HDLLAYER
#define HCPP_HDLLAYER

namespace HalconCpp
{

// Represents an instance of a Deep Neural Network graph layer.
class LIntExport HDlLayer : public HHandle
{

public:

  // Create an uninitialized instance
  HDlLayer():HHandle() {}

  // Copy constructor
  HDlLayer(const HDlLayer& source) : HHandle(source) {}

#if __cplusplus >= 201103
  // C++11 deprecates declaration of an implicit default assignment operator if
  // the class has a custom copy constructor.
  HDlLayer& operator=(const HDlLayer&) = default;
#endif

  // Copy constructor
  HDlLayer(const HHandle& handle);

  // Create HDlLayer from handle, taking ownership
  explicit HDlLayer(Hlong handle);

  bool operator==(const HHandle& obj) const
  {
    return HHandleBase::operator==(obj);
  }

  bool operator!=(const HHandle& obj) const
  {
    return HHandleBase::operator!=(obj);
  }

protected:

  // Verify matching semantic type ('dl_layer')!
  virtual void AssertType(Hphandle handle) const;

public:



/*****************************************************************************
 * Operator-based class constructors
 *****************************************************************************/

  // create_dl_layer_input: Create an input layer.
  explicit HDlLayer(const HString& LayerName, const HTuple& Shape, const HTuple& GenParamName, const HTuple& GenParamValue);

  // create_dl_layer_input: Create an input layer.
  explicit HDlLayer(const HString& LayerName, const HTuple& Shape, const HString& GenParamName, const HString& GenParamValue);

  // create_dl_layer_input: Create an input layer.
  explicit HDlLayer(const char* LayerName, const HTuple& Shape, const char* GenParamName, const char* GenParamValue);

#ifdef _WIN32
  // create_dl_layer_input: Create an input layer.
  explicit HDlLayer(const wchar_t* LayerName, const HTuple& Shape, const wchar_t* GenParamName, const wchar_t* GenParamValue);
#endif




  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Create an activation layer.
  HDlLayer CreateDlLayerActivation(const HString& LayerName, const HString& ActivationType, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create an activation layer.
  HDlLayer CreateDlLayerActivation(const HString& LayerName, const HString& ActivationType, const HString& GenParamName, const HString& GenParamValue) const;

  // Create an activation layer.
  HDlLayer CreateDlLayerActivation(const char* LayerName, const char* ActivationType, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create an activation layer.
  HDlLayer CreateDlLayerActivation(const wchar_t* LayerName, const wchar_t* ActivationType, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Create a batch normalization layer.
  HDlLayer CreateDlLayerBatchNormalization(const HString& LayerName, const HTuple& Momentum, double Epsilon, const HString& Activation, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create a batch normalization layer.
  HDlLayer CreateDlLayerBatchNormalization(const HString& LayerName, const HString& Momentum, double Epsilon, const HString& Activation, const HString& GenParamName, const HString& GenParamValue) const;

  // Create a batch normalization layer.
  HDlLayer CreateDlLayerBatchNormalization(const char* LayerName, const char* Momentum, double Epsilon, const char* Activation, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create a batch normalization layer.
  HDlLayer CreateDlLayerBatchNormalization(const wchar_t* LayerName, const wchar_t* Momentum, double Epsilon, const wchar_t* Activation, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Create a class ID conversion layer.
  HDlLayer CreateDlLayerClassIdConversion(const HString& LayerName, const HString& ConversionMode, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create a class ID conversion layer.
  HDlLayer CreateDlLayerClassIdConversion(const HString& LayerName, const HString& ConversionMode, const HString& GenParamName, const HString& GenParamValue) const;

  // Create a class ID conversion layer.
  HDlLayer CreateDlLayerClassIdConversion(const char* LayerName, const char* ConversionMode, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create a class ID conversion layer.
  HDlLayer CreateDlLayerClassIdConversion(const wchar_t* LayerName, const wchar_t* ConversionMode, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Create a concatenation layer.
  static HDlLayer CreateDlLayerConcat(const HDlLayerArray& DLLayerInputs, const HString& LayerName, const HString& Axis, const HTuple& GenParamName, const HTuple& GenParamValue);

  // Create a concatenation layer.
  HDlLayer CreateDlLayerConcat(const HString& LayerName, const HString& Axis, const HString& GenParamName, const HString& GenParamValue) const;

  // Create a concatenation layer.
  HDlLayer CreateDlLayerConcat(const char* LayerName, const char* Axis, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create a concatenation layer.
  HDlLayer CreateDlLayerConcat(const wchar_t* LayerName, const wchar_t* Axis, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Create a convolutional layer.
  HDlLayer CreateDlLayerConvolution(const HString& LayerName, const HTuple& KernelSize, const HTuple& Dilation, const HTuple& Stride, Hlong NumKernel, Hlong Groups, const HTuple& Padding, const HString& Activation, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create a convolutional layer.
  HDlLayer CreateDlLayerConvolution(const HString& LayerName, Hlong KernelSize, Hlong Dilation, Hlong Stride, Hlong NumKernel, Hlong Groups, const HString& Padding, const HString& Activation, const HString& GenParamName, const HString& GenParamValue) const;

  // Create a convolutional layer.
  HDlLayer CreateDlLayerConvolution(const char* LayerName, Hlong KernelSize, Hlong Dilation, Hlong Stride, Hlong NumKernel, Hlong Groups, const char* Padding, const char* Activation, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create a convolutional layer.
  HDlLayer CreateDlLayerConvolution(const wchar_t* LayerName, Hlong KernelSize, Hlong Dilation, Hlong Stride, Hlong NumKernel, Hlong Groups, const wchar_t* Padding, const wchar_t* Activation, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Create a dense layer.
  HDlLayer CreateDlLayerDense(const HString& LayerName, Hlong NumOut, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create a dense layer.
  HDlLayer CreateDlLayerDense(const HString& LayerName, Hlong NumOut, const HString& GenParamName, const HString& GenParamValue) const;

  // Create a dense layer.
  HDlLayer CreateDlLayerDense(const char* LayerName, Hlong NumOut, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create a dense layer.
  HDlLayer CreateDlLayerDense(const wchar_t* LayerName, Hlong NumOut, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Create a depth max layer.
  HDlLayerArray CreateDlLayerDepthMax(const HString& LayerName, const HString& DepthMaxMode, const HTuple& GenParamName, const HTuple& GenParamValue, HDlLayerArray* DLLayerDepthMaxValue) const;

  // Create a depth max layer.
  HDlLayer CreateDlLayerDepthMax(const HString& LayerName, const HString& DepthMaxMode, const HString& GenParamName, const HString& GenParamValue, HDlLayer* DLLayerDepthMaxValue) const;

  // Create a depth max layer.
  HDlLayer CreateDlLayerDepthMax(const char* LayerName, const char* DepthMaxMode, const char* GenParamName, const char* GenParamValue, HDlLayer* DLLayerDepthMaxValue) const;

#ifdef _WIN32
  // Create a depth max layer.
  HDlLayer CreateDlLayerDepthMax(const wchar_t* LayerName, const wchar_t* DepthMaxMode, const wchar_t* GenParamName, const wchar_t* GenParamValue, HDlLayer* DLLayerDepthMaxValue) const;
#endif

  // Create a DropOut layer.
  HDlLayer CreateDlLayerDropout(const HString& LayerName, double Probability, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create a DropOut layer.
  HDlLayer CreateDlLayerDropout(const HString& LayerName, double Probability, const HString& GenParamName, const HString& GenParamValue) const;

  // Create a DropOut layer.
  HDlLayer CreateDlLayerDropout(const char* LayerName, double Probability, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create a DropOut layer.
  HDlLayer CreateDlLayerDropout(const wchar_t* LayerName, double Probability, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Create an elementwise layer.
  static HDlLayer CreateDlLayerElementwise(const HDlLayerArray& DLLayerInputs, const HString& LayerName, const HString& Operation, const HTuple& Coefficients, const HTuple& GenParamName, const HTuple& GenParamValue);

  // Create an elementwise layer.
  HDlLayer CreateDlLayerElementwise(const HString& LayerName, const HString& Operation, double Coefficients, const HString& GenParamName, const HString& GenParamValue) const;

  // Create an elementwise layer.
  HDlLayer CreateDlLayerElementwise(const char* LayerName, const char* Operation, double Coefficients, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create an elementwise layer.
  HDlLayer CreateDlLayerElementwise(const wchar_t* LayerName, const wchar_t* Operation, double Coefficients, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Create an input layer.
  void CreateDlLayerInput(const HString& LayerName, const HTuple& Shape, const HTuple& GenParamName, const HTuple& GenParamValue);

  // Create an input layer.
  void CreateDlLayerInput(const HString& LayerName, const HTuple& Shape, const HString& GenParamName, const HString& GenParamValue);

  // Create an input layer.
  void CreateDlLayerInput(const char* LayerName, const HTuple& Shape, const char* GenParamName, const char* GenParamValue);

#ifdef _WIN32
  // Create an input layer.
  void CreateDlLayerInput(const wchar_t* LayerName, const HTuple& Shape, const wchar_t* GenParamName, const wchar_t* GenParamValue);
#endif

  // Create a cross entropy loss layer.
  HDlLayer CreateDlLayerLossCrossEntropy(const HDlLayer& DLLayerTarget, const HDlLayer& DLLayerWeights, const HString& LayerName, double LossWeight, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create a cross entropy loss layer.
  HDlLayer CreateDlLayerLossCrossEntropy(const HDlLayer& DLLayerTarget, const HDlLayer& DLLayerWeights, const HString& LayerName, double LossWeight, const HString& GenParamName, const HString& GenParamValue) const;

  // Create a cross entropy loss layer.
  HDlLayer CreateDlLayerLossCrossEntropy(const HDlLayer& DLLayerTarget, const HDlLayer& DLLayerWeights, const char* LayerName, double LossWeight, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create a cross entropy loss layer.
  HDlLayer CreateDlLayerLossCrossEntropy(const HDlLayer& DLLayerTarget, const HDlLayer& DLLayerWeights, const wchar_t* LayerName, double LossWeight, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Create a CTC loss layer.
  HDlLayer CreateDlLayerLossCtc(const HDlLayer& DLLayerInputLengths, const HDlLayer& DLLayerTarget, const HDlLayer& DLLayerTargetLengths, const HString& LayerName, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create a CTC loss layer.
  HDlLayer CreateDlLayerLossCtc(const HDlLayer& DLLayerInputLengths, const HDlLayer& DLLayerTarget, const HDlLayer& DLLayerTargetLengths, const HString& LayerName, const HString& GenParamName, const HString& GenParamValue) const;

  // Create a CTC loss layer.
  HDlLayer CreateDlLayerLossCtc(const HDlLayer& DLLayerInputLengths, const HDlLayer& DLLayerTarget, const HDlLayer& DLLayerTargetLengths, const char* LayerName, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create a CTC loss layer.
  HDlLayer CreateDlLayerLossCtc(const HDlLayer& DLLayerInputLengths, const HDlLayer& DLLayerTarget, const HDlLayer& DLLayerTargetLengths, const wchar_t* LayerName, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Create a distance loss layer.
  HDlLayer CreateDlLayerLossDistance(const HDlLayer& DLLayerTarget, const HDlLayer& DLLayerWeights, const HString& LayerName, const HString& DistanceType, double LossWeight, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create a distance loss layer.
  HDlLayer CreateDlLayerLossDistance(const HDlLayer& DLLayerTarget, const HDlLayer& DLLayerWeights, const HString& LayerName, const HString& DistanceType, double LossWeight, const HString& GenParamName, const HString& GenParamValue) const;

  // Create a distance loss layer.
  HDlLayer CreateDlLayerLossDistance(const HDlLayer& DLLayerTarget, const HDlLayer& DLLayerWeights, const char* LayerName, const char* DistanceType, double LossWeight, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create a distance loss layer.
  HDlLayer CreateDlLayerLossDistance(const HDlLayer& DLLayerTarget, const HDlLayer& DLLayerWeights, const wchar_t* LayerName, const wchar_t* DistanceType, double LossWeight, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Create a focal loss layer.
  HDlLayer CreateDlLayerLossFocal(const HDlLayer& DLLayerTarget, const HDlLayer& DLLayerWeights, const HDlLayer& DLLayerNormalization, const HString& LayerName, const HTuple& LossWeight, const HTuple& Gamma, const HTuple& ClassWeights, const HString& Type, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create a focal loss layer.
  HDlLayer CreateDlLayerLossFocal(const HDlLayer& DLLayerTarget, const HDlLayer& DLLayerWeights, const HDlLayer& DLLayerNormalization, const HString& LayerName, double LossWeight, double Gamma, double ClassWeights, const HString& Type, const HString& GenParamName, const HString& GenParamValue) const;

  // Create a focal loss layer.
  HDlLayer CreateDlLayerLossFocal(const HDlLayer& DLLayerTarget, const HDlLayer& DLLayerWeights, const HDlLayer& DLLayerNormalization, const char* LayerName, double LossWeight, double Gamma, double ClassWeights, const char* Type, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create a focal loss layer.
  HDlLayer CreateDlLayerLossFocal(const HDlLayer& DLLayerTarget, const HDlLayer& DLLayerWeights, const HDlLayer& DLLayerNormalization, const wchar_t* LayerName, double LossWeight, double Gamma, double ClassWeights, const wchar_t* Type, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Create a Huber loss layer.
  HDlLayer CreateDlLayerLossHuber(const HDlLayer& DLLayerTarget, const HDlLayer& DLLayerWeights, const HDlLayer& DLLayerNormalization, const HString& LayerName, double LossWeight, double Beta, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create a Huber loss layer.
  HDlLayer CreateDlLayerLossHuber(const HDlLayer& DLLayerTarget, const HDlLayer& DLLayerWeights, const HDlLayer& DLLayerNormalization, const HString& LayerName, double LossWeight, double Beta, const HString& GenParamName, const HString& GenParamValue) const;

  // Create a Huber loss layer.
  HDlLayer CreateDlLayerLossHuber(const HDlLayer& DLLayerTarget, const HDlLayer& DLLayerWeights, const HDlLayer& DLLayerNormalization, const char* LayerName, double LossWeight, double Beta, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create a Huber loss layer.
  HDlLayer CreateDlLayerLossHuber(const HDlLayer& DLLayerTarget, const HDlLayer& DLLayerWeights, const HDlLayer& DLLayerNormalization, const wchar_t* LayerName, double LossWeight, double Beta, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Create a LRN layer.
  HDlLayer CreateDlLayerLrn(const HString& LayerName, Hlong LocalSize, double Alpha, double Beta, double K, const HString& NormRegion, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create a LRN layer.
  HDlLayer CreateDlLayerLrn(const HString& LayerName, Hlong LocalSize, double Alpha, double Beta, double K, const HString& NormRegion, const HString& GenParamName, const HString& GenParamValue) const;

  // Create a LRN layer.
  HDlLayer CreateDlLayerLrn(const char* LayerName, Hlong LocalSize, double Alpha, double Beta, double K, const char* NormRegion, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create a LRN layer.
  HDlLayer CreateDlLayerLrn(const wchar_t* LayerName, Hlong LocalSize, double Alpha, double Beta, double K, const wchar_t* NormRegion, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Create a pooling layer.
  HDlLayer CreateDlLayerPooling(const HString& LayerName, const HTuple& KernelSize, const HTuple& Stride, const HTuple& Padding, const HString& Mode, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create a pooling layer.
  HDlLayer CreateDlLayerPooling(const HString& LayerName, const HTuple& KernelSize, const HTuple& Stride, const HString& Padding, const HString& Mode, const HString& GenParamName, const HString& GenParamValue) const;

  // Create a pooling layer.
  HDlLayer CreateDlLayerPooling(const char* LayerName, const HTuple& KernelSize, const HTuple& Stride, const char* Padding, const char* Mode, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create a pooling layer.
  HDlLayer CreateDlLayerPooling(const wchar_t* LayerName, const HTuple& KernelSize, const HTuple& Stride, const wchar_t* Padding, const wchar_t* Mode, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Create a reshape layer.
  HDlLayer CreateDlLayerReshape(const HString& LayerName, const HTuple& Shape, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create a reshape layer.
  HDlLayer CreateDlLayerReshape(const HString& LayerName, const HTuple& Shape, const HString& GenParamName, const HString& GenParamValue) const;

  // Create a reshape layer.
  HDlLayer CreateDlLayerReshape(const char* LayerName, const HTuple& Shape, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create a reshape layer.
  HDlLayer CreateDlLayerReshape(const wchar_t* LayerName, const HTuple& Shape, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Create a softmax layer.
  HDlLayer CreateDlLayerSoftmax(const HString& LayerName, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create a softmax layer.
  HDlLayer CreateDlLayerSoftmax(const HString& LayerName, const HString& GenParamName, const HString& GenParamValue) const;

  // Create a softmax layer.
  HDlLayer CreateDlLayerSoftmax(const char* LayerName, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create a softmax layer.
  HDlLayer CreateDlLayerSoftmax(const wchar_t* LayerName, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Create a transposed convolution layer.
  HDlLayer CreateDlLayerTransposedConvolution(const HString& LayerName, Hlong KernelSize, Hlong Stride, Hlong KernelDepth, Hlong Groups, const HTuple& Padding, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create a transposed convolution layer.
  HDlLayer CreateDlLayerTransposedConvolution(const HString& LayerName, Hlong KernelSize, Hlong Stride, Hlong KernelDepth, Hlong Groups, const HString& Padding, const HString& GenParamName, const HString& GenParamValue) const;

  // Create a transposed convolution layer.
  HDlLayer CreateDlLayerTransposedConvolution(const char* LayerName, Hlong KernelSize, Hlong Stride, Hlong KernelDepth, Hlong Groups, const char* Padding, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create a transposed convolution layer.
  HDlLayer CreateDlLayerTransposedConvolution(const wchar_t* LayerName, Hlong KernelSize, Hlong Stride, Hlong KernelDepth, Hlong Groups, const wchar_t* Padding, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Create a zoom layer using size factors.
  HDlLayer CreateDlLayerZoomFactor(const HString& LayerName, const HTuple& ScaleWidth, const HTuple& ScaleHeight, const HString& Interpolation, const HString& AlignCorners, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create a zoom layer using size factors.
  HDlLayer CreateDlLayerZoomFactor(const HString& LayerName, double ScaleWidth, double ScaleHeight, const HString& Interpolation, const HString& AlignCorners, const HString& GenParamName, const HString& GenParamValue) const;

  // Create a zoom layer using size factors.
  HDlLayer CreateDlLayerZoomFactor(const char* LayerName, double ScaleWidth, double ScaleHeight, const char* Interpolation, const char* AlignCorners, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create a zoom layer using size factors.
  HDlLayer CreateDlLayerZoomFactor(const wchar_t* LayerName, double ScaleWidth, double ScaleHeight, const wchar_t* Interpolation, const wchar_t* AlignCorners, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Create a zoom layer using an absolute output size.
  HDlLayer CreateDlLayerZoomSize(const HString& LayerName, Hlong Width, Hlong Height, const HString& Interpolation, const HString& AlignCorners, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create a zoom layer using an absolute output size.
  HDlLayer CreateDlLayerZoomSize(const HString& LayerName, Hlong Width, Hlong Height, const HString& Interpolation, const HString& AlignCorners, const HString& GenParamName, const HString& GenParamValue) const;

  // Create a zoom layer using an absolute output size.
  HDlLayer CreateDlLayerZoomSize(const char* LayerName, Hlong Width, Hlong Height, const char* Interpolation, const char* AlignCorners, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create a zoom layer using an absolute output size.
  HDlLayer CreateDlLayerZoomSize(const wchar_t* LayerName, Hlong Width, Hlong Height, const wchar_t* Interpolation, const wchar_t* AlignCorners, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Create a zoom layer using the output size of a reference layer.
  HDlLayer CreateDlLayerZoomToLayerSize(const HDlLayer& DLLayerReference, const HString& LayerName, const HString& Interpolation, const HString& AlignCorners, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create a zoom layer using the output size of a reference layer.
  HDlLayer CreateDlLayerZoomToLayerSize(const HDlLayer& DLLayerReference, const HString& LayerName, const HString& Interpolation, const HString& AlignCorners, const HString& GenParamName, const HString& GenParamValue) const;

  // Create a zoom layer using the output size of a reference layer.
  HDlLayer CreateDlLayerZoomToLayerSize(const HDlLayer& DLLayerReference, const char* LayerName, const char* Interpolation, const char* AlignCorners, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create a zoom layer using the output size of a reference layer.
  HDlLayer CreateDlLayerZoomToLayerSize(const HDlLayer& DLLayerReference, const wchar_t* LayerName, const wchar_t* Interpolation, const wchar_t* AlignCorners, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Return the parameters of a deep learning layer.
  HTuple GetDlLayerParam(const HString& GenParamName) const;

  // Return the parameters of a deep learning layer.
  HTuple GetDlLayerParam(const char* GenParamName) const;

#ifdef _WIN32
  // Return the parameters of a deep learning layer.
  HTuple GetDlLayerParam(const wchar_t* GenParamName) const;
#endif

  // Create a deep copy of the layers and all of their graph ancestors in a given deep learning model.
  static HDlLayerArray GetDlModelLayer(const HDlModel& DLModelHandle, const HTuple& LayerNames);

  // Create a deep copy of the layers and all of their graph ancestors in a given deep learning model.
  void GetDlModelLayer(const HDlModel& DLModelHandle, const HString& LayerNames);

  // Create a deep copy of the layers and all of their graph ancestors in a given deep learning model.
  void GetDlModelLayer(const HDlModel& DLModelHandle, const char* LayerNames);

#ifdef _WIN32
  // Create a deep copy of the layers and all of their graph ancestors in a given deep learning model.
  void GetDlModelLayer(const HDlModel& DLModelHandle, const wchar_t* LayerNames);
#endif

  // Retrieve parameter values for a given layer.
  static HTuple GetDlModelLayerParam(const HDlModel& DLModelHandle, const HString& LayerName, const HString& ParamName);

  // Retrieve parameter values for a given layer.
  static HTuple GetDlModelLayerParam(const HDlModel& DLModelHandle, const char* LayerName, const char* ParamName);

#ifdef _WIN32
  // Retrieve parameter values for a given layer.
  static HTuple GetDlModelLayerParam(const HDlModel& DLModelHandle, const wchar_t* LayerName, const wchar_t* ParamName);
#endif

  // Set parameter values of a given layer.
  static void SetDlModelLayerParam(const HDlModel& DLModelHandle, const HString& LayerName, const HString& ParamName, const HTuple& ParamValue);

  // Set parameter values of a given layer.
  static void SetDlModelLayerParam(const HDlModel& DLModelHandle, const HString& LayerName, const HString& ParamName, const HString& ParamValue);

  // Set parameter values of a given layer.
  static void SetDlModelLayerParam(const HDlModel& DLModelHandle, const char* LayerName, const char* ParamName, const char* ParamValue);

#ifdef _WIN32
  // Set parameter values of a given layer.
  static void SetDlModelLayerParam(const HDlModel& DLModelHandle, const wchar_t* LayerName, const wchar_t* ParamName, const wchar_t* ParamValue);
#endif

  // Create a permutation layer.
  HDlLayer CreateDlLayerPermutation(const HString& LayerName, const HTuple& Permutation, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create a permutation layer.
  HDlLayer CreateDlLayerPermutation(const HString& LayerName, const HTuple& Permutation, const HString& GenParamName, const HString& GenParamValue) const;

  // Create a permutation layer.
  HDlLayer CreateDlLayerPermutation(const char* LayerName, const HTuple& Permutation, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create a permutation layer.
  HDlLayer CreateDlLayerPermutation(const wchar_t* LayerName, const HTuple& Permutation, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Create a depth to space layer.
  HDlLayer CreateDlLayerDepthToSpace(const HString& LayerName, Hlong BlockSize, const HString& Mode, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create a depth to space layer.
  HDlLayer CreateDlLayerDepthToSpace(const HString& LayerName, Hlong BlockSize, const HString& Mode, const HString& GenParamName, const HString& GenParamValue) const;

  // Create a depth to space layer.
  HDlLayer CreateDlLayerDepthToSpace(const char* LayerName, Hlong BlockSize, const char* Mode, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create a depth to space layer.
  HDlLayer CreateDlLayerDepthToSpace(const wchar_t* LayerName, Hlong BlockSize, const wchar_t* Mode, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Create an identity layer.
  HDlLayer CreateDlLayerIdentity(const HString& LayerName, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create an identity layer.
  HDlLayer CreateDlLayerIdentity(const HString& LayerName, const HString& GenParamName, const HString& GenParamValue) const;

  // Create an identity layer.
  HDlLayer CreateDlLayerIdentity(const char* LayerName, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create an identity layer.
  HDlLayer CreateDlLayerIdentity(const wchar_t* LayerName, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Create a MatMul layer.
  HDlLayer CreateDlLayerMatmul(const HDlLayer& DLLayerB, const HString& LayerName, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create a MatMul layer.
  HDlLayer CreateDlLayerMatmul(const HDlLayer& DLLayerB, const HString& LayerName, const HString& GenParamName, const HString& GenParamValue) const;

  // Create a MatMul layer.
  HDlLayer CreateDlLayerMatmul(const HDlLayer& DLLayerB, const char* LayerName, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create a MatMul layer.
  HDlLayer CreateDlLayerMatmul(const HDlLayer& DLLayerB, const wchar_t* LayerName, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

  // Create a reduce layer.
  HDlLayer CreateDlLayerReduce(const HString& LayerName, const HString& Operation, const HTuple& Axes, const HTuple& GenParamName, const HTuple& GenParamValue) const;

  // Create a reduce layer.
  HDlLayer CreateDlLayerReduce(const HString& LayerName, const HString& Operation, Hlong Axes, const HString& GenParamName, const HString& GenParamValue) const;

  // Create a reduce layer.
  HDlLayer CreateDlLayerReduce(const char* LayerName, const char* Operation, Hlong Axes, const char* GenParamName, const char* GenParamValue) const;

#ifdef _WIN32
  // Create a reduce layer.
  HDlLayer CreateDlLayerReduce(const wchar_t* LayerName, const wchar_t* Operation, Hlong Axes, const wchar_t* GenParamName, const wchar_t* GenParamValue) const;
#endif

};

// forward declarations and types for internal array implementation

template<class T> class HSmartPtr;
template<class T> class HHandleBaseArrayRef;

typedef HHandleBaseArrayRef<HDlLayer> HDlLayerArrayRef;
typedef HSmartPtr< HDlLayerArrayRef > HDlLayerArrayPtr;


// Represents multiple tool instances
class LIntExport HDlLayerArray : public HHandleBaseArray
{

public:

  // Create empty array
  HDlLayerArray();

  // Create array from native array of tool instances
  HDlLayerArray(const HDlLayer* classes, Hlong length);

  // Copy constructor
  HDlLayerArray(const HDlLayerArray &tool_array);

  // Destructor
  virtual ~HDlLayerArray();

  // Assignment operator
  HDlLayerArray &operator=(const HDlLayerArray &tool_array);

  // Clears array and all tool instances
  virtual void Clear();

  // Get array of native tool instances
  const HDlLayer* Tools() const;

  // Get number of tools
  virtual Hlong Length() const;

  // Create tool array from tuple of handles
  virtual void SetFromTuple(const HTuple& handles);

  // Get tuple of handles for tool array
  virtual HTuple ConvertToTuple() const;

protected:

// Smart pointer to internal data container
   HDlLayerArrayPtr *mArrayPtr;
};

}

#endif
