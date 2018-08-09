#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/bigint.h"
#include "builtins-typed-array-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType17ATFixedUint8Array() {
  ElementsKind _return_143_impl;
  auto _return_143 = &_return_143_impl;
  USE(_return_143);
  Label label_macro_end_748_impl(this, {});
  Label* label_macro_end_748 = &label_macro_end_748_impl;
  USE(label_macro_end_748);
  // ../src/builtins/typed-array.tq:20:63
  {
    // ../src/builtins/typed-array.tq:21:5
    *_return_143 = implicit_cast<ElementsKind>(UINT8_ELEMENTS);
    Goto(label_macro_end_748);
  }
  BIND(label_macro_end_748);
  return implicit_cast<ElementsKind>((*_return_143));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType16ATFixedInt8Array() {
  ElementsKind _return_144_impl;
  auto _return_144 = &_return_144_impl;
  USE(_return_144);
  Label label_macro_end_749_impl(this, {});
  Label* label_macro_end_749 = &label_macro_end_749_impl;
  USE(label_macro_end_749);
  // ../src/builtins/typed-array.tq:23:62
  {
    // ../src/builtins/typed-array.tq:24:5
    *_return_144 = implicit_cast<ElementsKind>(INT8_ELEMENTS);
    Goto(label_macro_end_749);
  }
  BIND(label_macro_end_749);
  return implicit_cast<ElementsKind>((*_return_144));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType18ATFixedUint16Array() {
  ElementsKind _return_145_impl;
  auto _return_145 = &_return_145_impl;
  USE(_return_145);
  Label label_macro_end_750_impl(this, {});
  Label* label_macro_end_750 = &label_macro_end_750_impl;
  USE(label_macro_end_750);
  // ../src/builtins/typed-array.tq:26:64
  {
    // ../src/builtins/typed-array.tq:27:5
    *_return_145 = implicit_cast<ElementsKind>(UINT16_ELEMENTS);
    Goto(label_macro_end_750);
  }
  BIND(label_macro_end_750);
  return implicit_cast<ElementsKind>((*_return_145));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType17ATFixedInt16Array() {
  ElementsKind _return_146_impl;
  auto _return_146 = &_return_146_impl;
  USE(_return_146);
  Label label_macro_end_751_impl(this, {});
  Label* label_macro_end_751 = &label_macro_end_751_impl;
  USE(label_macro_end_751);
  // ../src/builtins/typed-array.tq:29:63
  {
    // ../src/builtins/typed-array.tq:30:5
    *_return_146 = implicit_cast<ElementsKind>(INT16_ELEMENTS);
    Goto(label_macro_end_751);
  }
  BIND(label_macro_end_751);
  return implicit_cast<ElementsKind>((*_return_146));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType18ATFixedUint32Array() {
  ElementsKind _return_147_impl;
  auto _return_147 = &_return_147_impl;
  USE(_return_147);
  Label label_macro_end_752_impl(this, {});
  Label* label_macro_end_752 = &label_macro_end_752_impl;
  USE(label_macro_end_752);
  // ../src/builtins/typed-array.tq:32:64
  {
    // ../src/builtins/typed-array.tq:33:5
    *_return_147 = implicit_cast<ElementsKind>(UINT32_ELEMENTS);
    Goto(label_macro_end_752);
  }
  BIND(label_macro_end_752);
  return implicit_cast<ElementsKind>((*_return_147));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType17ATFixedInt32Array() {
  ElementsKind _return_148_impl;
  auto _return_148 = &_return_148_impl;
  USE(_return_148);
  Label label_macro_end_753_impl(this, {});
  Label* label_macro_end_753 = &label_macro_end_753_impl;
  USE(label_macro_end_753);
  // ../src/builtins/typed-array.tq:35:63
  {
    // ../src/builtins/typed-array.tq:36:5
    *_return_148 = implicit_cast<ElementsKind>(INT32_ELEMENTS);
    Goto(label_macro_end_753);
  }
  BIND(label_macro_end_753);
  return implicit_cast<ElementsKind>((*_return_148));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType19ATFixedFloat32Array() {
  ElementsKind _return_149_impl;
  auto _return_149 = &_return_149_impl;
  USE(_return_149);
  Label label_macro_end_754_impl(this, {});
  Label* label_macro_end_754 = &label_macro_end_754_impl;
  USE(label_macro_end_754);
  // ../src/builtins/typed-array.tq:38:65
  {
    // ../src/builtins/typed-array.tq:39:5
    *_return_149 = implicit_cast<ElementsKind>(FLOAT32_ELEMENTS);
    Goto(label_macro_end_754);
  }
  BIND(label_macro_end_754);
  return implicit_cast<ElementsKind>((*_return_149));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType19ATFixedFloat64Array() {
  ElementsKind _return_150_impl;
  auto _return_150 = &_return_150_impl;
  USE(_return_150);
  Label label_macro_end_755_impl(this, {});
  Label* label_macro_end_755 = &label_macro_end_755_impl;
  USE(label_macro_end_755);
  // ../src/builtins/typed-array.tq:41:65
  {
    // ../src/builtins/typed-array.tq:42:5
    *_return_150 = implicit_cast<ElementsKind>(FLOAT64_ELEMENTS);
    Goto(label_macro_end_755);
  }
  BIND(label_macro_end_755);
  return implicit_cast<ElementsKind>((*_return_150));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType24ATFixedUint8ClampedArray() {
  ElementsKind _return_151_impl;
  auto _return_151 = &_return_151_impl;
  USE(_return_151);
  Label label_macro_end_756_impl(this, {});
  Label* label_macro_end_756 = &label_macro_end_756_impl;
  USE(label_macro_end_756);
  // ../src/builtins/typed-array.tq:44:70
  {
    // ../src/builtins/typed-array.tq:45:5
    *_return_151 = implicit_cast<ElementsKind>(UINT8_CLAMPED_ELEMENTS);
    Goto(label_macro_end_756);
  }
  BIND(label_macro_end_756);
  return implicit_cast<ElementsKind>((*_return_151));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType21ATFixedBigUint64Array() {
  ElementsKind _return_152_impl;
  auto _return_152 = &_return_152_impl;
  USE(_return_152);
  Label label_macro_end_757_impl(this, {});
  Label* label_macro_end_757 = &label_macro_end_757_impl;
  USE(label_macro_end_757);
  // ../src/builtins/typed-array.tq:47:67
  {
    // ../src/builtins/typed-array.tq:48:5
    *_return_152 = implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS);
    Goto(label_macro_end_757);
  }
  BIND(label_macro_end_757);
  return implicit_cast<ElementsKind>((*_return_152));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType20ATFixedBigInt64Array() {
  ElementsKind _return_153_impl;
  auto _return_153 = &_return_153_impl;
  USE(_return_153);
  Label label_macro_end_758_impl(this, {});
  Label* label_macro_end_758 = &label_macro_end_758_impl;
  USE(label_macro_end_758);
  // ../src/builtins/typed-array.tq:50:66
  {
    // ../src/builtins/typed-array.tq:51:5
    *_return_153 = implicit_cast<ElementsKind>(BIGINT64_ELEMENTS);
    Goto(label_macro_end_758);
  }
  BIND(label_macro_end_758);
  return implicit_cast<ElementsKind>((*_return_153));
}

compiler::TNode<Number> TypedArrayBuiltinsFromDSLAssembler::CallCompareWithDetachedCheck(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<JSReceiver> p_comparefn, TNode<Object> p_a, TNode<Object> p_b, Label* label_Detached_107) {
  TVARIABLE(Number, _return_154_impl);
  auto _return_154 = &_return_154_impl;
  USE(_return_154);
  Label label_macro_end_759_impl(this, {_return_154});
  Label* label_macro_end_759 = &label_macro_end_759_impl;
  USE(label_macro_end_759);
  // ../src/builtins/typed-array.tq:72:42
  {
    // ../src/builtins/typed-array.tq:74:5
    TNode<Object> t366 = UncheckedCast<Object>(Call(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<TNode<Object>>(p_a), implicit_cast<TNode<Object>>(p_b)));
    USE(implicit_cast<TNode<Object>>(t366));
    TNode<Number> t367 = UncheckedCast<Number>(ToNumber_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t366)));
    USE(implicit_cast<TNode<Number>>(t367));
    TNode<Number> v_485_impl;
    auto v_485 = &v_485_impl;
    USE(v_485);
    *v_485 = implicit_cast<TNode<Number>>(t367);
    // ../src/builtins/typed-array.tq:78:5
    {
      Label label__True_108_impl(this);
      Label* label__True_108 = &label__True_108_impl;
      USE(label__True_108);
      Label label__False_109_impl(this, {});
      Label* label__False_109 = &label__False_109_impl;
      USE(label__False_109);
      TNode<JSArrayBuffer> t368 = UncheckedCast<JSArrayBuffer>(LoadTypedArrayBuffer(implicit_cast<TNode<JSTypedArray>>(p_array)));
      TNode<BoolT> t369 = UncheckedCast<BoolT>(IsDetachedBuffer(implicit_cast<TNode<JSArrayBuffer>>(t368)));
      USE(implicit_cast<TNode<BoolT>>(t369));
      Branch(implicit_cast<TNode<BoolT>>(t369), label__True_108, label__False_109);
      if (label__True_108->is_used())
      {
        BIND(label__True_108);
        // ../src/builtins/typed-array.tq:78:41
        Goto(label_Detached_107);
      }
      BIND(label__False_109);
    }
    // ../src/builtins/typed-array.tq:81:5
    {
      Label label__True_110_impl(this);
      Label* label__True_110 = &label__True_110_impl;
      USE(label__True_110);
      Label label__False_111_impl(this, {});
      Label* label__False_111 = &label__False_111_impl;
      USE(label__False_111);
      TNode<BoolT> t370 = UncheckedCast<BoolT>(NumberIsNaN(implicit_cast<TNode<Number>>((*v_485))));
      USE(implicit_cast<TNode<BoolT>>(t370));
      Branch(implicit_cast<TNode<BoolT>>(t370), label__True_110, label__False_111);
      if (label__True_110->is_used())
      {
        BIND(label__True_110);
        // ../src/builtins/typed-array.tq:81:25
        int31_t t371 = 0;
        TNode<Number> t372 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t371)));
        *_return_154 = implicit_cast<TNode<Number>>(t372);
        Goto(label_macro_end_759);
      }
      BIND(label__False_111);
    }
    // ../src/builtins/typed-array.tq:84:5
    *_return_154 = implicit_cast<TNode<Number>>((*v_485));
    Goto(label_macro_end_759);
  }
  BIND(label_macro_end_759);
  return implicit_cast<TNode<Number>>((*_return_154).value());
}

void TypedArrayBuiltinsFromDSLAssembler::TypedArrayInsertionSort(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<Smi> p_from_arg, TNode<Smi> p_to_arg, TNode<JSReceiver> p_comparefn, TNode<Code> p_Load, TNode<Code> p_Store, Label* label_Detached_112) {
  Label label_macro_end_760_impl(this, {});
  Label* label_macro_end_760 = &label_macro_end_760_impl;
  USE(label_macro_end_760);
  // ../src/builtins/typed-array.tq:91:19
  {
    // ../src/builtins/typed-array.tq:92:5
    TVARIABLE(Smi, from_155_impl);
    auto from_155 = &from_155_impl;
    USE(from_155);
    *from_155 = implicit_cast<TNode<Smi>>(p_from_arg);
    // ../src/builtins/typed-array.tq:93:5
    TVARIABLE(Smi, to_156_impl);
    auto to_156 = &to_156_impl;
    USE(to_156);
    *to_156 = implicit_cast<TNode<Smi>>(p_to_arg);
    // ../src/builtins/typed-array.tq:95:5
    {
      Label label__True_113_impl(this);
      Label* label__True_113 = &label__True_113_impl;
      USE(label__True_113);
      Label label__False_114_impl(this, {});
      Label* label__False_114 = &label__False_114_impl;
      USE(label__False_114);
      TNode<JSArrayBuffer> t373 = UncheckedCast<JSArrayBuffer>(LoadTypedArrayBuffer(implicit_cast<TNode<JSTypedArray>>(p_array)));
      TNode<BoolT> t374 = UncheckedCast<BoolT>(IsDetachedBuffer(implicit_cast<TNode<JSArrayBuffer>>(t373)));
      USE(implicit_cast<TNode<BoolT>>(t374));
      Branch(implicit_cast<TNode<BoolT>>(t374), label__True_113, label__False_114);
      if (label__True_113->is_used())
      {
        BIND(label__True_113);
        // ../src/builtins/typed-array.tq:95:41
        Goto(label_Detached_112);
      }
      BIND(label__False_114);
    }
    // ../src/builtins/typed-array.tq:97:5
    int31_t t375 = 1;
    TNode<Smi> t376 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t375)));
    TNode<Smi> t377 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*from_155).value()), implicit_cast<TNode<Smi>>(t376)));
    USE(implicit_cast<TNode<Smi>>(t377));
    TVARIABLE(Smi, i_157_impl);
    auto i_157 = &i_157_impl;
    USE(i_157);
    *i_157 = implicit_cast<TNode<Smi>>(t377);
    Label label__True_115_impl(this);
    Label* label__True_115 = &label__True_115_impl;
    USE(label__True_115);
    Label label__False_116_impl(this);
    Label* label__False_116 = &label__False_116_impl;
    USE(label__False_116);
    Label label_header_486_761_impl(this, {i_157});
    Label* label_header_486_761 = &label_header_486_761_impl;
    USE(label_header_486_761);
    Goto(label_header_486_761);
    BIND(label_header_486_761);
    Label label_action_487_762_impl(this);
    Label* label_action_487_762 = &label_action_487_762_impl;
    USE(label_action_487_762);
    TNode<BoolT> t378 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*i_157).value()), implicit_cast<TNode<Smi>>((*to_156).value())));
    USE(implicit_cast<TNode<BoolT>>(t378));
    Branch(implicit_cast<TNode<BoolT>>(t378), label__True_115, label__False_116);
    if (label__True_115->is_used())
    {
      BIND(label__True_115);
      // ../src/builtins/typed-array.tq:97:46
      {
        // ../src/builtins/typed-array.tq:98:7
        TNode<Object> t379 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*i_157).value())));
        USE(implicit_cast<TNode<Object>>(t379));
        TNode<Object> element_488_impl;
        auto element_488 = &element_488_impl;
        USE(element_488);
        *element_488 = implicit_cast<TNode<Object>>(t379);
        // ../src/builtins/typed-array.tq:99:7
        int31_t t380 = 1;
        TNode<Smi> t381 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t380)));
        TNode<Smi> t382 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*i_157).value()), implicit_cast<TNode<Smi>>(t381)));
        USE(implicit_cast<TNode<Smi>>(t382));
        TVARIABLE(Smi, j_158_impl);
        auto j_158 = &j_158_impl;
        USE(j_158);
        *j_158 = implicit_cast<TNode<Smi>>(t382);
        // ../src/builtins/typed-array.tq:100:7
        Label label__True_117_impl(this);
        Label* label__True_117 = &label__True_117_impl;
        USE(label__True_117);
        Label label__False_118_impl(this);
        Label* label__False_118 = &label__False_118_impl;
        USE(label__False_118);
        Label label_header_489_763_impl(this, {j_158});
        Label* label_header_489_763 = &label_header_489_763_impl;
        USE(label_header_489_763);
        Goto(label_header_489_763);
        BIND(label_header_489_763);
        Label label_action_490_764_impl(this);
        Label* label_action_490_764 = &label_action_490_764_impl;
        USE(label_action_490_764);
        TNode<BoolT> t383 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*j_158).value()), implicit_cast<TNode<Smi>>((*from_155).value())));
        USE(implicit_cast<TNode<BoolT>>(t383));
        Branch(implicit_cast<TNode<BoolT>>(t383), label__True_117, label__False_118);
        if (label__True_117->is_used())
        {
          BIND(label__True_117);
          // ../src/builtins/typed-array.tq:100:30
          {
            // ../src/builtins/typed-array.tq:101:9
            TNode<Object> t384 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*j_158).value())));
            USE(implicit_cast<TNode<Object>>(t384));
            TNode<Object> tmp_491_impl;
            auto tmp_491 = &tmp_491_impl;
            USE(tmp_491);
            *tmp_491 = implicit_cast<TNode<Object>>(t384);
            // ../src/builtins/typed-array.tq:102:9
            TNode<Number> t385 = UncheckedCast<Number>(CallCompareWithDetachedCheck(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Object>>((*tmp_491)), implicit_cast<TNode<Object>>((*element_488)), label_Detached_112));
            USE(implicit_cast<TNode<Number>>(t385));
            TNode<Number> order_492_impl;
            auto order_492 = &order_492_impl;
            USE(order_492);
            *order_492 = implicit_cast<TNode<Number>>(t385);
            // ../src/builtins/typed-array.tq:104:9
            {
              Label label__True_119_impl(this);
              Label* label__True_119 = &label__True_119_impl;
              USE(label__True_119);
              Label label__False_120_impl(this);
              Label* label__False_120 = &label__False_120_impl;
              USE(label__False_120);
              Label label_if_done_label_493_765_impl(this, {});
              Label* label_if_done_label_493_765 = &label_if_done_label_493_765_impl;
              USE(label_if_done_label_493_765);
              int31_t t386 = 0;
              TNode<Number> t387 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t386)));
              BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*order_492)), implicit_cast<TNode<Number>>(t387), label__True_119, label__False_120);
              if (label__True_119->is_used())
              {
                BIND(label__True_119);
                // ../src/builtins/typed-array.tq:104:24
                {
                  // ../src/builtins/typed-array.tq:105:11
                  int31_t t388 = 1;
                  TNode<Smi> t389 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t388)));
                  TNode<Smi> t390 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_158).value()), implicit_cast<TNode<Smi>>(t389)));
                  USE(implicit_cast<TNode<Smi>>(t390));
                  TNode<Object> t391 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>(t390), implicit_cast<TNode<Object>>((*tmp_491))));
                  USE(implicit_cast<TNode<Object>>(t391));
                }
                Goto(label_if_done_label_493_765);
              }
              if (label__False_120->is_used())
              {
                BIND(label__False_120);
                // ../src/builtins/typed-array.tq:106:16
                {
                  // ../src/builtins/typed-array.tq:107:11
                  Goto(label__False_118);
                }
              }
              BIND(label_if_done_label_493_765);
            }
          }
          Goto(label_action_490_764);
        }
        {
          BIND(label_action_490_764);
          TNode<Smi> t392 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t393 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*j_158).value()), implicit_cast<TNode<Smi>>(t392)));
          *j_158 = implicit_cast<TNode<Smi>>(t393);
          Goto(label_header_489_763);
        }
        BIND(label__False_118);
        // ../src/builtins/typed-array.tq:110:7
        int31_t t394 = 1;
        TNode<Smi> t395 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t394)));
        TNode<Smi> t396 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_158).value()), implicit_cast<TNode<Smi>>(t395)));
        USE(implicit_cast<TNode<Smi>>(t396));
        TNode<Object> t397 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>(t396), implicit_cast<TNode<Object>>((*element_488))));
        USE(implicit_cast<TNode<Object>>(t397));
      }
      Goto(label_action_487_762);
    }
    {
      BIND(label_action_487_762);
      TNode<Smi> t398 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t399 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*i_157).value()), implicit_cast<TNode<Smi>>(t398)));
      *i_157 = implicit_cast<TNode<Smi>>(t399);
      Goto(label_header_486_761);
    }
    BIND(label__False_116);
  }
}

void TypedArrayBuiltinsFromDSLAssembler::TypedArrayQuickSortImpl(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<Smi> p_from_arg, TNode<Smi> p_to_arg, TNode<JSReceiver> p_comparefn, TNode<Code> p_Load, TNode<Code> p_Store, Label* label_Detached_121) {
  Label label_macro_end_766_impl(this, {});
  Label* label_macro_end_766 = &label_macro_end_766_impl;
  USE(label_macro_end_766);
  // ../src/builtins/typed-array.tq:117:19
  {
    // ../src/builtins/typed-array.tq:118:5
    TVARIABLE(Smi, from_159_impl);
    auto from_159 = &from_159_impl;
    USE(from_159);
    *from_159 = implicit_cast<TNode<Smi>>(p_from_arg);
    // ../src/builtins/typed-array.tq:119:5
    TVARIABLE(Smi, to_160_impl);
    auto to_160 = &to_160_impl;
    USE(to_160);
    *to_160 = implicit_cast<TNode<Smi>>(p_to_arg);
    // ../src/builtins/typed-array.tq:121:5
    {
      Label label__True_122_impl(this);
      Label* label__True_122 = &label__True_122_impl;
      USE(label__True_122);
      Label label__False_123_impl(this);
      Label* label__False_123 = &label__False_123_impl;
      USE(label__False_123);
      Label label_header_494_767_impl(this, {from_159, to_160});
      Label* label_header_494_767 = &label_header_494_767_impl;
      USE(label_header_494_767);
      Goto(label_header_494_767);
      BIND(label_header_494_767);
      TNode<Smi> t400 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*to_160).value()), implicit_cast<TNode<Smi>>((*from_159).value())));
      USE(implicit_cast<TNode<Smi>>(t400));
      int31_t t401 = 1;
      TNode<Smi> t402 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t401)));
      TNode<BoolT> t403 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>(t400), implicit_cast<TNode<Smi>>(t402)));
      USE(implicit_cast<TNode<BoolT>>(t403));
      Branch(implicit_cast<TNode<BoolT>>(t403), label__True_122, label__False_123);
      if (label__True_122->is_used())
      {
        BIND(label__True_122);
        // ../src/builtins/typed-array.tq:121:27
        {
          // ../src/builtins/typed-array.tq:122:7
          {
            Label label__True_124_impl(this);
            Label* label__True_124 = &label__True_124_impl;
            USE(label__True_124);
            Label label__False_125_impl(this, {});
            Label* label__False_125 = &label__False_125_impl;
            USE(label__False_125);
            TNode<Smi> t404 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*to_160).value()), implicit_cast<TNode<Smi>>((*from_159).value())));
            USE(implicit_cast<TNode<Smi>>(t404));
            int31_t t405 = 10;
            TNode<Smi> t406 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t405)));
            TNode<BoolT> t407 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>(t404), implicit_cast<TNode<Smi>>(t406)));
            USE(implicit_cast<TNode<BoolT>>(t407));
            Branch(implicit_cast<TNode<BoolT>>(t407), label__True_124, label__False_125);
            if (label__True_124->is_used())
            {
              BIND(label__True_124);
              // ../src/builtins/typed-array.tq:122:28
              {
                // ../src/builtins/typed-array.tq:126:9
                TypedArrayInsertionSort(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*from_159).value()), implicit_cast<TNode<Smi>>((*to_160).value()), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Code>>(p_Store), label_Detached_121);
                // ../src/builtins/typed-array.tq:129:9
                Goto(label__False_123);
              }
            }
            BIND(label__False_125);
          }
          // ../src/builtins/typed-array.tq:134:7
          TNode<Smi> t408 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*to_160).value()), implicit_cast<TNode<Smi>>((*from_159).value())));
          USE(implicit_cast<TNode<Smi>>(t408));
          int31_t t409 = 1;
          TNode<Smi> t410 = UncheckedCast<Smi>(SmiShr(implicit_cast<TNode<Smi>>(t408), implicit_cast<int31_t>(t409)));
          USE(implicit_cast<TNode<Smi>>(t410));
          TNode<Smi> t411 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*from_159).value()), implicit_cast<TNode<Smi>>(t410)));
          USE(implicit_cast<TNode<Smi>>(t411));
          TNode<Smi> third_index_495_impl;
          auto third_index_495 = &third_index_495_impl;
          USE(third_index_495);
          *third_index_495 = implicit_cast<TNode<Smi>>(t411);
          // ../src/builtins/typed-array.tq:136:7
          {
            Label label__True_126_impl(this);
            Label* label__True_126 = &label__True_126_impl;
            USE(label__True_126);
            Label label__False_127_impl(this, {});
            Label* label__False_127 = &label__False_127_impl;
            USE(label__False_127);
            TNode<JSArrayBuffer> t412 = UncheckedCast<JSArrayBuffer>(LoadTypedArrayBuffer(implicit_cast<TNode<JSTypedArray>>(p_array)));
            TNode<BoolT> t413 = UncheckedCast<BoolT>(IsDetachedBuffer(implicit_cast<TNode<JSArrayBuffer>>(t412)));
            USE(implicit_cast<TNode<BoolT>>(t413));
            Branch(implicit_cast<TNode<BoolT>>(t413), label__True_126, label__False_127);
            if (label__True_126->is_used())
            {
              BIND(label__True_126);
              // ../src/builtins/typed-array.tq:136:43
              Goto(label_Detached_121);
            }
            BIND(label__False_127);
          }
          // ../src/builtins/typed-array.tq:139:7
          TNode<Object> t414 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*from_159).value())));
          USE(implicit_cast<TNode<Object>>(t414));
          TVARIABLE(Object, v0_161_impl);
          auto v0_161 = &v0_161_impl;
          USE(v0_161);
          *v0_161 = implicit_cast<TNode<Object>>(t414);
          // ../src/builtins/typed-array.tq:140:7
          int31_t t415 = 1;
          TNode<Smi> t416 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t415)));
          TNode<Smi> t417 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*to_160).value()), implicit_cast<TNode<Smi>>(t416)));
          USE(implicit_cast<TNode<Smi>>(t417));
          TNode<Object> t418 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>(t417)));
          USE(implicit_cast<TNode<Object>>(t418));
          TVARIABLE(Object, v1_162_impl);
          auto v1_162 = &v1_162_impl;
          USE(v1_162);
          *v1_162 = implicit_cast<TNode<Object>>(t418);
          // ../src/builtins/typed-array.tq:141:7
          TNode<Object> t419 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*third_index_495))));
          USE(implicit_cast<TNode<Object>>(t419));
          TVARIABLE(Object, v2_163_impl);
          auto v2_163 = &v2_163_impl;
          USE(v2_163);
          *v2_163 = implicit_cast<TNode<Object>>(t419);
          // ../src/builtins/typed-array.tq:143:7
          TNode<Number> t420 = UncheckedCast<Number>(CallCompareWithDetachedCheck(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Object>>((*v0_161).value()), implicit_cast<TNode<Object>>((*v1_162).value()), label_Detached_121));
          USE(implicit_cast<TNode<Number>>(t420));
          TNode<Number> c01_496_impl;
          auto c01_496 = &c01_496_impl;
          USE(c01_496);
          *c01_496 = implicit_cast<TNode<Number>>(t420);
          // ../src/builtins/typed-array.tq:145:7
          {
            Label label__True_128_impl(this);
            Label* label__True_128 = &label__True_128_impl;
            USE(label__True_128);
            Label label__False_129_impl(this, {v0_161, v1_162});
            Label* label__False_129 = &label__False_129_impl;
            USE(label__False_129);
            int31_t t421 = 0;
            TNode<Number> t422 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t421)));
            BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*c01_496)), implicit_cast<TNode<Number>>(t422), label__True_128, label__False_129);
            if (label__True_128->is_used())
            {
              BIND(label__True_128);
              // ../src/builtins/typed-array.tq:145:20
              {
                // ../src/builtins/typed-array.tq:147:9
                TVARIABLE(Object, tmp_164_impl);
                auto tmp_164 = &tmp_164_impl;
                USE(tmp_164);
                *tmp_164 = implicit_cast<TNode<Object>>((*v0_161).value());
                // ../src/builtins/typed-array.tq:148:9
                *v0_161 = implicit_cast<TNode<Object>>((*v1_162).value());
                // ../src/builtins/typed-array.tq:149:9
                *v1_162 = implicit_cast<TNode<Object>>((*tmp_164).value());
              }
              Goto(label__False_129);
            }
            BIND(label__False_129);
          }
          // ../src/builtins/typed-array.tq:152:7
          TNode<Number> t423 = UncheckedCast<Number>(CallCompareWithDetachedCheck(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Object>>((*v0_161).value()), implicit_cast<TNode<Object>>((*v2_163).value()), label_Detached_121));
          USE(implicit_cast<TNode<Number>>(t423));
          TNode<Number> c02_497_impl;
          auto c02_497 = &c02_497_impl;
          USE(c02_497);
          *c02_497 = implicit_cast<TNode<Number>>(t423);
          // ../src/builtins/typed-array.tq:154:7
          {
            Label label__True_130_impl(this);
            Label* label__True_130 = &label__True_130_impl;
            USE(label__True_130);
            Label label__False_131_impl(this);
            Label* label__False_131 = &label__False_131_impl;
            USE(label__False_131);
            Label label_if_done_label_498_768_impl(this, {v0_161, v1_162, v2_163});
            Label* label_if_done_label_498_768 = &label_if_done_label_498_768_impl;
            USE(label_if_done_label_498_768);
            int31_t t424 = 0;
            TNode<Number> t425 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t424)));
            BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*c02_497)), implicit_cast<TNode<Number>>(t425), label__True_130, label__False_131);
            if (label__True_130->is_used())
            {
              BIND(label__True_130);
              // ../src/builtins/typed-array.tq:154:21
              {
                // ../src/builtins/typed-array.tq:156:9
                TNode<Object> tmp_499_impl;
                auto tmp_499 = &tmp_499_impl;
                USE(tmp_499);
                *tmp_499 = implicit_cast<TNode<Object>>((*v0_161).value());
                // ../src/builtins/typed-array.tq:157:9
                *v0_161 = implicit_cast<TNode<Object>>((*v2_163).value());
                // ../src/builtins/typed-array.tq:158:9
                *v2_163 = implicit_cast<TNode<Object>>((*v1_162).value());
                // ../src/builtins/typed-array.tq:159:9
                *v1_162 = implicit_cast<TNode<Object>>((*tmp_499));
              }
              Goto(label_if_done_label_498_768);
            }
            if (label__False_131->is_used())
            {
              BIND(label__False_131);
              // ../src/builtins/typed-array.tq:160:14
              {
                // ../src/builtins/typed-array.tq:162:9
                TNode<Number> t426 = UncheckedCast<Number>(CallCompareWithDetachedCheck(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Object>>((*v1_162).value()), implicit_cast<TNode<Object>>((*v2_163).value()), label_Detached_121));
                USE(implicit_cast<TNode<Number>>(t426));
                TNode<Number> c12_500_impl;
                auto c12_500 = &c12_500_impl;
                USE(c12_500);
                *c12_500 = implicit_cast<TNode<Number>>(t426);
                // ../src/builtins/typed-array.tq:164:9
                {
                  Label label__True_132_impl(this);
                  Label* label__True_132 = &label__True_132_impl;
                  USE(label__True_132);
                  Label label__False_133_impl(this, {v1_162, v2_163});
                  Label* label__False_133 = &label__False_133_impl;
                  USE(label__False_133);
                  int31_t t427 = 0;
                  TNode<Number> t428 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t427)));
                  BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*c12_500)), implicit_cast<TNode<Number>>(t428), label__True_132, label__False_133);
                  if (label__True_132->is_used())
                  {
                    BIND(label__True_132);
                    // ../src/builtins/typed-array.tq:164:22
                    {
                      // ../src/builtins/typed-array.tq:166:11
                      TNode<Object> tmp_501_impl;
                      auto tmp_501 = &tmp_501_impl;
                      USE(tmp_501);
                      *tmp_501 = implicit_cast<TNode<Object>>((*v1_162).value());
                      // ../src/builtins/typed-array.tq:167:11
                      *v1_162 = implicit_cast<TNode<Object>>((*v2_163).value());
                      // ../src/builtins/typed-array.tq:168:11
                      *v2_163 = implicit_cast<TNode<Object>>((*tmp_501));
                    }
                    Goto(label__False_133);
                  }
                  BIND(label__False_133);
                }
              }
              Goto(label_if_done_label_498_768);
            }
            BIND(label_if_done_label_498_768);
          }
          // ../src/builtins/typed-array.tq:173:7
          TNode<Object> t429 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*from_159).value()), implicit_cast<TNode<Object>>((*v0_161).value())));
          USE(implicit_cast<TNode<Object>>(t429));
          // ../src/builtins/typed-array.tq:174:7
          int31_t t430 = 1;
          TNode<Smi> t431 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t430)));
          TNode<Smi> t432 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*to_160).value()), implicit_cast<TNode<Smi>>(t431)));
          USE(implicit_cast<TNode<Smi>>(t432));
          TNode<Object> t433 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>(t432), implicit_cast<TNode<Object>>((*v2_163).value())));
          USE(implicit_cast<TNode<Object>>(t433));
          // ../src/builtins/typed-array.tq:176:7
          TNode<Object> pivot_502_impl;
          auto pivot_502 = &pivot_502_impl;
          USE(pivot_502);
          *pivot_502 = implicit_cast<TNode<Object>>((*v1_162).value());
          // ../src/builtins/typed-array.tq:177:7
          int31_t t434 = 1;
          TNode<Smi> t435 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t434)));
          TNode<Smi> t436 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*from_159).value()), implicit_cast<TNode<Smi>>(t435)));
          USE(implicit_cast<TNode<Smi>>(t436));
          TVARIABLE(Smi, low_end_165_impl);
          auto low_end_165 = &low_end_165_impl;
          USE(low_end_165);
          *low_end_165 = implicit_cast<TNode<Smi>>(t436);
          // ../src/builtins/typed-array.tq:178:7
          int31_t t437 = 1;
          TNode<Smi> t438 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t437)));
          TNode<Smi> t439 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*to_160).value()), implicit_cast<TNode<Smi>>(t438)));
          USE(implicit_cast<TNode<Smi>>(t439));
          TVARIABLE(Smi, high_start_166_impl);
          auto high_start_166 = &high_start_166_impl;
          USE(high_start_166);
          *high_start_166 = implicit_cast<TNode<Smi>>(t439);
          // ../src/builtins/typed-array.tq:180:7
          TNode<Object> t440 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*low_end_165).value())));
          USE(implicit_cast<TNode<Object>>(t440));
          TVARIABLE(Object, low_end_value_167_impl);
          auto low_end_value_167 = &low_end_value_167_impl;
          USE(low_end_value_167);
          *low_end_value_167 = implicit_cast<TNode<Object>>(t440);
          // ../src/builtins/typed-array.tq:181:7
          TNode<Object> t441 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*third_index_495)), implicit_cast<TNode<Object>>((*low_end_value_167).value())));
          USE(implicit_cast<TNode<Object>>(t441));
          // ../src/builtins/typed-array.tq:182:7
          TNode<Object> t442 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*low_end_165).value()), implicit_cast<TNode<Object>>((*pivot_502))));
          USE(implicit_cast<TNode<Object>>(t442));
          // ../src/builtins/typed-array.tq:186:7
          int31_t t443 = 1;
          TNode<Smi> t444 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t443)));
          TNode<Smi> t445 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*low_end_165).value()), implicit_cast<TNode<Smi>>(t444)));
          USE(implicit_cast<TNode<Smi>>(t445));
          TVARIABLE(Smi, idx_168_impl);
          auto idx_168 = &idx_168_impl;
          USE(idx_168);
          *idx_168 = implicit_cast<TNode<Smi>>(t445);
          Label label__True_134_impl(this);
          Label* label__True_134 = &label__True_134_impl;
          USE(label__True_134);
          Label label__False_135_impl(this);
          Label* label__False_135 = &label__False_135_impl;
          USE(label__False_135);
          Label label_header_503_769_impl(this, {high_start_166, idx_168, low_end_165, low_end_value_167});
          Label* label_header_503_769 = &label_header_503_769_impl;
          USE(label_header_503_769);
          Goto(label_header_503_769);
          BIND(label_header_503_769);
          Label label_action_504_770_impl(this);
          Label* label_action_504_770 = &label_action_504_770_impl;
          USE(label_action_504_770);
          TNode<BoolT> t446 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*idx_168).value()), implicit_cast<TNode<Smi>>((*high_start_166).value())));
          USE(implicit_cast<TNode<BoolT>>(t446));
          Branch(implicit_cast<TNode<BoolT>>(t446), label__True_134, label__False_135);
          if (label__True_134->is_used())
          {
            BIND(label__True_134);
            // ../src/builtins/typed-array.tq:186:65
            {
              // ../src/builtins/typed-array.tq:187:9
              TNode<Object> t447 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*idx_168).value())));
              USE(implicit_cast<TNode<Object>>(t447));
              TVARIABLE(Object, element_169_impl);
              auto element_169 = &element_169_impl;
              USE(element_169);
              *element_169 = implicit_cast<TNode<Object>>(t447);
              // ../src/builtins/typed-array.tq:188:9
              TNode<Number> t448 = UncheckedCast<Number>(CallCompareWithDetachedCheck(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Object>>((*element_169).value()), implicit_cast<TNode<Object>>((*pivot_502)), label_Detached_121));
              USE(implicit_cast<TNode<Number>>(t448));
              TVARIABLE(Number, order_170_impl);
              auto order_170 = &order_170_impl;
              USE(order_170);
              *order_170 = implicit_cast<TNode<Number>>(t448);
              // ../src/builtins/typed-array.tq:191:9
              {
                Label label__True_136_impl(this);
                Label* label__True_136 = &label__True_136_impl;
                USE(label__True_136);
                Label label__False_137_impl(this);
                Label* label__False_137 = &label__False_137_impl;
                USE(label__False_137);
                Label label_if_done_label_505_771_impl(this, {element_169, high_start_166, low_end_165, low_end_value_167, order_170});
                Label* label_if_done_label_505_771 = &label_if_done_label_505_771_impl;
                USE(label_if_done_label_505_771);
                int31_t t449 = 0;
                TNode<Number> t450 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t449)));
                BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_170).value()), implicit_cast<TNode<Number>>(t450), label__True_136, label__False_137);
                if (label__True_136->is_used())
                {
                  BIND(label__True_136);
                  // ../src/builtins/typed-array.tq:191:24
                  {
                    // ../src/builtins/typed-array.tq:192:11
                    TNode<Object> t451 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*low_end_165).value())));
                    USE(implicit_cast<TNode<Object>>(t451));
                    *low_end_value_167 = implicit_cast<TNode<Object>>(t451);
                    // ../src/builtins/typed-array.tq:193:11
                    TNode<Object> t452 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*idx_168).value()), implicit_cast<TNode<Object>>((*low_end_value_167).value())));
                    USE(implicit_cast<TNode<Object>>(t452));
                    // ../src/builtins/typed-array.tq:194:11
                    TNode<Object> t453 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*low_end_165).value()), implicit_cast<TNode<Object>>((*element_169).value())));
                    USE(implicit_cast<TNode<Object>>(t453));
                    // ../src/builtins/typed-array.tq:195:11
                    TNode<Smi> t454 = implicit_cast<TNode<Smi>>((*low_end_165).value());
                    USE(t454);
                    TNode<Smi> t455 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                    TNode<Smi> t456 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*low_end_165).value()), implicit_cast<TNode<Smi>>(t455)));
                    *low_end_165 = implicit_cast<TNode<Smi>>(t456);
                  }
                  Goto(label_if_done_label_505_771);
                }
                if (label__False_137->is_used())
                {
                  BIND(label__False_137);
                  // ../src/builtins/typed-array.tq:196:16
                  {
                    Label label__True_138_impl(this);
                    Label* label__True_138 = &label__True_138_impl;
                    USE(label__True_138);
                    Label label__False_139_impl(this, {element_169, high_start_166, low_end_165, low_end_value_167, order_170});
                    Label* label__False_139 = &label__False_139_impl;
                    USE(label__False_139);
                    int31_t t457 = 0;
                    TNode<Number> t458 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t457)));
                    BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*order_170).value()), implicit_cast<TNode<Number>>(t458), label__True_138, label__False_139);
                    if (label__True_138->is_used())
                    {
                      BIND(label__True_138);
                      // ../src/builtins/typed-array.tq:196:31
                      {
                        // ../src/builtins/typed-array.tq:197:11
                        TVARIABLE(BoolT, break_for_171_impl);
                        auto break_for_171 = &break_for_171_impl;
                        USE(break_for_171);
                        TNode<BoolT> t459 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
                        *break_for_171 = implicit_cast<TNode<BoolT>>(t459);
                        // ../src/builtins/typed-array.tq:199:11
                        {
                          Label label__True_140_impl(this);
                          Label* label__True_140 = &label__True_140_impl;
                          USE(label__True_140);
                          Label label__False_141_impl(this);
                          Label* label__False_141 = &label__False_141_impl;
                          USE(label__False_141);
                          Label label_header_506_772_impl(this, {break_for_171, high_start_166, order_170});
                          Label* label_header_506_772 = &label_header_506_772_impl;
                          USE(label_header_506_772);
                          Goto(label_header_506_772);
                          BIND(label_header_506_772);
                          int31_t t460 = 0;
                          TNode<Number> t461 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t460)));
                          BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*order_170).value()), implicit_cast<TNode<Number>>(t461), label__True_140, label__False_141);
                          if (label__True_140->is_used())
                          {
                            BIND(label__True_140);
                            // ../src/builtins/typed-array.tq:199:29
                            {
                              // ../src/builtins/typed-array.tq:200:13
                              TNode<Smi> t462 = implicit_cast<TNode<Smi>>((*high_start_166).value());
                              USE(t462);
                              TNode<Smi> t463 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                              TNode<Smi> t464 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*high_start_166).value()), implicit_cast<TNode<Smi>>(t463)));
                              *high_start_166 = implicit_cast<TNode<Smi>>(t464);
                              // ../src/builtins/typed-array.tq:201:13
                              {
                                Label label__True_142_impl(this);
                                Label* label__True_142 = &label__True_142_impl;
                                USE(label__True_142);
                                Label label__False_143_impl(this, {break_for_171});
                                Label* label__False_143 = &label__False_143_impl;
                                USE(label__False_143);
                                TNode<BoolT> t465 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*high_start_166).value()), implicit_cast<TNode<Smi>>((*idx_168).value())));
                                USE(implicit_cast<TNode<BoolT>>(t465));
                                Branch(implicit_cast<TNode<BoolT>>(t465), label__True_142, label__False_143);
                                if (label__True_142->is_used())
                                {
                                  BIND(label__True_142);
                                  // ../src/builtins/typed-array.tq:201:36
                                  {
                                    // ../src/builtins/typed-array.tq:202:15
                                    TNode<BoolT> t466 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
                                    *break_for_171 = implicit_cast<TNode<BoolT>>(t466);
                                    // ../src/builtins/typed-array.tq:203:15
                                    Goto(label__False_141);
                                  }
                                }
                                BIND(label__False_143);
                              }
                              // ../src/builtins/typed-array.tq:206:13
                              TNode<Object> t467 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*high_start_166).value())));
                              USE(implicit_cast<TNode<Object>>(t467));
                              TNode<Object> top_elem_507_impl;
                              auto top_elem_507 = &top_elem_507_impl;
                              USE(top_elem_507);
                              *top_elem_507 = implicit_cast<TNode<Object>>(t467);
                              // ../src/builtins/typed-array.tq:207:13
                              TNode<Number> t468 = UncheckedCast<Number>(CallCompareWithDetachedCheck(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Object>>((*top_elem_507)), implicit_cast<TNode<Object>>((*pivot_502)), label_Detached_121));
                              USE(implicit_cast<TNode<Number>>(t468));
                              *order_170 = implicit_cast<TNode<Number>>(t468);
                            }
                            Goto(label_header_506_772);
                          }
                          BIND(label__False_141);
                        }
                        // ../src/builtins/typed-array.tq:211:11
                        {
                          Label label__True_144_impl(this);
                          Label* label__True_144 = &label__True_144_impl;
                          USE(label__True_144);
                          Label label__False_145_impl(this, {});
                          Label* label__False_145 = &label__False_145_impl;
                          USE(label__False_145);
                          Branch(implicit_cast<TNode<BoolT>>((*break_for_171).value()), label__True_144, label__False_145);
                          if (label__True_144->is_used())
                          {
                            BIND(label__True_144);
                            // ../src/builtins/typed-array.tq:211:26
                            {
                              // ../src/builtins/typed-array.tq:212:13
                              Goto(label__False_135);
                            }
                          }
                          BIND(label__False_145);
                        }
                        // ../src/builtins/typed-array.tq:215:11
                        TNode<Object> t469 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*high_start_166).value())));
                        USE(implicit_cast<TNode<Object>>(t469));
                        TNode<Object> high_start_value_508_impl;
                        auto high_start_value_508 = &high_start_value_508_impl;
                        USE(high_start_value_508);
                        *high_start_value_508 = implicit_cast<TNode<Object>>(t469);
                        // ../src/builtins/typed-array.tq:216:11
                        TNode<Object> t470 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*idx_168).value()), implicit_cast<TNode<Object>>((*high_start_value_508))));
                        USE(implicit_cast<TNode<Object>>(t470));
                        // ../src/builtins/typed-array.tq:217:11
                        TNode<Object> t471 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*high_start_166).value()), implicit_cast<TNode<Object>>((*element_169).value())));
                        USE(implicit_cast<TNode<Object>>(t471));
                        // ../src/builtins/typed-array.tq:219:11
                        {
                          Label label__True_146_impl(this);
                          Label* label__True_146 = &label__True_146_impl;
                          USE(label__True_146);
                          Label label__False_147_impl(this, {element_169, low_end_165, low_end_value_167});
                          Label* label__False_147 = &label__False_147_impl;
                          USE(label__False_147);
                          int31_t t472 = 0;
                          TNode<Number> t473 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t472)));
                          BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_170).value()), implicit_cast<TNode<Number>>(t473), label__True_146, label__False_147);
                          if (label__True_146->is_used())
                          {
                            BIND(label__True_146);
                            // ../src/builtins/typed-array.tq:219:26
                            {
                              // ../src/builtins/typed-array.tq:220:13
                              TNode<Object> t474 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*idx_168).value())));
                              USE(implicit_cast<TNode<Object>>(t474));
                              *element_169 = implicit_cast<TNode<Object>>(t474);
                              // ../src/builtins/typed-array.tq:222:13
                              TNode<Object> t475 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*low_end_165).value())));
                              USE(implicit_cast<TNode<Object>>(t475));
                              *low_end_value_167 = implicit_cast<TNode<Object>>(t475);
                              // ../src/builtins/typed-array.tq:223:13
                              TNode<Object> t476 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*idx_168).value()), implicit_cast<TNode<Object>>((*low_end_value_167).value())));
                              USE(implicit_cast<TNode<Object>>(t476));
                              // ../src/builtins/typed-array.tq:224:13
                              TNode<Object> t477 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*low_end_165).value()), implicit_cast<TNode<Object>>((*element_169).value())));
                              USE(implicit_cast<TNode<Object>>(t477));
                              // ../src/builtins/typed-array.tq:225:13
                              TNode<Smi> t478 = implicit_cast<TNode<Smi>>((*low_end_165).value());
                              USE(t478);
                              TNode<Smi> t479 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                              TNode<Smi> t480 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*low_end_165).value()), implicit_cast<TNode<Smi>>(t479)));
                              *low_end_165 = implicit_cast<TNode<Smi>>(t480);
                            }
                            Goto(label__False_147);
                          }
                          BIND(label__False_147);
                        }
                      }
                      Goto(label__False_139);
                    }
                    BIND(label__False_139);
                  }
                  Goto(label_if_done_label_505_771);
                }
                BIND(label_if_done_label_505_771);
              }
            }
            Goto(label_action_504_770);
          }
          {
            BIND(label_action_504_770);
            TNode<Smi> t481 = implicit_cast<TNode<Smi>>((*idx_168).value());
            USE(t481);
            TNode<Smi> t482 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
            TNode<Smi> t483 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*idx_168).value()), implicit_cast<TNode<Smi>>(t482)));
            *idx_168 = implicit_cast<TNode<Smi>>(t483);
            Goto(label_header_503_769);
          }
          BIND(label__False_135);
          // ../src/builtins/typed-array.tq:230:7
          {
            Label label__True_148_impl(this);
            Label* label__True_148 = &label__True_148_impl;
            USE(label__True_148);
            Label label__False_149_impl(this);
            Label* label__False_149 = &label__False_149_impl;
            USE(label__False_149);
            Label label_if_done_label_509_773_impl(this, {from_159, to_160});
            Label* label_if_done_label_509_773 = &label_if_done_label_509_773_impl;
            USE(label_if_done_label_509_773);
            TNode<Smi> t484 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*to_160).value()), implicit_cast<TNode<Smi>>((*high_start_166).value())));
            USE(implicit_cast<TNode<Smi>>(t484));
            TNode<Smi> t485 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*low_end_165).value()), implicit_cast<TNode<Smi>>((*from_159).value())));
            USE(implicit_cast<TNode<Smi>>(t485));
            TNode<BoolT> t486 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(t484), implicit_cast<TNode<Smi>>(t485)));
            USE(implicit_cast<TNode<BoolT>>(t486));
            Branch(implicit_cast<TNode<BoolT>>(t486), label__True_148, label__False_149);
            if (label__True_148->is_used())
            {
              BIND(label__True_148);
              // ../src/builtins/typed-array.tq:230:49
              {
                // ../src/builtins/typed-array.tq:231:9
                TNode<JSTypedArray> t487 = UncheckedCast<JSTypedArray>(CallBuiltin(Builtins::kTypedArrayQuickSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*high_start_166).value()), implicit_cast<TNode<Smi>>((*to_160).value()), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Code>>(p_Store)));
                USE(implicit_cast<TNode<JSTypedArray>>(t487));
                // ../src/builtins/typed-array.tq:233:9
                *to_160 = implicit_cast<TNode<Smi>>((*low_end_165).value());
              }
              Goto(label_if_done_label_509_773);
            }
            if (label__False_149->is_used())
            {
              BIND(label__False_149);
              // ../src/builtins/typed-array.tq:234:14
              {
                // ../src/builtins/typed-array.tq:235:9
                TNode<JSTypedArray> t488 = UncheckedCast<JSTypedArray>(CallBuiltin(Builtins::kTypedArrayQuickSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*from_159).value()), implicit_cast<TNode<Smi>>((*low_end_165).value()), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Code>>(p_Store)));
                USE(implicit_cast<TNode<JSTypedArray>>(t488));
                // ../src/builtins/typed-array.tq:237:9
                *from_159 = implicit_cast<TNode<Smi>>((*high_start_166).value());
              }
              Goto(label_if_done_label_509_773);
            }
            BIND(label_if_done_label_509_773);
          }
        }
        Goto(label_header_494_767);
      }
      BIND(label__False_123);
    }
  }
}

TF_BUILTIN(TypedArrayQuickSort, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_from = UncheckedCast<Smi>(Parameter(Descriptor::kFrom));
  USE(p_from);
  TNode<Smi> p_to = UncheckedCast<Smi>(Parameter(Descriptor::kTo));
  USE(p_to);
  TNode<JSReceiver> p_comparefn = UncheckedCast<JSReceiver>(Parameter(Descriptor::kComparefn));
  USE(p_comparefn);
  TNode<Code> p_Load = UncheckedCast<Code>(Parameter(Descriptor::kLoad));
  USE(p_Load);
  TNode<Code> p_Store = UncheckedCast<Code>(Parameter(Descriptor::kStore));
  USE(p_Store);
  // ../src/builtins/typed-array.tq:244:72
  {
    // ../src/builtins/typed-array.tq:245:5
    {
      Label label_try_done_510_774_impl(this);
      Label* label_try_done_510_774 = &label_try_done_510_774_impl;
      USE(label_try_done_510_774);
      Label label_Detached_150_impl(this);
      Label* label_Detached_150 = &label_Detached_150_impl;
      USE(label_Detached_150);
      Label label_try_begin_511_775_impl(this);
      Label* label_try_begin_511_775 = &label_try_begin_511_775_impl;
      USE(label_try_begin_511_775);
      Goto(label_try_begin_511_775);
      if (label_try_begin_511_775->is_used())
      {
        BIND(label_try_begin_511_775);
        // ../src/builtins/typed-array.tq:245:9
        {
          // ../src/builtins/typed-array.tq:246:7
          TypedArrayQuickSortImpl(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>(p_from), implicit_cast<TNode<Smi>>(p_to), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Code>>(p_Store), label_Detached_150);
        }
        Goto(label_try_done_510_774);
      }
      if (label_Detached_150->is_used())
      {
        BIND(label_Detached_150);
        // ../src/builtins/typed-array.tq:249:20
        {
          // ../src/builtins/typed-array.tq:250:7
          const char* t489 = "%TypedArray%.prototype.sort";
          TNode<Object> t490 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(implicit_cast<const char*>(t489)));
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kDetachedOperation), implicit_cast<TNode<Object>>(t490));
        }
      }
      BIND(label_try_done_510_774);
    }
    // ../src/builtins/typed-array.tq:253:5
    Return(implicit_cast<TNode<JSTypedArray>>(p_array));
  }
}

TF_BUILTIN(TypedArrayPrototypeSort, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/typed-array.tq:258:71
  {
    // ../src/builtins/typed-array.tq:261:5
    auto t491 = [=]() {
      int31_t t493 = 0;
      TNode<IntPtrT> t494 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t493)));
      TNode<Object> t495 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t494)));
      return implicit_cast<TNode<Object>>(t495);
    };
    auto t492 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t496_512_impl);
    auto t496_512 = &t496_512_impl;
    USE(t496_512);
    {
      Label label__True_151_impl(this);
      Label* label__True_151 = &label__True_151_impl;
      USE(label__True_151);
      Label label__False_152_impl(this);
      Label* label__False_152 = &label__False_152_impl;
      USE(label__False_152);
      Label label__done_513_776_impl(this, {t496_512});
      Label* label__done_513_776 = &label__done_513_776_impl;
      USE(label__done_513_776);
      TNode<IntPtrT> t497 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t498 = 0;
      TNode<IntPtrT> t499 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t498)));
      TNode<BoolT> t500 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t497), implicit_cast<TNode<IntPtrT>>(t499)));
      USE(implicit_cast<TNode<BoolT>>(t500));
      Branch(implicit_cast<TNode<BoolT>>(t500), label__True_151, label__False_152);
      BIND(label__True_151);
            *t496_512 = implicit_cast<TNode<Object>>(t491());
      Goto(label__done_513_776);
      BIND(label__False_152);
            *t496_512 = implicit_cast<TNode<Object>>(t492());
      Goto(label__done_513_776);
      BIND(label__done_513_776);
    }
    TNode<Object> comparefn_obj_514_impl;
    auto comparefn_obj_514 = &comparefn_obj_514_impl;
    USE(comparefn_obj_514);
    *comparefn_obj_514 = implicit_cast<TNode<Object>>((*t496_512).value());
    // ../src/builtins/typed-array.tq:263:5
    {
      Label label__True_153_impl(this);
      Label* label__True_153 = &label__True_153_impl;
      USE(label__True_153);
      Label label__False_154_impl(this, {});
      Label* label__False_154 = &label__False_154_impl;
      USE(label__False_154);
      Label label__True_155_impl(this);
      Label* label__True_155 = &label__True_155_impl;
      USE(label__True_155);
      TNode<BoolT> t501 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>((*comparefn_obj_514)), implicit_cast<TNode<Object>>(Undefined())));
      USE(implicit_cast<TNode<BoolT>>(t501));
      GotoIfNot(implicit_cast<TNode<BoolT>>(t501), label__False_154);
      TNode<BoolT> t502 = UncheckedCast<BoolT>(TaggedIsCallable(implicit_cast<TNode<Object>>((*comparefn_obj_514))));
      USE(implicit_cast<TNode<BoolT>>(t502));
      TNode<BoolT> t503 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t502)));
      USE(implicit_cast<TNode<BoolT>>(t503));
      Branch(implicit_cast<TNode<BoolT>>(t503), label__True_153, label__False_154);
      if (label__True_153->is_used())
      {
        BIND(label__True_153);
        // ../src/builtins/typed-array.tq:263:73
        {
          // ../src/builtins/typed-array.tq:264:7
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kBadSortComparisonFunction), implicit_cast<TNode<Object>>((*comparefn_obj_514)));
        }
      }
      BIND(label__False_154);
    }
    // ../src/builtins/typed-array.tq:268:5
    TNode<Object> obj_515_impl;
    auto obj_515 = &obj_515_impl;
    USE(obj_515);
    *obj_515 = implicit_cast<TNode<Object>>(p_receiver);
    // ../src/builtins/typed-array.tq:272:5
    const char* t504 = "%TypedArray%.prototype.sort";
    TNode<JSTypedArray> t505 = UncheckedCast<JSTypedArray>(ValidateTypedArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*obj_515)), implicit_cast<const char*>(t504)));
    USE(implicit_cast<TNode<JSTypedArray>>(t505));
    TNode<JSTypedArray> array_516_impl;
    auto array_516 = &array_516_impl;
    USE(array_516);
    *array_516 = implicit_cast<TNode<JSTypedArray>>(t505);
    // ../src/builtins/typed-array.tq:276:5
    {
      Label label__True_156_impl(this);
      Label* label__True_156 = &label__True_156_impl;
      USE(label__True_156);
      Label label__False_157_impl(this, {});
      Label* label__False_157 = &label__False_157_impl;
      USE(label__False_157);
      TNode<BoolT> t506 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*comparefn_obj_514)), implicit_cast<TNode<Object>>(Undefined())));
      USE(implicit_cast<TNode<BoolT>>(t506));
      Branch(implicit_cast<TNode<BoolT>>(t506), label__True_156, label__False_157);
      if (label__True_156->is_used())
      {
        BIND(label__True_156);
        // ../src/builtins/typed-array.tq:276:37
        {
          // ../src/builtins/typed-array.tq:277:7
          TNode<JSTypedArray> t507 = UncheckedCast<JSTypedArray>(CallRuntime(Runtime::kTypedArraySortFast, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*obj_515))));
          USE(implicit_cast<TNode<JSTypedArray>>(t507));
          arguments->PopAndReturn(implicit_cast<TNode<JSTypedArray>>(t507));
        }
      }
      BIND(label__False_157);
    }
    // ../src/builtins/typed-array.tq:281:5
    TNode<Smi> t508 = UncheckedCast<Smi>(LoadTypedArrayLength(implicit_cast<TNode<JSTypedArray>>((*array_516))));
    TNode<Smi> len_517_impl;
    auto len_517 = &len_517_impl;
    USE(len_517);
    *len_517 = implicit_cast<TNode<Smi>>(t508);
    // ../src/builtins/typed-array.tq:283:5
    {
      Label label_try_done_518_777_impl(this);
      Label* label_try_done_518_777 = &label_try_done_518_777_impl;
      USE(label_try_done_518_777);
      Label label_CastError_158_impl(this);
      Label* label_CastError_158 = &label_CastError_158_impl;
      USE(label_CastError_158);
      Label label_try_begin_519_778_impl(this);
      Label* label_try_begin_519_778 = &label_try_begin_519_778_impl;
      USE(label_try_begin_519_778);
      Goto(label_try_begin_519_778);
      if (label_try_begin_519_778->is_used())
      {
        BIND(label_try_begin_519_778);
        // ../src/builtins/typed-array.tq:283:9
        {
          // ../src/builtins/typed-array.tq:284:7
          TNode<JSReceiver> t509 = UncheckedCast<JSReceiver>(cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(implicit_cast<TNode<Object>>((*comparefn_obj_514)), label_CastError_158));
          USE(implicit_cast<TNode<JSReceiver>>(t509));
          TNode<JSReceiver> comparefn_520_impl;
          auto comparefn_520 = &comparefn_520_impl;
          USE(comparefn_520);
          *comparefn_520 = implicit_cast<TNode<JSReceiver>>(t509);
          // ../src/builtins/typed-array.tq:286:7
          TVARIABLE(Code, loadfn_172_impl);
          auto loadfn_172 = &loadfn_172_impl;
          USE(loadfn_172);
          // ../src/builtins/typed-array.tq:287:7
          TVARIABLE(Code, storefn_173_impl);
          auto storefn_173 = &storefn_173_impl;
          USE(storefn_173);
          // ../src/builtins/typed-array.tq:289:7
          TNode<Int32T> t510 = UncheckedCast<Int32T>(LoadElementsKind(implicit_cast<TNode<JSTypedArray>>((*array_516))));
          TVARIABLE(Int32T, elements_kind_174_impl);
          auto elements_kind_174 = &elements_kind_174_impl;
          USE(elements_kind_174);
          *elements_kind_174 = implicit_cast<TNode<Int32T>>(t510);
          // ../src/builtins/typed-array.tq:291:7
          {
            Label label__True_159_impl(this);
            Label* label__True_159 = &label__True_159_impl;
            USE(label__True_159);
            Label label__False_160_impl(this);
            Label* label__False_160 = &label__False_160_impl;
            USE(label__False_160);
            Label label_if_done_label_521_779_impl(this, {loadfn_172, storefn_173});
            Label* label_if_done_label_521_779 = &label_if_done_label_521_779_impl;
            USE(label_if_done_label_521_779);
            TNode<BoolT> t511 = UncheckedCast<BoolT>(IsElementsKindGreaterThan(implicit_cast<TNode<Int32T>>((*elements_kind_174).value()), implicit_cast<ElementsKind>(UINT32_ELEMENTS)));
            USE(implicit_cast<TNode<BoolT>>(t511));
            Branch(implicit_cast<TNode<BoolT>>(t511), label__True_159, label__False_160);
            if (label__True_159->is_used())
            {
              BIND(label__True_159);
              // ../src/builtins/typed-array.tq:291:70
              {
                // ../src/builtins/typed-array.tq:292:9
                {
                  Label label__True_161_impl(this);
                  Label* label__True_161 = &label__True_161_impl;
                  USE(label__True_161);
                  Label label__False_162_impl(this);
                  Label* label__False_162 = &label__False_162_impl;
                  USE(label__False_162);
                  Label label_if_done_label_522_780_impl(this, {loadfn_172, storefn_173});
                  Label* label_if_done_label_522_780 = &label_if_done_label_522_780_impl;
                  USE(label_if_done_label_522_780);
                  TNode<Int32T> t512 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(INT32_ELEMENTS)));
                  TNode<BoolT> t513 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elements_kind_174).value()), implicit_cast<TNode<Int32T>>(t512)));
                  USE(implicit_cast<TNode<BoolT>>(t513));
                  Branch(implicit_cast<TNode<BoolT>>(t513), label__True_161, label__False_162);
                  if (label__True_161->is_used())
                  {
                    BIND(label__True_161);
                    // ../src/builtins/typed-array.tq:292:46
                    {
                      // ../src/builtins/typed-array.tq:293:11
                      *loadfn_172 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).code()));
                      // ../src/builtins/typed-array.tq:294:11
                      *storefn_173 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).code()));
                    }
                    Goto(label_if_done_label_522_780);
                  }
                  if (label__False_162->is_used())
                  {
                    BIND(label__False_162);
                    // ../src/builtins/typed-array.tq:295:16
                    {
                      Label label__True_163_impl(this);
                      Label* label__True_163 = &label__True_163_impl;
                      USE(label__True_163);
                      Label label__False_164_impl(this);
                      Label* label__False_164 = &label__False_164_impl;
                      USE(label__False_164);
                      Label label_if_done_label_523_781_impl(this, {loadfn_172, storefn_173});
                      Label* label_if_done_label_523_781 = &label_if_done_label_523_781_impl;
                      USE(label_if_done_label_523_781);
                      TNode<Int32T> t514 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(FLOAT32_ELEMENTS)));
                      TNode<BoolT> t515 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elements_kind_174).value()), implicit_cast<TNode<Int32T>>(t514)));
                      USE(implicit_cast<TNode<BoolT>>(t515));
                      Branch(implicit_cast<TNode<BoolT>>(t515), label__True_163, label__False_164);
                      if (label__True_163->is_used())
                      {
                        BIND(label__True_163);
                        // ../src/builtins/typed-array.tq:295:55
                        {
                          // ../src/builtins/typed-array.tq:296:11
                          *loadfn_172 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement19ATFixedFloat32Array).code()));
                          // ../src/builtins/typed-array.tq:297:11
                          *storefn_173 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement19ATFixedFloat32Array).code()));
                        }
                        Goto(label_if_done_label_523_781);
                      }
                      if (label__False_164->is_used())
                      {
                        BIND(label__False_164);
                        // ../src/builtins/typed-array.tq:298:16
                        {
                          Label label__True_165_impl(this);
                          Label* label__True_165 = &label__True_165_impl;
                          USE(label__True_165);
                          Label label__False_166_impl(this);
                          Label* label__False_166 = &label__False_166_impl;
                          USE(label__False_166);
                          Label label_if_done_label_524_782_impl(this, {loadfn_172, storefn_173});
                          Label* label_if_done_label_524_782 = &label_if_done_label_524_782_impl;
                          USE(label_if_done_label_524_782);
                          TNode<Int32T> t516 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(FLOAT64_ELEMENTS)));
                          TNode<BoolT> t517 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elements_kind_174).value()), implicit_cast<TNode<Int32T>>(t516)));
                          USE(implicit_cast<TNode<BoolT>>(t517));
                          Branch(implicit_cast<TNode<BoolT>>(t517), label__True_165, label__False_166);
                          if (label__True_165->is_used())
                          {
                            BIND(label__True_165);
                            // ../src/builtins/typed-array.tq:298:55
                            {
                              // ../src/builtins/typed-array.tq:299:11
                              *loadfn_172 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement19ATFixedFloat64Array).code()));
                              // ../src/builtins/typed-array.tq:300:11
                              *storefn_173 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement19ATFixedFloat64Array).code()));
                            }
                            Goto(label_if_done_label_524_782);
                          }
                          if (label__False_166->is_used())
                          {
                            BIND(label__False_166);
                            // ../src/builtins/typed-array.tq:301:16
                            {
                              Label label__True_167_impl(this);
                              Label* label__True_167 = &label__True_167_impl;
                              USE(label__True_167);
                              Label label__False_168_impl(this);
                              Label* label__False_168 = &label__False_168_impl;
                              USE(label__False_168);
                              Label label_if_done_label_525_783_impl(this, {loadfn_172, storefn_173});
                              Label* label_if_done_label_525_783 = &label_if_done_label_525_783_impl;
                              USE(label_if_done_label_525_783);
                              TNode<Int32T> t518 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(UINT8_CLAMPED_ELEMENTS)));
                              TNode<BoolT> t519 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elements_kind_174).value()), implicit_cast<TNode<Int32T>>(t518)));
                              USE(implicit_cast<TNode<BoolT>>(t519));
                              Branch(implicit_cast<TNode<BoolT>>(t519), label__True_167, label__False_168);
                              if (label__True_167->is_used())
                              {
                                BIND(label__True_167);
                                // ../src/builtins/typed-array.tq:301:61
                                {
                                  // ../src/builtins/typed-array.tq:302:11
                                  *loadfn_172 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement24ATFixedUint8ClampedArray).code()));
                                  // ../src/builtins/typed-array.tq:303:11
                                  *storefn_173 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement24ATFixedUint8ClampedArray).code()));
                                }
                                Goto(label_if_done_label_525_783);
                              }
                              if (label__False_168->is_used())
                              {
                                BIND(label__False_168);
                                // ../src/builtins/typed-array.tq:304:16
                                {
                                  Label label__True_169_impl(this);
                                  Label* label__True_169 = &label__True_169_impl;
                                  USE(label__True_169);
                                  Label label__False_170_impl(this);
                                  Label* label__False_170 = &label__False_170_impl;
                                  USE(label__False_170);
                                  Label label_if_done_label_526_784_impl(this, {loadfn_172, storefn_173});
                                  Label* label_if_done_label_526_784 = &label_if_done_label_526_784_impl;
                                  USE(label_if_done_label_526_784);
                                  TNode<Int32T> t520 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS)));
                                  TNode<BoolT> t521 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elements_kind_174).value()), implicit_cast<TNode<Int32T>>(t520)));
                                  USE(implicit_cast<TNode<BoolT>>(t521));
                                  Branch(implicit_cast<TNode<BoolT>>(t521), label__True_169, label__False_170);
                                  if (label__True_169->is_used())
                                  {
                                    BIND(label__True_169);
                                    // ../src/builtins/typed-array.tq:304:57
                                    {
                                      // ../src/builtins/typed-array.tq:305:11
                                      *loadfn_172 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement21ATFixedBigUint64Array).code()));
                                      // ../src/builtins/typed-array.tq:306:11
                                      *storefn_173 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement21ATFixedBigUint64Array).code()));
                                    }
                                    Goto(label_if_done_label_526_784);
                                  }
                                  if (label__False_170->is_used())
                                  {
                                    BIND(label__False_170);
                                    // ../src/builtins/typed-array.tq:307:16
                                    {
                                      Label label__True_171_impl(this);
                                      Label* label__True_171 = &label__True_171_impl;
                                      USE(label__True_171);
                                      Label label__False_172_impl(this);
                                      Label* label__False_172 = &label__False_172_impl;
                                      USE(label__False_172);
                                      Label label_if_done_label_527_785_impl(this, {loadfn_172, storefn_173});
                                      Label* label_if_done_label_527_785 = &label_if_done_label_527_785_impl;
                                      USE(label_if_done_label_527_785);
                                      TNode<Int32T> t522 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(BIGINT64_ELEMENTS)));
                                      TNode<BoolT> t523 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elements_kind_174).value()), implicit_cast<TNode<Int32T>>(t522)));
                                      USE(implicit_cast<TNode<BoolT>>(t523));
                                      Branch(implicit_cast<TNode<BoolT>>(t523), label__True_171, label__False_172);
                                      if (label__True_171->is_used())
                                      {
                                        BIND(label__True_171);
                                        // ../src/builtins/typed-array.tq:307:56
                                        {
                                          // ../src/builtins/typed-array.tq:308:11
                                          *loadfn_172 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement20ATFixedBigInt64Array).code()));
                                          // ../src/builtins/typed-array.tq:309:11
                                          *storefn_173 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement20ATFixedBigInt64Array).code()));
                                        }
                                        Goto(label_if_done_label_527_785);
                                      }
                                      if (label__False_172->is_used())
                                      {
                                        BIND(label__False_172);
                                        // ../src/builtins/typed-array.tq:310:16
                                        {
                                          // ../src/builtins/typed-array.tq:311:11
                                          Unreachable();
                                        }
                                      }
                                      BIND(label_if_done_label_527_785);
                                    }
                                    Goto(label_if_done_label_526_784);
                                  }
                                  BIND(label_if_done_label_526_784);
                                }
                                Goto(label_if_done_label_525_783);
                              }
                              BIND(label_if_done_label_525_783);
                            }
                            Goto(label_if_done_label_524_782);
                          }
                          BIND(label_if_done_label_524_782);
                        }
                        Goto(label_if_done_label_523_781);
                      }
                      BIND(label_if_done_label_523_781);
                    }
                    Goto(label_if_done_label_522_780);
                  }
                  BIND(label_if_done_label_522_780);
                }
              }
              Goto(label_if_done_label_521_779);
            }
            if (label__False_160->is_used())
            {
              BIND(label__False_160);
              // ../src/builtins/typed-array.tq:313:14
              {
                // ../src/builtins/typed-array.tq:314:9
                {
                  Label label__True_173_impl(this);
                  Label* label__True_173 = &label__True_173_impl;
                  USE(label__True_173);
                  Label label__False_174_impl(this);
                  Label* label__False_174 = &label__False_174_impl;
                  USE(label__False_174);
                  Label label_if_done_label_528_786_impl(this, {loadfn_172, storefn_173});
                  Label* label_if_done_label_528_786 = &label_if_done_label_528_786_impl;
                  USE(label_if_done_label_528_786);
                  TNode<Int32T> t524 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(UINT8_ELEMENTS)));
                  TNode<BoolT> t525 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elements_kind_174).value()), implicit_cast<TNode<Int32T>>(t524)));
                  USE(implicit_cast<TNode<BoolT>>(t525));
                  Branch(implicit_cast<TNode<BoolT>>(t525), label__True_173, label__False_174);
                  if (label__True_173->is_used())
                  {
                    BIND(label__True_173);
                    // ../src/builtins/typed-array.tq:314:46
                    {
                      // ../src/builtins/typed-array.tq:315:11
                      *loadfn_172 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedUint8Array).code()));
                      // ../src/builtins/typed-array.tq:316:11
                      *storefn_173 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedUint8Array).code()));
                    }
                    Goto(label_if_done_label_528_786);
                  }
                  if (label__False_174->is_used())
                  {
                    BIND(label__False_174);
                    // ../src/builtins/typed-array.tq:317:16
                    {
                      Label label__True_175_impl(this);
                      Label* label__True_175 = &label__True_175_impl;
                      USE(label__True_175);
                      Label label__False_176_impl(this);
                      Label* label__False_176 = &label__False_176_impl;
                      USE(label__False_176);
                      Label label_if_done_label_529_787_impl(this, {loadfn_172, storefn_173});
                      Label* label_if_done_label_529_787 = &label_if_done_label_529_787_impl;
                      USE(label_if_done_label_529_787);
                      TNode<Int32T> t526 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(INT8_ELEMENTS)));
                      TNode<BoolT> t527 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elements_kind_174).value()), implicit_cast<TNode<Int32T>>(t526)));
                      USE(implicit_cast<TNode<BoolT>>(t527));
                      Branch(implicit_cast<TNode<BoolT>>(t527), label__True_175, label__False_176);
                      if (label__True_175->is_used())
                      {
                        BIND(label__True_175);
                        // ../src/builtins/typed-array.tq:317:52
                        {
                          // ../src/builtins/typed-array.tq:318:11
                          *loadfn_172 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement16ATFixedInt8Array).code()));
                          // ../src/builtins/typed-array.tq:319:11
                          *storefn_173 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement16ATFixedInt8Array).code()));
                        }
                        Goto(label_if_done_label_529_787);
                      }
                      if (label__False_176->is_used())
                      {
                        BIND(label__False_176);
                        // ../src/builtins/typed-array.tq:320:16
                        {
                          Label label__True_177_impl(this);
                          Label* label__True_177 = &label__True_177_impl;
                          USE(label__True_177);
                          Label label__False_178_impl(this);
                          Label* label__False_178 = &label__False_178_impl;
                          USE(label__False_178);
                          Label label_if_done_label_530_788_impl(this, {loadfn_172, storefn_173});
                          Label* label_if_done_label_530_788 = &label_if_done_label_530_788_impl;
                          USE(label_if_done_label_530_788);
                          TNode<Int32T> t528 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(UINT16_ELEMENTS)));
                          TNode<BoolT> t529 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elements_kind_174).value()), implicit_cast<TNode<Int32T>>(t528)));
                          USE(implicit_cast<TNode<BoolT>>(t529));
                          Branch(implicit_cast<TNode<BoolT>>(t529), label__True_177, label__False_178);
                          if (label__True_177->is_used())
                          {
                            BIND(label__True_177);
                            // ../src/builtins/typed-array.tq:320:54
                            {
                              // ../src/builtins/typed-array.tq:321:11
                              *loadfn_172 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement18ATFixedUint16Array).code()));
                              // ../src/builtins/typed-array.tq:322:11
                              *storefn_173 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement18ATFixedUint16Array).code()));
                            }
                            Goto(label_if_done_label_530_788);
                          }
                          if (label__False_178->is_used())
                          {
                            BIND(label__False_178);
                            // ../src/builtins/typed-array.tq:323:16
                            {
                              Label label__True_179_impl(this);
                              Label* label__True_179 = &label__True_179_impl;
                              USE(label__True_179);
                              Label label__False_180_impl(this);
                              Label* label__False_180 = &label__False_180_impl;
                              USE(label__False_180);
                              Label label_if_done_label_531_789_impl(this, {loadfn_172, storefn_173});
                              Label* label_if_done_label_531_789 = &label_if_done_label_531_789_impl;
                              USE(label_if_done_label_531_789);
                              TNode<Int32T> t530 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(INT16_ELEMENTS)));
                              TNode<BoolT> t531 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elements_kind_174).value()), implicit_cast<TNode<Int32T>>(t530)));
                              USE(implicit_cast<TNode<BoolT>>(t531));
                              Branch(implicit_cast<TNode<BoolT>>(t531), label__True_179, label__False_180);
                              if (label__True_179->is_used())
                              {
                                BIND(label__True_179);
                                // ../src/builtins/typed-array.tq:323:53
                                {
                                  // ../src/builtins/typed-array.tq:324:11
                                  *loadfn_172 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt16Array).code()));
                                  // ../src/builtins/typed-array.tq:325:11
                                  *storefn_173 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt16Array).code()));
                                }
                                Goto(label_if_done_label_531_789);
                              }
                              if (label__False_180->is_used())
                              {
                                BIND(label__False_180);
                                // ../src/builtins/typed-array.tq:326:16
                                {
                                  Label label__True_181_impl(this);
                                  Label* label__True_181 = &label__True_181_impl;
                                  USE(label__True_181);
                                  Label label__False_182_impl(this);
                                  Label* label__False_182 = &label__False_182_impl;
                                  USE(label__False_182);
                                  Label label_if_done_label_532_790_impl(this, {loadfn_172, storefn_173});
                                  Label* label_if_done_label_532_790 = &label_if_done_label_532_790_impl;
                                  USE(label_if_done_label_532_790);
                                  TNode<Int32T> t532 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(UINT32_ELEMENTS)));
                                  TNode<BoolT> t533 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elements_kind_174).value()), implicit_cast<TNode<Int32T>>(t532)));
                                  USE(implicit_cast<TNode<BoolT>>(t533));
                                  Branch(implicit_cast<TNode<BoolT>>(t533), label__True_181, label__False_182);
                                  if (label__True_181->is_used())
                                  {
                                    BIND(label__True_181);
                                    // ../src/builtins/typed-array.tq:326:54
                                    {
                                      // ../src/builtins/typed-array.tq:327:11
                                      *loadfn_172 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement18ATFixedUint32Array).code()));
                                      // ../src/builtins/typed-array.tq:328:11
                                      *storefn_173 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement18ATFixedUint32Array).code()));
                                    }
                                    Goto(label_if_done_label_532_790);
                                  }
                                  if (label__False_182->is_used())
                                  {
                                    BIND(label__False_182);
                                    // ../src/builtins/typed-array.tq:329:16
                                    {
                                      // ../src/builtins/typed-array.tq:330:11
                                      Unreachable();
                                    }
                                  }
                                  BIND(label_if_done_label_532_790);
                                }
                                Goto(label_if_done_label_531_789);
                              }
                              BIND(label_if_done_label_531_789);
                            }
                            Goto(label_if_done_label_530_788);
                          }
                          BIND(label_if_done_label_530_788);
                        }
                        Goto(label_if_done_label_529_787);
                      }
                      BIND(label_if_done_label_529_787);
                    }
                    Goto(label_if_done_label_528_786);
                  }
                  BIND(label_if_done_label_528_786);
                }
              }
              Goto(label_if_done_label_521_779);
            }
            BIND(label_if_done_label_521_779);
          }
          // ../src/builtins/typed-array.tq:334:7
          int31_t t534 = 0;
          TNode<Smi> t535 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t534)));
          TNode<JSTypedArray> t536 = UncheckedCast<JSTypedArray>(CallBuiltin(Builtins::kTypedArrayQuickSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>((*array_516)), implicit_cast<TNode<Smi>>(t535), implicit_cast<TNode<Smi>>((*len_517)), implicit_cast<TNode<JSReceiver>>((*comparefn_520)), implicit_cast<TNode<Code>>((*loadfn_172).value()), implicit_cast<TNode<Code>>((*storefn_173).value())));
          USE(implicit_cast<TNode<JSTypedArray>>(t536));
        }
        Goto(label_try_done_518_777);
      }
      if (label_CastError_158->is_used())
      {
        BIND(label_CastError_158);
        // ../src/builtins/typed-array.tq:336:21
        {
          // ../src/builtins/typed-array.tq:337:7
          Unreachable();
        }
      }
      BIND(label_try_done_518_777);
    }
    // ../src/builtins/typed-array.tq:339:5
    arguments->PopAndReturn(implicit_cast<TNode<JSTypedArray>>((*array_516)));
  }
}

TF_BUILTIN(LoadFixedElement17ATFixedInt32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../src/builtins/typed-array.tq:55:66
  {
    // ../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t2121 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t2122 = KindForArrayType17ATFixedInt32Array();
    USE(implicit_cast<ElementsKind>(t2122));
    TNode<Object> t2123 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t2121), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t2122), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t2123));
    Return(implicit_cast<TNode<Object>>(t2123));
  }
}

TF_BUILTIN(StoreFixedElement17ATFixedInt32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../src/builtins/typed-array.tq:62:30
  {
    // ../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t2124 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t2125 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t2124)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t2125));
    TNode<FixedTypedArrayBase> elements_694_impl;
    auto elements_694 = &elements_694_impl;
    USE(elements_694);
    *elements_694 = implicit_cast<TNode<FixedTypedArrayBase>>(t2125);
    // ../src/builtins/typed-array.tq:65:5
    ElementsKind t2126 = KindForArrayType17ATFixedInt32Array();
    USE(implicit_cast<ElementsKind>(t2126));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_694)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t2126), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement19ATFixedFloat32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../src/builtins/typed-array.tq:55:66
  {
    // ../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t2127 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t2128 = KindForArrayType19ATFixedFloat32Array();
    USE(implicit_cast<ElementsKind>(t2128));
    TNode<Object> t2129 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t2127), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t2128), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t2129));
    Return(implicit_cast<TNode<Object>>(t2129));
  }
}

TF_BUILTIN(StoreFixedElement19ATFixedFloat32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../src/builtins/typed-array.tq:62:30
  {
    // ../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t2130 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t2131 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t2130)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t2131));
    TNode<FixedTypedArrayBase> elements_695_impl;
    auto elements_695 = &elements_695_impl;
    USE(elements_695);
    *elements_695 = implicit_cast<TNode<FixedTypedArrayBase>>(t2131);
    // ../src/builtins/typed-array.tq:65:5
    ElementsKind t2132 = KindForArrayType19ATFixedFloat32Array();
    USE(implicit_cast<ElementsKind>(t2132));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_695)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t2132), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement19ATFixedFloat64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../src/builtins/typed-array.tq:55:66
  {
    // ../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t2133 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t2134 = KindForArrayType19ATFixedFloat64Array();
    USE(implicit_cast<ElementsKind>(t2134));
    TNode<Object> t2135 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t2133), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t2134), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t2135));
    Return(implicit_cast<TNode<Object>>(t2135));
  }
}

TF_BUILTIN(StoreFixedElement19ATFixedFloat64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../src/builtins/typed-array.tq:62:30
  {
    // ../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t2136 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t2137 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t2136)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t2137));
    TNode<FixedTypedArrayBase> elements_696_impl;
    auto elements_696 = &elements_696_impl;
    USE(elements_696);
    *elements_696 = implicit_cast<TNode<FixedTypedArrayBase>>(t2137);
    // ../src/builtins/typed-array.tq:65:5
    ElementsKind t2138 = KindForArrayType19ATFixedFloat64Array();
    USE(implicit_cast<ElementsKind>(t2138));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_696)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t2138), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement24ATFixedUint8ClampedArray, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../src/builtins/typed-array.tq:55:66
  {
    // ../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t2139 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t2140 = KindForArrayType24ATFixedUint8ClampedArray();
    USE(implicit_cast<ElementsKind>(t2140));
    TNode<Object> t2141 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t2139), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t2140), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t2141));
    Return(implicit_cast<TNode<Object>>(t2141));
  }
}

TF_BUILTIN(StoreFixedElement24ATFixedUint8ClampedArray, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../src/builtins/typed-array.tq:62:30
  {
    // ../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t2142 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t2143 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t2142)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t2143));
    TNode<FixedTypedArrayBase> elements_697_impl;
    auto elements_697 = &elements_697_impl;
    USE(elements_697);
    *elements_697 = implicit_cast<TNode<FixedTypedArrayBase>>(t2143);
    // ../src/builtins/typed-array.tq:65:5
    ElementsKind t2144 = KindForArrayType24ATFixedUint8ClampedArray();
    USE(implicit_cast<ElementsKind>(t2144));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_697)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t2144), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement21ATFixedBigUint64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../src/builtins/typed-array.tq:55:66
  {
    // ../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t2145 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t2146 = KindForArrayType21ATFixedBigUint64Array();
    USE(implicit_cast<ElementsKind>(t2146));
    TNode<Object> t2147 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t2145), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t2146), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t2147));
    Return(implicit_cast<TNode<Object>>(t2147));
  }
}

TF_BUILTIN(StoreFixedElement21ATFixedBigUint64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../src/builtins/typed-array.tq:62:30
  {
    // ../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t2148 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t2149 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t2148)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t2149));
    TNode<FixedTypedArrayBase> elements_698_impl;
    auto elements_698 = &elements_698_impl;
    USE(elements_698);
    *elements_698 = implicit_cast<TNode<FixedTypedArrayBase>>(t2149);
    // ../src/builtins/typed-array.tq:65:5
    ElementsKind t2150 = KindForArrayType21ATFixedBigUint64Array();
    USE(implicit_cast<ElementsKind>(t2150));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_698)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t2150), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement20ATFixedBigInt64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../src/builtins/typed-array.tq:55:66
  {
    // ../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t2151 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t2152 = KindForArrayType20ATFixedBigInt64Array();
    USE(implicit_cast<ElementsKind>(t2152));
    TNode<Object> t2153 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t2151), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t2152), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t2153));
    Return(implicit_cast<TNode<Object>>(t2153));
  }
}

TF_BUILTIN(StoreFixedElement20ATFixedBigInt64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../src/builtins/typed-array.tq:62:30
  {
    // ../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t2154 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t2155 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t2154)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t2155));
    TNode<FixedTypedArrayBase> elements_699_impl;
    auto elements_699 = &elements_699_impl;
    USE(elements_699);
    *elements_699 = implicit_cast<TNode<FixedTypedArrayBase>>(t2155);
    // ../src/builtins/typed-array.tq:65:5
    ElementsKind t2156 = KindForArrayType20ATFixedBigInt64Array();
    USE(implicit_cast<ElementsKind>(t2156));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_699)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t2156), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement17ATFixedUint8Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../src/builtins/typed-array.tq:55:66
  {
    // ../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t2157 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t2158 = KindForArrayType17ATFixedUint8Array();
    USE(implicit_cast<ElementsKind>(t2158));
    TNode<Object> t2159 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t2157), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t2158), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t2159));
    Return(implicit_cast<TNode<Object>>(t2159));
  }
}

TF_BUILTIN(StoreFixedElement17ATFixedUint8Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../src/builtins/typed-array.tq:62:30
  {
    // ../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t2160 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t2161 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t2160)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t2161));
    TNode<FixedTypedArrayBase> elements_700_impl;
    auto elements_700 = &elements_700_impl;
    USE(elements_700);
    *elements_700 = implicit_cast<TNode<FixedTypedArrayBase>>(t2161);
    // ../src/builtins/typed-array.tq:65:5
    ElementsKind t2162 = KindForArrayType17ATFixedUint8Array();
    USE(implicit_cast<ElementsKind>(t2162));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_700)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t2162), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement16ATFixedInt8Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../src/builtins/typed-array.tq:55:66
  {
    // ../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t2163 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t2164 = KindForArrayType16ATFixedInt8Array();
    USE(implicit_cast<ElementsKind>(t2164));
    TNode<Object> t2165 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t2163), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t2164), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t2165));
    Return(implicit_cast<TNode<Object>>(t2165));
  }
}

TF_BUILTIN(StoreFixedElement16ATFixedInt8Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../src/builtins/typed-array.tq:62:30
  {
    // ../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t2166 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t2167 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t2166)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t2167));
    TNode<FixedTypedArrayBase> elements_701_impl;
    auto elements_701 = &elements_701_impl;
    USE(elements_701);
    *elements_701 = implicit_cast<TNode<FixedTypedArrayBase>>(t2167);
    // ../src/builtins/typed-array.tq:65:5
    ElementsKind t2168 = KindForArrayType16ATFixedInt8Array();
    USE(implicit_cast<ElementsKind>(t2168));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_701)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t2168), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement18ATFixedUint16Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../src/builtins/typed-array.tq:55:66
  {
    // ../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t2169 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t2170 = KindForArrayType18ATFixedUint16Array();
    USE(implicit_cast<ElementsKind>(t2170));
    TNode<Object> t2171 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t2169), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t2170), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t2171));
    Return(implicit_cast<TNode<Object>>(t2171));
  }
}

TF_BUILTIN(StoreFixedElement18ATFixedUint16Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../src/builtins/typed-array.tq:62:30
  {
    // ../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t2172 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t2173 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t2172)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t2173));
    TNode<FixedTypedArrayBase> elements_702_impl;
    auto elements_702 = &elements_702_impl;
    USE(elements_702);
    *elements_702 = implicit_cast<TNode<FixedTypedArrayBase>>(t2173);
    // ../src/builtins/typed-array.tq:65:5
    ElementsKind t2174 = KindForArrayType18ATFixedUint16Array();
    USE(implicit_cast<ElementsKind>(t2174));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_702)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t2174), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement17ATFixedInt16Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../src/builtins/typed-array.tq:55:66
  {
    // ../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t2175 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t2176 = KindForArrayType17ATFixedInt16Array();
    USE(implicit_cast<ElementsKind>(t2176));
    TNode<Object> t2177 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t2175), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t2176), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t2177));
    Return(implicit_cast<TNode<Object>>(t2177));
  }
}

TF_BUILTIN(StoreFixedElement17ATFixedInt16Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../src/builtins/typed-array.tq:62:30
  {
    // ../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t2178 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t2179 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t2178)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t2179));
    TNode<FixedTypedArrayBase> elements_703_impl;
    auto elements_703 = &elements_703_impl;
    USE(elements_703);
    *elements_703 = implicit_cast<TNode<FixedTypedArrayBase>>(t2179);
    // ../src/builtins/typed-array.tq:65:5
    ElementsKind t2180 = KindForArrayType17ATFixedInt16Array();
    USE(implicit_cast<ElementsKind>(t2180));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_703)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t2180), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement18ATFixedUint32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../src/builtins/typed-array.tq:55:66
  {
    // ../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t2181 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t2182 = KindForArrayType18ATFixedUint32Array();
    USE(implicit_cast<ElementsKind>(t2182));
    TNode<Object> t2183 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t2181), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t2182), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t2183));
    Return(implicit_cast<TNode<Object>>(t2183));
  }
}

TF_BUILTIN(StoreFixedElement18ATFixedUint32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../src/builtins/typed-array.tq:62:30
  {
    // ../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t2184 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t2185 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t2184)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t2185));
    TNode<FixedTypedArrayBase> elements_704_impl;
    auto elements_704 = &elements_704_impl;
    USE(elements_704);
    *elements_704 = implicit_cast<TNode<FixedTypedArrayBase>>(t2185);
    // ../src/builtins/typed-array.tq:65:5
    ElementsKind t2186 = KindForArrayType18ATFixedUint32Array();
    USE(implicit_cast<ElementsKind>(t2186));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_704)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t2186), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

}  // namespace internal
}  // namespace v8

