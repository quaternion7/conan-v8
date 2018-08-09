#include "src/code-stub-assembler.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/bigint.h"
#include "builtins-base-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::Hole() {
  TNode<Oddball> t0 = UncheckedCast<Oddball>(TheHoleConstant());
  USE(implicit_cast<TNode<Oddball>>(t0));
  return implicit_cast<TNode<Oddball>>(t0);
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::Null() {
  TNode<Oddball> t1 = UncheckedCast<Oddball>(NullConstant());
  USE(implicit_cast<TNode<Oddball>>(t1));
  return implicit_cast<TNode<Oddball>>(t1);
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::Undefined() {
  TNode<Oddball> t2 = UncheckedCast<Oddball>(UndefinedConstant());
  USE(implicit_cast<TNode<Oddball>>(t2));
  return implicit_cast<TNode<Oddball>>(t2);
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::True() {
  TNode<Oddball> t3 = UncheckedCast<Oddball>(TrueConstant());
  USE(implicit_cast<TNode<Oddball>>(t3));
  return implicit_cast<TNode<Oddball>>(t3);
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::False() {
  TNode<Oddball> t4 = UncheckedCast<Oddball>(FalseConstant());
  USE(implicit_cast<TNode<Oddball>>(t4));
  return implicit_cast<TNode<Oddball>>(t4);
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::TorqueHasProperty(TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<Object> p_key) {
  TVARIABLE(Oddball, _return_0_impl);
  auto _return_0 = &_return_0_impl;
  USE(_return_0);
  Label label_macro_end_633_impl(this, {_return_0});
  Label* label_macro_end_633 = &label_macro_end_633_impl;
  USE(label_macro_end_633);
  // ../src/builtins/base.tq:182:67
  {
    // ../src/builtins/base.tq:183:3
    TNode<Oddball> t5 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kHasProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_key), implicit_cast<TNode<JSReceiver>>(p_receiver)));
    USE(implicit_cast<TNode<Oddball>>(t5));
    *_return_0 = implicit_cast<TNode<Oddball>>(t5);
    Goto(label_macro_end_633);
  }
  BIND(label_macro_end_633);
  return implicit_cast<TNode<Oddball>>((*_return_0).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::min(TNode<Number> p_x, TNode<Number> p_y) {
  TVARIABLE(Number, _return_1_impl);
  auto _return_1 = &_return_1_impl;
  USE(_return_1);
  Label label_macro_end_634_impl(this, {_return_1});
  Label* label_macro_end_634 = &label_macro_end_634_impl;
  USE(label_macro_end_634);
  // ../src/builtins/base.tq:297:41
  {
    // ../src/builtins/base.tq:298:3
    TNode<Number> t6 = UncheckedCast<Number>(NumberMin(implicit_cast<TNode<Number>>(p_x), implicit_cast<TNode<Number>>(p_y)));
    USE(implicit_cast<TNode<Number>>(t6));
    *_return_1 = implicit_cast<TNode<Number>>(t6);
    Goto(label_macro_end_634);
  }
  BIND(label_macro_end_634);
  return implicit_cast<TNode<Number>>((*_return_1).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::max(TNode<Number> p_x, TNode<Number> p_y) {
  TVARIABLE(Number, _return_2_impl);
  auto _return_2 = &_return_2_impl;
  USE(_return_2);
  Label label_macro_end_635_impl(this, {_return_2});
  Label* label_macro_end_635 = &label_macro_end_635_impl;
  USE(label_macro_end_635);
  // ../src/builtins/base.tq:300:41
  {
    // ../src/builtins/base.tq:301:3
    TNode<Number> t7 = UncheckedCast<Number>(NumberMax(implicit_cast<TNode<Number>>(p_x), implicit_cast<TNode<Number>>(p_y)));
    USE(implicit_cast<TNode<Number>>(t7));
    *_return_2 = implicit_cast<TNode<Number>>(t7);
    Goto(label_macro_end_635);
  }
  BIND(label_macro_end_635);
  return implicit_cast<TNode<Number>>((*_return_2).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::cast22UT12ATHeapNumber5ATSmi(TNode<Object> p_o, Label* label_CastError_0) {
  TVARIABLE(Number, _return_3_impl);
  auto _return_3 = &_return_3_impl;
  USE(_return_3);
  Label label_macro_end_636_impl(this, {_return_3});
  Label* label_macro_end_636 = &label_macro_end_636_impl;
  USE(label_macro_end_636);
  // ../src/builtins/base.tq:334:50
  {
    // ../src/builtins/base.tq:335:3
    TNode<Number> t8 = UncheckedCast<Number>(TaggedToNumber(implicit_cast<TNode<Object>>(p_o), label_CastError_0));
    USE(implicit_cast<TNode<Number>>(t8));
    *_return_3 = implicit_cast<TNode<Number>>(t8);
    Goto(label_macro_end_636);
  }
  BIND(label_macro_end_636);
  return implicit_cast<TNode<Number>>((*_return_3).value());
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::cast12ATHeapObject(TNode<Object> p_o, Label* label_CastError_1) {
  TVARIABLE(HeapObject, _return_4_impl);
  auto _return_4 = &_return_4_impl;
  USE(_return_4);
  Label label_macro_end_637_impl(this, {_return_4});
  Label* label_macro_end_637 = &label_macro_end_637_impl;
  USE(label_macro_end_637);
  // ../src/builtins/base.tq:337:58
  {
    // ../src/builtins/base.tq:338:3
    TNode<HeapObject> t9 = UncheckedCast<HeapObject>(TaggedToHeapObject(implicit_cast<TNode<Object>>(p_o), label_CastError_1));
    USE(implicit_cast<TNode<HeapObject>>(t9));
    *_return_4 = implicit_cast<TNode<HeapObject>>(t9);
    Goto(label_macro_end_637);
  }
  BIND(label_macro_end_637);
  return implicit_cast<TNode<HeapObject>>((*_return_4).value());
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::cast5ATSmi(TNode<Object> p_o, Label* label_CastError_2) {
  TVARIABLE(Smi, _return_5_impl);
  auto _return_5 = &_return_5_impl;
  USE(_return_5);
  Label label_macro_end_638_impl(this, {_return_5});
  Label* label_macro_end_638 = &label_macro_end_638_impl;
  USE(label_macro_end_638);
  // ../src/builtins/base.tq:340:44
  {
    // ../src/builtins/base.tq:341:3
    TNode<Smi> t10 = UncheckedCast<Smi>(TaggedToSmi(implicit_cast<TNode<Object>>(p_o), label_CastError_2));
    USE(implicit_cast<TNode<Smi>>(t10));
    *_return_5 = implicit_cast<TNode<Smi>>(t10);
    Goto(label_macro_end_638);
  }
  BIND(label_macro_end_638);
  return implicit_cast<TNode<Smi>>((*_return_5).value());
}

compiler::TNode<JSDataView> BaseBuiltinsFromDSLAssembler::cast12ATJSDataView(TNode<Object> p_o, Label* label_CastError_3) {
  TVARIABLE(JSDataView, _return_6_impl);
  auto _return_6 = &_return_6_impl;
  USE(_return_6);
  Label label_macro_end_639_impl(this, {_return_6});
  Label* label_macro_end_639 = &label_macro_end_639_impl;
  USE(label_macro_end_639);
  // ../src/builtins/base.tq:343:58
  {
    // ../src/builtins/base.tq:344:3
    TNode<JSDataView> t11 = UncheckedCast<JSDataView>(TaggedToJSDataView(implicit_cast<TNode<Object>>(p_o), label_CastError_3));
    USE(implicit_cast<TNode<JSDataView>>(t11));
    *_return_6 = implicit_cast<TNode<JSDataView>>(t11);
    Goto(label_macro_end_639);
  }
  BIND(label_macro_end_639);
  return implicit_cast<TNode<JSDataView>>((*_return_6).value());
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(TNode<Object> p_o, Label* label_CastError_4) {
  TVARIABLE(JSReceiver, _return_7_impl);
  auto _return_7 = &_return_7_impl;
  USE(_return_7);
  Label label_macro_end_640_impl(this, {_return_7});
  Label* label_macro_end_640 = &label_macro_end_640_impl;
  USE(label_macro_end_640);
  // ../src/builtins/base.tq:346:54
  {
    // ../src/builtins/base.tq:347:3
    TNode<JSReceiver> t12 = UncheckedCast<JSReceiver>(TaggedToCallable(implicit_cast<TNode<Object>>(p_o), label_CastError_4));
    USE(implicit_cast<TNode<JSReceiver>>(t12));
    *_return_7 = implicit_cast<TNode<JSReceiver>>(t12);
    Goto(label_macro_end_640);
  }
  BIND(label_macro_end_640);
  return implicit_cast<TNode<JSReceiver>>((*_return_7).value());
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::cast9ATJSArray(TNode<Object> p_o, Label* label_CastError_5) {
  TVARIABLE(JSArray, _return_8_impl);
  auto _return_8 = &_return_8_impl;
  USE(_return_8);
  Label label_macro_end_641_impl(this, {_return_8});
  Label* label_macro_end_641 = &label_macro_end_641_impl;
  USE(label_macro_end_641);
  // ../src/builtins/base.tq:349:52
  {
    // ../src/builtins/base.tq:350:3
    TNode<JSArray> t13 = UncheckedCast<JSArray>(TaggedToJSArray(implicit_cast<TNode<Object>>(p_o), label_CastError_5));
    USE(implicit_cast<TNode<JSArray>>(t13));
    *_return_8 = implicit_cast<TNode<JSArray>>(t13);
    Goto(label_macro_end_641);
  }
  BIND(label_macro_end_641);
  return implicit_cast<TNode<JSArray>>((*_return_8).value());
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::cast12ATFixedArray(TNode<FixedArrayBase> p_o, Label* label_CastError_6) {
  TVARIABLE(FixedArray, _return_9_impl);
  auto _return_9 = &_return_9_impl;
  USE(_return_9);
  Label label_macro_end_642_impl(this, {_return_9});
  Label* label_macro_end_642 = &label_macro_end_642_impl;
  USE(label_macro_end_642);
  // ../src/builtins/base.tq:353:66
  {
    // ../src/builtins/base.tq:354:3
    TNode<FixedArray> t14 = UncheckedCast<FixedArray>(ConvertFixedArrayBaseToFixedArray(implicit_cast<TNode<FixedArrayBase>>(p_o), label_CastError_6));
    USE(implicit_cast<TNode<FixedArray>>(t14));
    *_return_9 = implicit_cast<TNode<FixedArray>>(t14);
    Goto(label_macro_end_642);
  }
  BIND(label_macro_end_642);
  return implicit_cast<TNode<FixedArray>>((*_return_9).value());
}

compiler::TNode<FixedDoubleArray> BaseBuiltinsFromDSLAssembler::cast18ATFixedDoubleArray(TNode<FixedArrayBase> p_o, Label* label_CastError_7) {
  TVARIABLE(FixedDoubleArray, _return_10_impl);
  auto _return_10 = &_return_10_impl;
  USE(_return_10);
  Label label_macro_end_643_impl(this, {_return_10});
  Label* label_macro_end_643 = &label_macro_end_643_impl;
  USE(label_macro_end_643);
  // ../src/builtins/base.tq:356:78
  {
    // ../src/builtins/base.tq:357:3
    TNode<FixedDoubleArray> t15 = UncheckedCast<FixedDoubleArray>(ConvertFixedArrayBaseToFixedDoubleArray(implicit_cast<TNode<FixedArrayBase>>(p_o), label_CastError_7));
    USE(implicit_cast<TNode<FixedDoubleArray>>(t15));
    *_return_10 = implicit_cast<TNode<FixedDoubleArray>>(t15);
    Goto(label_macro_end_643);
  }
  BIND(label_macro_end_643);
  return implicit_cast<TNode<FixedDoubleArray>>((*_return_10).value());
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::from_constexpr8ATintptr(int31_t p_i) {
  TVARIABLE(IntPtrT, _return_11_impl);
  auto _return_11 = &_return_11_impl;
  USE(_return_11);
  Label label_macro_end_644_impl(this, {_return_11});
  Label* label_macro_end_644 = &label_macro_end_644_impl;
  USE(label_macro_end_644);
  // ../src/builtins/base.tq:396:52
  {
    // ../src/builtins/base.tq:397:3
    TNode<IntPtrT> t16 = UncheckedCast<IntPtrT>(IntPtrConstant(implicit_cast<int31_t>(p_i)));
    USE(implicit_cast<TNode<IntPtrT>>(t16));
    *_return_11 = implicit_cast<TNode<IntPtrT>>(t16);
    Goto(label_macro_end_644);
  }
  BIND(label_macro_end_644);
  return implicit_cast<TNode<IntPtrT>>((*_return_11).value());
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::from_constexpr7ATint31(int31_t p_i) {
  TVARIABLE(Int32T, _return_12_impl);
  auto _return_12 = &_return_12_impl;
  USE(_return_12);
  Label label_macro_end_645_impl(this, {_return_12});
  Label* label_macro_end_645 = &label_macro_end_645_impl;
  USE(label_macro_end_645);
  // ../src/builtins/base.tq:399:50
  {
    // ../src/builtins/base.tq:400:3
    TNode<Int32T> t17 = UncheckedCast<Int32T>(Int32Constant(implicit_cast<int31_t>(p_i)));
    USE(implicit_cast<TNode<Int32T>>(t17));
    *_return_12 = implicit_cast<TNode<Int32T>>(t17);
    Goto(label_macro_end_645);
  }
  BIND(label_macro_end_645);
  return implicit_cast<TNode<Int32T>>((*_return_12).value());
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::from_constexpr7ATint32(int31_t p_i) {
  TVARIABLE(Int32T, _return_13_impl);
  auto _return_13 = &_return_13_impl;
  USE(_return_13);
  Label label_macro_end_646_impl(this, {_return_13});
  Label* label_macro_end_646 = &label_macro_end_646_impl;
  USE(label_macro_end_646);
  // ../src/builtins/base.tq:402:50
  {
    // ../src/builtins/base.tq:403:3
    TNode<Int32T> t18 = UncheckedCast<Int32T>(Int32Constant(implicit_cast<int31_t>(p_i)));
    USE(implicit_cast<TNode<Int32T>>(t18));
    *_return_13 = implicit_cast<TNode<Int32T>>(t18);
    Goto(label_macro_end_646);
  }
  BIND(label_macro_end_646);
  return implicit_cast<TNode<Int32T>>((*_return_13).value());
}

compiler::TNode<Uint32T> BaseBuiltinsFromDSLAssembler::from_constexpr8ATuint32(int31_t p_i) {
  TVARIABLE(Uint32T, _return_14_impl);
  auto _return_14 = &_return_14_impl;
  USE(_return_14);
  Label label_macro_end_647_impl(this, {_return_14});
  Label* label_macro_end_647 = &label_macro_end_647_impl;
  USE(label_macro_end_647);
  // ../src/builtins/base.tq:405:52
  {
    // ../src/builtins/base.tq:406:3
    TNode<Int32T> t19 = UncheckedCast<Int32T>(Int32Constant(implicit_cast<int31_t>(p_i)));
    USE(implicit_cast<TNode<Int32T>>(t19));
    TNode<Uint32T> t20 = UncheckedCast<Uint32T>(Unsigned(implicit_cast<TNode<Int32T>>(t19)));
    USE(implicit_cast<TNode<Uint32T>>(t20));
    *_return_14 = implicit_cast<TNode<Uint32T>>(t20);
    Goto(label_macro_end_647);
  }
  BIND(label_macro_end_647);
  return implicit_cast<TNode<Uint32T>>((*_return_14).value());
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::from_constexpr9ATuintptr(int31_t p_i) {
  TVARIABLE(UintPtrT, _return_15_impl);
  auto _return_15 = &_return_15_impl;
  USE(_return_15);
  Label label_macro_end_648_impl(this, {_return_15});
  Label* label_macro_end_648 = &label_macro_end_648_impl;
  USE(label_macro_end_648);
  // ../src/builtins/base.tq:408:54
  {
    // ../src/builtins/base.tq:409:3
    TNode<Uint32T> t21 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(p_i)));
    TNode<UintPtrT> t22 = UncheckedCast<UintPtrT>(ChangeUint32ToWord(implicit_cast<TNode<Uint32T>>(t21)));
    USE(implicit_cast<TNode<UintPtrT>>(t22));
    *_return_15 = implicit_cast<TNode<UintPtrT>>(t22);
    Goto(label_macro_end_648);
  }
  BIND(label_macro_end_648);
  return implicit_cast<TNode<UintPtrT>>((*_return_15).value());
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::from_constexpr5ATSmi(int31_t p_i) {
  TVARIABLE(Smi, _return_16_impl);
  auto _return_16 = &_return_16_impl;
  USE(_return_16);
  Label label_macro_end_649_impl(this, {_return_16});
  Label* label_macro_end_649 = &label_macro_end_649_impl;
  USE(label_macro_end_649);
  // ../src/builtins/base.tq:411:46
  {
    // ../src/builtins/base.tq:412:3
    TNode<Smi> t23 = UncheckedCast<Smi>(SmiConstant(implicit_cast<int31_t>(p_i)));
    USE(implicit_cast<TNode<Smi>>(t23));
    *_return_16 = implicit_cast<TNode<Smi>>(t23);
    Goto(label_macro_end_649);
  }
  BIND(label_macro_end_649);
  return implicit_cast<TNode<Smi>>((*_return_16).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::from_constexpr22UT12ATHeapNumber5ATSmi(int31_t p_i) {
  TVARIABLE(Number, _return_17_impl);
  auto _return_17 = &_return_17_impl;
  USE(_return_17);
  Label label_macro_end_650_impl(this, {_return_17});
  Label* label_macro_end_650 = &label_macro_end_650_impl;
  USE(label_macro_end_650);
  // ../src/builtins/base.tq:414:52
  {
    // ../src/builtins/base.tq:415:3
    TNode<Smi> t24 = UncheckedCast<Smi>(SmiConstant(implicit_cast<int31_t>(p_i)));
    USE(implicit_cast<TNode<Smi>>(t24));
    *_return_17 = implicit_cast<TNode<Number>>(t24);
    Goto(label_macro_end_650);
  }
  BIND(label_macro_end_650);
  return implicit_cast<TNode<Number>>((*_return_17).value());
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::from_constexpr9ATfloat64(int31_t p_i) {
  TVARIABLE(Float64T, _return_18_impl);
  auto _return_18 = &_return_18_impl;
  USE(_return_18);
  Label label_macro_end_651_impl(this, {_return_18});
  Label* label_macro_end_651 = &label_macro_end_651_impl;
  USE(label_macro_end_651);
  // ../src/builtins/base.tq:417:54
  {
    // ../src/builtins/base.tq:418:3
    TNode<Float64T> t25 = UncheckedCast<Float64T>(Float64Constant(implicit_cast<int31_t>(p_i)));
    USE(implicit_cast<TNode<Float64T>>(t25));
    *_return_18 = implicit_cast<TNode<Float64T>>(t25);
    Goto(label_macro_end_651);
  }
  BIND(label_macro_end_651);
  return implicit_cast<TNode<Float64T>>((*_return_18).value());
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::from_constexpr8ATintptr(int32_t p_i) {
  TVARIABLE(IntPtrT, _return_19_impl);
  auto _return_19 = &_return_19_impl;
  USE(_return_19);
  Label label_macro_end_652_impl(this, {_return_19});
  Label* label_macro_end_652 = &label_macro_end_652_impl;
  USE(label_macro_end_652);
  // ../src/builtins/base.tq:421:52
  {
    // ../src/builtins/base.tq:422:3
    TNode<IntPtrT> t26 = UncheckedCast<IntPtrT>(IntPtrConstant(implicit_cast<int32_t>(p_i)));
    USE(implicit_cast<TNode<IntPtrT>>(t26));
    *_return_19 = implicit_cast<TNode<IntPtrT>>(t26);
    Goto(label_macro_end_652);
  }
  BIND(label_macro_end_652);
  return implicit_cast<TNode<IntPtrT>>((*_return_19).value());
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::from_constexpr7ATint32(int32_t p_i) {
  TVARIABLE(Int32T, _return_20_impl);
  auto _return_20 = &_return_20_impl;
  USE(_return_20);
  Label label_macro_end_653_impl(this, {_return_20});
  Label* label_macro_end_653 = &label_macro_end_653_impl;
  USE(label_macro_end_653);
  // ../src/builtins/base.tq:424:50
  {
    // ../src/builtins/base.tq:425:3
    TNode<Int32T> t27 = UncheckedCast<Int32T>(Int32Constant(implicit_cast<int32_t>(p_i)));
    USE(implicit_cast<TNode<Int32T>>(t27));
    *_return_20 = implicit_cast<TNode<Int32T>>(t27);
    Goto(label_macro_end_653);
  }
  BIND(label_macro_end_653);
  return implicit_cast<TNode<Int32T>>((*_return_20).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::from_constexpr22UT12ATHeapNumber5ATSmi(int32_t p_i) {
  TVARIABLE(Number, _return_21_impl);
  auto _return_21 = &_return_21_impl;
  USE(_return_21);
  Label label_macro_end_654_impl(this, {_return_21});
  Label* label_macro_end_654 = &label_macro_end_654_impl;
  USE(label_macro_end_654);
  // ../src/builtins/base.tq:427:52
  {
    // ../src/builtins/base.tq:428:3
    TNode<Number> t28 = UncheckedCast<Number>(NumberConstant(implicit_cast<int32_t>(p_i)));
    USE(implicit_cast<TNode<Number>>(t28));
    *_return_21 = implicit_cast<TNode<Number>>(t28);
    Goto(label_macro_end_654);
  }
  BIND(label_macro_end_654);
  return implicit_cast<TNode<Number>>((*_return_21).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::from_constexpr22UT12ATHeapNumber5ATSmi(double p_f) {
  TVARIABLE(Number, _return_22_impl);
  auto _return_22 = &_return_22_impl;
  USE(_return_22);
  Label label_macro_end_655_impl(this, {_return_22});
  Label* label_macro_end_655 = &label_macro_end_655_impl;
  USE(label_macro_end_655);
  // ../src/builtins/base.tq:431:54
  {
    // ../src/builtins/base.tq:432:3
    TNode<Number> t29 = UncheckedCast<Number>(NumberConstant(implicit_cast<double>(p_f)));
    USE(implicit_cast<TNode<Number>>(t29));
    *_return_22 = implicit_cast<TNode<Number>>(t29);
    Goto(label_macro_end_655);
  }
  BIND(label_macro_end_655);
  return implicit_cast<TNode<Number>>((*_return_22).value());
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::from_constexpr6ATbool(bool p_b) {
  TVARIABLE(BoolT, _return_23_impl);
  auto _return_23 = &_return_23_impl;
  USE(_return_23);
  Label label_macro_end_656_impl(this, {_return_23});
  Label* label_macro_end_656 = &label_macro_end_656_impl;
  USE(label_macro_end_656);
  // ../src/builtins/base.tq:435:47
  {
    // ../src/builtins/base.tq:436:3
    TNode<BoolT> t30 = UncheckedCast<BoolT>(BoolConstant(implicit_cast<bool>(p_b)));
    USE(implicit_cast<TNode<BoolT>>(t30));
    *_return_23 = implicit_cast<TNode<BoolT>>(t30);
    Goto(label_macro_end_656);
  }
  BIND(label_macro_end_656);
  return implicit_cast<TNode<BoolT>>((*_return_23).value());
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::from_constexpr14ATLanguageMode(LanguageMode p_b) {
  TVARIABLE(Smi, _return_24_impl);
  auto _return_24 = &_return_24_impl;
  USE(_return_24);
  Label label_macro_end_657_impl(this, {_return_24});
  Label* label_macro_end_657 = &label_macro_end_657_impl;
  USE(label_macro_end_657);
  // ../src/builtins/base.tq:439:71
  {
    // ../src/builtins/base.tq:440:3
    TNode<Smi> t31 = UncheckedCast<Smi>(LanguageModeConstant(implicit_cast<LanguageMode>(p_b)));
    USE(implicit_cast<TNode<Smi>>(t31));
    *_return_24 = implicit_cast<TNode<Smi>>(t31);
    Goto(label_macro_end_657);
  }
  BIND(label_macro_end_657);
  return implicit_cast<TNode<Smi>>((*_return_24).value());
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::from_constexpr14ATElementsKind(ElementsKind p_e) {
  TVARIABLE(Int32T, _return_25_impl);
  auto _return_25 = &_return_25_impl;
  USE(_return_25);
  Label label_macro_end_658_impl(this, {_return_25});
  Label* label_macro_end_658 = &label_macro_end_658_impl;
  USE(label_macro_end_658);
  // ../src/builtins/base.tq:443:71
  {
    // ../src/builtins/base.tq:444:3
    TNode<Int32T> t32 = UncheckedCast<Int32T>(Int32Constant(implicit_cast<ElementsKind>(p_e)));
    USE(implicit_cast<TNode<Int32T>>(t32));
    *_return_25 = implicit_cast<TNode<Int32T>>(t32);
    Goto(label_macro_end_658);
  }
  BIND(label_macro_end_658);
  return implicit_cast<TNode<Int32T>>((*_return_25).value());
}

compiler::TNode<String> BaseBuiltinsFromDSLAssembler::from_constexpr8ATString(const char* p_s) {
  TVARIABLE(String, _return_26_impl);
  auto _return_26 = &_return_26_impl;
  USE(_return_26);
  Label label_macro_end_659_impl(this, {_return_26});
  Label* label_macro_end_659 = &label_macro_end_659_impl;
  USE(label_macro_end_659);
  // ../src/builtins/base.tq:447:53
  {
    // ../src/builtins/base.tq:448:3
    TNode<String> t33 = UncheckedCast<String>(StringConstant(implicit_cast<const char*>(p_s)));
    USE(implicit_cast<TNode<String>>(t33));
    *_return_26 = implicit_cast<TNode<String>>(t33);
    Goto(label_macro_end_659);
  }
  BIND(label_macro_end_659);
  return implicit_cast<TNode<String>>((*_return_26).value());
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::from_constexpr22UT12ATHeapObject5ATSmi(const char* p_s) {
  TVARIABLE(Object, _return_27_impl);
  auto _return_27 = &_return_27_impl;
  USE(_return_27);
  Label label_macro_end_660_impl(this, {_return_27});
  Label* label_macro_end_660 = &label_macro_end_660_impl;
  USE(label_macro_end_660);
  // ../src/builtins/base.tq:450:53
  {
    // ../src/builtins/base.tq:451:3
    TNode<String> t34 = UncheckedCast<String>(StringConstant(implicit_cast<const char*>(p_s)));
    USE(implicit_cast<TNode<String>>(t34));
    *_return_27 = implicit_cast<TNode<Object>>(t34);
    Goto(label_macro_end_660);
  }
  BIND(label_macro_end_660);
  return implicit_cast<TNode<Object>>((*_return_27).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::convert22UT12ATHeapNumber5ATSmi(TNode<Int32T> p_i) {
  TVARIABLE(Number, _return_28_impl);
  auto _return_28 = &_return_28_impl;
  USE(_return_28);
  Label label_macro_end_661_impl(this, {_return_28});
  Label* label_macro_end_661 = &label_macro_end_661_impl;
  USE(label_macro_end_661);
  // ../src/builtins/base.tq:458:35
  {
    // ../src/builtins/base.tq:459:3
    TNode<Number> t35 = UncheckedCast<Number>(ChangeInt32ToTagged(implicit_cast<TNode<Int32T>>(p_i)));
    USE(implicit_cast<TNode<Number>>(t35));
    *_return_28 = implicit_cast<TNode<Number>>(t35);
    Goto(label_macro_end_661);
  }
  BIND(label_macro_end_661);
  return implicit_cast<TNode<Number>>((*_return_28).value());
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::convert8ATintptr(TNode<Int32T> p_i) {
  TVARIABLE(IntPtrT, _return_29_impl);
  auto _return_29 = &_return_29_impl;
  USE(_return_29);
  Label label_macro_end_662_impl(this, {_return_29});
  Label* label_macro_end_662 = &label_macro_end_662_impl;
  USE(label_macro_end_662);
  // ../src/builtins/base.tq:461:35
  {
    // ../src/builtins/base.tq:462:3
    TNode<IntPtrT> t36 = UncheckedCast<IntPtrT>(ChangeInt32ToIntPtr(implicit_cast<TNode<Int32T>>(p_i)));
    USE(implicit_cast<TNode<IntPtrT>>(t36));
    *_return_29 = implicit_cast<TNode<IntPtrT>>(t36);
    Goto(label_macro_end_662);
  }
  BIND(label_macro_end_662);
  return implicit_cast<TNode<IntPtrT>>((*_return_29).value());
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::convert5ATSmi(TNode<Int32T> p_i) {
  TVARIABLE(Smi, _return_30_impl);
  auto _return_30 = &_return_30_impl;
  USE(_return_30);
  Label label_macro_end_663_impl(this, {_return_30});
  Label* label_macro_end_663 = &label_macro_end_663_impl;
  USE(label_macro_end_663);
  // ../src/builtins/base.tq:464:29
  {
    // ../src/builtins/base.tq:465:3
    TNode<Smi> t37 = UncheckedCast<Smi>(SmiFromInt32(implicit_cast<TNode<Int32T>>(p_i)));
    USE(implicit_cast<TNode<Smi>>(t37));
    *_return_30 = implicit_cast<TNode<Smi>>(t37);
    Goto(label_macro_end_663);
  }
  BIND(label_macro_end_663);
  return implicit_cast<TNode<Smi>>((*_return_30).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::convert22UT12ATHeapNumber5ATSmi(TNode<Uint32T> p_ui) {
  TVARIABLE(Number, _return_31_impl);
  auto _return_31 = &_return_31_impl;
  USE(_return_31);
  Label label_macro_end_664_impl(this, {_return_31});
  Label* label_macro_end_664 = &label_macro_end_664_impl;
  USE(label_macro_end_664);
  // ../src/builtins/base.tq:468:37
  {
    // ../src/builtins/base.tq:469:3
    TNode<Number> t38 = UncheckedCast<Number>(ChangeUint32ToTagged(implicit_cast<TNode<Uint32T>>(p_ui)));
    USE(implicit_cast<TNode<Number>>(t38));
    *_return_31 = implicit_cast<TNode<Number>>(t38);
    Goto(label_macro_end_664);
  }
  BIND(label_macro_end_664);
  return implicit_cast<TNode<Number>>((*_return_31).value());
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::convert5ATSmi(TNode<Uint32T> p_ui) {
  TVARIABLE(Smi, _return_32_impl);
  auto _return_32 = &_return_32_impl;
  USE(_return_32);
  Label label_macro_end_665_impl(this, {_return_32});
  Label* label_macro_end_665 = &label_macro_end_665_impl;
  USE(label_macro_end_665);
  // ../src/builtins/base.tq:471:31
  {
    // ../src/builtins/base.tq:472:3
    TNode<Int32T> t39 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>(p_ui)));
    USE(implicit_cast<TNode<Int32T>>(t39));
    TNode<Smi> t40 = UncheckedCast<Smi>(SmiFromInt32(implicit_cast<TNode<Int32T>>(t39)));
    USE(implicit_cast<TNode<Smi>>(t40));
    *_return_32 = implicit_cast<TNode<Smi>>(t40);
    Goto(label_macro_end_665);
  }
  BIND(label_macro_end_665);
  return implicit_cast<TNode<Smi>>((*_return_32).value());
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::convert9ATuintptr(TNode<Uint32T> p_ui) {
  TVARIABLE(UintPtrT, _return_33_impl);
  auto _return_33 = &_return_33_impl;
  USE(_return_33);
  Label label_macro_end_666_impl(this, {_return_33});
  Label* label_macro_end_666 = &label_macro_end_666_impl;
  USE(label_macro_end_666);
  // ../src/builtins/base.tq:474:39
  {
    // ../src/builtins/base.tq:475:3
    TNode<UintPtrT> t41 = UncheckedCast<UintPtrT>(ChangeUint32ToWord(implicit_cast<TNode<Uint32T>>(p_ui)));
    USE(implicit_cast<TNode<UintPtrT>>(t41));
    *_return_33 = implicit_cast<TNode<UintPtrT>>(t41);
    Goto(label_macro_end_666);
  }
  BIND(label_macro_end_666);
  return implicit_cast<TNode<UintPtrT>>((*_return_33).value());
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::convert7ATint32(TNode<IntPtrT> p_i) {
  TVARIABLE(Int32T, _return_34_impl);
  auto _return_34 = &_return_34_impl;
  USE(_return_34);
  Label label_macro_end_667_impl(this, {_return_34});
  Label* label_macro_end_667 = &label_macro_end_667_impl;
  USE(label_macro_end_667);
  // ../src/builtins/base.tq:478:34
  {
    // ../src/builtins/base.tq:479:3
    TNode<Int32T> t42 = UncheckedCast<Int32T>(TruncateIntPtrToInt32(implicit_cast<TNode<IntPtrT>>(p_i)));
    USE(implicit_cast<TNode<Int32T>>(t42));
    *_return_34 = implicit_cast<TNode<Int32T>>(t42);
    Goto(label_macro_end_667);
  }
  BIND(label_macro_end_667);
  return implicit_cast<TNode<Int32T>>((*_return_34).value());
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::convert5ATSmi(TNode<IntPtrT> p_i) {
  TVARIABLE(Smi, _return_35_impl);
  auto _return_35 = &_return_35_impl;
  USE(_return_35);
  Label label_macro_end_668_impl(this, {_return_35});
  Label* label_macro_end_668 = &label_macro_end_668_impl;
  USE(label_macro_end_668);
  // ../src/builtins/base.tq:481:30
  {
    // ../src/builtins/base.tq:482:3
    TNode<Smi> t43 = UncheckedCast<Smi>(SmiTag(implicit_cast<TNode<IntPtrT>>(p_i)));
    USE(implicit_cast<TNode<Smi>>(t43));
    *_return_35 = implicit_cast<TNode<Smi>>(t43);
    Goto(label_macro_end_668);
  }
  BIND(label_macro_end_668);
  return implicit_cast<TNode<Smi>>((*_return_35).value());
}

compiler::TNode<Uint32T> BaseBuiltinsFromDSLAssembler::convert8ATuint32(TNode<UintPtrT> p_ui) {
  TVARIABLE(Uint32T, _return_36_impl);
  auto _return_36 = &_return_36_impl;
  USE(_return_36);
  Label label_macro_end_669_impl(this, {_return_36});
  Label* label_macro_end_669 = &label_macro_end_669_impl;
  USE(label_macro_end_669);
  // ../src/builtins/base.tq:485:38
  {
    // ../src/builtins/base.tq:486:3
    TNode<IntPtrT> t44 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<UintPtrT>>(p_ui)));
    USE(implicit_cast<TNode<IntPtrT>>(t44));
    TNode<Int32T> t45 = UncheckedCast<Int32T>(TruncateIntPtrToInt32(implicit_cast<TNode<IntPtrT>>(t44)));
    USE(implicit_cast<TNode<Int32T>>(t45));
    TNode<Uint32T> t46 = UncheckedCast<Uint32T>(Unsigned(implicit_cast<TNode<Int32T>>(t45)));
    USE(implicit_cast<TNode<Uint32T>>(t46));
    *_return_36 = implicit_cast<TNode<Uint32T>>(t46);
    Goto(label_macro_end_669);
  }
  BIND(label_macro_end_669);
  return implicit_cast<TNode<Uint32T>>((*_return_36).value());
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::convert8ATintptr(TNode<Smi> p_s) {
  TVARIABLE(IntPtrT, _return_37_impl);
  auto _return_37 = &_return_37_impl;
  USE(_return_37);
  Label label_macro_end_670_impl(this, {_return_37});
  Label* label_macro_end_670 = &label_macro_end_670_impl;
  USE(label_macro_end_670);
  // ../src/builtins/base.tq:489:33
  {
    // ../src/builtins/base.tq:490:3
    TNode<IntPtrT> t47 = UncheckedCast<IntPtrT>(SmiUntag(implicit_cast<TNode<Smi>>(p_s)));
    USE(implicit_cast<TNode<IntPtrT>>(t47));
    *_return_37 = implicit_cast<TNode<IntPtrT>>(t47);
    Goto(label_macro_end_670);
  }
  BIND(label_macro_end_670);
  return implicit_cast<TNode<IntPtrT>>((*_return_37).value());
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::convert7ATint32(TNode<Smi> p_s) {
  TVARIABLE(Int32T, _return_38_impl);
  auto _return_38 = &_return_38_impl;
  USE(_return_38);
  Label label_macro_end_671_impl(this, {_return_38});
  Label* label_macro_end_671 = &label_macro_end_671_impl;
  USE(label_macro_end_671);
  // ../src/builtins/base.tq:492:31
  {
    // ../src/builtins/base.tq:493:3
    TNode<Int32T> t48 = UncheckedCast<Int32T>(SmiToInt32(implicit_cast<TNode<Smi>>(p_s)));
    USE(implicit_cast<TNode<Int32T>>(t48));
    *_return_38 = implicit_cast<TNode<Int32T>>(t48);
    Goto(label_macro_end_671);
  }
  BIND(label_macro_end_671);
  return implicit_cast<TNode<Int32T>>((*_return_38).value());
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::convert9ATfloat64(TNode<HeapNumber> p_h) {
  TVARIABLE(Float64T, _return_39_impl);
  auto _return_39 = &_return_39_impl;
  USE(_return_39);
  Label label_macro_end_672_impl(this, {_return_39});
  Label* label_macro_end_672 = &label_macro_end_672_impl;
  USE(label_macro_end_672);
  // ../src/builtins/base.tq:496:42
  {
    // ../src/builtins/base.tq:497:3
    TNode<Float64T> t49 = UncheckedCast<Float64T>(LoadHeapNumberValue(implicit_cast<TNode<HeapNumber>>(p_h)));
    USE(implicit_cast<TNode<Float64T>>(t49));
    *_return_39 = implicit_cast<TNode<Float64T>>(t49);
    Goto(label_macro_end_672);
  }
  BIND(label_macro_end_672);
  return implicit_cast<TNode<Float64T>>((*_return_39).value());
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::convert9ATfloat64(TNode<Number> p_n) {
  TVARIABLE(Float64T, _return_40_impl);
  auto _return_40 = &_return_40_impl;
  USE(_return_40);
  Label label_macro_end_673_impl(this, {_return_40});
  Label* label_macro_end_673 = &label_macro_end_673_impl;
  USE(label_macro_end_673);
  // ../src/builtins/base.tq:500:38
  {
    // ../src/builtins/base.tq:501:3
    TNode<Float64T> t50 = UncheckedCast<Float64T>(ChangeNumberToFloat64(implicit_cast<TNode<Number>>(p_n)));
    USE(implicit_cast<TNode<Float64T>>(t50));
    *_return_40 = implicit_cast<TNode<Float64T>>(t50);
    Goto(label_macro_end_673);
  }
  BIND(label_macro_end_673);
  return implicit_cast<TNode<Float64T>>((*_return_40).value());
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::convert9ATfloat64(TNode<Float32T> p_f) {
  TVARIABLE(Float64T, _return_41_impl);
  auto _return_41 = &_return_41_impl;
  USE(_return_41);
  Label label_macro_end_674_impl(this, {_return_41});
  Label* label_macro_end_674 = &label_macro_end_674_impl;
  USE(label_macro_end_674);
  // ../src/builtins/base.tq:504:39
  {
    // ../src/builtins/base.tq:505:3
    TNode<Float64T> t51 = UncheckedCast<Float64T>(ChangeFloat32ToFloat64(implicit_cast<TNode<Float32T>>(p_f)));
    USE(implicit_cast<TNode<Float64T>>(t51));
    *_return_41 = implicit_cast<TNode<Float64T>>(t51);
    Goto(label_macro_end_674);
  }
  BIND(label_macro_end_674);
  return implicit_cast<TNode<Float64T>>((*_return_41).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::convert22UT12ATHeapNumber5ATSmi(TNode<Float64T> p_d) {
  TVARIABLE(Number, _return_42_impl);
  auto _return_42 = &_return_42_impl;
  USE(_return_42);
  Label label_macro_end_675_impl(this, {_return_42});
  Label* label_macro_end_675 = &label_macro_end_675_impl;
  USE(label_macro_end_675);
  // ../src/builtins/base.tq:508:37
  {
    // ../src/builtins/base.tq:509:3
    TNode<HeapNumber> t52 = UncheckedCast<HeapNumber>(AllocateHeapNumberWithValue(implicit_cast<TNode<Float64T>>(p_d)));
    USE(implicit_cast<TNode<HeapNumber>>(t52));
    *_return_42 = implicit_cast<TNode<Number>>(t52);
    Goto(label_macro_end_675);
  }
  BIND(label_macro_end_675);
  return implicit_cast<TNode<Number>>((*_return_42).value());
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::convert9ATuintptr(TNode<Float64T> p_d) {
  TVARIABLE(UintPtrT, _return_43_impl);
  auto _return_43 = &_return_43_impl;
  USE(_return_43);
  Label label_macro_end_676_impl(this, {_return_43});
  Label* label_macro_end_676 = &label_macro_end_676_impl;
  USE(label_macro_end_676);
  // ../src/builtins/base.tq:511:39
  {
    // ../src/builtins/base.tq:512:3
    TNode<UintPtrT> t53 = UncheckedCast<UintPtrT>(ChangeFloat64ToUintPtr(implicit_cast<TNode<Float64T>>(p_d)));
    USE(implicit_cast<TNode<UintPtrT>>(t53));
    *_return_43 = implicit_cast<TNode<UintPtrT>>(t53);
    Goto(label_macro_end_676);
  }
  BIND(label_macro_end_676);
  return implicit_cast<TNode<UintPtrT>>((*_return_43).value());
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::convert9ATuintptr(TNode<RawPtrT> p_r) {
  TVARIABLE(UintPtrT, _return_44_impl);
  auto _return_44 = &_return_44_impl;
  USE(_return_44);
  Label label_macro_end_677_impl(this, {_return_44});
  Label* label_macro_end_677 = &label_macro_end_677_impl;
  USE(label_macro_end_677);
  // ../src/builtins/base.tq:515:38
  {
    // ../src/builtins/base.tq:516:3
    TNode<UintPtrT> t54 = UncheckedCast<UintPtrT>(Unsigned(implicit_cast<TNode<RawPtrT>>(p_r)));
    USE(implicit_cast<TNode<UintPtrT>>(t54));
    *_return_44 = implicit_cast<TNode<UintPtrT>>(t54);
    Goto(label_macro_end_677);
  }
  BIND(label_macro_end_677);
  return implicit_cast<TNode<UintPtrT>>((*_return_44).value());
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::convert8ATintptr(TNode<RawPtrT> p_r) {
  TVARIABLE(IntPtrT, _return_45_impl);
  auto _return_45 = &_return_45_impl;
  USE(_return_45);
  Label label_macro_end_678_impl(this, {_return_45});
  Label* label_macro_end_678 = &label_macro_end_678_impl;
  USE(label_macro_end_678);
  // ../src/builtins/base.tq:518:36
  {
    // ../src/builtins/base.tq:519:3
    TNode<IntPtrT> t55 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<RawPtrT>>(p_r)));
    USE(implicit_cast<TNode<IntPtrT>>(t55));
    *_return_45 = implicit_cast<TNode<IntPtrT>>(t55);
    Goto(label_macro_end_678);
  }
  BIND(label_macro_end_678);
  return implicit_cast<TNode<IntPtrT>>((*_return_45).value());
}

compiler::TNode<HeapNumber> BaseBuiltinsFromDSLAssembler::unsafe_cast12ATHeapNumber(TNode<Number> p_n) {
  TVARIABLE(HeapNumber, _return_46_impl);
  auto _return_46 = &_return_46_impl;
  USE(_return_46);
  Label label_macro_end_679_impl(this, {_return_46});
  Label* label_macro_end_679 = &label_macro_end_679_impl;
  USE(label_macro_end_679);
  // ../src/builtins/base.tq:539:48
  {
    // ../src/builtins/base.tq:540:3
    TNode<HeapNumber> t56 = UncheckedCast<HeapNumber>(UnsafeCastNumberToHeapNumber(implicit_cast<TNode<Number>>(p_n)));
    USE(implicit_cast<TNode<HeapNumber>>(t56));
    *_return_46 = implicit_cast<TNode<HeapNumber>>(t56);
    Goto(label_macro_end_679);
  }
  BIND(label_macro_end_679);
  return implicit_cast<TNode<HeapNumber>>((*_return_46).value());
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::unsafe_cast12ATFixedArray(TNode<Object> p_o) {
  TVARIABLE(FixedArray, _return_47_impl);
  auto _return_47 = &_return_47_impl;
  USE(_return_47);
  Label label_macro_end_680_impl(this, {_return_47});
  Label* label_macro_end_680 = &label_macro_end_680_impl;
  USE(label_macro_end_680);
  // ../src/builtins/base.tq:543:48
  {
    // ../src/builtins/base.tq:544:3
    TNode<FixedArray> t57 = UncheckedCast<FixedArray>(UnsafeCastObjectToFixedArray(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<FixedArray>>(t57));
    *_return_47 = implicit_cast<TNode<FixedArray>>(t57);
    Goto(label_macro_end_680);
  }
  BIND(label_macro_end_680);
  return implicit_cast<TNode<FixedArray>>((*_return_47).value());
}

compiler::TNode<FixedDoubleArray> BaseBuiltinsFromDSLAssembler::unsafe_cast18ATFixedDoubleArray(TNode<Object> p_o) {
  TVARIABLE(FixedDoubleArray, _return_48_impl);
  auto _return_48 = &_return_48_impl;
  USE(_return_48);
  Label label_macro_end_681_impl(this, {_return_48});
  Label* label_macro_end_681 = &label_macro_end_681_impl;
  USE(label_macro_end_681);
  // ../src/builtins/base.tq:546:60
  {
    // ../src/builtins/base.tq:547:3
    TNode<FixedDoubleArray> t58 = UncheckedCast<FixedDoubleArray>(UnsafeCastObjectToFixedDoubleArray(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<FixedDoubleArray>>(t58));
    *_return_48 = implicit_cast<TNode<FixedDoubleArray>>(t58);
    Goto(label_macro_end_681);
  }
  BIND(label_macro_end_681);
  return implicit_cast<TNode<FixedDoubleArray>>((*_return_48).value());
}

compiler::TNode<HeapNumber> BaseBuiltinsFromDSLAssembler::unsafe_cast12ATHeapNumber(TNode<Object> p_o) {
  TVARIABLE(HeapNumber, _return_49_impl);
  auto _return_49 = &_return_49_impl;
  USE(_return_49);
  Label label_macro_end_682_impl(this, {_return_49});
  Label* label_macro_end_682 = &label_macro_end_682_impl;
  USE(label_macro_end_682);
  // ../src/builtins/base.tq:549:48
  {
    // ../src/builtins/base.tq:550:3
    TNode<HeapNumber> t59 = UncheckedCast<HeapNumber>(UnsafeCastObjectToHeapNumber(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<HeapNumber>>(t59));
    *_return_49 = implicit_cast<TNode<HeapNumber>>(t59);
    Goto(label_macro_end_682);
  }
  BIND(label_macro_end_682);
  return implicit_cast<TNode<HeapNumber>>((*_return_49).value());
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::unsafe_cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(TNode<Object> p_o) {
  TVARIABLE(JSReceiver, _return_50_impl);
  auto _return_50 = &_return_50_impl;
  USE(_return_50);
  Label label_macro_end_683_impl(this, {_return_50});
  Label* label_macro_end_683 = &label_macro_end_683_impl;
  USE(label_macro_end_683);
  // ../src/builtins/base.tq:552:44
  {
    // ../src/builtins/base.tq:553:3
    TNode<JSReceiver> t60 = UncheckedCast<JSReceiver>(UnsafeCastObjectToCallable(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<JSReceiver>>(t60));
    *_return_50 = implicit_cast<TNode<JSReceiver>>(t60);
    Goto(label_macro_end_683);
  }
  BIND(label_macro_end_683);
  return implicit_cast<TNode<JSReceiver>>((*_return_50).value());
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::unsafe_cast5ATSmi(TNode<Object> p_o) {
  TVARIABLE(Smi, _return_51_impl);
  auto _return_51 = &_return_51_impl;
  USE(_return_51);
  Label label_macro_end_684_impl(this, {_return_51});
  Label* label_macro_end_684 = &label_macro_end_684_impl;
  USE(label_macro_end_684);
  // ../src/builtins/base.tq:555:34
  {
    // ../src/builtins/base.tq:556:3
    TNode<Smi> t61 = UncheckedCast<Smi>(UnsafeCastObjectToSmi(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<Smi>>(t61));
    *_return_51 = implicit_cast<TNode<Smi>>(t61);
    Goto(label_macro_end_684);
  }
  BIND(label_macro_end_684);
  return implicit_cast<TNode<Smi>>((*_return_51).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::unsafe_cast22UT12ATHeapNumber5ATSmi(TNode<Object> p_o) {
  TVARIABLE(Number, _return_52_impl);
  auto _return_52 = &_return_52_impl;
  USE(_return_52);
  Label label_macro_end_685_impl(this, {_return_52});
  Label* label_macro_end_685 = &label_macro_end_685_impl;
  USE(label_macro_end_685);
  // ../src/builtins/base.tq:558:40
  {
    // ../src/builtins/base.tq:559:3
    TNode<Number> t62 = UncheckedCast<Number>(UnsafeCastObjectToNumber(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<Number>>(t62));
    *_return_52 = implicit_cast<TNode<Number>>(t62);
    Goto(label_macro_end_685);
  }
  BIND(label_macro_end_685);
  return implicit_cast<TNode<Number>>((*_return_52).value());
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::unsafe_cast12ATHeapObject(TNode<Object> p_o) {
  TVARIABLE(HeapObject, _return_53_impl);
  auto _return_53 = &_return_53_impl;
  USE(_return_53);
  Label label_macro_end_686_impl(this, {_return_53});
  Label* label_macro_end_686 = &label_macro_end_686_impl;
  USE(label_macro_end_686);
  // ../src/builtins/base.tq:561:48
  {
    // ../src/builtins/base.tq:562:3
    TNode<HeapObject> t63 = UncheckedCast<HeapObject>(UnsafeCastObjectToHeapObject(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<HeapObject>>(t63));
    *_return_53 = implicit_cast<TNode<HeapObject>>(t63);
    Goto(label_macro_end_686);
  }
  BIND(label_macro_end_686);
  return implicit_cast<TNode<HeapObject>>((*_return_53).value());
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::unsafe_cast9ATJSArray(TNode<Object> p_o) {
  TVARIABLE(JSArray, _return_54_impl);
  auto _return_54 = &_return_54_impl;
  USE(_return_54);
  Label label_macro_end_687_impl(this, {_return_54});
  Label* label_macro_end_687 = &label_macro_end_687_impl;
  USE(label_macro_end_687);
  // ../src/builtins/base.tq:564:42
  {
    // ../src/builtins/base.tq:565:3
    TNode<JSArray> t64 = UncheckedCast<JSArray>(UnsafeCastObjectToJSArray(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<JSArray>>(t64));
    *_return_54 = implicit_cast<TNode<JSArray>>(t64);
    Goto(label_macro_end_687);
  }
  BIND(label_macro_end_687);
  return implicit_cast<TNode<JSArray>>((*_return_54).value());
}

compiler::TNode<FixedTypedArrayBase> BaseBuiltinsFromDSLAssembler::unsafe_cast21ATFixedTypedArrayBase(TNode<Object> p_o) {
  TVARIABLE(FixedTypedArrayBase, _return_55_impl);
  auto _return_55 = &_return_55_impl;
  USE(_return_55);
  Label label_macro_end_688_impl(this, {_return_55});
  Label* label_macro_end_688 = &label_macro_end_688_impl;
  USE(label_macro_end_688);
  // ../src/builtins/base.tq:567:66
  {
    // ../src/builtins/base.tq:568:3
    TNode<FixedTypedArrayBase> t65 = UncheckedCast<FixedTypedArrayBase>(UnsafeCastObjectToFixedTypedArrayBase(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t65));
    *_return_55 = implicit_cast<TNode<FixedTypedArrayBase>>(t65);
    Goto(label_macro_end_688);
  }
  BIND(label_macro_end_688);
  return implicit_cast<TNode<FixedTypedArrayBase>>((*_return_55).value());
}

compiler::TNode<NumberDictionary> BaseBuiltinsFromDSLAssembler::unsafe_cast18ATNumberDictionary(TNode<Object> p_o) {
  TVARIABLE(NumberDictionary, _return_56_impl);
  auto _return_56 = &_return_56_impl;
  USE(_return_56);
  Label label_macro_end_689_impl(this, {_return_56});
  Label* label_macro_end_689 = &label_macro_end_689_impl;
  USE(label_macro_end_689);
  // ../src/builtins/base.tq:570:60
  {
    // ../src/builtins/base.tq:571:3
    TNode<NumberDictionary> t66 = UncheckedCast<NumberDictionary>(UnsafeCastObjectToNumberDictionary(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<NumberDictionary>>(t66));
    *_return_56 = implicit_cast<TNode<NumberDictionary>>(t66);
    Goto(label_macro_end_689);
  }
  BIND(label_macro_end_689);
  return implicit_cast<TNode<NumberDictionary>>((*_return_56).value());
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::unsafe_cast12ATJSReceiver(TNode<Object> p_o) {
  TVARIABLE(JSReceiver, _return_57_impl);
  auto _return_57 = &_return_57_impl;
  USE(_return_57);
  Label label_macro_end_690_impl(this, {_return_57});
  Label* label_macro_end_690 = &label_macro_end_690_impl;
  USE(label_macro_end_690);
  // ../src/builtins/base.tq:573:48
  {
    // ../src/builtins/base.tq:574:3
    TNode<JSReceiver> t67 = UncheckedCast<JSReceiver>(UnsafeCastObjectToJSReceiver(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<JSReceiver>>(t67));
    *_return_57 = implicit_cast<TNode<JSReceiver>>(t67);
    Goto(label_macro_end_690);
  }
  BIND(label_macro_end_690);
  return implicit_cast<TNode<JSReceiver>>((*_return_57).value());
}

compiler::TNode<JSObject> BaseBuiltinsFromDSLAssembler::unsafe_cast10ATJSObject(TNode<Object> p_o) {
  TVARIABLE(JSObject, _return_58_impl);
  auto _return_58 = &_return_58_impl;
  USE(_return_58);
  Label label_macro_end_691_impl(this, {_return_58});
  Label* label_macro_end_691 = &label_macro_end_691_impl;
  USE(label_macro_end_691);
  // ../src/builtins/base.tq:576:44
  {
    // ../src/builtins/base.tq:577:3
    TNode<JSObject> t68 = UncheckedCast<JSObject>(UnsafeCastObjectToJSObject(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<JSObject>>(t68));
    *_return_58 = implicit_cast<TNode<JSObject>>(t68);
    Goto(label_macro_end_691);
  }
  BIND(label_macro_end_691);
  return implicit_cast<TNode<JSObject>>((*_return_58).value());
}

compiler::TNode<Map> BaseBuiltinsFromDSLAssembler::unsafe_cast5ATMap(TNode<Object> p_o) {
  TVARIABLE(Map, _return_59_impl);
  auto _return_59 = &_return_59_impl;
  USE(_return_59);
  Label label_macro_end_692_impl(this, {_return_59});
  Label* label_macro_end_692 = &label_macro_end_692_impl;
  USE(label_macro_end_692);
  // ../src/builtins/base.tq:579:34
  {
    // ../src/builtins/base.tq:580:3
    TNode<Map> t69 = UncheckedCast<Map>(UnsafeCastObjectToMap(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<Map>>(t69));
    *_return_59 = implicit_cast<TNode<Map>>(t69);
    Goto(label_macro_end_692);
  }
  BIND(label_macro_end_692);
  return implicit_cast<TNode<Map>>((*_return_59).value());
}

compiler::TNode<FixedArrayBase> BaseBuiltinsFromDSLAssembler::unsafe_cast16ATFixedArrayBase(TNode<Object> p_o) {
  TVARIABLE(FixedArrayBase, _return_60_impl);
  auto _return_60 = &_return_60_impl;
  USE(_return_60);
  Label label_macro_end_693_impl(this, {_return_60});
  Label* label_macro_end_693 = &label_macro_end_693_impl;
  USE(label_macro_end_693);
  // ../src/builtins/base.tq:582:56
  {
    // ../src/builtins/base.tq:583:3
    TNode<FixedArrayBase> t70 = UncheckedCast<FixedArrayBase>(UnsafeCastObjectToFixedArrayBase(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<FixedArrayBase>>(t70));
    *_return_60 = implicit_cast<TNode<FixedArrayBase>>(t70);
    Goto(label_macro_end_693);
  }
  BIND(label_macro_end_693);
  return implicit_cast<TNode<FixedArrayBase>>((*_return_60).value());
}

compiler::TNode<Map> BaseBuiltinsFromDSLAssembler::kCOWMap() {
  TNode<Object> t71 = UncheckedCast<Object>(LoadRoot(implicit_cast<Heap::RootListIndex>(Heap::kFixedCOWArrayMapRootIndex)));
  USE(implicit_cast<TNode<Object>>(t71));
  TNode<Map> t72 = UncheckedCast<Map>(unsafe_cast5ATMap(implicit_cast<TNode<Object>>(t71)));
  USE(implicit_cast<TNode<Map>>(t72));
  return implicit_cast<TNode<Map>>(t72);
}

compiler::TNode<FixedArrayBase> BaseBuiltinsFromDSLAssembler::kEmptyFixedArray() {
  TNode<Object> t73 = UncheckedCast<Object>(LoadRoot(implicit_cast<Heap::RootListIndex>(Heap::kEmptyFixedArrayRootIndex)));
  USE(implicit_cast<TNode<Object>>(t73));
  TNode<FixedArrayBase> t74 = UncheckedCast<FixedArrayBase>(unsafe_cast16ATFixedArrayBase(implicit_cast<TNode<Object>>(t73)));
  USE(implicit_cast<TNode<FixedArrayBase>>(t74));
  return implicit_cast<TNode<FixedArrayBase>>(t74);
}

void BaseBuiltinsFromDSLAssembler::StoreFixedDoubleArrayElementWithSmiIndex(TNode<FixedDoubleArray> p_array, TNode<Smi> p_index, TNode<Float64T> p_value) {
  Label label_macro_end_694_impl(this, {});
  Label* label_macro_end_694 = &label_macro_end_694_impl;
  USE(label_macro_end_694);
  // ../src/builtins/base.tq:638:58
  {
    // ../src/builtins/base.tq:639:3
    StoreFixedDoubleArrayElement(implicit_cast<TNode<FixedDoubleArray>>(p_array), implicit_cast<TNode<Object>>(p_index), implicit_cast<TNode<Float64T>>(p_value), implicit_cast<ParameterMode>(SMI_PARAMETERS));
  }
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadElementNoHole12ATFixedArray(TNode<JSArray> p_a, TNode<Smi> p_index, Label* label_IfHole_8) {
  TVARIABLE(Object, _return_61_impl);
  auto _return_61 = &_return_61_impl;
  USE(_return_61);
  Label label_macro_end_695_impl(this, {_return_61});
  Label* label_macro_end_695 = &label_macro_end_695_impl;
  USE(label_macro_end_695);
  // ../src/builtins/base.tq:688:15
  {
    // ../src/builtins/base.tq:689:3
    {
      Label label_try_done_436_696_impl(this);
      Label* label_try_done_436_696 = &label_try_done_436_696_impl;
      USE(label_try_done_436_696);
      Label label_Unexpected_9_impl(this);
      Label* label_Unexpected_9 = &label_Unexpected_9_impl;
      USE(label_Unexpected_9);
      Label label_try_begin_437_697_impl(this);
      Label* label_try_begin_437_697 = &label_try_begin_437_697_impl;
      USE(label_try_begin_437_697);
      Goto(label_try_begin_437_697);
      if (label_try_begin_437_697->is_used())
      {
        BIND(label_try_begin_437_697);
        // ../src/builtins/base.tq:689:7
        {
          // ../src/builtins/base.tq:690:5
          TNode<FixedArrayBase> t75 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_a)));
          TNode<FixedArray> t76 = UncheckedCast<FixedArray>(cast12ATFixedArray(implicit_cast<TNode<FixedArrayBase>>(t75), label_Unexpected_9));
          USE(implicit_cast<TNode<FixedArray>>(t76));
          TVARIABLE(FixedArray, elements_62_impl);
          auto elements_62 = &elements_62_impl;
          USE(elements_62);
          *elements_62 = implicit_cast<TNode<FixedArray>>(t76);
          // ../src/builtins/base.tq:692:5
          TNode<Object> t77 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*elements_62).value()), implicit_cast<TNode<Smi>>(p_index)));
          TVARIABLE(Object, e_63_impl);
          auto e_63 = &e_63_impl;
          USE(e_63);
          *e_63 = implicit_cast<TNode<Object>>(t77);
          // ../src/builtins/base.tq:693:5
          {
            Label label__True_10_impl(this);
            Label* label__True_10 = &label__True_10_impl;
            USE(label__True_10);
            Label label__False_11_impl(this, {});
            Label* label__False_11 = &label__False_11_impl;
            USE(label__False_11);
            TNode<BoolT> t78 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*e_63).value()), implicit_cast<TNode<Object>>(Hole())));
            USE(implicit_cast<TNode<BoolT>>(t78));
            Branch(implicit_cast<TNode<BoolT>>(t78), label__True_10, label__False_11);
            if (label__True_10->is_used())
            {
              BIND(label__True_10);
              // ../src/builtins/base.tq:693:20
              {
                // ../src/builtins/base.tq:694:7
                Goto(label_IfHole_8);
              }
            }
            BIND(label__False_11);
          }
          // ../src/builtins/base.tq:696:5
          *_return_61 = implicit_cast<TNode<Object>>((*e_63).value());
          Goto(label_macro_end_695);
        }
      }
      if (label_Unexpected_9->is_used())
      {
        BIND(label_Unexpected_9);
        // ../src/builtins/base.tq:698:20
        {
          // ../src/builtins/base.tq:699:5
          Unreachable();
        }
      }
    }
  }
  BIND(label_macro_end_695);
  return implicit_cast<TNode<Object>>((*_return_61).value());
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadElementNoHole18ATFixedDoubleArray(TNode<JSArray> p_a, TNode<Smi> p_index, Label* label_IfHole_12) {
  TVARIABLE(Object, _return_64_impl);
  auto _return_64 = &_return_64_impl;
  USE(_return_64);
  Label label_macro_end_698_impl(this, {_return_64});
  Label* label_macro_end_698 = &label_macro_end_698_impl;
  USE(label_macro_end_698);
  // ../src/builtins/base.tq:704:15
  {
    // ../src/builtins/base.tq:705:3
    {
      Label label_try_done_438_699_impl(this);
      Label* label_try_done_438_699 = &label_try_done_438_699_impl;
      USE(label_try_done_438_699);
      Label label_Unexpected_13_impl(this);
      Label* label_Unexpected_13 = &label_Unexpected_13_impl;
      USE(label_Unexpected_13);
      Label label_try_begin_439_700_impl(this);
      Label* label_try_begin_439_700 = &label_try_begin_439_700_impl;
      USE(label_try_begin_439_700);
      Goto(label_try_begin_439_700);
      if (label_try_begin_439_700->is_used())
      {
        BIND(label_try_begin_439_700);
        // ../src/builtins/base.tq:705:7
        {
          // ../src/builtins/base.tq:706:5
          TNode<FixedArrayBase> t79 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_a)));
          TNode<FixedDoubleArray> t80 = UncheckedCast<FixedDoubleArray>(cast18ATFixedDoubleArray(implicit_cast<TNode<FixedArrayBase>>(t79), label_Unexpected_13));
          USE(implicit_cast<TNode<FixedDoubleArray>>(t80));
          TVARIABLE(FixedDoubleArray, elements_65_impl);
          auto elements_65 = &elements_65_impl;
          USE(elements_65);
          *elements_65 = implicit_cast<TNode<FixedDoubleArray>>(t80);
          // ../src/builtins/base.tq:708:5
          TNode<Float64T> t81 = UncheckedCast<Float64T>(LoadDoubleWithHoleCheck(implicit_cast<TNode<FixedDoubleArray>>((*elements_65).value()), implicit_cast<TNode<Smi>>(p_index), label_IfHole_12));
          USE(implicit_cast<TNode<Float64T>>(t81));
          TVARIABLE(Float64T, e_66_impl);
          auto e_66 = &e_66_impl;
          USE(e_66);
          *e_66 = implicit_cast<TNode<Float64T>>(t81);
          // ../src/builtins/base.tq:709:5
          TNode<HeapNumber> t82 = UncheckedCast<HeapNumber>(AllocateHeapNumberWithValue(implicit_cast<TNode<Float64T>>((*e_66).value())));
          USE(implicit_cast<TNode<HeapNumber>>(t82));
          *_return_64 = implicit_cast<TNode<Object>>(t82);
          Goto(label_macro_end_698);
        }
      }
      if (label_Unexpected_13->is_used())
      {
        BIND(label_Unexpected_13);
        // ../src/builtins/base.tq:711:20
        {
          // ../src/builtins/base.tq:712:5
          Unreachable();
        }
      }
    }
  }
  BIND(label_macro_end_698);
  return implicit_cast<TNode<Object>>((*_return_64).value());
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::NumberIsNaN(TNode<Number> p_number) {
  TVARIABLE(BoolT, _return_67_impl);
  auto _return_67 = &_return_67_impl;
  USE(_return_67);
  Label label_macro_end_701_impl(this, {_return_67});
  Label* label_macro_end_701 = &label_macro_end_701_impl;
  USE(label_macro_end_701);
  // ../src/builtins/base.tq:726:41
  {
    // ../src/builtins/base.tq:727:3
    {
      Label label__True_14_impl(this);
      Label* label__True_14 = &label__True_14_impl;
      USE(label__True_14);
      Label label__False_15_impl(this, {});
      Label* label__False_15 = &label__False_15_impl;
      USE(label__False_15);
      TNode<BoolT> t83 = UncheckedCast<BoolT>(TaggedIsSmi(implicit_cast<TNode<Object>>(p_number)));
      USE(implicit_cast<TNode<BoolT>>(t83));
      Branch(implicit_cast<TNode<BoolT>>(t83), label__True_14, label__False_15);
      if (label__True_14->is_used())
      {
        BIND(label__True_14);
        // ../src/builtins/base.tq:727:28
        {
          // ../src/builtins/base.tq:728:5
          TNode<BoolT> t84 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
          *_return_67 = implicit_cast<TNode<BoolT>>(t84);
          Goto(label_macro_end_701);
        }
      }
      BIND(label__False_15);
    }
    // ../src/builtins/base.tq:731:3
    TNode<HeapNumber> t85 = UncheckedCast<HeapNumber>(unsafe_cast12ATHeapNumber(implicit_cast<TNode<Number>>(p_number)));
    USE(implicit_cast<TNode<HeapNumber>>(t85));
    TNode<Float64T> t86 = UncheckedCast<Float64T>(convert9ATfloat64(implicit_cast<TNode<HeapNumber>>(t85)));
    USE(implicit_cast<TNode<Float64T>>(t86));
    TVARIABLE(Float64T, value_68_impl);
    auto value_68 = &value_68_impl;
    USE(value_68);
    *value_68 = implicit_cast<TNode<Float64T>>(t86);
    // ../src/builtins/base.tq:732:3
    TNode<BoolT> t87 = UncheckedCast<BoolT>(Float64NotEqual(implicit_cast<TNode<Float64T>>((*value_68).value()), implicit_cast<TNode<Float64T>>((*value_68).value())));
    USE(implicit_cast<TNode<BoolT>>(t87));
    *_return_67 = implicit_cast<TNode<BoolT>>(t87);
    Goto(label_macro_end_701);
  }
  BIND(label_macro_end_701);
  return implicit_cast<TNode<BoolT>>((*_return_67).value());
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::ToBoolean(TNode<Object> p_obj) {
  TVARIABLE(BoolT, _return_69_impl);
  auto _return_69 = &_return_69_impl;
  USE(_return_69);
  Label label_macro_end_702_impl(this, {_return_69});
  Label* label_macro_end_702 = &label_macro_end_702_impl;
  USE(label_macro_end_702);
  // ../src/builtins/base.tq:737:36
  {
    // ../src/builtins/base.tq:738:3
    {
      Label label__True_16_impl(this);
      Label* label__True_16 = &label__True_16_impl;
      USE(label__True_16);
      Label label__False_17_impl(this);
      Label* label__False_17 = &label__False_17_impl;
      USE(label__False_17);
      Label label_if_done_label_440_703_impl(this, {});
      Label* label_if_done_label_440_703 = &label_if_done_label_440_703_impl;
      USE(label_if_done_label_440_703);
      BranchIfToBooleanIsTrue(implicit_cast<TNode<Object>>(p_obj), label__True_16, label__False_17);
      if (label__True_16->is_used())
      {
        BIND(label__True_16);
        // ../src/builtins/base.tq:738:37
        {
          // ../src/builtins/base.tq:739:5
          TNode<BoolT> t88 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
          *_return_69 = implicit_cast<TNode<BoolT>>(t88);
          Goto(label_macro_end_702);
        }
      }
      if (label__False_17->is_used())
      {
        BIND(label__False_17);
        // ../src/builtins/base.tq:740:10
        {
          // ../src/builtins/base.tq:741:5
          TNode<BoolT> t89 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
          *_return_69 = implicit_cast<TNode<BoolT>>(t89);
          Goto(label_macro_end_702);
        }
      }
    }
  }
  BIND(label_macro_end_702);
  return implicit_cast<TNode<BoolT>>((*_return_69).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::ToIndex(TNode<Object> p_input, TNode<Context> p_context, Label* label_RangeError_18) {
  TVARIABLE(Number, _return_70_impl);
  auto _return_70 = &_return_70_impl;
  USE(_return_70);
  Label label_macro_end_704_impl(this, {_return_70});
  Label* label_macro_end_704 = &label_macro_end_704_impl;
  USE(label_macro_end_704);
  // ../src/builtins/base.tq:745:74
  {
    // ../src/builtins/base.tq:746:3
    {
      Label label__True_19_impl(this);
      Label* label__True_19 = &label__True_19_impl;
      USE(label__True_19);
      Label label__False_20_impl(this, {});
      Label* label__False_20 = &label__False_20_impl;
      USE(label__False_20);
      TNode<BoolT> t90 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_input), implicit_cast<TNode<Object>>(Undefined())));
      USE(implicit_cast<TNode<BoolT>>(t90));
      Branch(implicit_cast<TNode<BoolT>>(t90), label__True_19, label__False_20);
      if (label__True_19->is_used())
      {
        BIND(label__True_19);
        // ../src/builtins/base.tq:746:27
        {
          // ../src/builtins/base.tq:747:5
          int31_t t91 = 0;
          TNode<Number> t92 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t91)));
          *_return_70 = implicit_cast<TNode<Number>>(t92);
          Goto(label_macro_end_704);
        }
      }
      BIND(label__False_20);
    }
    // ../src/builtins/base.tq:750:3
    TNode<Number> t93 = UncheckedCast<Number>(ToInteger_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_input), implicit_cast<ToIntegerTruncationMode>(ToIntegerTruncationMode::kTruncateMinusZero)));
    USE(implicit_cast<TNode<Number>>(t93));
    TVARIABLE(Number, value_71_impl);
    auto value_71 = &value_71_impl;
    USE(value_71);
    *value_71 = implicit_cast<TNode<Number>>(t93);
    // ../src/builtins/base.tq:751:3
    {
      Label label__True_21_impl(this);
      Label* label__True_21 = &label__True_21_impl;
      USE(label__True_21);
      Label label__False_22_impl(this, {});
      Label* label__False_22 = &label__False_22_impl;
      USE(label__False_22);
      Label label__False_23_impl(this);
      Label* label__False_23 = &label__False_23_impl;
      USE(label__False_23);
      int31_t t94 = 0;
      TNode<Number> t95 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t94)));
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*value_71).value()), implicit_cast<TNode<Number>>(t95), label__True_21, label__False_23);
      BIND(label__False_23);
      TNode<Number> t96 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<double>(kMaxSafeInteger)));
      BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*value_71).value()), implicit_cast<TNode<Number>>(t96), label__True_21, label__False_22);
      if (label__True_21->is_used())
      {
        BIND(label__True_21);
        // ../src/builtins/base.tq:751:45
        {
          // ../src/builtins/base.tq:752:5
          Goto(label_RangeError_18);
        }
      }
      BIND(label__False_22);
    }
    // ../src/builtins/base.tq:755:3
    *_return_70 = implicit_cast<TNode<Number>>((*value_71).value());
    Goto(label_macro_end_704);
  }
  BIND(label_macro_end_704);
  return implicit_cast<TNode<Number>>((*_return_70).value());
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::convert8ATintptr(int31_t p_i) {
  TVARIABLE(IntPtrT, _return_428_impl);
  auto _return_428 = &_return_428_impl;
  USE(_return_428);
  Label label_macro_end_957_impl(this, {_return_428});
  Label* label_macro_end_957 = &label_macro_end_957_impl;
  USE(label_macro_end_957);
  // ../src/builtins/base.tq:454:48
  {
    // ../src/builtins/base.tq:455:3
    TNode<IntPtrT> t2187 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(p_i)));
    *_return_428 = implicit_cast<TNode<IntPtrT>>(t2187);
    Goto(label_macro_end_957);
  }
  BIND(label_macro_end_957);
  return implicit_cast<TNode<IntPtrT>>((*_return_428).value());
}

}  // namespace internal
}  // namespace v8

