#ifndef V8_TORQUE_TYPED_ARRAY_FROM_DSL_BASE_H__
#define V8_TORQUE_TYPED_ARRAY_FROM_DSL_BASE_H__

#include "src/builtins/builtins-typed-array-gen.h"


 namespace v8 {
namespace internal {

class TypedArrayBuiltinsFromDSLAssembler: public TypedArrayBuiltinsAssembler {
 public:
  explicit TypedArrayBuiltinsFromDSLAssembler(compiler::CodeAssemblerState* state) : TypedArrayBuiltinsAssembler(state) {}

  using Node = compiler::Node;
  template <class T>
  using TNode = compiler::TNode<T>;
  template <class T>
  using SloppyTNode = compiler::SloppyTNode<T>;

  ElementsKind KindForArrayType17ATFixedUint8Array();
  ElementsKind KindForArrayType16ATFixedInt8Array();
  ElementsKind KindForArrayType18ATFixedUint16Array();
  ElementsKind KindForArrayType17ATFixedInt16Array();
  ElementsKind KindForArrayType18ATFixedUint32Array();
  ElementsKind KindForArrayType17ATFixedInt32Array();
  ElementsKind KindForArrayType19ATFixedFloat32Array();
  ElementsKind KindForArrayType19ATFixedFloat64Array();
  ElementsKind KindForArrayType24ATFixedUint8ClampedArray();
  ElementsKind KindForArrayType21ATFixedBigUint64Array();
  ElementsKind KindForArrayType20ATFixedBigInt64Array();
  TNode<Number> CallCompareWithDetachedCheck(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<JSReceiver> p_comparefn, TNode<Object> p_a, TNode<Object> p_b, Label* label_Detached_107);
  void TypedArrayInsertionSort(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<Smi> p_from_arg, TNode<Smi> p_to_arg, TNode<JSReceiver> p_comparefn, TNode<Code> p_Load, TNode<Code> p_Store, Label* label_Detached_112);
  void TypedArrayQuickSortImpl(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<Smi> p_from_arg, TNode<Smi> p_to_arg, TNode<JSReceiver> p_comparefn, TNode<Code> p_Load, TNode<Code> p_Store, Label* label_Detached_121);
};

}  // namespace internal
}  // namespace v8

#endif  // V8_TORQUE_TYPED_ARRAY_FROM_DSL_BASE_H__
