#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/bigint.h"
#include "builtins-array-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

compiler::TNode<Number> ArrayBuiltinsFromDSLAssembler::GetLengthProperty(TNode<Context> p_context, TNode<Object> p_o) {
  TVARIABLE(Number, _return_72_impl);
  auto _return_72 = &_return_72_impl;
  USE(_return_72);
  Label label_macro_end_705_impl(this, {_return_72});
  Label* label_macro_end_705 = &label_macro_end_705_impl;
  USE(label_macro_end_705);
  // ../src/builtins/array.tq:6:64
  {
    // ../src/builtins/array.tq:7:5
    {
      Label label__True_24_impl(this);
      Label* label__True_24 = &label__True_24_impl;
      USE(label__True_24);
      Label label__False_25_impl(this);
      Label* label__False_25 = &label__False_25_impl;
      USE(label__False_25);
      Label label_if_done_label_441_706_impl(this, {});
      Label* label_if_done_label_441_706 = &label_if_done_label_441_706_impl;
      USE(label_if_done_label_441_706);
      BranchIfFastJSArray(implicit_cast<TNode<Object>>(p_o), implicit_cast<TNode<Context>>(p_context), label__True_24, label__False_25);
      if (label__True_24->is_used())
      {
        BIND(label__True_24);
        // ../src/builtins/array.tq:7:42
        {
          // ../src/builtins/array.tq:8:7
          TNode<JSArray> t97 = UncheckedCast<JSArray>(unsafe_cast9ATJSArray(implicit_cast<TNode<Object>>(p_o)));
          USE(implicit_cast<TNode<JSArray>>(t97));
          TVARIABLE(JSArray, a_73_impl);
          auto a_73 = &a_73_impl;
          USE(a_73);
          *a_73 = implicit_cast<TNode<JSArray>>(t97);
          // ../src/builtins/array.tq:9:7
          TNode<Smi> t98 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*a_73).value())));
          *_return_72 = implicit_cast<TNode<Number>>(t98);
          Goto(label_macro_end_705);
        }
      }
      if (label__False_25->is_used())
      {
        BIND(label__False_25);
        // ../src/builtins/array.tq:11:7
        {
          // ../src/builtins/array.tq:12:9
          const char* t99 = "length";
          TNode<Object> t100 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(implicit_cast<const char*>(t99)));
          TNode<Object> t101 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_o), implicit_cast<TNode<Object>>(t100)));
          USE(implicit_cast<TNode<Object>>(t101));
          TNode<Number> t102 = UncheckedCast<Number>(ToLength_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t101)));
          USE(implicit_cast<TNode<Number>>(t102));
          *_return_72 = implicit_cast<TNode<Number>>(t102);
          Goto(label_macro_end_705);
        }
      }
    }
  }
  BIND(label_macro_end_705);
  return implicit_cast<TNode<Number>>((*_return_72).value());
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::FastArraySplice(TNode<Context> p_context, CodeStubArguments* p_args, TNode<Object> p_o, TNode<Number> p_originalLengthNumber, TNode<Number> p_actualStartNumber, TNode<Smi> p_insertCount, TNode<Number> p_actualDeleteCountNumber, Label* label_Bailout_26) {
  TVARIABLE(Object, _return_74_impl);
  auto _return_74 = &_return_74_impl;
  USE(_return_74);
  Label label_macro_end_707_impl(this, {_return_74});
  Label* label_macro_end_707 = &label_macro_end_707_impl;
  USE(label_macro_end_707);
  // ../src/builtins/array.tq:20:18
  {
    // ../src/builtins/array.tq:21:5
    TNode<Smi> t103 = UncheckedCast<Smi>(cast5ATSmi(implicit_cast<TNode<Object>>(p_originalLengthNumber), label_Bailout_26));
    USE(implicit_cast<TNode<Smi>>(t103));
    TVARIABLE(Smi, originalLength_75_impl);
    auto originalLength_75 = &originalLength_75_impl;
    USE(originalLength_75);
    *originalLength_75 = implicit_cast<TNode<Smi>>(t103);
    // ../src/builtins/array.tq:22:5
    TNode<Smi> t104 = UncheckedCast<Smi>(cast5ATSmi(implicit_cast<TNode<Object>>(p_actualStartNumber), label_Bailout_26));
    USE(implicit_cast<TNode<Smi>>(t104));
    TVARIABLE(Smi, actualStart_76_impl);
    auto actualStart_76 = &actualStart_76_impl;
    USE(actualStart_76);
    *actualStart_76 = implicit_cast<TNode<Smi>>(t104);
    // ../src/builtins/array.tq:23:5
    TNode<Smi> t105 = UncheckedCast<Smi>(cast5ATSmi(implicit_cast<TNode<Object>>(p_actualDeleteCountNumber), label_Bailout_26));
    USE(implicit_cast<TNode<Smi>>(t105));
    TVARIABLE(Smi, actualDeleteCount_77_impl);
    auto actualDeleteCount_77 = &actualDeleteCount_77_impl;
    USE(actualDeleteCount_77);
    *actualDeleteCount_77 = implicit_cast<TNode<Smi>>(t105);
    // ../src/builtins/array.tq:25:5
    TNode<Smi> t106 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_insertCount), implicit_cast<TNode<Smi>>((*actualDeleteCount_77).value())));
    USE(implicit_cast<TNode<Smi>>(t106));
    TVARIABLE(Smi, lengthDelta_78_impl);
    auto lengthDelta_78 = &lengthDelta_78_impl;
    USE(lengthDelta_78);
    *lengthDelta_78 = implicit_cast<TNode<Smi>>(t106);
    // ../src/builtins/array.tq:26:5
    TNode<Smi> t107 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*originalLength_75).value()), implicit_cast<TNode<Smi>>((*lengthDelta_78).value())));
    USE(implicit_cast<TNode<Smi>>(t107));
    TVARIABLE(Smi, newLength_79_impl);
    auto newLength_79 = &newLength_79_impl;
    USE(newLength_79);
    *newLength_79 = implicit_cast<TNode<Smi>>(t107);
    // ../src/builtins/array.tq:28:5
    TNode<JSArray> t108 = UncheckedCast<JSArray>(cast9ATJSArray(implicit_cast<TNode<Object>>(p_o), label_Bailout_26));
    USE(implicit_cast<TNode<JSArray>>(t108));
    TVARIABLE(JSArray, a_80_impl);
    auto a_80 = &a_80_impl;
    USE(a_80);
    *a_80 = implicit_cast<TNode<JSArray>>(t108);
    // ../src/builtins/array.tq:30:5
    TNode<Map> t109 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*a_80).value())));
    TVARIABLE(Map, map_81_impl);
    auto map_81 = &map_81_impl;
    USE(map_81);
    *map_81 = implicit_cast<TNode<Map>>(t109);
    // ../src/builtins/array.tq:31:5
    {
      Label label__True_27_impl(this);
      Label* label__True_27 = &label__True_27_impl;
      USE(label__True_27);
      Label label__False_28_impl(this, {});
      Label* label__False_28 = &label__False_28_impl;
      USE(label__False_28);
      TNode<BoolT> t110 = UncheckedCast<BoolT>(IsPrototypeInitialArrayPrototype(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Map>>((*map_81).value())));
      USE(implicit_cast<TNode<BoolT>>(t110));
      TNode<BoolT> t111 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t110)));
      USE(implicit_cast<TNode<BoolT>>(t111));
      Branch(implicit_cast<TNode<BoolT>>(t111), label__True_27, label__False_28);
      if (label__True_27->is_used())
      {
        BIND(label__True_27);
        // ../src/builtins/array.tq:31:58
        Goto(label_Bailout_26);
      }
      BIND(label__False_28);
    }
    // ../src/builtins/array.tq:32:5
    {
      Label label__True_29_impl(this);
      Label* label__True_29 = &label__True_29_impl;
      USE(label__True_29);
      Label label__False_30_impl(this, {});
      Label* label__False_30 = &label__False_30_impl;
      USE(label__False_30);
      TNode<BoolT> t112 = UncheckedCast<BoolT>(IsNoElementsProtectorCellInvalid());
      USE(implicit_cast<TNode<BoolT>>(t112));
      Branch(implicit_cast<TNode<BoolT>>(t112), label__True_29, label__False_30);
      if (label__True_29->is_used())
      {
        BIND(label__True_29);
        // ../src/builtins/array.tq:32:45
        Goto(label_Bailout_26);
      }
      BIND(label__False_30);
    }
    // ../src/builtins/array.tq:33:5
    {
      Label label__True_31_impl(this);
      Label* label__True_31 = &label__True_31_impl;
      USE(label__True_31);
      Label label__False_32_impl(this, {});
      Label* label__False_32 = &label__False_32_impl;
      USE(label__False_32);
      TNode<BoolT> t113 = UncheckedCast<BoolT>(IsArraySpeciesProtectorCellInvalid());
      USE(implicit_cast<TNode<BoolT>>(t113));
      Branch(implicit_cast<TNode<BoolT>>(t113), label__True_31, label__False_32);
      if (label__True_31->is_used())
      {
        BIND(label__True_31);
        // ../src/builtins/array.tq:33:47
        Goto(label_Bailout_26);
      }
      BIND(label__False_32);
    }
    // ../src/builtins/array.tq:36:5
    TNode<Int32T> t114 = UncheckedCast<Int32T>(EnsureArrayPushable(implicit_cast<TNode<Map>>((*map_81).value()), label_Bailout_26));
    USE(implicit_cast<TNode<Int32T>>(t114));
    TVARIABLE(Int32T, elementsKind_82_impl);
    auto elementsKind_82 = &elementsKind_82_impl;
    USE(elementsKind_82);
    *elementsKind_82 = implicit_cast<TNode<Int32T>>(t114);
    // ../src/builtins/array.tq:37:5
    {
      Label label__True_33_impl(this);
      Label* label__True_33 = &label__True_33_impl;
      USE(label__True_33);
      Label label__False_34_impl(this, {});
      Label* label__False_34 = &label__False_34_impl;
      USE(label__False_34);
      TNode<BoolT> t115 = UncheckedCast<BoolT>(IsFastElementsKind(implicit_cast<TNode<Int32T>>((*elementsKind_82).value())));
      USE(implicit_cast<TNode<BoolT>>(t115));
      TNode<BoolT> t116 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t115)));
      USE(implicit_cast<TNode<BoolT>>(t116));
      Branch(implicit_cast<TNode<BoolT>>(t116), label__True_33, label__False_34);
      if (label__True_33->is_used())
      {
        BIND(label__True_33);
        // ../src/builtins/array.tq:37:44
        Goto(label_Bailout_26);
      }
      BIND(label__False_34);
    }
    // ../src/builtins/array.tq:40:5
    {
      Label label__True_35_impl(this);
      Label* label__True_35 = &label__True_35_impl;
      USE(label__True_35);
      Label label__False_36_impl(this, {});
      Label* label__False_36 = &label__False_36_impl;
      USE(label__False_36);
      TNode<BoolT> t117 = UncheckedCast<BoolT>(IsFastSmiOrTaggedElementsKind(implicit_cast<TNode<Int32T>>((*elementsKind_82).value())));
      USE(implicit_cast<TNode<BoolT>>(t117));
      TNode<BoolT> t118 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t117)));
      USE(implicit_cast<TNode<BoolT>>(t118));
      Branch(implicit_cast<TNode<BoolT>>(t118), label__True_35, label__False_36);
      if (label__True_35->is_used())
      {
        BIND(label__True_35);
        // ../src/builtins/array.tq:40:55
        Goto(label_Bailout_26);
      }
      BIND(label__False_36);
    }
    // ../src/builtins/array.tq:42:5
    {
      Label label__True_37_impl(this);
      Label* label__True_37 = &label__True_37_impl;
      USE(label__True_37);
      Label label__False_38_impl(this, {});
      Label* label__False_38 = &label__False_38_impl;
      USE(label__False_38);
      TNode<BoolT> t119 = UncheckedCast<BoolT>(IsFastSmiElementsKind(implicit_cast<TNode<Int32T>>((*elementsKind_82).value())));
      USE(implicit_cast<TNode<BoolT>>(t119));
      Branch(implicit_cast<TNode<BoolT>>(t119), label__True_37, label__False_38);
      if (label__True_37->is_used())
      {
        BIND(label__True_37);
        // ../src/builtins/array.tq:42:46
        {
          // ../src/builtins/array.tq:43:7
          int31_t t120 = 2;
          TNode<IntPtrT> t121 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(p_args)));
          Label label_body_442_708_impl(this);
          Label* label_body_442_708 = &label_body_442_708_impl;
          USE(label_body_442_708);
          Label label_increment_443_709_impl(this);
          Label* label_increment_443_709 = &label_increment_443_709_impl;
          USE(label_increment_443_709);
          Label label_exit_444_710_impl(this);
          Label* label_exit_444_710 = &label_exit_444_710_impl;
          USE(label_exit_444_710);
          TVARIABLE(IntPtrT, _for_index_t122_445_impl);
          auto _for_index_t122_445 = &_for_index_t122_445_impl;
          USE(_for_index_t122_445);
          TNode<IntPtrT> t123 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t120)));
          *_for_index_t122_445 = implicit_cast<TNode<IntPtrT>>(t123);
          Label label_header_446_711_impl(this, {_for_index_t122_445});
          Label* label_header_446_711 = &label_header_446_711_impl;
          USE(label_header_446_711);
          Goto(label_header_446_711);
          BIND(label_header_446_711);
          TNode<BoolT> t124 = UncheckedCast<BoolT>(IntPtrLessThan(implicit_cast<TNode<IntPtrT>>((*_for_index_t122_445).value()), implicit_cast<TNode<IntPtrT>>(t121)));
          Branch(implicit_cast<TNode<BoolT>>(t124), label_body_442_708, label_exit_444_710);
          BIND(label_body_442_708);
          TNode<Object> t125 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(p_args), implicit_cast<TNode<IntPtrT>>((*_for_index_t122_445).value())));
          TVARIABLE(Object, e_83_impl);
          auto e_83 = &e_83_impl;
          USE(e_83);
          *e_83 = implicit_cast<TNode<Object>>(t125);
          // ../src/builtins/array.tq:43:41
          {
            // ../src/builtins/array.tq:44:9
            {
              Label label__True_39_impl(this);
              Label* label__True_39 = &label__True_39_impl;
              USE(label__True_39);
              Label label__False_40_impl(this, {});
              Label* label__False_40 = &label__False_40_impl;
              USE(label__False_40);
              TNode<BoolT> t126 = UncheckedCast<BoolT>(TaggedIsNotSmi(implicit_cast<TNode<Object>>((*e_83).value())));
              USE(implicit_cast<TNode<BoolT>>(t126));
              Branch(implicit_cast<TNode<BoolT>>(t126), label__True_39, label__False_40);
              if (label__True_39->is_used())
              {
                BIND(label__True_39);
                // ../src/builtins/array.tq:44:32
                Goto(label_Bailout_26);
              }
              BIND(label__False_40);
            }
          }
          Goto(label_increment_443_709);
          BIND(label_increment_443_709);
          TNode<IntPtrT> t127 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(1)));
          TNode<IntPtrT> t128 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>((*_for_index_t122_445).value()), implicit_cast<TNode<IntPtrT>>(t127)));
          *_for_index_t122_445 = implicit_cast<TNode<IntPtrT>>(t128);
          Goto(label_header_446_711);
          BIND(label_exit_444_710);
        }
        Goto(label__False_38);
      }
      BIND(label__False_38);
    }
    // ../src/builtins/array.tq:49:5
    TNode<Number> t129 = UncheckedCast<Number>(LoadJSArrayLength(implicit_cast<TNode<JSArray>>((*a_80).value())));
    TNode<Smi> t130 = UncheckedCast<Smi>(cast5ATSmi(implicit_cast<TNode<Object>>(t129), label_Bailout_26));
    USE(implicit_cast<TNode<Smi>>(t130));
    TVARIABLE(Smi, length_84_impl);
    auto length_84 = &length_84_impl;
    USE(length_84);
    *length_84 = implicit_cast<TNode<Smi>>(t130);
    // ../src/builtins/array.tq:50:5
    {
      Label label__True_41_impl(this);
      Label* label__True_41 = &label__True_41_impl;
      USE(label__True_41);
      Label label__False_42_impl(this, {});
      Label* label__False_42 = &label__False_42_impl;
      USE(label__False_42);
      TNode<BoolT> t131 = UncheckedCast<BoolT>(SmiNotEqual(implicit_cast<TNode<Smi>>((*originalLength_75).value()), implicit_cast<TNode<Smi>>((*length_84).value())));
      USE(implicit_cast<TNode<BoolT>>(t131));
      Branch(implicit_cast<TNode<BoolT>>(t131), label__True_41, label__False_42);
      if (label__True_41->is_used())
      {
        BIND(label__True_41);
        // ../src/builtins/array.tq:50:35
        Goto(label_Bailout_26);
      }
      BIND(label__False_42);
    }
    // ../src/builtins/array.tq:52:5
    TNode<JSArray> t132 = UncheckedCast<JSArray>(CallBuiltin(Builtins::kExtractFastJSArray, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSArray>>((*a_80).value()), implicit_cast<TNode<Smi>>((*actualStart_76).value()), implicit_cast<TNode<Smi>>((*actualDeleteCount_77).value())));
    USE(implicit_cast<TNode<JSArray>>(t132));
    TVARIABLE(JSArray, deletedResult_85_impl);
    auto deletedResult_85 = &deletedResult_85_impl;
    USE(deletedResult_85);
    *deletedResult_85 = implicit_cast<TNode<JSArray>>(t132);
    // ../src/builtins/array.tq:55:5
    {
      Label label__True_43_impl(this);
      Label* label__True_43 = &label__True_43_impl;
      USE(label__True_43);
      Label label__False_44_impl(this, {});
      Label* label__False_44 = &label__False_44_impl;
      USE(label__False_44);
      int31_t t133 = 0;
      TNode<Smi> t134 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t133)));
      TNode<BoolT> t135 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*newLength_79).value()), implicit_cast<TNode<Smi>>(t134)));
      USE(implicit_cast<TNode<BoolT>>(t135));
      Branch(implicit_cast<TNode<BoolT>>(t135), label__True_43, label__False_44);
      if (label__True_43->is_used())
      {
        BIND(label__True_43);
        // ../src/builtins/array.tq:55:25
        {
          // ../src/builtins/array.tq:56:7
          StoreElements(implicit_cast<TNode<JSObject>>((*a_80).value()), implicit_cast<TNode<FixedArrayBase>>(kEmptyFixedArray()));
          // ../src/builtins/array.tq:57:7
          int31_t t136 = 0;
          TNode<Smi> t137 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t136)));
          StoreJSArrayLength(implicit_cast<TNode<JSArray>>((*a_80).value()), implicit_cast<TNode<Smi>>(t137));
          // ../src/builtins/array.tq:58:7
          *_return_74 = implicit_cast<TNode<Object>>((*deletedResult_85).value());
          Goto(label_macro_end_707);
        }
      }
      BIND(label__False_44);
    }
    // ../src/builtins/array.tq:61:5
    TNode<FixedArrayBase> t138 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>((*a_80).value())));
    TNode<FixedArray> t139 = UncheckedCast<FixedArray>(cast12ATFixedArray(implicit_cast<TNode<FixedArrayBase>>(t138), label_Bailout_26));
    USE(implicit_cast<TNode<FixedArray>>(t139));
    TVARIABLE(FixedArray, elements_86_impl);
    auto elements_86 = &elements_86_impl;
    USE(elements_86);
    *elements_86 = implicit_cast<TNode<FixedArray>>(t139);
    // ../src/builtins/array.tq:62:5
    TNode<Map> t140 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*elements_86).value())));
    TVARIABLE(Map, elementsMap_87_impl);
    auto elementsMap_87 = &elementsMap_87_impl;
    USE(elementsMap_87);
    *elementsMap_87 = implicit_cast<TNode<Map>>(t140);
    // ../src/builtins/array.tq:66:5
    TVARIABLE(FixedArray, newElements_88_impl);
    auto newElements_88 = &newElements_88_impl;
    USE(newElements_88);
    *newElements_88 = implicit_cast<TNode<FixedArray>>((*elements_86).value());
    // ../src/builtins/array.tq:67:5
    {
      Label label__True_45_impl(this);
      Label* label__True_45 = &label__True_45_impl;
      USE(label__True_45);
      Label label__False_46_impl(this, {newElements_88});
      Label* label__False_46 = &label__False_46_impl;
      USE(label__False_46);
      Label label__False_47_impl(this);
      Label* label__False_47 = &label__False_47_impl;
      USE(label__False_47);
      TNode<BoolT> t141 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*elementsMap_87).value()), implicit_cast<TNode<Object>>(kCOWMap())));
      USE(implicit_cast<TNode<BoolT>>(t141));
      GotoIf(implicit_cast<TNode<BoolT>>(t141), label__True_45);
      int31_t t142 = 0;
      TNode<Smi> t143 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t142)));
      TNode<BoolT> t144 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*lengthDelta_78).value()), implicit_cast<TNode<Smi>>(t143)));
      USE(implicit_cast<TNode<BoolT>>(t144));
      Branch(implicit_cast<TNode<BoolT>>(t144), label__True_45, label__False_46);
      if (label__True_45->is_used())
      {
        BIND(label__True_45);
        // ../src/builtins/array.tq:67:56
        {
          // ../src/builtins/array.tq:68:7
          int31_t t145 = 0;
          TNode<Smi> t146 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t145)));
          TNode<FixedArray> t147 = UncheckedCast<FixedArray>(ExtractFixedArray(implicit_cast<TNode<FixedArray>>((*elements_86).value()), implicit_cast<TNode<Smi>>(t146), implicit_cast<TNode<Smi>>((*actualStart_76).value()), implicit_cast<TNode<Smi>>((*newLength_79).value()), implicit_cast<ExtractFixedArrayFlags>(ExtractFixedArrayFlag::kAllFixedArrays)));
          USE(implicit_cast<TNode<FixedArray>>(t147));
          *newElements_88 = implicit_cast<TNode<FixedArray>>(t147);
          // ../src/builtins/array.tq:70:7
          StoreMap(implicit_cast<TNode<HeapObject>>((*newElements_88).value()), implicit_cast<TNode<Map>>((*elementsMap_87).value()));
          // ../src/builtins/array.tq:71:7
          StoreElements(implicit_cast<TNode<JSObject>>((*a_80).value()), implicit_cast<TNode<FixedArrayBase>>((*newElements_88).value()));
        }
        Goto(label__False_46);
      }
      BIND(label__False_46);
    }
    // ../src/builtins/array.tq:75:5
    // ../src/builtins/array.tq:78:5
    TVARIABLE(Smi, k_89_impl);
    auto k_89 = &k_89_impl;
    USE(k_89);
    *k_89 = implicit_cast<TNode<Smi>>((*actualStart_76).value());
    // ../src/builtins/array.tq:79:5
    {
      Label label__True_48_impl(this);
      Label* label__True_48 = &label__True_48_impl;
      USE(label__True_48);
      Label label__False_49_impl(this, {k_89});
      Label* label__False_49 = &label__False_49_impl;
      USE(label__False_49);
      int31_t t148 = 0;
      TNode<Smi> t149 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t148)));
      TNode<BoolT> t150 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>(p_insertCount), implicit_cast<TNode<Smi>>(t149)));
      USE(implicit_cast<TNode<BoolT>>(t150));
      Branch(implicit_cast<TNode<BoolT>>(t150), label__True_48, label__False_49);
      if (label__True_48->is_used())
      {
        BIND(label__True_48);
        // ../src/builtins/array.tq:79:26
        {
          // ../src/builtins/array.tq:80:7
          int31_t t151 = 2;
          TNode<IntPtrT> t152 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(p_args)));
          Label label_body_447_712_impl(this);
          Label* label_body_447_712 = &label_body_447_712_impl;
          USE(label_body_447_712);
          Label label_increment_448_713_impl(this);
          Label* label_increment_448_713 = &label_increment_448_713_impl;
          USE(label_increment_448_713);
          Label label_exit_449_714_impl(this);
          Label* label_exit_449_714 = &label_exit_449_714_impl;
          USE(label_exit_449_714);
          TVARIABLE(IntPtrT, _for_index_t153_450_impl);
          auto _for_index_t153_450 = &_for_index_t153_450_impl;
          USE(_for_index_t153_450);
          TNode<IntPtrT> t154 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t151)));
          *_for_index_t153_450 = implicit_cast<TNode<IntPtrT>>(t154);
          Label label_header_451_715_impl(this, {_for_index_t153_450, k_89});
          Label* label_header_451_715 = &label_header_451_715_impl;
          USE(label_header_451_715);
          Goto(label_header_451_715);
          BIND(label_header_451_715);
          TNode<BoolT> t155 = UncheckedCast<BoolT>(IntPtrLessThan(implicit_cast<TNode<IntPtrT>>((*_for_index_t153_450).value()), implicit_cast<TNode<IntPtrT>>(t152)));
          Branch(implicit_cast<TNode<BoolT>>(t155), label_body_447_712, label_exit_449_714);
          BIND(label_body_447_712);
          TNode<Object> t156 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(p_args), implicit_cast<TNode<IntPtrT>>((*_for_index_t153_450).value())));
          TVARIABLE(Object, e_90_impl);
          auto e_90 = &e_90_impl;
          USE(e_90);
          *e_90 = implicit_cast<TNode<Object>>(t156);
          // ../src/builtins/array.tq:80:41
          {
            // ../src/builtins/array.tq:81:9
            TNode<Smi> t157 = implicit_cast<TNode<Smi>>((*k_89).value());
            USE(t157);
            TNode<Smi> t158 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
            TNode<Smi> t159 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_89).value()), implicit_cast<TNode<Smi>>(t158)));
            *k_89 = implicit_cast<TNode<Smi>>(t159);
            StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*newElements_88).value()), implicit_cast<TNode<Smi>>(t157), implicit_cast<TNode<Object>>((*e_90).value()));
          }
          Goto(label_increment_448_713);
          BIND(label_increment_448_713);
          TNode<IntPtrT> t160 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(1)));
          TNode<IntPtrT> t161 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>((*_for_index_t153_450).value()), implicit_cast<TNode<IntPtrT>>(t160)));
          *_for_index_t153_450 = implicit_cast<TNode<IntPtrT>>(t161);
          Goto(label_header_451_715);
          BIND(label_exit_449_714);
        }
        Goto(label__False_49);
      }
      BIND(label__False_49);
    }
    // ../src/builtins/array.tq:86:5
    TNode<Smi> t162 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_84).value()), implicit_cast<TNode<Smi>>((*actualStart_76).value())));
    USE(implicit_cast<TNode<Smi>>(t162));
    TNode<Smi> t163 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t162), implicit_cast<TNode<Smi>>((*actualDeleteCount_77).value())));
    USE(implicit_cast<TNode<Smi>>(t163));
    TVARIABLE(Smi, count_91_impl);
    auto count_91 = &count_91_impl;
    USE(count_91);
    *count_91 = implicit_cast<TNode<Smi>>(t163);
    // ../src/builtins/array.tq:87:5
    {
      Label label__True_50_impl(this);
      Label* label__True_50 = &label__True_50_impl;
      USE(label__True_50);
      Label label__False_51_impl(this);
      Label* label__False_51 = &label__False_51_impl;
      USE(label__False_51);
      Label label_header_452_716_impl(this, {count_91, k_89});
      Label* label_header_452_716 = &label_header_452_716_impl;
      USE(label_header_452_716);
      Goto(label_header_452_716);
      BIND(label_header_452_716);
      int31_t t164 = 0;
      TNode<Smi> t165 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t164)));
      TNode<BoolT> t166 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*count_91).value()), implicit_cast<TNode<Smi>>(t165)));
      USE(implicit_cast<TNode<BoolT>>(t166));
      Branch(implicit_cast<TNode<BoolT>>(t166), label__True_50, label__False_51);
      if (label__True_50->is_used())
      {
        BIND(label__True_50);
        // ../src/builtins/array.tq:87:23
        {
          // ../src/builtins/array.tq:88:7
          TNode<Smi> t167 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*k_89).value()), implicit_cast<TNode<Smi>>((*lengthDelta_78).value())));
          USE(implicit_cast<TNode<Smi>>(t167));
          TNode<Object> t168 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*elements_86).value()), implicit_cast<TNode<Smi>>(t167)));
          TVARIABLE(Object, e_92_impl);
          auto e_92 = &e_92_impl;
          USE(e_92);
          *e_92 = implicit_cast<TNode<Object>>(t168);
          // ../src/builtins/array.tq:89:7
          TNode<Smi> t169 = implicit_cast<TNode<Smi>>((*k_89).value());
          USE(t169);
          TNode<Smi> t170 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t171 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_89).value()), implicit_cast<TNode<Smi>>(t170)));
          *k_89 = implicit_cast<TNode<Smi>>(t171);
          StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*newElements_88).value()), implicit_cast<TNode<Smi>>(t169), implicit_cast<TNode<Object>>((*e_92).value()));
          // ../src/builtins/array.tq:90:7
          TNode<Smi> t172 = implicit_cast<TNode<Smi>>((*count_91).value());
          USE(t172);
          TNode<Smi> t173 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t174 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*count_91).value()), implicit_cast<TNode<Smi>>(t173)));
          *count_91 = implicit_cast<TNode<Smi>>(t174);
        }
        Goto(label_header_452_716);
      }
      BIND(label__False_51);
    }
    // ../src/builtins/array.tq:96:5
    {
      Label label__True_52_impl(this);
      Label* label__True_52 = &label__True_52_impl;
      USE(label__True_52);
      Label label__False_53_impl(this, {k_89});
      Label* label__False_53 = &label__False_53_impl;
      USE(label__False_53);
      TNode<BoolT> t175 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*elements_86).value()), implicit_cast<TNode<Object>>((*newElements_88).value())));
      USE(implicit_cast<TNode<BoolT>>(t175));
      Branch(implicit_cast<TNode<BoolT>>(t175), label__True_52, label__False_53);
      if (label__True_52->is_used())
      {
        BIND(label__True_52);
        // ../src/builtins/array.tq:96:34
        {
          // ../src/builtins/array.tq:97:7
          TNode<Smi> t176 = UncheckedCast<Smi>(LoadFixedArrayBaseLength(implicit_cast<TNode<FixedArrayBase>>((*elements_86).value())));
          TVARIABLE(Smi, limit_93_impl);
          auto limit_93 = &limit_93_impl;
          USE(limit_93);
          *limit_93 = implicit_cast<TNode<Smi>>(t176);
          // ../src/builtins/array.tq:98:7
          {
            Label label__True_54_impl(this);
            Label* label__True_54 = &label__True_54_impl;
            USE(label__True_54);
            Label label__False_55_impl(this);
            Label* label__False_55 = &label__False_55_impl;
            USE(label__False_55);
            Label label_header_453_717_impl(this, {k_89});
            Label* label_header_453_717 = &label_header_453_717_impl;
            USE(label_header_453_717);
            Goto(label_header_453_717);
            BIND(label_header_453_717);
            TNode<BoolT> t177 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*k_89).value()), implicit_cast<TNode<Smi>>((*limit_93).value())));
            USE(implicit_cast<TNode<BoolT>>(t177));
            Branch(implicit_cast<TNode<BoolT>>(t177), label__True_54, label__False_55);
            if (label__True_54->is_used())
            {
              BIND(label__True_54);
              // ../src/builtins/array.tq:98:25
              {
                // ../src/builtins/array.tq:99:9
                TNode<Smi> t178 = implicit_cast<TNode<Smi>>((*k_89).value());
                USE(t178);
                TNode<Smi> t179 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t180 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_89).value()), implicit_cast<TNode<Smi>>(t179)));
                *k_89 = implicit_cast<TNode<Smi>>(t180);
                StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*newElements_88).value()), implicit_cast<TNode<Smi>>(t178), implicit_cast<TNode<Object>>(Hole()));
              }
              Goto(label_header_453_717);
            }
            BIND(label__False_55);
          }
        }
        Goto(label__False_53);
      }
      BIND(label__False_53);
    }
    // ../src/builtins/array.tq:104:5
    StoreJSArrayLength(implicit_cast<TNode<JSArray>>((*a_80).value()), implicit_cast<TNode<Smi>>((*newLength_79).value()));
    // ../src/builtins/array.tq:106:5
    *_return_74 = implicit_cast<TNode<Object>>((*deletedResult_85).value());
    Goto(label_macro_end_707);
  }
  BIND(label_macro_end_707);
  return implicit_cast<TNode<Object>>((*_return_74).value());
}

TF_BUILTIN(ArraySpliceTorque, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/array.tq:111:65
  {
    // ../src/builtins/array.tq:113:5
    TNode<JSReceiver> t181 = UncheckedCast<JSReceiver>(CallBuiltin(Builtins::kToObject, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t181));
    TVARIABLE(JSReceiver, o_94_impl);
    auto o_94 = &o_94_impl;
    USE(o_94);
    *o_94 = implicit_cast<TNode<JSReceiver>>(t181);
    // ../src/builtins/array.tq:116:5
    TNode<Number> t182 = UncheckedCast<Number>(GetLengthProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_94).value())));
    USE(implicit_cast<TNode<Number>>(t182));
    TVARIABLE(Number, len_95_impl);
    auto len_95 = &len_95_impl;
    USE(len_95);
    *len_95 = implicit_cast<TNode<Number>>(t182);
    // ../src/builtins/array.tq:119:5
    int31_t t183 = 0;
    TNode<IntPtrT> t184 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t183)));
    TNode<Object> t185 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t184)));
    TVARIABLE(Object, start_96_impl);
    auto start_96 = &start_96_impl;
    USE(start_96);
    *start_96 = implicit_cast<TNode<Object>>(t185);
    // ../src/builtins/array.tq:120:5
    TNode<Number> t186 = UncheckedCast<Number>(ToInteger_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*start_96).value())));
    USE(implicit_cast<TNode<Number>>(t186));
    TVARIABLE(Number, relativeStart_97_impl);
    auto relativeStart_97 = &relativeStart_97_impl;
    USE(relativeStart_97);
    *relativeStart_97 = implicit_cast<TNode<Number>>(t186);
    // ../src/builtins/array.tq:125:5
    auto t187 = [=]() {
      TNode<Number> t189 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*len_95).value()), implicit_cast<TNode<Number>>((*relativeStart_97).value())));
      USE(implicit_cast<TNode<Number>>(t189));
      int31_t t190 = 0;
      TNode<Number> t191 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t190)));
      TNode<Number> t192 = UncheckedCast<Number>(max(implicit_cast<TNode<Number>>(t189), implicit_cast<TNode<Number>>(t191)));
      USE(implicit_cast<TNode<Number>>(t192));
      return implicit_cast<TNode<Number>>(t192);
    };
    auto t188 = [=]() {
      TNode<Number> t193 = UncheckedCast<Number>(min(implicit_cast<TNode<Number>>((*relativeStart_97).value()), implicit_cast<TNode<Number>>((*len_95).value())));
      USE(implicit_cast<TNode<Number>>(t193));
      return implicit_cast<TNode<Number>>(t193);
    };
    TVARIABLE(Number, t194_454_impl);
    auto t194_454 = &t194_454_impl;
    USE(t194_454);
    {
      Label label__True_56_impl(this);
      Label* label__True_56 = &label__True_56_impl;
      USE(label__True_56);
      Label label__False_57_impl(this);
      Label* label__False_57 = &label__False_57_impl;
      USE(label__False_57);
      Label label__done_455_718_impl(this, {t194_454});
      Label* label__done_455_718 = &label__done_455_718_impl;
      USE(label__done_455_718);
      int31_t t195 = 0;
      TNode<Number> t196 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t195)));
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*relativeStart_97).value()), implicit_cast<TNode<Number>>(t196), label__True_56, label__False_57);
      BIND(label__True_56);
            *t194_454 = implicit_cast<TNode<Number>>(t187());
      Goto(label__done_455_718);
      BIND(label__False_57);
            *t194_454 = implicit_cast<TNode<Number>>(t188());
      Goto(label__done_455_718);
      BIND(label__done_455_718);
    }
    TVARIABLE(Number, actualStart_98_impl);
    auto actualStart_98 = &actualStart_98_impl;
    USE(actualStart_98);
    *actualStart_98 = implicit_cast<TNode<Number>>((*t194_454).value());
    // ../src/builtins/array.tq:129:5
    TVARIABLE(Smi, insertCount_99_impl);
    auto insertCount_99 = &insertCount_99_impl;
    USE(insertCount_99);
    // ../src/builtins/array.tq:130:5
    TVARIABLE(Number, actualDeleteCount_100_impl);
    auto actualDeleteCount_100 = &actualDeleteCount_100_impl;
    USE(actualDeleteCount_100);
    // ../src/builtins/array.tq:132:5
    {
      Label label__True_58_impl(this);
      Label* label__True_58 = &label__True_58_impl;
      USE(label__True_58);
      Label label__False_59_impl(this);
      Label* label__False_59 = &label__False_59_impl;
      USE(label__False_59);
      Label label_if_done_label_456_719_impl(this, {actualDeleteCount_100, insertCount_99});
      Label* label_if_done_label_456_719 = &label_if_done_label_456_719_impl;
      USE(label_if_done_label_456_719);
      TNode<IntPtrT> t197 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t198 = 0;
      TNode<IntPtrT> t199 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t198)));
      TNode<BoolT> t200 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<IntPtrT>>(t197), implicit_cast<TNode<IntPtrT>>(t199)));
      USE(implicit_cast<TNode<BoolT>>(t200));
      Branch(implicit_cast<TNode<BoolT>>(t200), label__True_58, label__False_59);
      if (label__True_58->is_used())
      {
        BIND(label__True_58);
        // ../src/builtins/array.tq:132:32
        {
          // ../src/builtins/array.tq:134:7
          int31_t t201 = 0;
          TNode<Smi> t202 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t201)));
          *insertCount_99 = implicit_cast<TNode<Smi>>(t202);
          // ../src/builtins/array.tq:136:7
          int31_t t203 = 0;
          TNode<Number> t204 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t203)));
          *actualDeleteCount_100 = implicit_cast<TNode<Number>>(t204);
        }
        Goto(label_if_done_label_456_719);
      }
      if (label__False_59->is_used())
      {
        BIND(label__False_59);
        // ../src/builtins/array.tq:138:12
        {
          Label label__True_60_impl(this);
          Label* label__True_60 = &label__True_60_impl;
          USE(label__True_60);
          Label label__False_61_impl(this);
          Label* label__False_61 = &label__False_61_impl;
          USE(label__False_61);
          Label label_if_done_label_457_720_impl(this, {actualDeleteCount_100, insertCount_99});
          Label* label_if_done_label_457_720 = &label_if_done_label_457_720_impl;
          USE(label_if_done_label_457_720);
          TNode<IntPtrT> t205 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
          int31_t t206 = 1;
          TNode<IntPtrT> t207 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t206)));
          TNode<BoolT> t208 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<IntPtrT>>(t205), implicit_cast<TNode<IntPtrT>>(t207)));
          USE(implicit_cast<TNode<BoolT>>(t208));
          Branch(implicit_cast<TNode<BoolT>>(t208), label__True_60, label__False_61);
          if (label__True_60->is_used())
          {
            BIND(label__True_60);
            // ../src/builtins/array.tq:138:39
            {
              // ../src/builtins/array.tq:140:7
              int31_t t209 = 0;
              TNode<Smi> t210 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t209)));
              *insertCount_99 = implicit_cast<TNode<Smi>>(t210);
              // ../src/builtins/array.tq:142:7
              TNode<Number> t211 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*len_95).value()), implicit_cast<TNode<Number>>((*actualStart_98).value())));
              USE(implicit_cast<TNode<Number>>(t211));
              *actualDeleteCount_100 = implicit_cast<TNode<Number>>(t211);
            }
            Goto(label_if_done_label_457_720);
          }
          if (label__False_61->is_used())
          {
            BIND(label__False_61);
            // ../src/builtins/array.tq:144:12
            {
              // ../src/builtins/array.tq:146:7
              TNode<IntPtrT> t212 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
              TNode<Smi> t213 = UncheckedCast<Smi>(convert5ATSmi(implicit_cast<TNode<IntPtrT>>(t212)));
              USE(implicit_cast<TNode<Smi>>(t213));
              int31_t t214 = 2;
              TNode<Smi> t215 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t214)));
              TNode<Smi> t216 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t213), implicit_cast<TNode<Smi>>(t215)));
              USE(implicit_cast<TNode<Smi>>(t216));
              *insertCount_99 = implicit_cast<TNode<Smi>>(t216);
              // ../src/builtins/array.tq:148:7
              int31_t t217 = 1;
              TNode<IntPtrT> t218 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t217)));
              TNode<Object> t219 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t218)));
              TVARIABLE(Object, deleteCount_101_impl);
              auto deleteCount_101 = &deleteCount_101_impl;
              USE(deleteCount_101);
              *deleteCount_101 = implicit_cast<TNode<Object>>(t219);
              // ../src/builtins/array.tq:149:7
              TNode<Number> t220 = UncheckedCast<Number>(ToInteger_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*deleteCount_101).value())));
              USE(implicit_cast<TNode<Number>>(t220));
              TVARIABLE(Number, dc_102_impl);
              auto dc_102 = &dc_102_impl;
              USE(dc_102);
              *dc_102 = implicit_cast<TNode<Number>>(t220);
              // ../src/builtins/array.tq:151:7
              int31_t t221 = 0;
              TNode<Number> t222 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t221)));
              TNode<Number> t223 = UncheckedCast<Number>(max(implicit_cast<TNode<Number>>((*dc_102).value()), implicit_cast<TNode<Number>>(t222)));
              USE(implicit_cast<TNode<Number>>(t223));
              TNode<Number> t224 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*len_95).value()), implicit_cast<TNode<Number>>((*actualStart_98).value())));
              USE(implicit_cast<TNode<Number>>(t224));
              TNode<Number> t225 = UncheckedCast<Number>(min(implicit_cast<TNode<Number>>(t223), implicit_cast<TNode<Number>>(t224)));
              USE(implicit_cast<TNode<Number>>(t225));
              *actualDeleteCount_100 = implicit_cast<TNode<Number>>(t225);
            }
            Goto(label_if_done_label_457_720);
          }
          BIND(label_if_done_label_457_720);
        }
        Goto(label_if_done_label_456_719);
      }
      BIND(label_if_done_label_456_719);
    }
    // ../src/builtins/array.tq:156:5
    {
      Label label__True_62_impl(this);
      Label* label__True_62 = &label__True_62_impl;
      USE(label__True_62);
      Label label__False_63_impl(this, {});
      Label* label__False_63 = &label__False_63_impl;
      USE(label__False_63);
      TNode<Number> t226 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*len_95).value()), implicit_cast<TNode<Number>>((*insertCount_99).value())));
      USE(implicit_cast<TNode<Number>>(t226));
      TNode<Number> t227 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(t226), implicit_cast<TNode<Number>>((*actualDeleteCount_100).value())));
      USE(implicit_cast<TNode<Number>>(t227));
      TNode<Number> t228 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<double>(kMaxSafeInteger)));
      BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>(t227), implicit_cast<TNode<Number>>(t228), label__True_62, label__False_63);
      if (label__True_62->is_used())
      {
        BIND(label__True_62);
        // ../src/builtins/array.tq:156:66
        {
          // ../src/builtins/array.tq:157:7
          ThrowRangeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kInvalidArrayLength));
        }
      }
      BIND(label__False_63);
    }
    // ../src/builtins/array.tq:160:5
    {
      Label label_try_done_458_721_impl(this);
      Label* label_try_done_458_721 = &label_try_done_458_721_impl;
      USE(label_try_done_458_721);
      Label label_Bailout_64_impl(this);
      Label* label_Bailout_64 = &label_Bailout_64_impl;
      USE(label_Bailout_64);
      Label label_try_begin_459_722_impl(this);
      Label* label_try_begin_459_722 = &label_try_begin_459_722_impl;
      USE(label_try_begin_459_722);
      Goto(label_try_begin_459_722);
      if (label_try_begin_459_722->is_used())
      {
        BIND(label_try_begin_459_722);
        // ../src/builtins/array.tq:160:9
        {
          // ../src/builtins/array.tq:161:7
          TNode<Object> t229 = UncheckedCast<Object>(FastArraySplice(implicit_cast<TNode<Context>>(p_context), implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<Object>>((*o_94).value()), implicit_cast<TNode<Number>>((*len_95).value()), implicit_cast<TNode<Number>>((*actualStart_98).value()), implicit_cast<TNode<Smi>>((*insertCount_99).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_100).value()), label_Bailout_64));
          USE(implicit_cast<TNode<Object>>(t229));
          arguments->PopAndReturn(implicit_cast<TNode<Object>>(t229));
        }
      }
      if (label_Bailout_64->is_used())
      {
        BIND(label_Bailout_64);
        // ../src/builtins/array.tq:165:19
        {
        }
        Goto(label_try_done_458_721);
      }
      BIND(label_try_done_458_721);
    }
    // ../src/builtins/array.tq:170:5
    TNode<Object> t230 = UncheckedCast<Object>(ArraySpeciesCreate(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_94).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_100).value())));
    USE(implicit_cast<TNode<Object>>(t230));
    TVARIABLE(Object, a_103_impl);
    auto a_103 = &a_103_impl;
    USE(a_103);
    *a_103 = implicit_cast<TNode<Object>>(t230);
    // ../src/builtins/array.tq:173:5
    int31_t t231 = 0;
    TVARIABLE(Number, k_104_impl);
    auto k_104 = &k_104_impl;
    USE(k_104);
    TNode<Number> t232 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t231)));
    *k_104 = implicit_cast<TNode<Number>>(t232);
    // ../src/builtins/array.tq:176:5
    {
      Label label__True_65_impl(this);
      Label* label__True_65 = &label__True_65_impl;
      USE(label__True_65);
      Label label__False_66_impl(this);
      Label* label__False_66 = &label__False_66_impl;
      USE(label__False_66);
      Label label_header_460_723_impl(this, {k_104});
      Label* label_header_460_723 = &label_header_460_723_impl;
      USE(label_header_460_723);
      Goto(label_header_460_723);
      BIND(label_header_460_723);
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*k_104).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_100).value()), label__True_65, label__False_66);
      if (label__True_65->is_used())
      {
        BIND(label__True_65);
        // ../src/builtins/array.tq:176:35
        {
          // ../src/builtins/array.tq:178:7
          TNode<Number> t233 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*actualStart_98).value()), implicit_cast<TNode<Number>>((*k_104).value())));
          USE(implicit_cast<TNode<Number>>(t233));
          TNode<String> t234 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t233)));
          USE(implicit_cast<TNode<String>>(t234));
          TVARIABLE(String, from_105_impl);
          auto from_105 = &from_105_impl;
          USE(from_105);
          *from_105 = implicit_cast<TNode<String>>(t234);
          // ../src/builtins/array.tq:181:7
          TNode<Oddball> t235 = UncheckedCast<Oddball>(TorqueHasProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*o_94).value()), implicit_cast<TNode<Object>>((*from_105).value())));
          USE(implicit_cast<TNode<Oddball>>(t235));
          TVARIABLE(Oddball, fromPresent_106_impl);
          auto fromPresent_106 = &fromPresent_106_impl;
          USE(fromPresent_106);
          *fromPresent_106 = implicit_cast<TNode<Oddball>>(t235);
          // ../src/builtins/array.tq:184:7
          {
            Label label__True_67_impl(this);
            Label* label__True_67 = &label__True_67_impl;
            USE(label__True_67);
            Label label__False_68_impl(this, {});
            Label* label__False_68 = &label__False_68_impl;
            USE(label__False_68);
            TNode<BoolT> t236 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*fromPresent_106).value()), implicit_cast<TNode<Object>>(True())));
            USE(implicit_cast<TNode<BoolT>>(t236));
            Branch(implicit_cast<TNode<BoolT>>(t236), label__True_67, label__False_68);
            if (label__True_67->is_used())
            {
              BIND(label__True_67);
              // ../src/builtins/array.tq:184:32
              {
                // ../src/builtins/array.tq:186:9
                TNode<Object> t237 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_94).value()), implicit_cast<TNode<Object>>((*from_105).value())));
                USE(implicit_cast<TNode<Object>>(t237));
                TVARIABLE(Object, fromValue_107_impl);
                auto fromValue_107 = &fromValue_107_impl;
                USE(fromValue_107);
                *fromValue_107 = implicit_cast<TNode<Object>>(t237);
                // ../src/builtins/array.tq:189:9
                TNode<String> t238 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*k_104).value())));
                USE(implicit_cast<TNode<String>>(t238));
                CallRuntime(Runtime::kCreateDataProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*a_103).value()), implicit_cast<TNode<Object>>(t238), implicit_cast<TNode<Object>>((*fromValue_107).value()));
              }
              Goto(label__False_68);
            }
            BIND(label__False_68);
          }
          // ../src/builtins/array.tq:193:7
          int31_t t239 = 1;
          TNode<Number> t240 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t239)));
          TNode<Number> t241 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_104).value()), implicit_cast<TNode<Number>>(t240)));
          USE(implicit_cast<TNode<Number>>(t241));
          *k_104 = implicit_cast<TNode<Number>>(t241);
        }
        Goto(label_header_460_723);
      }
      BIND(label__False_66);
    }
    // ../src/builtins/array.tq:197:5
    const char* t242 = "length";
    TNode<Object> t243 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(implicit_cast<const char*>(t242)));
    TNode<Smi> t244 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
    CallRuntime(Runtime::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*a_103).value()), implicit_cast<TNode<Object>>(t243), implicit_cast<TNode<Object>>((*actualDeleteCount_100).value()), implicit_cast<TNode<Smi>>(t244));
    // ../src/builtins/array.tq:204:5
    TVARIABLE(Number, itemCount_108_impl);
    auto itemCount_108 = &itemCount_108_impl;
    USE(itemCount_108);
    *itemCount_108 = implicit_cast<TNode<Number>>((*insertCount_99).value());
    // ../src/builtins/array.tq:207:5
    {
      Label label__True_69_impl(this);
      Label* label__True_69 = &label__True_69_impl;
      USE(label__True_69);
      Label label__False_70_impl(this);
      Label* label__False_70 = &label__False_70_impl;
      USE(label__False_70);
      Label label_if_done_label_461_724_impl(this, {});
      Label* label_if_done_label_461_724 = &label_if_done_label_461_724_impl;
      USE(label_if_done_label_461_724);
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*itemCount_108).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_100).value()), label__True_69, label__False_70);
      if (label__True_69->is_used())
      {
        BIND(label__True_69);
        // ../src/builtins/array.tq:207:40
        {
          // ../src/builtins/array.tq:209:7
          TVARIABLE(Number, k_109_impl);
          auto k_109 = &k_109_impl;
          USE(k_109);
          *k_109 = implicit_cast<TNode<Number>>((*actualStart_98).value());
          // ../src/builtins/array.tq:212:7
          {
            Label label__True_71_impl(this);
            Label* label__True_71 = &label__True_71_impl;
            USE(label__True_71);
            Label label__False_72_impl(this);
            Label* label__False_72 = &label__False_72_impl;
            USE(label__False_72);
            Label label_header_462_725_impl(this, {k_109});
            Label* label_header_462_725 = &label_header_462_725_impl;
            USE(label_header_462_725);
            Goto(label_header_462_725);
            BIND(label_header_462_725);
            TNode<Number> t245 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*len_95).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_100).value())));
            USE(implicit_cast<TNode<Number>>(t245));
            BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*k_109).value()), implicit_cast<TNode<Number>>(t245), label__True_71, label__False_72);
            if (label__True_71->is_used())
            {
              BIND(label__True_71);
              // ../src/builtins/array.tq:212:45
              {
                // ../src/builtins/array.tq:214:9
                TNode<Number> t246 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_109).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_100).value())));
                USE(implicit_cast<TNode<Number>>(t246));
                TNode<String> t247 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t246)));
                USE(implicit_cast<TNode<String>>(t247));
                TVARIABLE(String, from_110_impl);
                auto from_110 = &from_110_impl;
                USE(from_110);
                *from_110 = implicit_cast<TNode<String>>(t247);
                // ../src/builtins/array.tq:216:9
                TNode<Number> t248 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_109).value()), implicit_cast<TNode<Number>>((*itemCount_108).value())));
                USE(implicit_cast<TNode<Number>>(t248));
                TNode<String> t249 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t248)));
                USE(implicit_cast<TNode<String>>(t249));
                TVARIABLE(String, to_111_impl);
                auto to_111 = &to_111_impl;
                USE(to_111);
                *to_111 = implicit_cast<TNode<String>>(t249);
                // ../src/builtins/array.tq:219:9
                TNode<Oddball> t250 = UncheckedCast<Oddball>(TorqueHasProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*o_94).value()), implicit_cast<TNode<Object>>((*from_110).value())));
                USE(implicit_cast<TNode<Oddball>>(t250));
                TVARIABLE(Oddball, fromPresent_112_impl);
                auto fromPresent_112 = &fromPresent_112_impl;
                USE(fromPresent_112);
                *fromPresent_112 = implicit_cast<TNode<Oddball>>(t250);
                // ../src/builtins/array.tq:222:9
                {
                  Label label__True_73_impl(this);
                  Label* label__True_73 = &label__True_73_impl;
                  USE(label__True_73);
                  Label label__False_74_impl(this);
                  Label* label__False_74 = &label__False_74_impl;
                  USE(label__False_74);
                  Label label_if_done_label_463_726_impl(this, {});
                  Label* label_if_done_label_463_726 = &label_if_done_label_463_726_impl;
                  USE(label_if_done_label_463_726);
                  TNode<BoolT> t251 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*fromPresent_112).value()), implicit_cast<TNode<Object>>(True())));
                  USE(implicit_cast<TNode<BoolT>>(t251));
                  Branch(implicit_cast<TNode<BoolT>>(t251), label__True_73, label__False_74);
                  if (label__True_73->is_used())
                  {
                    BIND(label__True_73);
                    // ../src/builtins/array.tq:222:34
                    {
                      // ../src/builtins/array.tq:224:11
                      TNode<Object> t252 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_94).value()), implicit_cast<TNode<Object>>((*from_110).value())));
                      USE(implicit_cast<TNode<Object>>(t252));
                      TVARIABLE(Object, fromValue_113_impl);
                      auto fromValue_113 = &fromValue_113_impl;
                      USE(fromValue_113);
                      *fromValue_113 = implicit_cast<TNode<Object>>(t252);
                      // ../src/builtins/array.tq:227:11
                      TNode<Smi> t253 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
                      CallRuntime(Runtime::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_94).value()), implicit_cast<TNode<Object>>((*to_111).value()), implicit_cast<TNode<Object>>((*fromValue_113).value()), implicit_cast<TNode<Smi>>(t253));
                    }
                    Goto(label_if_done_label_463_726);
                  }
                  if (label__False_74->is_used())
                  {
                    BIND(label__False_74);
                    // ../src/builtins/array.tq:230:16
                    {
                      // ../src/builtins/array.tq:232:11
                      TNode<Smi> t254 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
                      CallRuntime(Runtime::kDeleteProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_94).value()), implicit_cast<TNode<Object>>((*to_111).value()), implicit_cast<TNode<Smi>>(t254));
                    }
                    Goto(label_if_done_label_463_726);
                  }
                  BIND(label_if_done_label_463_726);
                }
                // ../src/builtins/array.tq:235:9
                int31_t t255 = 1;
                TNode<Number> t256 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t255)));
                TNode<Number> t257 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_109).value()), implicit_cast<TNode<Number>>(t256)));
                USE(implicit_cast<TNode<Number>>(t257));
                *k_109 = implicit_cast<TNode<Number>>(t257);
              }
              Goto(label_header_462_725);
            }
            BIND(label__False_72);
          }
          // ../src/builtins/array.tq:239:7
          *k_109 = implicit_cast<TNode<Number>>((*len_95).value());
          // ../src/builtins/array.tq:241:7
          {
            Label label__True_75_impl(this);
            Label* label__True_75 = &label__True_75_impl;
            USE(label__True_75);
            Label label__False_76_impl(this);
            Label* label__False_76 = &label__False_76_impl;
            USE(label__False_76);
            Label label_header_464_727_impl(this, {k_109});
            Label* label_header_464_727 = &label_header_464_727_impl;
            USE(label_header_464_727);
            Goto(label_header_464_727);
            BIND(label_header_464_727);
            TNode<Number> t258 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*len_95).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_100).value())));
            USE(implicit_cast<TNode<Number>>(t258));
            TNode<Number> t259 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>(t258), implicit_cast<TNode<Number>>((*itemCount_108).value())));
            USE(implicit_cast<TNode<Number>>(t259));
            BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*k_109).value()), implicit_cast<TNode<Number>>(t259), label__True_75, label__False_76);
            if (label__True_75->is_used())
            {
              BIND(label__True_75);
              // ../src/builtins/array.tq:241:57
              {
                // ../src/builtins/array.tq:243:9
                int31_t t260 = 1;
                TNode<Number> t261 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t260)));
                TNode<Number> t262 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*k_109).value()), implicit_cast<TNode<Number>>(t261)));
                USE(implicit_cast<TNode<Number>>(t262));
                TNode<String> t263 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t262)));
                USE(implicit_cast<TNode<String>>(t263));
                TNode<Smi> t264 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
                CallRuntime(Runtime::kDeleteProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_94).value()), implicit_cast<TNode<Object>>(t263), implicit_cast<TNode<Smi>>(t264));
                // ../src/builtins/array.tq:246:9
                int31_t t265 = 1;
                TNode<Number> t266 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t265)));
                TNode<Number> t267 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*k_109).value()), implicit_cast<TNode<Number>>(t266)));
                USE(implicit_cast<TNode<Number>>(t267));
                *k_109 = implicit_cast<TNode<Number>>(t267);
              }
              Goto(label_header_464_727);
            }
            BIND(label__False_76);
          }
        }
        Goto(label_if_done_label_461_724);
      }
      if (label__False_70->is_used())
      {
        BIND(label__False_70);
        // ../src/builtins/array.tq:249:12
        {
          Label label__True_77_impl(this);
          Label* label__True_77 = &label__True_77_impl;
          USE(label__True_77);
          Label label__False_78_impl(this, {});
          Label* label__False_78 = &label__False_78_impl;
          USE(label__False_78);
          BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*itemCount_108).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_100).value()), label__True_77, label__False_78);
          if (label__True_77->is_used())
          {
            BIND(label__True_77);
            // ../src/builtins/array.tq:249:47
            {
              // ../src/builtins/array.tq:251:7
              TNode<Number> t268 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*len_95).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_100).value())));
              USE(implicit_cast<TNode<Number>>(t268));
              TVARIABLE(Number, k_114_impl);
              auto k_114 = &k_114_impl;
              USE(k_114);
              *k_114 = implicit_cast<TNode<Number>>(t268);
              // ../src/builtins/array.tq:254:7
              {
                Label label__True_79_impl(this);
                Label* label__True_79 = &label__True_79_impl;
                USE(label__True_79);
                Label label__False_80_impl(this);
                Label* label__False_80 = &label__False_80_impl;
                USE(label__False_80);
                Label label_header_465_728_impl(this, {k_114});
                Label* label_header_465_728 = &label_header_465_728_impl;
                USE(label_header_465_728);
                Goto(label_header_465_728);
                BIND(label_header_465_728);
                BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*k_114).value()), implicit_cast<TNode<Number>>((*actualStart_98).value()), label__True_79, label__False_80);
                if (label__True_79->is_used())
                {
                  BIND(label__True_79);
                  // ../src/builtins/array.tq:254:31
                  {
                    // ../src/builtins/array.tq:256:9
                    TNode<Number> t269 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_114).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_100).value())));
                    USE(implicit_cast<TNode<Number>>(t269));
                    int31_t t270 = 1;
                    TNode<Number> t271 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t270)));
                    TNode<Number> t272 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(t269), implicit_cast<TNode<Number>>(t271)));
                    USE(implicit_cast<TNode<Number>>(t272));
                    TNode<String> t273 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t272)));
                    USE(implicit_cast<TNode<String>>(t273));
                    TVARIABLE(String, from_115_impl);
                    auto from_115 = &from_115_impl;
                    USE(from_115);
                    *from_115 = implicit_cast<TNode<String>>(t273);
                    // ../src/builtins/array.tq:259:9
                    TNode<Number> t274 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_114).value()), implicit_cast<TNode<Number>>((*itemCount_108).value())));
                    USE(implicit_cast<TNode<Number>>(t274));
                    int31_t t275 = 1;
                    TNode<Number> t276 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t275)));
                    TNode<Number> t277 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(t274), implicit_cast<TNode<Number>>(t276)));
                    USE(implicit_cast<TNode<Number>>(t277));
                    TNode<String> t278 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t277)));
                    USE(implicit_cast<TNode<String>>(t278));
                    TVARIABLE(String, to_116_impl);
                    auto to_116 = &to_116_impl;
                    USE(to_116);
                    *to_116 = implicit_cast<TNode<String>>(t278);
                    // ../src/builtins/array.tq:262:9
                    TNode<Oddball> t279 = UncheckedCast<Oddball>(TorqueHasProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*o_94).value()), implicit_cast<TNode<Object>>((*from_115).value())));
                    USE(implicit_cast<TNode<Oddball>>(t279));
                    TVARIABLE(Oddball, fromPresent_117_impl);
                    auto fromPresent_117 = &fromPresent_117_impl;
                    USE(fromPresent_117);
                    *fromPresent_117 = implicit_cast<TNode<Oddball>>(t279);
                    // ../src/builtins/array.tq:265:9
                    {
                      Label label__True_81_impl(this);
                      Label* label__True_81 = &label__True_81_impl;
                      USE(label__True_81);
                      Label label__False_82_impl(this);
                      Label* label__False_82 = &label__False_82_impl;
                      USE(label__False_82);
                      Label label_if_done_label_466_729_impl(this, {});
                      Label* label_if_done_label_466_729 = &label_if_done_label_466_729_impl;
                      USE(label_if_done_label_466_729);
                      TNode<BoolT> t280 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*fromPresent_117).value()), implicit_cast<TNode<Object>>(True())));
                      USE(implicit_cast<TNode<BoolT>>(t280));
                      Branch(implicit_cast<TNode<BoolT>>(t280), label__True_81, label__False_82);
                      if (label__True_81->is_used())
                      {
                        BIND(label__True_81);
                        // ../src/builtins/array.tq:265:34
                        {
                          // ../src/builtins/array.tq:267:11
                          TNode<Object> t281 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_94).value()), implicit_cast<TNode<Object>>((*from_115).value())));
                          USE(implicit_cast<TNode<Object>>(t281));
                          TVARIABLE(Object, fromValue_118_impl);
                          auto fromValue_118 = &fromValue_118_impl;
                          USE(fromValue_118);
                          *fromValue_118 = implicit_cast<TNode<Object>>(t281);
                          // ../src/builtins/array.tq:270:11
                          TNode<Smi> t282 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
                          CallRuntime(Runtime::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_94).value()), implicit_cast<TNode<Object>>((*to_116).value()), implicit_cast<TNode<Object>>((*fromValue_118).value()), implicit_cast<TNode<Smi>>(t282));
                        }
                        Goto(label_if_done_label_466_729);
                      }
                      if (label__False_82->is_used())
                      {
                        BIND(label__False_82);
                        // ../src/builtins/array.tq:273:16
                        {
                          // ../src/builtins/array.tq:275:11
                          TNode<Smi> t283 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
                          CallRuntime(Runtime::kDeleteProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_94).value()), implicit_cast<TNode<Object>>((*to_116).value()), implicit_cast<TNode<Smi>>(t283));
                        }
                        Goto(label_if_done_label_466_729);
                      }
                      BIND(label_if_done_label_466_729);
                    }
                    // ../src/builtins/array.tq:279:9
                    int31_t t284 = 1;
                    TNode<Number> t285 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t284)));
                    TNode<Number> t286 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*k_114).value()), implicit_cast<TNode<Number>>(t285)));
                    USE(implicit_cast<TNode<Number>>(t286));
                    *k_114 = implicit_cast<TNode<Number>>(t286);
                  }
                  Goto(label_header_465_728);
                }
                BIND(label__False_80);
              }
            }
            Goto(label__False_78);
          }
          BIND(label__False_78);
        }
        Goto(label_if_done_label_461_724);
      }
      BIND(label_if_done_label_461_724);
    }
    // ../src/builtins/array.tq:284:5
    *k_104 = implicit_cast<TNode<Number>>((*actualStart_98).value());
    // ../src/builtins/array.tq:289:5
    {
      Label label__True_83_impl(this);
      Label* label__True_83 = &label__True_83_impl;
      USE(label__True_83);
      Label label__False_84_impl(this, {k_104});
      Label* label__False_84 = &label__False_84_impl;
      USE(label__False_84);
      TNode<IntPtrT> t287 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t288 = 2;
      TNode<IntPtrT> t289 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t288)));
      TNode<BoolT> t290 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t287), implicit_cast<TNode<IntPtrT>>(t289)));
      USE(implicit_cast<TNode<BoolT>>(t290));
      Branch(implicit_cast<TNode<BoolT>>(t290), label__True_83, label__False_84);
      if (label__True_83->is_used())
      {
        BIND(label__True_83);
        // ../src/builtins/array.tq:289:31
        {
          // ../src/builtins/array.tq:290:7
          int31_t t291 = 2;
          TNode<IntPtrT> t292 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
          Label label_body_467_730_impl(this);
          Label* label_body_467_730 = &label_body_467_730_impl;
          USE(label_body_467_730);
          Label label_increment_468_731_impl(this);
          Label* label_increment_468_731 = &label_increment_468_731_impl;
          USE(label_increment_468_731);
          Label label_exit_469_732_impl(this);
          Label* label_exit_469_732 = &label_exit_469_732_impl;
          USE(label_exit_469_732);
          TVARIABLE(IntPtrT, _for_index_t293_470_impl);
          auto _for_index_t293_470 = &_for_index_t293_470_impl;
          USE(_for_index_t293_470);
          TNode<IntPtrT> t294 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t291)));
          *_for_index_t293_470 = implicit_cast<TNode<IntPtrT>>(t294);
          Label label_header_471_733_impl(this, {_for_index_t293_470, k_104});
          Label* label_header_471_733 = &label_header_471_733_impl;
          USE(label_header_471_733);
          Goto(label_header_471_733);
          BIND(label_header_471_733);
          TNode<BoolT> t295 = UncheckedCast<BoolT>(IntPtrLessThan(implicit_cast<TNode<IntPtrT>>((*_for_index_t293_470).value()), implicit_cast<TNode<IntPtrT>>(t292)));
          Branch(implicit_cast<TNode<BoolT>>(t295), label_body_467_730, label_exit_469_732);
          BIND(label_body_467_730);
          TNode<Object> t296 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>((*_for_index_t293_470).value())));
          TVARIABLE(Object, e_119_impl);
          auto e_119 = &e_119_impl;
          USE(e_119);
          *e_119 = implicit_cast<TNode<Object>>(t296);
          // ../src/builtins/array.tq:290:46
          {
            // ../src/builtins/array.tq:292:9
            TNode<String> t297 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*k_104).value())));
            USE(implicit_cast<TNode<String>>(t297));
            TNode<Smi> t298 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
            CallRuntime(Runtime::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_94).value()), implicit_cast<TNode<Object>>(t297), implicit_cast<TNode<Object>>((*e_119).value()), implicit_cast<TNode<Smi>>(t298));
            // ../src/builtins/array.tq:295:9
            int31_t t299 = 1;
            TNode<Number> t300 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t299)));
            TNode<Number> t301 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_104).value()), implicit_cast<TNode<Number>>(t300)));
            USE(implicit_cast<TNode<Number>>(t301));
            *k_104 = implicit_cast<TNode<Number>>(t301);
          }
          Goto(label_increment_468_731);
          BIND(label_increment_468_731);
          TNode<IntPtrT> t302 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(1)));
          TNode<IntPtrT> t303 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>((*_for_index_t293_470).value()), implicit_cast<TNode<IntPtrT>>(t302)));
          *_for_index_t293_470 = implicit_cast<TNode<IntPtrT>>(t303);
          Goto(label_header_471_733);
          BIND(label_exit_469_732);
        }
        Goto(label__False_84);
      }
      BIND(label__False_84);
    }
    // ../src/builtins/array.tq:301:5
    const char* t304 = "length";
    TNode<Number> t305 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*len_95).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_100).value())));
    USE(implicit_cast<TNode<Number>>(t305));
    TNode<Number> t306 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>(t305), implicit_cast<TNode<Number>>((*itemCount_108).value())));
    USE(implicit_cast<TNode<Number>>(t306));
    TNode<Object> t307 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(implicit_cast<const char*>(t304)));
    TNode<Smi> t308 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
    CallRuntime(Runtime::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_94).value()), implicit_cast<TNode<Object>>(t307), implicit_cast<TNode<Object>>(t306), implicit_cast<TNode<Smi>>(t308));
    // ../src/builtins/array.tq:304:5
    arguments->PopAndReturn(implicit_cast<TNode<Object>>((*a_103).value()));
  }
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::ArrayForEachTorqueContinuation(TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, TNode<Smi> p_initial_k) {
  TVARIABLE(Object, _return_120_impl);
  auto _return_120 = &_return_120_impl;
  USE(_return_120);
  Label label_macro_end_734_impl(this, {_return_120});
  Label* label_macro_end_734 = &label_macro_end_734_impl;
  USE(label_macro_end_734);
  // ../src/builtins/array-foreach.tq:8:48
  {
    // ../src/builtins/array-foreach.tq:11:5
    TVARIABLE(Smi, k_121_impl);
    auto k_121 = &k_121_impl;
    USE(k_121);
    *k_121 = implicit_cast<TNode<Smi>>(p_initial_k);
    Label label__True_85_impl(this);
    Label* label__True_85 = &label__True_85_impl;
    USE(label__True_85);
    Label label__False_86_impl(this);
    Label* label__False_86 = &label__False_86_impl;
    USE(label__False_86);
    Label label_header_472_735_impl(this, {k_121});
    Label* label_header_472_735 = &label_header_472_735_impl;
    USE(label_header_472_735);
    Goto(label_header_472_735);
    BIND(label_header_472_735);
    Label label_action_473_736_impl(this);
    Label* label_action_473_736 = &label_action_473_736_impl;
    USE(label_action_473_736);
    BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*k_121).value()), implicit_cast<TNode<Number>>(p_len), label__True_85, label__False_86);
    if (label__True_85->is_used())
    {
      BIND(label__True_85);
      // ../src/builtins/array-foreach.tq:11:54
      {
        // ../src/builtins/array-foreach.tq:13:7
        TNode<String> t309 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*k_121).value())));
        USE(implicit_cast<TNode<String>>(t309));
        TVARIABLE(String, pK_122_impl);
        auto pK_122 = &pK_122_impl;
        USE(pK_122);
        *pK_122 = implicit_cast<TNode<String>>(t309);
        // ../src/builtins/array-foreach.tq:16:7
        TNode<Oddball> t310 = UncheckedCast<Oddball>(TorqueHasProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_o), implicit_cast<TNode<Object>>((*pK_122).value())));
        USE(implicit_cast<TNode<Oddball>>(t310));
        TVARIABLE(Oddball, kPresent_123_impl);
        auto kPresent_123 = &kPresent_123_impl;
        USE(kPresent_123);
        *kPresent_123 = implicit_cast<TNode<Oddball>>(t310);
        // ../src/builtins/array-foreach.tq:19:7
        {
          Label label__True_87_impl(this);
          Label* label__True_87 = &label__True_87_impl;
          USE(label__True_87);
          Label label__False_88_impl(this, {});
          Label* label__False_88 = &label__False_88_impl;
          USE(label__False_88);
          TNode<BoolT> t311 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*kPresent_123).value()), implicit_cast<TNode<Object>>(True())));
          USE(implicit_cast<TNode<BoolT>>(t311));
          Branch(implicit_cast<TNode<BoolT>>(t311), label__True_87, label__False_88);
          if (label__True_87->is_used())
          {
            BIND(label__True_87);
            // ../src/builtins/array-foreach.tq:19:29
            {
              // ../src/builtins/array-foreach.tq:21:9
              TNode<Object> t312 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_o), implicit_cast<TNode<Object>>((*pK_122).value())));
              USE(implicit_cast<TNode<Object>>(t312));
              TVARIABLE(Object, kValue_124_impl);
              auto kValue_124 = &kValue_124_impl;
              USE(kValue_124);
              *kValue_124 = implicit_cast<TNode<Object>>(t312);
              // ../src/builtins/array-foreach.tq:24:9
              TNode<Object> t313 = UncheckedCast<Object>(Call(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_callbackfn), implicit_cast<TNode<Object>>(p_thisArg), implicit_cast<TNode<Object>>((*kValue_124).value()), implicit_cast<TNode<Object>>((*k_121).value()), implicit_cast<TNode<Object>>(p_o)));
              USE(implicit_cast<TNode<Object>>(t313));
            }
            Goto(label__False_88);
          }
          BIND(label__False_88);
        }
      }
      Goto(label_action_473_736);
    }
    {
      BIND(label_action_473_736);
      int31_t t314 = 1;
      TNode<Smi> t315 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t314)));
      TNode<Smi> t316 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_121).value()), implicit_cast<TNode<Smi>>(t315)));
      USE(implicit_cast<TNode<Smi>>(t316));
      *k_121 = implicit_cast<TNode<Smi>>(t316);
      Goto(label_header_472_735);
    }
    BIND(label__False_86);
    // ../src/builtins/array-foreach.tq:29:5
    *_return_120 = implicit_cast<TNode<Object>>(Undefined());
    Goto(label_macro_end_734);
  }
  BIND(label_macro_end_734);
  return implicit_cast<TNode<Object>>((*_return_120).value());
}

TF_BUILTIN(ArrayForEachLoopEagerDeoptContinuation, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Object> p_receiver = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_callback = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(p_callback);
  TNode<Object> p_thisArg = UncheckedCast<Object>(Parameter(Descriptor::kThisArg));
  USE(p_thisArg);
  TNode<Object> p_initialK = UncheckedCast<Object>(Parameter(Descriptor::kInitialK));
  USE(p_initialK);
  TNode<Object> p_length = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(p_length);
  // ../src/builtins/array-foreach.tq:34:49
  {
    // ../src/builtins/array-foreach.tq:38:5
    TNode<JSReceiver> t317 = UncheckedCast<JSReceiver>(unsafe_cast12ATJSReceiver(implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t317));
    TVARIABLE(JSReceiver, jsreceiver_125_impl);
    auto jsreceiver_125 = &jsreceiver_125_impl;
    USE(jsreceiver_125);
    *jsreceiver_125 = implicit_cast<TNode<JSReceiver>>(t317);
    // ../src/builtins/array-foreach.tq:39:5
    TNode<Object> t318 = UncheckedCast<Object>(CallBuiltin(Builtins::kArrayForEachLoopContinuation, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*jsreceiver_125).value()), implicit_cast<TNode<Object>>(p_callback), implicit_cast<TNode<Object>>(p_thisArg), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<TNode<Object>>((*jsreceiver_125).value()), implicit_cast<TNode<Object>>(p_initialK), implicit_cast<TNode<Object>>(p_length), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<Object>>(t318));
    Return(implicit_cast<TNode<Object>>(t318));
  }
}

TF_BUILTIN(ArrayForEachLoopLazyDeoptContinuation, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Object> p_receiver = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_callback = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(p_callback);
  TNode<Object> p_thisArg = UncheckedCast<Object>(Parameter(Descriptor::kThisArg));
  USE(p_thisArg);
  TNode<Object> p_initialK = UncheckedCast<Object>(Parameter(Descriptor::kInitialK));
  USE(p_initialK);
  TNode<Object> p_length = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(p_length);
  TNode<Object> p_result = UncheckedCast<Object>(Parameter(Descriptor::kResult));
  USE(p_result);
  // ../src/builtins/array-foreach.tq:46:65
  {
    // ../src/builtins/array-foreach.tq:50:5
    TNode<JSReceiver> t319 = UncheckedCast<JSReceiver>(unsafe_cast12ATJSReceiver(implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t319));
    TVARIABLE(JSReceiver, jsreceiver_126_impl);
    auto jsreceiver_126 = &jsreceiver_126_impl;
    USE(jsreceiver_126);
    *jsreceiver_126 = implicit_cast<TNode<JSReceiver>>(t319);
    // ../src/builtins/array-foreach.tq:51:5
    TNode<Object> t320 = UncheckedCast<Object>(CallBuiltin(Builtins::kArrayForEachLoopContinuation, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*jsreceiver_126).value()), implicit_cast<TNode<Object>>(p_callback), implicit_cast<TNode<Object>>(p_thisArg), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<TNode<Object>>((*jsreceiver_126).value()), implicit_cast<TNode<Object>>(p_initialK), implicit_cast<TNode<Object>>(p_length), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<Object>>(t320));
    Return(implicit_cast<TNode<Object>>(t320));
  }
}

TF_BUILTIN(ArrayForEachLoopContinuation, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSReceiver> p_receiver = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_callback = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(p_callback);
  TNode<Object> p_thisArg = UncheckedCast<Object>(Parameter(Descriptor::kThisArg));
  USE(p_thisArg);
  TNode<Object> p_array = UncheckedCast<Object>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Object> p_object = UncheckedCast<Object>(Parameter(Descriptor::kObject));
  USE(p_object);
  TNode<Object> p_initialK = UncheckedCast<Object>(Parameter(Descriptor::kInitialK));
  USE(p_initialK);
  TNode<Object> p_length = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(p_length);
  TNode<Object> p_to = UncheckedCast<Object>(Parameter(Descriptor::kTo));
  USE(p_to);
  // ../src/builtins/array-foreach.tq:59:27
  {
    // ../src/builtins/array-foreach.tq:60:5
    {
      Label label_try_done_474_737_impl(this);
      Label* label_try_done_474_737 = &label_try_done_474_737_impl;
      USE(label_try_done_474_737);
      Label label_Unexpected_89_impl(this);
      Label* label_Unexpected_89 = &label_Unexpected_89_impl;
      USE(label_Unexpected_89);
      Label label_try_begin_475_738_impl(this);
      Label* label_try_begin_475_738 = &label_try_begin_475_738_impl;
      USE(label_try_begin_475_738);
      Goto(label_try_begin_475_738);
      if (label_try_begin_475_738->is_used())
      {
        BIND(label_try_begin_475_738);
        // ../src/builtins/array-foreach.tq:60:9
        {
          // ../src/builtins/array-foreach.tq:61:7
          TNode<JSReceiver> t321 = UncheckedCast<JSReceiver>(cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(implicit_cast<TNode<Object>>(p_callback), label_Unexpected_89));
          USE(implicit_cast<TNode<JSReceiver>>(t321));
          TVARIABLE(JSReceiver, callbackfn_127_impl);
          auto callbackfn_127 = &callbackfn_127_impl;
          USE(callbackfn_127);
          *callbackfn_127 = implicit_cast<TNode<JSReceiver>>(t321);
          // ../src/builtins/array-foreach.tq:62:7
          TNode<Smi> t322 = UncheckedCast<Smi>(cast5ATSmi(implicit_cast<TNode<Object>>(p_initialK), label_Unexpected_89));
          USE(implicit_cast<TNode<Smi>>(t322));
          TVARIABLE(Smi, k_128_impl);
          auto k_128 = &k_128_impl;
          USE(k_128);
          *k_128 = implicit_cast<TNode<Smi>>(t322);
          // ../src/builtins/array-foreach.tq:63:7
          TNode<Number> t323 = UncheckedCast<Number>(cast22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Object>>(p_length), label_Unexpected_89));
          USE(implicit_cast<TNode<Number>>(t323));
          TVARIABLE(Number, number_length_129_impl);
          auto number_length_129 = &number_length_129_impl;
          USE(number_length_129);
          *number_length_129 = implicit_cast<TNode<Number>>(t323);
          // ../src/builtins/array-foreach.tq:65:7
          TNode<Object> t324 = UncheckedCast<Object>(ArrayForEachTorqueContinuation(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_receiver), implicit_cast<TNode<Number>>((*number_length_129).value()), implicit_cast<TNode<JSReceiver>>((*callbackfn_127).value()), implicit_cast<TNode<Object>>(p_thisArg), implicit_cast<TNode<Smi>>((*k_128).value())));
          USE(implicit_cast<TNode<Object>>(t324));
          Return(implicit_cast<TNode<Object>>(t324));
        }
      }
      if (label_Unexpected_89->is_used())
      {
        BIND(label_Unexpected_89);
        // ../src/builtins/array-foreach.tq:68:22
        {
          // ../src/builtins/array-foreach.tq:69:7
          Unreachable();
        }
      }
    }
  }
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::FastArrayForEach(TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, Label* label_Bailout_90, TVariable<Smi>* Bailout0_130) {
  TVARIABLE(Object, _return_131_impl);
  auto _return_131 = &_return_131_impl;
  USE(_return_131);
  Label label_macro_end_739_impl(this, {_return_131});
  Label* label_macro_end_739 = &label_macro_end_739_impl;
  USE(label_macro_end_739);
  // ../src/builtins/array-foreach.tq:110:16
  {
    // ../src/builtins/array-foreach.tq:111:5
    int31_t t325 = 0;
    TVARIABLE(Smi, k_132_impl);
    auto k_132 = &k_132_impl;
    USE(k_132);
    TNode<Smi> t326 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t325)));
    *k_132 = implicit_cast<TNode<Smi>>(t326);
    // ../src/builtins/array-foreach.tq:112:5
    {
      Label label_try_done_476_740_impl(this);
      Label* label_try_done_476_740 = &label_try_done_476_740_impl;
      USE(label_try_done_476_740);
      Label label_Slow_91_impl(this);
      Label* label_Slow_91 = &label_Slow_91_impl;
      USE(label_Slow_91);
      Label label_try_begin_477_741_impl(this);
      Label* label_try_begin_477_741 = &label_try_begin_477_741_impl;
      USE(label_try_begin_477_741);
      Goto(label_try_begin_477_741);
      if (label_try_begin_477_741->is_used())
      {
        BIND(label_try_begin_477_741);
        // ../src/builtins/array-foreach.tq:112:9
        {
          // ../src/builtins/array-foreach.tq:113:7
          TNode<Smi> t327 = UncheckedCast<Smi>(cast5ATSmi(implicit_cast<TNode<Object>>(p_len), label_Slow_91));
          USE(implicit_cast<TNode<Smi>>(t327));
          TVARIABLE(Smi, smi_len_133_impl);
          auto smi_len_133 = &smi_len_133_impl;
          USE(smi_len_133);
          *smi_len_133 = implicit_cast<TNode<Smi>>(t327);
          // ../src/builtins/array-foreach.tq:114:7
          TNode<JSArray> t328 = UncheckedCast<JSArray>(cast9ATJSArray(implicit_cast<TNode<Object>>(p_o), label_Slow_91));
          USE(implicit_cast<TNode<JSArray>>(t328));
          TVARIABLE(JSArray, a_134_impl);
          auto a_134 = &a_134_impl;
          USE(a_134);
          *a_134 = implicit_cast<TNode<JSArray>>(t328);
          // ../src/builtins/array-foreach.tq:115:7
          TNode<Map> t329 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*a_134).value())));
          TVARIABLE(Map, map_135_impl);
          auto map_135 = &map_135_impl;
          USE(map_135);
          *map_135 = implicit_cast<TNode<Map>>(t329);
          // ../src/builtins/array-foreach.tq:117:7
          {
            Label label__True_92_impl(this);
            Label* label__True_92 = &label__True_92_impl;
            USE(label__True_92);
            Label label__False_93_impl(this, {});
            Label* label__False_93 = &label__False_93_impl;
            USE(label__False_93);
            TNode<BoolT> t330 = UncheckedCast<BoolT>(IsPrototypeInitialArrayPrototype(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Map>>((*map_135).value())));
            USE(implicit_cast<TNode<BoolT>>(t330));
            TNode<BoolT> t331 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t330)));
            USE(implicit_cast<TNode<BoolT>>(t331));
            Branch(implicit_cast<TNode<BoolT>>(t331), label__True_92, label__False_93);
            if (label__True_92->is_used())
            {
              BIND(label__True_92);
              // ../src/builtins/array-foreach.tq:117:60
              Goto(label_Slow_91);
            }
            BIND(label__False_93);
          }
          // ../src/builtins/array-foreach.tq:118:7
          TNode<Int32T> t332 = UncheckedCast<Int32T>(LoadMapElementsKind(implicit_cast<TNode<Map>>((*map_135).value())));
          TVARIABLE(Int32T, elementsKind_136_impl);
          auto elementsKind_136 = &elementsKind_136_impl;
          USE(elementsKind_136);
          *elementsKind_136 = implicit_cast<TNode<Int32T>>(t332);
          // ../src/builtins/array-foreach.tq:119:7
          {
            Label label__True_94_impl(this);
            Label* label__True_94 = &label__True_94_impl;
            USE(label__True_94);
            Label label__False_95_impl(this, {});
            Label* label__False_95 = &label__False_95_impl;
            USE(label__False_95);
            TNode<BoolT> t333 = UncheckedCast<BoolT>(IsFastElementsKind(implicit_cast<TNode<Int32T>>((*elementsKind_136).value())));
            USE(implicit_cast<TNode<BoolT>>(t333));
            TNode<BoolT> t334 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t333)));
            USE(implicit_cast<TNode<BoolT>>(t334));
            Branch(implicit_cast<TNode<BoolT>>(t334), label__True_94, label__False_95);
            if (label__True_94->is_used())
            {
              BIND(label__True_94);
              // ../src/builtins/array-foreach.tq:119:46
              Goto(label_Slow_91);
            }
            BIND(label__False_95);
          }
          // ../src/builtins/array-foreach.tq:121:7
          {
            Label label__True_96_impl(this);
            Label* label__True_96 = &label__True_96_impl;
            USE(label__True_96);
            Label label__False_97_impl(this);
            Label* label__False_97 = &label__False_97_impl;
            USE(label__False_97);
            Label label_if_done_label_478_742_impl(this, {});
            Label* label_if_done_label_478_742 = &label_if_done_label_478_742_impl;
            USE(label_if_done_label_478_742);
            TNode<BoolT> t335 = UncheckedCast<BoolT>(IsElementsKindGreaterThan(implicit_cast<TNode<Int32T>>((*elementsKind_136).value()), implicit_cast<ElementsKind>(HOLEY_ELEMENTS)));
            USE(implicit_cast<TNode<BoolT>>(t335));
            Branch(implicit_cast<TNode<BoolT>>(t335), label__True_96, label__False_97);
            if (label__True_96->is_used())
            {
              BIND(label__True_96);
              // ../src/builtins/array-foreach.tq:121:68
              {
                // ../src/builtins/array-foreach.tq:122:9
                VisitAllElements18ATFixedDoubleArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSArray>>((*a_134).value()), implicit_cast<TNode<Smi>>((*smi_len_133).value()), implicit_cast<TNode<JSReceiver>>(p_callbackfn), implicit_cast<TNode<Object>>(p_thisArg), label_Bailout_90, Bailout0_130);
              }
              Goto(label_if_done_label_478_742);
            }
            if (label__False_97->is_used())
            {
              BIND(label__False_97);
              // ../src/builtins/array-foreach.tq:125:14
              {
                // ../src/builtins/array-foreach.tq:126:9
                VisitAllElements12ATFixedArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSArray>>((*a_134).value()), implicit_cast<TNode<Smi>>((*smi_len_133).value()), implicit_cast<TNode<JSReceiver>>(p_callbackfn), implicit_cast<TNode<Object>>(p_thisArg), label_Bailout_90, Bailout0_130);
              }
              Goto(label_if_done_label_478_742);
            }
            BIND(label_if_done_label_478_742);
          }
        }
        Goto(label_try_done_476_740);
      }
      if (label_Slow_91->is_used())
      {
        BIND(label_Slow_91);
        // ../src/builtins/array-foreach.tq:130:16
        {
          // ../src/builtins/array-foreach.tq:131:7
          *Bailout0_130 = implicit_cast<TNode<Smi>>((*k_132).value());
          Goto(label_Bailout_90);
        }
      }
      BIND(label_try_done_476_740);
    }
    // ../src/builtins/array-foreach.tq:133:5
    *_return_131 = implicit_cast<TNode<Object>>(Undefined());
    Goto(label_macro_end_739);
  }
  BIND(label_macro_end_739);
  return implicit_cast<TNode<Object>>((*_return_131).value());
}

TF_BUILTIN(ArrayForEach, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/array-foreach.tq:138:65
  {
    // ../src/builtins/array-foreach.tq:139:5
    {
      Label label_try_done_479_743_impl(this);
      Label* label_try_done_479_743 = &label_try_done_479_743_impl;
      USE(label_try_done_479_743);
      Label label_TypeError_98_impl(this);
      Label* label_TypeError_98 = &label_TypeError_98_impl;
      USE(label_TypeError_98);
      Label label_NullOrUndefinedError_99_impl(this);
      Label* label_NullOrUndefinedError_99 = &label_NullOrUndefinedError_99_impl;
      USE(label_NullOrUndefinedError_99);
      Label label_try_begin_480_744_impl(this);
      Label* label_try_begin_480_744 = &label_try_begin_480_744_impl;
      USE(label_try_begin_480_744);
      Goto(label_try_begin_480_744);
      if (label_try_begin_480_744->is_used())
      {
        BIND(label_try_begin_480_744);
        // ../src/builtins/array-foreach.tq:139:9
        {
          // ../src/builtins/array-foreach.tq:140:7
          {
            Label label__True_100_impl(this);
            Label* label__True_100 = &label__True_100_impl;
            USE(label__True_100);
            Label label__False_101_impl(this, {});
            Label* label__False_101 = &label__False_101_impl;
            USE(label__False_101);
            TNode<BoolT> t336 = UncheckedCast<BoolT>(IsNullOrUndefined(implicit_cast<TNode<Object>>(p_receiver)));
            USE(implicit_cast<TNode<BoolT>>(t336));
            Branch(implicit_cast<TNode<BoolT>>(t336), label__True_100, label__False_101);
            if (label__True_100->is_used())
            {
              BIND(label__True_100);
              // ../src/builtins/array-foreach.tq:140:40
              {
                // ../src/builtins/array-foreach.tq:141:9
                Goto(label_NullOrUndefinedError_99);
              }
            }
            BIND(label__False_101);
          }
          // ../src/builtins/array-foreach.tq:145:7
          TNode<JSReceiver> t337 = UncheckedCast<JSReceiver>(CallBuiltin(Builtins::kToObject, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver)));
          USE(implicit_cast<TNode<JSReceiver>>(t337));
          TVARIABLE(JSReceiver, o_137_impl);
          auto o_137 = &o_137_impl;
          USE(o_137);
          *o_137 = implicit_cast<TNode<JSReceiver>>(t337);
          // ../src/builtins/array-foreach.tq:148:7
          TNode<Number> t338 = UncheckedCast<Number>(GetLengthProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_137).value())));
          USE(implicit_cast<TNode<Number>>(t338));
          TVARIABLE(Number, len_138_impl);
          auto len_138 = &len_138_impl;
          USE(len_138);
          *len_138 = implicit_cast<TNode<Number>>(t338);
          // ../src/builtins/array-foreach.tq:151:7
          {
            Label label__True_102_impl(this);
            Label* label__True_102 = &label__True_102_impl;
            USE(label__True_102);
            Label label__False_103_impl(this, {});
            Label* label__False_103 = &label__False_103_impl;
            USE(label__False_103);
            TNode<IntPtrT> t339 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
            int31_t t340 = 0;
            TNode<IntPtrT> t341 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t340)));
            TNode<BoolT> t342 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<IntPtrT>>(t339), implicit_cast<TNode<IntPtrT>>(t341)));
            USE(implicit_cast<TNode<BoolT>>(t342));
            Branch(implicit_cast<TNode<BoolT>>(t342), label__True_102, label__False_103);
            if (label__True_102->is_used())
            {
              BIND(label__True_102);
              // ../src/builtins/array-foreach.tq:151:34
              {
                // ../src/builtins/array-foreach.tq:152:9
                Goto(label_TypeError_98);
              }
            }
            BIND(label__False_103);
          }
          // ../src/builtins/array-foreach.tq:154:7
          int31_t t343 = 0;
          TNode<IntPtrT> t344 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t343)));
          TNode<Object> t345 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t344)));
          TNode<JSReceiver> t346 = UncheckedCast<JSReceiver>(cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(implicit_cast<TNode<Object>>(t345), label_TypeError_98));
          USE(implicit_cast<TNode<JSReceiver>>(t346));
          TVARIABLE(JSReceiver, callbackfn_139_impl);
          auto callbackfn_139 = &callbackfn_139_impl;
          USE(callbackfn_139);
          *callbackfn_139 = implicit_cast<TNode<JSReceiver>>(t346);
          // ../src/builtins/array-foreach.tq:158:7
          auto t347 = [=]() {
            int31_t t349 = 1;
            TNode<IntPtrT> t350 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t349)));
            TNode<Object> t351 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t350)));
            return implicit_cast<TNode<Object>>(t351);
          };
          auto t348 = [=]() {
            return implicit_cast<TNode<Oddball>>(Undefined());
          };
          TVARIABLE(Object, t352_481_impl);
          auto t352_481 = &t352_481_impl;
          USE(t352_481);
          {
            Label label__True_104_impl(this);
            Label* label__True_104 = &label__True_104_impl;
            USE(label__True_104);
            Label label__False_105_impl(this);
            Label* label__False_105 = &label__False_105_impl;
            USE(label__False_105);
            Label label__done_482_745_impl(this, {t352_481});
            Label* label__done_482_745 = &label__done_482_745_impl;
            USE(label__done_482_745);
            TNode<IntPtrT> t353 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
            int31_t t354 = 1;
            TNode<IntPtrT> t355 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t354)));
            TNode<BoolT> t356 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t353), implicit_cast<TNode<IntPtrT>>(t355)));
            USE(implicit_cast<TNode<BoolT>>(t356));
            Branch(implicit_cast<TNode<BoolT>>(t356), label__True_104, label__False_105);
            BIND(label__True_104);
                        *t352_481 = implicit_cast<TNode<Object>>(t347());
            Goto(label__done_482_745);
            BIND(label__False_105);
                        *t352_481 = implicit_cast<TNode<Object>>(t348());
            Goto(label__done_482_745);
            BIND(label__done_482_745);
          }
          TVARIABLE(Object, thisArg_140_impl);
          auto thisArg_140 = &thisArg_140_impl;
          USE(thisArg_140);
          *thisArg_140 = implicit_cast<TNode<Object>>((*t352_481).value());
          // ../src/builtins/array-foreach.tq:161:7
          int31_t t357 = 0;
          TVARIABLE(Smi, k_141_impl);
          auto k_141 = &k_141_impl;
          USE(k_141);
          TNode<Smi> t358 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t357)));
          *k_141 = implicit_cast<TNode<Smi>>(t358);
          // ../src/builtins/array-foreach.tq:162:7
          {
            Label label_try_done_483_746_impl(this);
            Label* label_try_done_483_746 = &label_try_done_483_746_impl;
            USE(label_try_done_483_746);
            Label label_Bailout_106_impl(this);
            Label* label_Bailout_106 = &label_Bailout_106_impl;
            USE(label_Bailout_106);
            TVARIABLE(Smi, k_value_142_impl);
            auto k_value_142 = &k_value_142_impl;
            USE(k_value_142);
            Label label_try_begin_484_747_impl(this);
            Label* label_try_begin_484_747 = &label_try_begin_484_747_impl;
            USE(label_try_begin_484_747);
            Goto(label_try_begin_484_747);
            if (label_try_begin_484_747->is_used())
            {
              BIND(label_try_begin_484_747);
              // ../src/builtins/array-foreach.tq:162:11
              {
                // ../src/builtins/array-foreach.tq:163:9
                TNode<Object> t359 = UncheckedCast<Object>(FastArrayForEach(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*o_137).value()), implicit_cast<TNode<Number>>((*len_138).value()), implicit_cast<TNode<JSReceiver>>((*callbackfn_139).value()), implicit_cast<TNode<Object>>((*thisArg_140).value()), label_Bailout_106, k_value_142));
                USE(implicit_cast<TNode<Object>>(t359));
                arguments->PopAndReturn(implicit_cast<TNode<Object>>(t359));
              }
            }
            if (label_Bailout_106->is_used())
            {
              BIND(label_Bailout_106);
              // ../src/builtins/array-foreach.tq:166:35
              {
                // ../src/builtins/array-foreach.tq:167:9
                *k_141 = implicit_cast<TNode<Smi>>((*k_value_142).value());
              }
              Goto(label_try_done_483_746);
            }
            BIND(label_try_done_483_746);
          }
          // ../src/builtins/array-foreach.tq:170:7
          TNode<Object> t360 = UncheckedCast<Object>(ArrayForEachTorqueContinuation(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*o_137).value()), implicit_cast<TNode<Number>>((*len_138).value()), implicit_cast<TNode<JSReceiver>>((*callbackfn_139).value()), implicit_cast<TNode<Object>>((*thisArg_140).value()), implicit_cast<TNode<Smi>>((*k_141).value())));
          USE(implicit_cast<TNode<Object>>(t360));
          arguments->PopAndReturn(implicit_cast<TNode<Object>>(t360));
        }
      }
      if (label_TypeError_98->is_used())
      {
        BIND(label_TypeError_98);
        // ../src/builtins/array-foreach.tq:173:21
        {
          // ../src/builtins/array-foreach.tq:174:7
          int31_t t361 = 0;
          TNode<IntPtrT> t362 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t361)));
          TNode<Object> t363 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t362)));
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kCalledNonCallable), implicit_cast<TNode<Object>>(t363));
        }
      }
      if (label_NullOrUndefinedError_99->is_used())
      {
        BIND(label_NullOrUndefinedError_99);
        // ../src/builtins/array-foreach.tq:176:32
        {
          // ../src/builtins/array-foreach.tq:177:7
          const char* t364 = "Array.prototype.forEach";
          TNode<Object> t365 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(implicit_cast<const char*>(t364)));
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kCalledOnNullOrUndefined), implicit_cast<TNode<Object>>(t365));
        }
      }
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::VisitAllElements18ATFixedDoubleArray(TNode<Context> p_context, TNode<JSArray> p_a, TNode<Smi> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, Label* label_Bailout_610, TVariable<Smi>* Bailout0_418) {
  Label label_macro_end_941_impl(this, {});
  Label* label_macro_end_941 = &label_macro_end_941_impl;
  USE(label_macro_end_941);
  // ../src/builtins/array-foreach.tq:76:16
  {
    // ../src/builtins/array-foreach.tq:77:5
    int31_t t2095 = 0;
    TVARIABLE(Smi, k_419_impl);
    auto k_419 = &k_419_impl;
    USE(k_419);
    TNode<Smi> t2096 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2095)));
    *k_419 = implicit_cast<TNode<Smi>>(t2096);
    // ../src/builtins/array-foreach.tq:78:5
    TNode<Map> t2097 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>(p_a)));
    TVARIABLE(Map, map_420_impl);
    auto map_420 = &map_420_impl;
    USE(map_420);
    *map_420 = implicit_cast<TNode<Map>>(t2097);
    // ../src/builtins/array-foreach.tq:80:5
    {
      Label label_try_done_682_942_impl(this);
      Label* label_try_done_682_942 = &label_try_done_682_942_impl;
      USE(label_try_done_682_942);
      Label label_Slow_611_impl(this);
      Label* label_Slow_611 = &label_Slow_611_impl;
      USE(label_Slow_611);
      Label label_try_begin_683_943_impl(this);
      Label* label_try_begin_683_943 = &label_try_begin_683_943_impl;
      USE(label_try_begin_683_943);
      Goto(label_try_begin_683_943);
      if (label_try_begin_683_943->is_used())
      {
        BIND(label_try_begin_683_943);
        // ../src/builtins/array-foreach.tq:80:9
        {
          // ../src/builtins/array-foreach.tq:82:7
          Label label__True_612_impl(this);
          Label* label__True_612 = &label__True_612_impl;
          USE(label__True_612);
          Label label__False_613_impl(this);
          Label* label__False_613 = &label__False_613_impl;
          USE(label__False_613);
          Label label_header_684_944_impl(this, {k_419});
          Label* label_header_684_944 = &label_header_684_944_impl;
          USE(label_header_684_944);
          Goto(label_header_684_944);
          BIND(label_header_684_944);
          Label label_action_685_945_impl(this);
          Label* label_action_685_945 = &label_action_685_945_impl;
          USE(label_action_685_945);
          TNode<BoolT> t2098 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*k_419).value()), implicit_cast<TNode<Smi>>(p_len)));
          USE(implicit_cast<TNode<BoolT>>(t2098));
          Branch(implicit_cast<TNode<BoolT>>(t2098), label__True_612, label__False_613);
          if (label__True_612->is_used())
          {
            BIND(label__True_612);
            // ../src/builtins/array-foreach.tq:82:34
            {
              // ../src/builtins/array-foreach.tq:84:9
              {
                Label label__True_614_impl(this);
                Label* label__True_614 = &label__True_614_impl;
                USE(label__True_614);
                Label label__False_615_impl(this, {});
                Label* label__False_615 = &label__False_615_impl;
                USE(label__False_615);
                TNode<Map> t2099 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>(p_a)));
                TNode<BoolT> t2100 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>((*map_420).value()), implicit_cast<TNode<Object>>(t2099)));
                USE(implicit_cast<TNode<BoolT>>(t2100));
                Branch(implicit_cast<TNode<BoolT>>(t2100), label__True_614, label__False_615);
                if (label__True_614->is_used())
                {
                  BIND(label__True_614);
                  // ../src/builtins/array-foreach.tq:84:27
                  Goto(label_Slow_611);
                }
                BIND(label__False_615);
              }
              // ../src/builtins/array-foreach.tq:86:9
              {
                Label label__True_616_impl(this);
                Label* label__True_616 = &label__True_616_impl;
                USE(label__True_616);
                Label label__False_617_impl(this, {});
                Label* label__False_617 = &label__False_617_impl;
                USE(label__False_617);
                TNode<Number> t2101 = UncheckedCast<Number>(LoadJSArrayLength(implicit_cast<TNode<JSArray>>(p_a)));
                BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*k_419).value()), implicit_cast<TNode<Number>>(t2101), label__True_616, label__False_617);
                if (label__True_616->is_used())
                {
                  BIND(label__True_616);
                  // ../src/builtins/array-foreach.tq:86:28
                  Goto(label_Slow_611);
                }
                BIND(label__False_617);
              }
              // ../src/builtins/array-foreach.tq:88:9
              {
                Label label_try_done_686_946_impl(this);
                Label* label_try_done_686_946 = &label_try_done_686_946_impl;
                USE(label_try_done_686_946);
                Label label_FoundHole_618_impl(this);
                Label* label_FoundHole_618 = &label_FoundHole_618_impl;
                USE(label_FoundHole_618);
                Label label_try_begin_687_947_impl(this);
                Label* label_try_begin_687_947 = &label_try_begin_687_947_impl;
                USE(label_try_begin_687_947);
                Goto(label_try_begin_687_947);
                if (label_try_begin_687_947->is_used())
                {
                  BIND(label_try_begin_687_947);
                  // ../src/builtins/array-foreach.tq:88:13
                  {
                    // ../src/builtins/array-foreach.tq:89:11
                    TNode<Object> t2102 = UncheckedCast<Object>(LoadElementNoHole18ATFixedDoubleArray(implicit_cast<TNode<JSArray>>(p_a), implicit_cast<TNode<Smi>>((*k_419).value()), label_FoundHole_618));
                    USE(implicit_cast<TNode<Object>>(t2102));
                    TVARIABLE(Object, value_421_impl);
                    auto value_421 = &value_421_impl;
                    USE(value_421);
                    *value_421 = implicit_cast<TNode<Object>>(t2102);
                    // ../src/builtins/array-foreach.tq:91:11
                    TNode<Object> t2103 = UncheckedCast<Object>(Call(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_callbackfn), implicit_cast<TNode<Object>>(p_thisArg), implicit_cast<TNode<Object>>((*value_421).value()), implicit_cast<TNode<Object>>((*k_419).value()), implicit_cast<TNode<Object>>(p_a)));
                    USE(implicit_cast<TNode<Object>>(t2103));
                  }
                  Goto(label_try_done_686_946);
                }
                if (label_FoundHole_618->is_used())
                {
                  BIND(label_FoundHole_618);
                  // ../src/builtins/array-foreach.tq:93:25
                  {
                    // ../src/builtins/array-foreach.tq:98:11
                    {
                      Label label__True_619_impl(this);
                      Label* label__True_619 = &label__True_619_impl;
                      USE(label__True_619);
                      Label label__False_620_impl(this, {});
                      Label* label__False_620 = &label__False_620_impl;
                      USE(label__False_620);
                      TNode<BoolT> t2104 = UncheckedCast<BoolT>(IsNoElementsProtectorCellInvalid());
                      USE(implicit_cast<TNode<BoolT>>(t2104));
                      Branch(implicit_cast<TNode<BoolT>>(t2104), label__True_619, label__False_620);
                      if (label__True_619->is_used())
                      {
                        BIND(label__True_619);
                        // ../src/builtins/array-foreach.tq:98:51
                        *Bailout0_418 = implicit_cast<TNode<Smi>>((*k_419).value());
                        Goto(label_Bailout_610);
                      }
                      BIND(label__False_620);
                    }
                  }
                  Goto(label_try_done_686_946);
                }
                BIND(label_try_done_686_946);
              }
            }
            Goto(label_action_685_945);
          }
          {
            BIND(label_action_685_945);
            int31_t t2105 = 1;
            TNode<Smi> t2106 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2105)));
            TNode<Smi> t2107 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_419).value()), implicit_cast<TNode<Smi>>(t2106)));
            USE(implicit_cast<TNode<Smi>>(t2107));
            *k_419 = implicit_cast<TNode<Smi>>(t2107);
            Goto(label_header_684_944);
          }
          BIND(label__False_613);
        }
        Goto(label_try_done_682_942);
      }
      if (label_Slow_611->is_used())
      {
        BIND(label_Slow_611);
        // ../src/builtins/array-foreach.tq:102:16
        {
          // ../src/builtins/array-foreach.tq:103:7
          *Bailout0_418 = implicit_cast<TNode<Smi>>((*k_419).value());
          Goto(label_Bailout_610);
        }
      }
      BIND(label_try_done_682_942);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::VisitAllElements12ATFixedArray(TNode<Context> p_context, TNode<JSArray> p_a, TNode<Smi> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, Label* label_Bailout_621, TVariable<Smi>* Bailout0_422) {
  Label label_macro_end_948_impl(this, {});
  Label* label_macro_end_948 = &label_macro_end_948_impl;
  USE(label_macro_end_948);
  // ../src/builtins/array-foreach.tq:76:16
  {
    // ../src/builtins/array-foreach.tq:77:5
    int31_t t2108 = 0;
    TVARIABLE(Smi, k_423_impl);
    auto k_423 = &k_423_impl;
    USE(k_423);
    TNode<Smi> t2109 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2108)));
    *k_423 = implicit_cast<TNode<Smi>>(t2109);
    // ../src/builtins/array-foreach.tq:78:5
    TNode<Map> t2110 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>(p_a)));
    TVARIABLE(Map, map_424_impl);
    auto map_424 = &map_424_impl;
    USE(map_424);
    *map_424 = implicit_cast<TNode<Map>>(t2110);
    // ../src/builtins/array-foreach.tq:80:5
    {
      Label label_try_done_688_949_impl(this);
      Label* label_try_done_688_949 = &label_try_done_688_949_impl;
      USE(label_try_done_688_949);
      Label label_Slow_622_impl(this);
      Label* label_Slow_622 = &label_Slow_622_impl;
      USE(label_Slow_622);
      Label label_try_begin_689_950_impl(this);
      Label* label_try_begin_689_950 = &label_try_begin_689_950_impl;
      USE(label_try_begin_689_950);
      Goto(label_try_begin_689_950);
      if (label_try_begin_689_950->is_used())
      {
        BIND(label_try_begin_689_950);
        // ../src/builtins/array-foreach.tq:80:9
        {
          // ../src/builtins/array-foreach.tq:82:7
          Label label__True_623_impl(this);
          Label* label__True_623 = &label__True_623_impl;
          USE(label__True_623);
          Label label__False_624_impl(this);
          Label* label__False_624 = &label__False_624_impl;
          USE(label__False_624);
          Label label_header_690_951_impl(this, {k_423});
          Label* label_header_690_951 = &label_header_690_951_impl;
          USE(label_header_690_951);
          Goto(label_header_690_951);
          BIND(label_header_690_951);
          Label label_action_691_952_impl(this);
          Label* label_action_691_952 = &label_action_691_952_impl;
          USE(label_action_691_952);
          TNode<BoolT> t2111 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*k_423).value()), implicit_cast<TNode<Smi>>(p_len)));
          USE(implicit_cast<TNode<BoolT>>(t2111));
          Branch(implicit_cast<TNode<BoolT>>(t2111), label__True_623, label__False_624);
          if (label__True_623->is_used())
          {
            BIND(label__True_623);
            // ../src/builtins/array-foreach.tq:82:34
            {
              // ../src/builtins/array-foreach.tq:84:9
              {
                Label label__True_625_impl(this);
                Label* label__True_625 = &label__True_625_impl;
                USE(label__True_625);
                Label label__False_626_impl(this, {});
                Label* label__False_626 = &label__False_626_impl;
                USE(label__False_626);
                TNode<Map> t2112 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>(p_a)));
                TNode<BoolT> t2113 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>((*map_424).value()), implicit_cast<TNode<Object>>(t2112)));
                USE(implicit_cast<TNode<BoolT>>(t2113));
                Branch(implicit_cast<TNode<BoolT>>(t2113), label__True_625, label__False_626);
                if (label__True_625->is_used())
                {
                  BIND(label__True_625);
                  // ../src/builtins/array-foreach.tq:84:27
                  Goto(label_Slow_622);
                }
                BIND(label__False_626);
              }
              // ../src/builtins/array-foreach.tq:86:9
              {
                Label label__True_627_impl(this);
                Label* label__True_627 = &label__True_627_impl;
                USE(label__True_627);
                Label label__False_628_impl(this, {});
                Label* label__False_628 = &label__False_628_impl;
                USE(label__False_628);
                TNode<Number> t2114 = UncheckedCast<Number>(LoadJSArrayLength(implicit_cast<TNode<JSArray>>(p_a)));
                BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*k_423).value()), implicit_cast<TNode<Number>>(t2114), label__True_627, label__False_628);
                if (label__True_627->is_used())
                {
                  BIND(label__True_627);
                  // ../src/builtins/array-foreach.tq:86:28
                  Goto(label_Slow_622);
                }
                BIND(label__False_628);
              }
              // ../src/builtins/array-foreach.tq:88:9
              {
                Label label_try_done_692_953_impl(this);
                Label* label_try_done_692_953 = &label_try_done_692_953_impl;
                USE(label_try_done_692_953);
                Label label_FoundHole_629_impl(this);
                Label* label_FoundHole_629 = &label_FoundHole_629_impl;
                USE(label_FoundHole_629);
                Label label_try_begin_693_954_impl(this);
                Label* label_try_begin_693_954 = &label_try_begin_693_954_impl;
                USE(label_try_begin_693_954);
                Goto(label_try_begin_693_954);
                if (label_try_begin_693_954->is_used())
                {
                  BIND(label_try_begin_693_954);
                  // ../src/builtins/array-foreach.tq:88:13
                  {
                    // ../src/builtins/array-foreach.tq:89:11
                    TNode<Object> t2115 = UncheckedCast<Object>(LoadElementNoHole12ATFixedArray(implicit_cast<TNode<JSArray>>(p_a), implicit_cast<TNode<Smi>>((*k_423).value()), label_FoundHole_629));
                    USE(implicit_cast<TNode<Object>>(t2115));
                    TVARIABLE(Object, value_425_impl);
                    auto value_425 = &value_425_impl;
                    USE(value_425);
                    *value_425 = implicit_cast<TNode<Object>>(t2115);
                    // ../src/builtins/array-foreach.tq:91:11
                    TNode<Object> t2116 = UncheckedCast<Object>(Call(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_callbackfn), implicit_cast<TNode<Object>>(p_thisArg), implicit_cast<TNode<Object>>((*value_425).value()), implicit_cast<TNode<Object>>((*k_423).value()), implicit_cast<TNode<Object>>(p_a)));
                    USE(implicit_cast<TNode<Object>>(t2116));
                  }
                  Goto(label_try_done_692_953);
                }
                if (label_FoundHole_629->is_used())
                {
                  BIND(label_FoundHole_629);
                  // ../src/builtins/array-foreach.tq:93:25
                  {
                    // ../src/builtins/array-foreach.tq:98:11
                    {
                      Label label__True_630_impl(this);
                      Label* label__True_630 = &label__True_630_impl;
                      USE(label__True_630);
                      Label label__False_631_impl(this, {});
                      Label* label__False_631 = &label__False_631_impl;
                      USE(label__False_631);
                      TNode<BoolT> t2117 = UncheckedCast<BoolT>(IsNoElementsProtectorCellInvalid());
                      USE(implicit_cast<TNode<BoolT>>(t2117));
                      Branch(implicit_cast<TNode<BoolT>>(t2117), label__True_630, label__False_631);
                      if (label__True_630->is_used())
                      {
                        BIND(label__True_630);
                        // ../src/builtins/array-foreach.tq:98:51
                        *Bailout0_422 = implicit_cast<TNode<Smi>>((*k_423).value());
                        Goto(label_Bailout_621);
                      }
                      BIND(label__False_631);
                    }
                  }
                  Goto(label_try_done_692_953);
                }
                BIND(label_try_done_692_953);
              }
            }
            Goto(label_action_691_952);
          }
          {
            BIND(label_action_691_952);
            int31_t t2118 = 1;
            TNode<Smi> t2119 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2118)));
            TNode<Smi> t2120 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_423).value()), implicit_cast<TNode<Smi>>(t2119)));
            USE(implicit_cast<TNode<Smi>>(t2120));
            *k_423 = implicit_cast<TNode<Smi>>(t2120);
            Goto(label_header_690_951);
          }
          BIND(label__False_624);
        }
        Goto(label_try_done_688_949);
      }
      if (label_Slow_622->is_used())
      {
        BIND(label_Slow_622);
        // ../src/builtins/array-foreach.tq:102:16
        {
          // ../src/builtins/array-foreach.tq:103:7
          *Bailout0_422 = implicit_cast<TNode<Smi>>((*k_423).value());
          Goto(label_Bailout_621);
        }
      }
      BIND(label_try_done_688_949);
    }
  }
}

}  // namespace internal
}  // namespace v8

