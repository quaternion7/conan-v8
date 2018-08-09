#include "src/builtins/builtins-test-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/bigint.h"
#include "builtins-test-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::ElementsKindTestHelper1(ElementsKind p_kind) {
  TVARIABLE(BoolT, _return_336_impl);
  auto _return_336 = &_return_336_impl;
  USE(_return_336);
  Label label_macro_end_873_impl(this, {_return_336});
  Label* label_macro_end_873 = &label_macro_end_873_impl;
  USE(label_macro_end_873);
  // ../test/torque/test-torque.tq:6:69
  {
    // ../test/torque/test-torque.tq:7:5
    {
      Label label__False_433_impl(this);
      Label* label__False_433 = &label__False_433_impl;
      USE(label__False_433);
      bool t1684 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
      USE(implicit_cast<bool>(t1684));
      bool t1685 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
      USE(implicit_cast<bool>(t1685));
      if ((implicit_cast<bool>((implicit_cast<bool>(t1684) || implicit_cast<bool>(t1685))))) {
        // ../test/torque/test-torque.tq:7:73
        {
          // ../test/torque/test-torque.tq:8:9
          TNode<BoolT> t1686 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
          *_return_336 = implicit_cast<TNode<BoolT>>(t1686);
          Goto(label_macro_end_873);
        }
      } else {
        // ../test/torque/test-torque.tq:10:10
        {
          // ../test/torque/test-torque.tq:11:7
          TNode<BoolT> t1687 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
          *_return_336 = implicit_cast<TNode<BoolT>>(t1687);
          Goto(label_macro_end_873);
        }
      }
    }
  }
  BIND(label_macro_end_873);
  return implicit_cast<TNode<BoolT>>((*_return_336).value());
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::ElementsKindTestHelper2(ElementsKind p_kind) {
  TVARIABLE(BoolT, _return_337_impl);
  auto _return_337 = &_return_337_impl;
  USE(_return_337);
  Label label_macro_end_874_impl(this, {_return_337});
  Label* label_macro_end_874 = &label_macro_end_874_impl;
  USE(label_macro_end_874);
  // ../test/torque/test-torque.tq:15:69
  {
    // ../test/torque/test-torque.tq:16:5
    Label label__False_434_impl(this);
    Label* label__False_434 = &label__False_434_impl;
    USE(label__False_434);
    bool t1688 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
    USE(implicit_cast<bool>(t1688));
    bool t1689 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
    USE(implicit_cast<bool>(t1689));
    TNode<BoolT> t1690 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>((implicit_cast<bool>(t1688) || implicit_cast<bool>(t1689)))));
    *_return_337 = implicit_cast<TNode<BoolT>>(t1690);
    Goto(label_macro_end_874);
  }
  BIND(label_macro_end_874);
  return implicit_cast<TNode<BoolT>>((*_return_337).value());
}

bool TestBuiltinsFromDSLAssembler::ElementsKindTestHelper3(ElementsKind p_kind) {
  bool _return_338_impl;
  auto _return_338 = &_return_338_impl;
  USE(_return_338);
  Label label_macro_end_875_impl(this, {});
  Label* label_macro_end_875 = &label_macro_end_875_impl;
  USE(label_macro_end_875);
  // ../test/torque/test-torque.tq:19:79
  {
    // ../test/torque/test-torque.tq:20:5
    Label label__False_435_impl(this);
    Label* label__False_435 = &label__False_435_impl;
    USE(label__False_435);
    bool t1691 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
    USE(implicit_cast<bool>(t1691));
    bool t1692 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
    USE(implicit_cast<bool>(t1692));
    *_return_338 = implicit_cast<bool>((implicit_cast<bool>(t1691) || implicit_cast<bool>(t1692)));
    Goto(label_macro_end_875);
  }
  BIND(label_macro_end_875);
  return implicit_cast<bool>((*_return_338));
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper1(Label* label_Label1_436) {
  Label label_macro_end_876_impl(this, {});
  Label* label_macro_end_876 = &label_macro_end_876_impl;
  USE(label_macro_end_876);
  // ../test/torque/test-torque.tq:24:17
  {
    // ../test/torque/test-torque.tq:25:5
    Goto(label_Label1_436);
  }
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper2(Label* label_Label2_437, TVariable<Smi>* Label20_339) {
  Label label_macro_end_877_impl(this, {});
  Label* label_macro_end_877 = &label_macro_end_877_impl;
  USE(label_macro_end_877);
  // ../test/torque/test-torque.tq:29:22
  {
    // ../test/torque/test-torque.tq:30:5
    int31_t t1693 = 42;
    TNode<Smi> t1694 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1693)));
    *Label20_339 = implicit_cast<TNode<Smi>>(t1694);
    Goto(label_Label2_437);
  }
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper3(Label* label_Label3_438, TVariable<String>* Label30_340, TVariable<Smi>* Label31_341) {
  Label label_macro_end_878_impl(this, {});
  Label* label_macro_end_878 = &label_macro_end_878_impl;
  USE(label_macro_end_878);
  // ../test/torque/test-torque.tq:34:30
  {
    // ../test/torque/test-torque.tq:35:5
    const char* t1695 = "foo";
    TNode<String> t1696 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t1695)));
    *Label30_340 = implicit_cast<TNode<String>>(t1696);
    int31_t t1697 = 7;
    TNode<Smi> t1698 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1697)));
    *Label31_341 = implicit_cast<TNode<Smi>>(t1698);
    Goto(label_Label3_438);
  }
}

void TestBuiltinsFromDSLAssembler::TestConstexpr1() {
  Label label_macro_end_879_impl(this, {});
  Label* label_macro_end_879 = &label_macro_end_879_impl;
  USE(label_macro_end_879);
  // ../test/torque/test-torque.tq:38:26
  {
    // ../test/torque/test-torque.tq:39:5
    Label label__True_439_impl(this);
    Label* label__True_439 = &label__True_439_impl;
    USE(label__True_439);
    Label label__False_440_impl(this);
    Label* label__False_440 = &label__False_440_impl;
    USE(label__False_440);
    bool t1699 = IsFastElementsKind(implicit_cast<ElementsKind>(PACKED_SMI_ELEMENTS));
    USE(implicit_cast<bool>(t1699));
    TNode<BoolT> t1700 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1699)));
    USE(implicit_cast<TNode<BoolT>>(t1700));
    Branch(implicit_cast<TNode<BoolT>>(t1700), label__True_439, label__False_440);
    BIND(label__False_440);
    Print("assert 'from_constexpr<bool>(IsFastElementsKind(PACKED_SMI_ELEMENTS))' failed at ../test/torque/test-torque.tq:39:5");
    Unreachable();
    BIND(label__True_439);
  }
}

void TestBuiltinsFromDSLAssembler::TestConstexprIf() {
  Label label_macro_end_880_impl(this, {});
  Label* label_macro_end_880 = &label_macro_end_880_impl;
  USE(label_macro_end_880);
  // ../test/torque/test-torque.tq:42:27
  {
    // ../test/torque/test-torque.tq:43:5
    Label label__True_441_impl(this);
    Label* label__True_441 = &label__True_441_impl;
    USE(label__True_441);
    Label label__False_442_impl(this);
    Label* label__False_442 = &label__False_442_impl;
    USE(label__False_442);
    TNode<BoolT> t1701 = UncheckedCast<BoolT>(ElementsKindTestHelper1(implicit_cast<ElementsKind>(UINT8_ELEMENTS)));
    USE(implicit_cast<TNode<BoolT>>(t1701));
    Branch(implicit_cast<TNode<BoolT>>(t1701), label__True_441, label__False_442);
    BIND(label__False_442);
    Print("assert 'ElementsKindTestHelper1(UINT8_ELEMENTS)' failed at ../test/torque/test-torque.tq:43:5");
    Unreachable();
    BIND(label__True_441);
    // ../test/torque/test-torque.tq:44:5
    Label label__True_443_impl(this);
    Label* label__True_443 = &label__True_443_impl;
    USE(label__True_443);
    Label label__False_444_impl(this);
    Label* label__False_444 = &label__False_444_impl;
    USE(label__False_444);
    TNode<BoolT> t1702 = UncheckedCast<BoolT>(ElementsKindTestHelper1(implicit_cast<ElementsKind>(UINT16_ELEMENTS)));
    USE(implicit_cast<TNode<BoolT>>(t1702));
    Branch(implicit_cast<TNode<BoolT>>(t1702), label__True_443, label__False_444);
    BIND(label__False_444);
    Print("assert 'ElementsKindTestHelper1(UINT16_ELEMENTS)' failed at ../test/torque/test-torque.tq:44:5");
    Unreachable();
    BIND(label__True_443);
    // ../test/torque/test-torque.tq:45:5
    Label label__True_445_impl(this);
    Label* label__True_445 = &label__True_445_impl;
    USE(label__True_445);
    Label label__False_446_impl(this);
    Label* label__False_446 = &label__False_446_impl;
    USE(label__False_446);
    TNode<BoolT> t1703 = UncheckedCast<BoolT>(ElementsKindTestHelper1(implicit_cast<ElementsKind>(UINT32_ELEMENTS)));
    USE(implicit_cast<TNode<BoolT>>(t1703));
    TNode<BoolT> t1704 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t1703)));
    USE(implicit_cast<TNode<BoolT>>(t1704));
    Branch(implicit_cast<TNode<BoolT>>(t1704), label__True_445, label__False_446);
    BIND(label__False_446);
    Print("assert '!ElementsKindTestHelper1(UINT32_ELEMENTS)' failed at ../test/torque/test-torque.tq:45:5");
    Unreachable();
    BIND(label__True_445);
  }
}

void TestBuiltinsFromDSLAssembler::TestConstexprReturn() {
  Label label_macro_end_881_impl(this, {});
  Label* label_macro_end_881 = &label_macro_end_881_impl;
  USE(label_macro_end_881);
  // ../test/torque/test-torque.tq:48:31
  {
    // ../test/torque/test-torque.tq:49:5
    Label label__True_447_impl(this);
    Label* label__True_447 = &label__True_447_impl;
    USE(label__True_447);
    Label label__False_448_impl(this);
    Label* label__False_448 = &label__False_448_impl;
    USE(label__False_448);
    bool t1705 = ElementsKindTestHelper3(implicit_cast<ElementsKind>(UINT8_ELEMENTS));
    USE(implicit_cast<bool>(t1705));
    TNode<BoolT> t1706 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1705)));
    USE(implicit_cast<TNode<BoolT>>(t1706));
    Branch(implicit_cast<TNode<BoolT>>(t1706), label__True_447, label__False_448);
    BIND(label__False_448);
    Print("assert 'from_constexpr<bool>(ElementsKindTestHelper3(UINT8_ELEMENTS))' failed at ../test/torque/test-torque.tq:49:5");
    Unreachable();
    BIND(label__True_447);
    // ../test/torque/test-torque.tq:50:5
    Label label__True_449_impl(this);
    Label* label__True_449 = &label__True_449_impl;
    USE(label__True_449);
    Label label__False_450_impl(this);
    Label* label__False_450 = &label__False_450_impl;
    USE(label__False_450);
    bool t1707 = ElementsKindTestHelper3(implicit_cast<ElementsKind>(UINT16_ELEMENTS));
    USE(implicit_cast<bool>(t1707));
    TNode<BoolT> t1708 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1707)));
    USE(implicit_cast<TNode<BoolT>>(t1708));
    Branch(implicit_cast<TNode<BoolT>>(t1708), label__True_449, label__False_450);
    BIND(label__False_450);
    Print("assert 'from_constexpr<bool>(ElementsKindTestHelper3(UINT16_ELEMENTS))' failed at ../test/torque/test-torque.tq:50:5");
    Unreachable();
    BIND(label__True_449);
    // ../test/torque/test-torque.tq:51:5
    Label label__True_451_impl(this);
    Label* label__True_451 = &label__True_451_impl;
    USE(label__True_451);
    Label label__False_452_impl(this);
    Label* label__False_452 = &label__False_452_impl;
    USE(label__False_452);
    bool t1709 = ElementsKindTestHelper3(implicit_cast<ElementsKind>(UINT32_ELEMENTS));
    USE(implicit_cast<bool>(t1709));
    TNode<BoolT> t1710 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1709)));
    USE(implicit_cast<TNode<BoolT>>(t1710));
    TNode<BoolT> t1711 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t1710)));
    USE(implicit_cast<TNode<BoolT>>(t1711));
    Branch(implicit_cast<TNode<BoolT>>(t1711), label__True_451, label__False_452);
    BIND(label__False_452);
    Print("assert '!from_constexpr<bool>(ElementsKindTestHelper3(UINT32_ELEMENTS))' failed at ../test/torque/test-torque.tq:51:5");
    Unreachable();
    BIND(label__True_451);
    // ../test/torque/test-torque.tq:52:5
    Label label__True_453_impl(this);
    Label* label__True_453 = &label__True_453_impl;
    USE(label__True_453);
    Label label__False_454_impl(this);
    Label* label__False_454 = &label__False_454_impl;
    USE(label__False_454);
    bool t1712 = ElementsKindTestHelper3(implicit_cast<ElementsKind>(UINT32_ELEMENTS));
    USE(implicit_cast<bool>(t1712));
    bool t1713 = ConstexprBoolNot(implicit_cast<bool>(t1712));
    USE(implicit_cast<bool>(t1713));
    TNode<BoolT> t1714 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1713)));
    USE(implicit_cast<TNode<BoolT>>(t1714));
    Branch(implicit_cast<TNode<BoolT>>(t1714), label__True_453, label__False_454);
    BIND(label__False_454);
    Print("assert 'from_constexpr<bool>(!ElementsKindTestHelper3(UINT32_ELEMENTS))' failed at ../test/torque/test-torque.tq:52:5");
    Unreachable();
    BIND(label__True_453);
  }
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestGotoLabel() {
  TVARIABLE(Oddball, _return_342_impl);
  auto _return_342 = &_return_342_impl;
  USE(_return_342);
  Label label_macro_end_882_impl(this, {_return_342});
  Label* label_macro_end_882 = &label_macro_end_882_impl;
  USE(label_macro_end_882);
  // ../test/torque/test-torque.tq:55:34
  {
    // ../test/torque/test-torque.tq:56:5
    {
      Label label_try_done_641_883_impl(this);
      Label* label_try_done_641_883 = &label_try_done_641_883_impl;
      USE(label_try_done_641_883);
      Label label_Label1_455_impl(this);
      Label* label_Label1_455 = &label_Label1_455_impl;
      USE(label_Label1_455);
      Label label_try_begin_642_884_impl(this);
      Label* label_try_begin_642_884 = &label_try_begin_642_884_impl;
      USE(label_try_begin_642_884);
      Goto(label_try_begin_642_884);
      if (label_try_begin_642_884->is_used())
      {
        BIND(label_try_begin_642_884);
        // ../test/torque/test-torque.tq:56:9
        {
          // ../test/torque/test-torque.tq:57:7
          LabelTestHelper1(label_Label1_455);
        }
      }
      if (label_Label1_455->is_used())
      {
        BIND(label_Label1_455);
        // ../test/torque/test-torque.tq:59:18
        {
          // ../test/torque/test-torque.tq:60:7
          *_return_342 = implicit_cast<TNode<Oddball>>(True());
          Goto(label_macro_end_882);
        }
      }
    }
  }
  BIND(label_macro_end_882);
  return implicit_cast<TNode<Oddball>>((*_return_342).value());
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestGotoLabelWithOneParameter() {
  TVARIABLE(Oddball, _return_343_impl);
  auto _return_343 = &_return_343_impl;
  USE(_return_343);
  Label label_macro_end_885_impl(this, {_return_343});
  Label* label_macro_end_885 = &label_macro_end_885_impl;
  USE(label_macro_end_885);
  // ../test/torque/test-torque.tq:64:50
  {
    // ../test/torque/test-torque.tq:65:5
    {
      Label label_try_done_643_886_impl(this);
      Label* label_try_done_643_886 = &label_try_done_643_886_impl;
      USE(label_try_done_643_886);
      Label label_Label2_456_impl(this);
      Label* label_Label2_456 = &label_Label2_456_impl;
      USE(label_Label2_456);
      TVARIABLE(Smi, smi_344_impl);
      auto smi_344 = &smi_344_impl;
      USE(smi_344);
      Label label_try_begin_644_887_impl(this);
      Label* label_try_begin_644_887 = &label_try_begin_644_887_impl;
      USE(label_try_begin_644_887);
      Goto(label_try_begin_644_887);
      if (label_try_begin_644_887->is_used())
      {
        BIND(label_try_begin_644_887);
        // ../test/torque/test-torque.tq:65:9
        {
          // ../test/torque/test-torque.tq:66:7
          LabelTestHelper2(label_Label2_456, smi_344);
        }
      }
      if (label_Label2_456->is_used())
      {
        BIND(label_Label2_456);
        // ../test/torque/test-torque.tq:68:28
        {
          // ../test/torque/test-torque.tq:69:7
          Label label__True_457_impl(this);
          Label* label__True_457 = &label__True_457_impl;
          USE(label__True_457);
          Label label__False_458_impl(this);
          Label* label__False_458 = &label__False_458_impl;
          USE(label__False_458);
          int31_t t1715 = 42;
          TNode<Smi> t1716 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1715)));
          TNode<BoolT> t1717 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*smi_344).value()), implicit_cast<TNode<Smi>>(t1716)));
          USE(implicit_cast<TNode<BoolT>>(t1717));
          Branch(implicit_cast<TNode<BoolT>>(t1717), label__True_457, label__False_458);
          BIND(label__False_458);
          Print("assert 'smi == 42' failed at ../test/torque/test-torque.tq:69:7");
          Unreachable();
          BIND(label__True_457);
          // ../test/torque/test-torque.tq:70:7
          *_return_343 = implicit_cast<TNode<Oddball>>(True());
          Goto(label_macro_end_885);
        }
      }
    }
  }
  BIND(label_macro_end_885);
  return implicit_cast<TNode<Oddball>>((*_return_343).value());
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestGotoLabelWithTwoParameters() {
  TVARIABLE(Oddball, _return_345_impl);
  auto _return_345 = &_return_345_impl;
  USE(_return_345);
  Label label_macro_end_888_impl(this, {_return_345});
  Label* label_macro_end_888 = &label_macro_end_888_impl;
  USE(label_macro_end_888);
  // ../test/torque/test-torque.tq:74:51
  {
    // ../test/torque/test-torque.tq:75:5
    {
      Label label_try_done_645_889_impl(this);
      Label* label_try_done_645_889 = &label_try_done_645_889_impl;
      USE(label_try_done_645_889);
      Label label_Label3_459_impl(this);
      Label* label_Label3_459 = &label_Label3_459_impl;
      USE(label_Label3_459);
      TVARIABLE(String, str_346_impl);
      auto str_346 = &str_346_impl;
      USE(str_346);
      TVARIABLE(Smi, smi_347_impl);
      auto smi_347 = &smi_347_impl;
      USE(smi_347);
      Label label_try_begin_646_890_impl(this);
      Label* label_try_begin_646_890 = &label_try_begin_646_890_impl;
      USE(label_try_begin_646_890);
      Goto(label_try_begin_646_890);
      if (label_try_begin_646_890->is_used())
      {
        BIND(label_try_begin_646_890);
        // ../test/torque/test-torque.tq:75:9
        {
          // ../test/torque/test-torque.tq:76:7
          LabelTestHelper3(label_Label3_459, str_346, smi_347);
        }
      }
      if (label_Label3_459->is_used())
      {
        BIND(label_Label3_459);
        // ../test/torque/test-torque.tq:78:41
        {
          // ../test/torque/test-torque.tq:79:7
          Label label__True_460_impl(this);
          Label* label__True_460 = &label__True_460_impl;
          USE(label__True_460);
          Label label__False_461_impl(this);
          Label* label__False_461 = &label__False_461_impl;
          USE(label__False_461);
          const char* t1718 = "foo";
          TNode<Object> t1719 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(implicit_cast<const char*>(t1718)));
          TNode<BoolT> t1720 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*str_346).value()), implicit_cast<TNode<Object>>(t1719)));
          USE(implicit_cast<TNode<BoolT>>(t1720));
          Branch(implicit_cast<TNode<BoolT>>(t1720), label__True_460, label__False_461);
          BIND(label__False_461);
          Print("assert 'str == 'foo'' failed at ../test/torque/test-torque.tq:79:7");
          Unreachable();
          BIND(label__True_460);
          // ../test/torque/test-torque.tq:80:7
          Label label__True_462_impl(this);
          Label* label__True_462 = &label__True_462_impl;
          USE(label__True_462);
          Label label__False_463_impl(this);
          Label* label__False_463 = &label__False_463_impl;
          USE(label__False_463);
          int31_t t1721 = 7;
          TNode<Smi> t1722 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1721)));
          TNode<BoolT> t1723 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*smi_347).value()), implicit_cast<TNode<Smi>>(t1722)));
          USE(implicit_cast<TNode<BoolT>>(t1723));
          Branch(implicit_cast<TNode<BoolT>>(t1723), label__True_462, label__False_463);
          BIND(label__False_463);
          Print("assert 'smi == 7' failed at ../test/torque/test-torque.tq:80:7");
          Unreachable();
          BIND(label__True_462);
          // ../test/torque/test-torque.tq:81:7
          *_return_345 = implicit_cast<TNode<Oddball>>(True());
          Goto(label_macro_end_888);
        }
      }
    }
  }
  BIND(label_macro_end_888);
  return implicit_cast<TNode<Oddball>>((*_return_345).value());
}

TF_BUILTIN(GenericBuiltinTest22UT12ATHeapObject5ATSmi, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_c = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_c);
  TNode<Object> p_param = UncheckedCast<Object>(Parameter(Descriptor::kParam));
  USE(p_param);
  // ../test/torque/test-torque.tq:89:65
  {
    // ../test/torque/test-torque.tq:90:5
    Return(implicit_cast<TNode<Object>>(p_param));
  }
}

void TestBuiltinsFromDSLAssembler::TestBuiltinSpecialization(TNode<Context> p_c) {
  Label label_macro_end_891_impl(this, {});
  Label* label_macro_end_891 = &label_macro_end_891_impl;
  USE(label_macro_end_891);
  // ../test/torque/test-torque.tq:93:47
  {
    // ../test/torque/test-torque.tq:94:5
    Label label__True_464_impl(this);
    Label* label__True_464 = &label__True_464_impl;
    USE(label__True_464);
    Label label__False_465_impl(this);
    Label* label__False_465 = &label__False_465_impl;
    USE(label__False_465);
    int31_t t1724 = 0;
    TNode<Smi> t1725 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1724)));
    TNode<Object> t1726 = UncheckedCast<Object>(CallBuiltin(Builtins::kGenericBuiltinTest5ATSmi, implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Smi>>(t1725)));
    USE(implicit_cast<TNode<Object>>(t1726));
    TNode<BoolT> t1727 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1726), implicit_cast<TNode<Object>>(Null())));
    USE(implicit_cast<TNode<BoolT>>(t1727));
    Branch(implicit_cast<TNode<BoolT>>(t1727), label__True_464, label__False_465);
    BIND(label__False_465);
    Print("assert 'GenericBuiltinTest<Smi>(c, 0) == Null' failed at ../test/torque/test-torque.tq:94:5");
    Unreachable();
    BIND(label__True_464);
    // ../test/torque/test-torque.tq:95:5
    Label label__True_466_impl(this);
    Label* label__True_466 = &label__True_466_impl;
    USE(label__True_466);
    Label label__False_467_impl(this);
    Label* label__False_467 = &label__False_467_impl;
    USE(label__False_467);
    int31_t t1728 = 1;
    TNode<Smi> t1729 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1728)));
    TNode<Object> t1730 = UncheckedCast<Object>(CallBuiltin(Builtins::kGenericBuiltinTest5ATSmi, implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Smi>>(t1729)));
    USE(implicit_cast<TNode<Object>>(t1730));
    TNode<BoolT> t1731 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1730), implicit_cast<TNode<Object>>(Null())));
    USE(implicit_cast<TNode<BoolT>>(t1731));
    Branch(implicit_cast<TNode<BoolT>>(t1731), label__True_466, label__False_467);
    BIND(label__False_467);
    Print("assert 'GenericBuiltinTest<Smi>(c, 1) == Null' failed at ../test/torque/test-torque.tq:95:5");
    Unreachable();
    BIND(label__True_466);
    // ../test/torque/test-torque.tq:96:5
    Label label__True_468_impl(this);
    Label* label__True_468 = &label__True_468_impl;
    USE(label__True_468);
    Label label__False_469_impl(this);
    Label* label__False_469 = &label__False_469_impl;
    USE(label__False_469);
    TNode<Object> t1732 = UncheckedCast<Object>(CallBuiltin(Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi, implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<Object>>(t1732));
    TNode<BoolT> t1733 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1732), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<BoolT>>(t1733));
    Branch(implicit_cast<TNode<BoolT>>(t1733), label__True_468, label__False_469);
    BIND(label__False_469);
    Print("assert 'GenericBuiltinTest<Object>(c, Undefined) == Undefined' failed at ../test/torque/test-torque.tq:96:5");
    Unreachable();
    BIND(label__True_468);
    // ../test/torque/test-torque.tq:97:5
    Label label__True_470_impl(this);
    Label* label__True_470 = &label__True_470_impl;
    USE(label__True_470);
    Label label__False_471_impl(this);
    Label* label__False_471 = &label__False_471_impl;
    USE(label__False_471);
    TNode<Object> t1734 = UncheckedCast<Object>(CallBuiltin(Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi, implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<Object>>(t1734));
    TNode<BoolT> t1735 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1734), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<BoolT>>(t1735));
    Branch(implicit_cast<TNode<BoolT>>(t1735), label__True_470, label__False_471);
    BIND(label__False_471);
    Print("assert 'GenericBuiltinTest<Object>(c, Undefined) == Undefined' failed at ../test/torque/test-torque.tq:97:5");
    Unreachable();
    BIND(label__True_470);
  }
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper4(bool p_flag, Label* label_Label4_472, Label* label_Label5_473) {
  Label label_macro_end_892_impl(this, {});
  Label* label_macro_end_892 = &label_macro_end_892_impl;
  USE(label_macro_end_892);
  // ../test/torque/test-torque.tq:100:77
  {
    // ../test/torque/test-torque.tq:101:5
    {
      if ((implicit_cast<bool>(p_flag))) {
        // ../test/torque/test-torque.tq:101:24
        {
          // ../test/torque/test-torque.tq:102:7
          Goto(label_Label4_472);
        }
      } else {
        // ../test/torque/test-torque.tq:103:12
        {
          // ../test/torque/test-torque.tq:104:7
          Goto(label_Label5_473);
        }
      }
    }
  }
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::CallLabelTestHelper4(bool p_flag) {
  TVARIABLE(BoolT, _return_348_impl);
  auto _return_348 = &_return_348_impl;
  USE(_return_348);
  Label label_macro_end_893_impl(this, {_return_348});
  Label* label_macro_end_893 = &label_macro_end_893_impl;
  USE(label_macro_end_893);
  // ../test/torque/test-torque.tq:108:58
  {
    // ../test/torque/test-torque.tq:109:5
    {
      Label label_try_done_647_894_impl(this);
      Label* label_try_done_647_894 = &label_try_done_647_894_impl;
      USE(label_try_done_647_894);
      Label label_Label4_476_impl(this);
      Label* label_Label4_476 = &label_Label4_476_impl;
      USE(label_Label4_476);
      Label label_Label5_477_impl(this);
      Label* label_Label5_477 = &label_Label5_477_impl;
      USE(label_Label5_477);
      Label label_try_begin_648_895_impl(this);
      Label* label_try_begin_648_895 = &label_try_begin_648_895_impl;
      USE(label_try_begin_648_895);
      Goto(label_try_begin_648_895);
      if (label_try_begin_648_895->is_used())
      {
        BIND(label_try_begin_648_895);
        // ../test/torque/test-torque.tq:109:9
        {
          // ../test/torque/test-torque.tq:110:7
          LabelTestHelper4(implicit_cast<bool>(p_flag), label_Label4_476, label_Label5_477);
        }
      }
      if (label_Label4_476->is_used())
      {
        BIND(label_Label4_476);
        // ../test/torque/test-torque.tq:112:18
        {
          // ../test/torque/test-torque.tq:113:7
          TNode<BoolT> t1736 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
          *_return_348 = implicit_cast<TNode<BoolT>>(t1736);
          Goto(label_macro_end_893);
        }
      }
      if (label_Label5_477->is_used())
      {
        BIND(label_Label5_477);
        // ../test/torque/test-torque.tq:115:18
        {
          // ../test/torque/test-torque.tq:116:7
          TNode<BoolT> t1737 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
          *_return_348 = implicit_cast<TNode<BoolT>>(t1737);
          Goto(label_macro_end_893);
        }
      }
    }
  }
  BIND(label_macro_end_893);
  return implicit_cast<TNode<BoolT>>((*_return_348).value());
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestPartiallyUnusedLabel() {
  TVARIABLE(Oddball, _return_349_impl);
  auto _return_349 = &_return_349_impl;
  USE(_return_349);
  Label label_macro_end_896_impl(this, {_return_349});
  Label* label_macro_end_896 = &label_macro_end_896_impl;
  USE(label_macro_end_896);
  // ../test/torque/test-torque.tq:120:45
  {
    // ../test/torque/test-torque.tq:121:5
    TNode<BoolT> t1738 = UncheckedCast<BoolT>(CallLabelTestHelper4(implicit_cast<bool>(true)));
    USE(implicit_cast<TNode<BoolT>>(t1738));
    TVARIABLE(BoolT, r1_350_impl);
    auto r1_350 = &r1_350_impl;
    USE(r1_350);
    *r1_350 = implicit_cast<TNode<BoolT>>(t1738);
    // ../test/torque/test-torque.tq:122:5
    TNode<BoolT> t1739 = UncheckedCast<BoolT>(CallLabelTestHelper4(implicit_cast<bool>(false)));
    USE(implicit_cast<TNode<BoolT>>(t1739));
    TVARIABLE(BoolT, r2_351_impl);
    auto r2_351 = &r2_351_impl;
    USE(r2_351);
    *r2_351 = implicit_cast<TNode<BoolT>>(t1739);
    // ../test/torque/test-torque.tq:124:5
    {
      Label label__True_478_impl(this);
      Label* label__True_478 = &label__True_478_impl;
      USE(label__True_478);
      Label label__False_479_impl(this);
      Label* label__False_479 = &label__False_479_impl;
      USE(label__False_479);
      Label label_if_done_label_649_897_impl(this, {});
      Label* label_if_done_label_649_897 = &label_if_done_label_649_897_impl;
      USE(label_if_done_label_649_897);
      Label label__True_480_impl(this);
      Label* label__True_480 = &label__True_480_impl;
      USE(label__True_480);
      GotoIfNot(implicit_cast<TNode<BoolT>>((*r1_350).value()), label__False_479);
      TNode<BoolT> t1740 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>((*r2_351).value())));
      USE(implicit_cast<TNode<BoolT>>(t1740));
      Branch(implicit_cast<TNode<BoolT>>(t1740), label__True_478, label__False_479);
      if (label__True_478->is_used())
      {
        BIND(label__True_478);
        // ../test/torque/test-torque.tq:124:20
        {
          // ../test/torque/test-torque.tq:125:7
          *_return_349 = implicit_cast<TNode<Oddball>>(True());
          Goto(label_macro_end_896);
        }
      }
      if (label__False_479->is_used())
      {
        BIND(label__False_479);
        // ../test/torque/test-torque.tq:126:12
        {
          // ../test/torque/test-torque.tq:127:7
          *_return_349 = implicit_cast<TNode<Oddball>>(False());
          Goto(label_macro_end_896);
        }
      }
    }
  }
  BIND(label_macro_end_896);
  return implicit_cast<TNode<Oddball>>((*_return_349).value());
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTest22UT12ATHeapObject5ATSmi(TNode<Object> p_param2) {
  TVARIABLE(Object, _return_352_impl);
  auto _return_352 = &_return_352_impl;
  USE(_return_352);
  Label label_macro_end_898_impl(this, {_return_352});
  Label* label_macro_end_898 = &label_macro_end_898_impl;
  USE(label_macro_end_898);
  // ../test/torque/test-torque.tq:135:52
  {
    // ../test/torque/test-torque.tq:136:5
    *_return_352 = implicit_cast<TNode<Object>>(p_param2);
    Goto(label_macro_end_898);
  }
  BIND(label_macro_end_898);
  return implicit_cast<TNode<Object>>((*_return_352).value());
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTestWithLabels22UT12ATHeapObject5ATSmi(TNode<Object> p_param2, Label* label_Y_481) {
  TVARIABLE(Object, _return_353_impl);
  auto _return_353 = &_return_353_impl;
  USE(_return_353);
  Label label_macro_end_899_impl(this, {_return_353});
  Label* label_macro_end_899 = &label_macro_end_899_impl;
  USE(label_macro_end_899);
  // ../test/torque/test-torque.tq:143:71
  {
    // ../test/torque/test-torque.tq:144:5
    *_return_353 = implicit_cast<TNode<Object>>(p_param2);
    Goto(label_macro_end_899);
  }
  BIND(label_macro_end_899);
  return implicit_cast<TNode<Object>>((*_return_353).value());
}

void TestBuiltinsFromDSLAssembler::TestMacroSpecialization() {
  Label label_macro_end_900_impl(this, {});
  Label* label_macro_end_900 = &label_macro_end_900_impl;
  USE(label_macro_end_900);
  // ../test/torque/test-torque.tq:147:35
  {
    // ../test/torque/test-torque.tq:148:5
    {
      Label label_try_done_650_901_impl(this);
      Label* label_try_done_650_901 = &label_try_done_650_901_impl;
      USE(label_try_done_650_901);
      Label label_Fail_482_impl(this);
      Label* label_Fail_482 = &label_Fail_482_impl;
      USE(label_Fail_482);
      Label label_try_begin_651_902_impl(this);
      Label* label_try_begin_651_902 = &label_try_begin_651_902_impl;
      USE(label_try_begin_651_902);
      Goto(label_try_begin_651_902);
      if (label_try_begin_651_902->is_used())
      {
        BIND(label_try_begin_651_902);
        // ../test/torque/test-torque.tq:148:9
        {
          // ../test/torque/test-torque.tq:149:7
          Label label__True_483_impl(this);
          Label* label__True_483 = &label__True_483_impl;
          USE(label__True_483);
          Label label__False_484_impl(this);
          Label* label__False_484 = &label__False_484_impl;
          USE(label__False_484);
          int31_t t1741 = 0;
          TNode<Smi> t1742 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1741)));
          TNode<Object> t1743 = UncheckedCast<Object>(GenericMacroTest5ATSmi(implicit_cast<TNode<Smi>>(t1742)));
          USE(implicit_cast<TNode<Object>>(t1743));
          TNode<BoolT> t1744 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1743), implicit_cast<TNode<Object>>(Undefined())));
          USE(implicit_cast<TNode<BoolT>>(t1744));
          Branch(implicit_cast<TNode<BoolT>>(t1744), label__True_483, label__False_484);
          BIND(label__False_484);
          Print("assert 'GenericMacroTest<Smi>(0) == Undefined' failed at ../test/torque/test-torque.tq:149:7");
          Unreachable();
          BIND(label__True_483);
          // ../test/torque/test-torque.tq:150:7
          Label label__True_485_impl(this);
          Label* label__True_485 = &label__True_485_impl;
          USE(label__True_485);
          Label label__False_486_impl(this);
          Label* label__False_486 = &label__False_486_impl;
          USE(label__False_486);
          int31_t t1745 = 1;
          TNode<Smi> t1746 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1745)));
          TNode<Object> t1747 = UncheckedCast<Object>(GenericMacroTest5ATSmi(implicit_cast<TNode<Smi>>(t1746)));
          USE(implicit_cast<TNode<Object>>(t1747));
          TNode<BoolT> t1748 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1747), implicit_cast<TNode<Object>>(Undefined())));
          USE(implicit_cast<TNode<BoolT>>(t1748));
          Branch(implicit_cast<TNode<BoolT>>(t1748), label__True_485, label__False_486);
          BIND(label__False_486);
          Print("assert 'GenericMacroTest<Smi>(1) == Undefined' failed at ../test/torque/test-torque.tq:150:7");
          Unreachable();
          BIND(label__True_485);
          // ../test/torque/test-torque.tq:151:7
          Label label__True_487_impl(this);
          Label* label__True_487 = &label__True_487_impl;
          USE(label__True_487);
          Label label__False_488_impl(this);
          Label* label__False_488 = &label__False_488_impl;
          USE(label__False_488);
          TNode<Object> t1749 = UncheckedCast<Object>(GenericMacroTest22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>(Null())));
          USE(implicit_cast<TNode<Object>>(t1749));
          TNode<BoolT> t1750 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1749), implicit_cast<TNode<Object>>(Null())));
          USE(implicit_cast<TNode<BoolT>>(t1750));
          Branch(implicit_cast<TNode<BoolT>>(t1750), label__True_487, label__False_488);
          BIND(label__False_488);
          Print("assert 'GenericMacroTest<Object>(Null) == Null' failed at ../test/torque/test-torque.tq:151:7");
          Unreachable();
          BIND(label__True_487);
          // ../test/torque/test-torque.tq:152:7
          Label label__True_489_impl(this);
          Label* label__True_489 = &label__True_489_impl;
          USE(label__True_489);
          Label label__False_490_impl(this);
          Label* label__False_490 = &label__False_490_impl;
          USE(label__False_490);
          TNode<Object> t1751 = UncheckedCast<Object>(GenericMacroTest22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>(False())));
          USE(implicit_cast<TNode<Object>>(t1751));
          TNode<BoolT> t1752 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1751), implicit_cast<TNode<Object>>(False())));
          USE(implicit_cast<TNode<BoolT>>(t1752));
          Branch(implicit_cast<TNode<BoolT>>(t1752), label__True_489, label__False_490);
          BIND(label__False_490);
          Print("assert 'GenericMacroTest<Object>(False) == False' failed at ../test/torque/test-torque.tq:152:7");
          Unreachable();
          BIND(label__True_489);
          // ../test/torque/test-torque.tq:153:7
          Label label__True_491_impl(this);
          Label* label__True_491 = &label__True_491_impl;
          USE(label__True_491);
          Label label__False_492_impl(this);
          Label* label__False_492 = &label__False_492_impl;
          USE(label__False_492);
          TNode<Object> t1753 = UncheckedCast<Object>(GenericMacroTest22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>(True())));
          USE(implicit_cast<TNode<Object>>(t1753));
          TNode<BoolT> t1754 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1753), implicit_cast<TNode<Object>>(True())));
          USE(implicit_cast<TNode<BoolT>>(t1754));
          Branch(implicit_cast<TNode<BoolT>>(t1754), label__True_491, label__False_492);
          BIND(label__False_492);
          Print("assert 'GenericMacroTest<Object>(True) == True' failed at ../test/torque/test-torque.tq:153:7");
          Unreachable();
          BIND(label__True_491);
          // ../test/torque/test-torque.tq:154:7
          Label label__True_493_impl(this);
          Label* label__True_493 = &label__True_493_impl;
          USE(label__True_493);
          Label label__False_494_impl(this);
          Label* label__False_494 = &label__False_494_impl;
          USE(label__False_494);
          int31_t t1755 = 0;
          TNode<Smi> t1756 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1755)));
          TNode<Object> t1757 = UncheckedCast<Object>(GenericMacroTestWithLabels5ATSmi(implicit_cast<TNode<Smi>>(t1756), label_Fail_482));
          USE(implicit_cast<TNode<Object>>(t1757));
          TNode<BoolT> t1758 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1757), implicit_cast<TNode<Object>>(Undefined())));
          USE(implicit_cast<TNode<BoolT>>(t1758));
          Branch(implicit_cast<TNode<BoolT>>(t1758), label__True_493, label__False_494);
          BIND(label__False_494);
          Print("assert 'GenericMacroTestWithLabels<Smi>(0) otherwise Fail == Undefined' failed at ../test/torque/test-torque.tq:154:7");
          Unreachable();
          BIND(label__True_493);
          // ../test/torque/test-torque.tq:155:7
          Label label__True_495_impl(this);
          Label* label__True_495 = &label__True_495_impl;
          USE(label__True_495);
          Label label__False_496_impl(this);
          Label* label__False_496 = &label__False_496_impl;
          USE(label__False_496);
          int31_t t1759 = 0;
          TNode<Smi> t1760 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1759)));
          TNode<Object> t1761 = UncheckedCast<Object>(GenericMacroTestWithLabels5ATSmi(implicit_cast<TNode<Smi>>(t1760), label_Fail_482));
          USE(implicit_cast<TNode<Object>>(t1761));
          TNode<BoolT> t1762 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1761), implicit_cast<TNode<Object>>(Undefined())));
          USE(implicit_cast<TNode<BoolT>>(t1762));
          Branch(implicit_cast<TNode<BoolT>>(t1762), label__True_495, label__False_496);
          BIND(label__False_496);
          Print("assert 'GenericMacroTestWithLabels<Smi>(0) otherwise Fail == Undefined' failed at ../test/torque/test-torque.tq:155:7");
          Unreachable();
          BIND(label__True_495);
          // ../test/torque/test-torque.tq:156:7
          Label label__True_497_impl(this);
          Label* label__True_497 = &label__True_497_impl;
          USE(label__True_497);
          Label label__False_498_impl(this);
          Label* label__False_498 = &label__False_498_impl;
          USE(label__False_498);
          TNode<Object> t1763 = UncheckedCast<Object>(GenericMacroTestWithLabels22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>(Null()), label_Fail_482));
          USE(implicit_cast<TNode<Object>>(t1763));
          TNode<BoolT> t1764 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1763), implicit_cast<TNode<Object>>(Null())));
          USE(implicit_cast<TNode<BoolT>>(t1764));
          Branch(implicit_cast<TNode<BoolT>>(t1764), label__True_497, label__False_498);
          BIND(label__False_498);
          Print("assert 'GenericMacroTestWithLabels<Object>(Null) otherwise Fail == Null' failed at ../test/torque/test-torque.tq:156:7");
          Unreachable();
          BIND(label__True_497);
          // ../test/torque/test-torque.tq:157:7
          Label label__True_499_impl(this);
          Label* label__True_499 = &label__True_499_impl;
          USE(label__True_499);
          Label label__False_500_impl(this);
          Label* label__False_500 = &label__False_500_impl;
          USE(label__False_500);
          TNode<Object> t1765 = UncheckedCast<Object>(GenericMacroTestWithLabels22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>(False()), label_Fail_482));
          USE(implicit_cast<TNode<Object>>(t1765));
          TNode<BoolT> t1766 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1765), implicit_cast<TNode<Object>>(False())));
          USE(implicit_cast<TNode<BoolT>>(t1766));
          Branch(implicit_cast<TNode<BoolT>>(t1766), label__True_499, label__False_500);
          BIND(label__False_500);
          Print("assert 'GenericMacroTestWithLabels<Object>(False) otherwise Fail == False' failed at ../test/torque/test-torque.tq:157:7");
          Unreachable();
          BIND(label__True_499);
        }
        Goto(label_try_done_650_901);
      }
      if (label_Fail_482->is_used())
      {
        BIND(label_Fail_482);
        // ../test/torque/test-torque.tq:159:16
        {
          // ../test/torque/test-torque.tq:160:7
          Unreachable();
        }
      }
      BIND(label_try_done_650_901);
    }
  }
}

TF_BUILTIN(TestHelperPlus1, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Smi> p_x = UncheckedCast<Smi>(Parameter(Descriptor::kX));
  USE(p_x);
  // ../test/torque/test-torque.tq:164:58
  {
    // ../test/torque/test-torque.tq:165:5
    int31_t t1767 = 1;
    TNode<Smi> t1768 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1767)));
    TNode<Smi> t1769 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_x), implicit_cast<TNode<Smi>>(t1768)));
    USE(implicit_cast<TNode<Smi>>(t1769));
    Return(implicit_cast<TNode<Smi>>(t1769));
  }
}

TF_BUILTIN(TestHelperPlus2, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Smi> p_x = UncheckedCast<Smi>(Parameter(Descriptor::kX));
  USE(p_x);
  // ../test/torque/test-torque.tq:167:58
  {
    // ../test/torque/test-torque.tq:168:5
    int31_t t1770 = 2;
    TNode<Smi> t1771 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1770)));
    TNode<Smi> t1772 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_x), implicit_cast<TNode<Smi>>(t1771)));
    USE(implicit_cast<TNode<Smi>>(t1772));
    Return(implicit_cast<TNode<Smi>>(t1772));
  }
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestFunctionPointers(TNode<Context> p_context) {
  TVARIABLE(Oddball, _return_354_impl);
  auto _return_354 = &_return_354_impl;
  USE(_return_354);
  Label label_macro_end_903_impl(this, {_return_354});
  Label* label_macro_end_903 = &label_macro_end_903_impl;
  USE(label_macro_end_903);
  // ../test/torque/test-torque.tq:171:57
  {
    // ../test/torque/test-torque.tq:172:5
    TVARIABLE(Code, fptr_355_impl);
    auto fptr_355 = &fptr_355_impl;
    USE(fptr_355);
    *fptr_355 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus1).code()));
    // ../test/torque/test-torque.tq:173:5
    Label label__True_501_impl(this);
    Label* label__True_501 = &label__True_501_impl;
    USE(label__True_501);
    Label label__False_502_impl(this);
    Label* label__False_502 = &label__False_502_impl;
    USE(label__False_502);
    int31_t t1773 = 42;
    TNode<Smi> t1774 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1773)));
    TNode<Smi> t1775 = UncheckedCast<Smi>(CallStub(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus1).descriptor(), implicit_cast<TNode<Code>>((*fptr_355).value()), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Smi>>(t1774)));
    USE(implicit_cast<TNode<Smi>>(t1775));
    int31_t t1776 = 43;
    TNode<Smi> t1777 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1776)));
    TNode<BoolT> t1778 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t1775), implicit_cast<TNode<Smi>>(t1777)));
    USE(implicit_cast<TNode<BoolT>>(t1778));
    Branch(implicit_cast<TNode<BoolT>>(t1778), label__True_501, label__False_502);
    BIND(label__False_502);
    Print("assert 'fptr(context, 42) == 43' failed at ../test/torque/test-torque.tq:173:5");
    Unreachable();
    BIND(label__True_501);
    // ../test/torque/test-torque.tq:174:5
    *fptr_355 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus2).code()));
    // ../test/torque/test-torque.tq:175:5
    Label label__True_503_impl(this);
    Label* label__True_503 = &label__True_503_impl;
    USE(label__True_503);
    Label label__False_504_impl(this);
    Label* label__False_504 = &label__False_504_impl;
    USE(label__False_504);
    int31_t t1779 = 42;
    TNode<Smi> t1780 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1779)));
    TNode<Smi> t1781 = UncheckedCast<Smi>(CallStub(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus1).descriptor(), implicit_cast<TNode<Code>>((*fptr_355).value()), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Smi>>(t1780)));
    USE(implicit_cast<TNode<Smi>>(t1781));
    int31_t t1782 = 44;
    TNode<Smi> t1783 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1782)));
    TNode<BoolT> t1784 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t1781), implicit_cast<TNode<Smi>>(t1783)));
    USE(implicit_cast<TNode<BoolT>>(t1784));
    Branch(implicit_cast<TNode<BoolT>>(t1784), label__True_503, label__False_504);
    BIND(label__False_504);
    Print("assert 'fptr(context, 42) == 44' failed at ../test/torque/test-torque.tq:175:5");
    Unreachable();
    BIND(label__True_503);
    // ../test/torque/test-torque.tq:176:5
    *_return_354 = implicit_cast<TNode<Oddball>>(True());
    Goto(label_macro_end_903);
  }
  BIND(label_macro_end_903);
  return implicit_cast<TNode<Oddball>>((*_return_354).value());
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestVariableRedeclaration(TNode<Context> p_context) {
  TVARIABLE(Oddball, _return_356_impl);
  auto _return_356 = &_return_356_impl;
  USE(_return_356);
  Label label_macro_end_904_impl(this, {_return_356});
  Label* label_macro_end_904 = &label_macro_end_904_impl;
  USE(label_macro_end_904);
  // ../test/torque/test-torque.tq:179:62
  {
    // ../test/torque/test-torque.tq:180:5
    auto t1785 = [=]() {
      int31_t t1787 = 0;
      return implicit_cast<int31_t>(t1787);
    };
    auto t1786 = [=]() {
      int31_t t1788 = 1;
      return implicit_cast<int31_t>(t1788);
    };
    TVARIABLE(Int32T, t1789_652_impl);
    auto t1789_652 = &t1789_652_impl;
    USE(t1789_652);
    {
      Label label__True_505_impl(this);
      Label* label__True_505 = &label__True_505_impl;
      USE(label__True_505);
      Label label__False_506_impl(this);
      Label* label__False_506 = &label__False_506_impl;
      USE(label__False_506);
      Label label__done_653_905_impl(this, {t1789_652});
      Label* label__done_653_905 = &label__done_653_905_impl;
      USE(label__done_653_905);
      int31_t t1790 = 42;
      int31_t t1791 = 0;
      bool t1792 = ConstexprInt31Equal(implicit_cast<int31_t>(t1790), implicit_cast<int31_t>(t1791));
      USE(implicit_cast<bool>(t1792));
      TNode<BoolT> t1793 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1792)));
      USE(implicit_cast<TNode<BoolT>>(t1793));
      Branch(implicit_cast<TNode<BoolT>>(t1793), label__True_505, label__False_506);
      BIND(label__True_505);
            TNode<Int32T> t1794 = UncheckedCast<Int32T>(from_constexpr7ATint31(implicit_cast<int31_t>(t1785())));
      *t1789_652 = implicit_cast<TNode<Int32T>>(t1794);
      Goto(label__done_653_905);
      BIND(label__False_506);
            TNode<Int32T> t1795 = UncheckedCast<Int32T>(from_constexpr7ATint31(implicit_cast<int31_t>(t1786())));
      *t1789_652 = implicit_cast<TNode<Int32T>>(t1795);
      Goto(label__done_653_905);
      BIND(label__done_653_905);
    }
    TVARIABLE(Int32T, var1_357_impl);
    auto var1_357 = &var1_357_impl;
    USE(var1_357);
    *var1_357 = implicit_cast<TNode<Int32T>>((*t1789_652).value());
    // ../test/torque/test-torque.tq:181:5
    auto t1796 = [=]() {
      int31_t t1798 = 1;
      return implicit_cast<int31_t>(t1798);
    };
    auto t1797 = [=]() {
      int31_t t1799 = 0;
      return implicit_cast<int31_t>(t1799);
    };
    TVARIABLE(Int32T, t1800_654_impl);
    auto t1800_654 = &t1800_654_impl;
    USE(t1800_654);
    {
      Label label__True_507_impl(this);
      Label* label__True_507 = &label__True_507_impl;
      USE(label__True_507);
      Label label__False_508_impl(this);
      Label* label__False_508 = &label__False_508_impl;
      USE(label__False_508);
      Label label__done_655_906_impl(this, {t1800_654});
      Label* label__done_655_906 = &label__done_655_906_impl;
      USE(label__done_655_906);
      int31_t t1801 = 42;
      int31_t t1802 = 0;
      bool t1803 = ConstexprInt31Equal(implicit_cast<int31_t>(t1801), implicit_cast<int31_t>(t1802));
      USE(implicit_cast<bool>(t1803));
      TNode<BoolT> t1804 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1803)));
      USE(implicit_cast<TNode<BoolT>>(t1804));
      Branch(implicit_cast<TNode<BoolT>>(t1804), label__True_507, label__False_508);
      BIND(label__True_507);
            TNode<Int32T> t1805 = UncheckedCast<Int32T>(from_constexpr7ATint31(implicit_cast<int31_t>(t1796())));
      *t1800_654 = implicit_cast<TNode<Int32T>>(t1805);
      Goto(label__done_655_906);
      BIND(label__False_508);
            TNode<Int32T> t1806 = UncheckedCast<Int32T>(from_constexpr7ATint31(implicit_cast<int31_t>(t1797())));
      *t1800_654 = implicit_cast<TNode<Int32T>>(t1806);
      Goto(label__done_655_906);
      BIND(label__done_655_906);
    }
    TVARIABLE(Int32T, var2_358_impl);
    auto var2_358 = &var2_358_impl;
    USE(var2_358);
    *var2_358 = implicit_cast<TNode<Int32T>>((*t1800_654).value());
    // ../test/torque/test-torque.tq:182:5
    *_return_356 = implicit_cast<TNode<Oddball>>(True());
    Goto(label_macro_end_904);
  }
  BIND(label_macro_end_904);
  return implicit_cast<TNode<Oddball>>((*_return_356).value());
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::TestTernaryOperator(TNode<Smi> p_x) {
  TVARIABLE(Smi, _return_359_impl);
  auto _return_359 = &_return_359_impl;
  USE(_return_359);
  Label label_macro_end_907_impl(this, {_return_359});
  Label* label_macro_end_907 = &label_macro_end_907_impl;
  USE(label_macro_end_907);
  // ../test/torque/test-torque.tq:185:42
  {
    // ../test/torque/test-torque.tq:186:5
    auto t1807 = [=]() {
      return implicit_cast<bool>(true);
    };
    auto t1808 = [=]() {
      return implicit_cast<bool>(false);
    };
    TVARIABLE(BoolT, t1809_656_impl);
    auto t1809_656 = &t1809_656_impl;
    USE(t1809_656);
    {
      Label label__True_509_impl(this);
      Label* label__True_509 = &label__True_509_impl;
      USE(label__True_509);
      Label label__False_510_impl(this);
      Label* label__False_510 = &label__False_510_impl;
      USE(label__False_510);
      Label label__done_657_908_impl(this, {t1809_656});
      Label* label__done_657_908 = &label__done_657_908_impl;
      USE(label__done_657_908);
      int31_t t1810 = 0;
      TNode<Smi> t1811 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1810)));
      TNode<BoolT> t1812 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(p_x), implicit_cast<TNode<Smi>>(t1811)));
      USE(implicit_cast<TNode<BoolT>>(t1812));
      Branch(implicit_cast<TNode<BoolT>>(t1812), label__True_509, label__False_510);
      BIND(label__True_509);
            TNode<BoolT> t1813 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1807())));
      *t1809_656 = implicit_cast<TNode<BoolT>>(t1813);
      Goto(label__done_657_908);
      BIND(label__False_510);
            TNode<BoolT> t1814 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1808())));
      *t1809_656 = implicit_cast<TNode<BoolT>>(t1814);
      Goto(label__done_657_908);
      BIND(label__done_657_908);
    }
    TVARIABLE(BoolT, b_360_impl);
    auto b_360 = &b_360_impl;
    USE(b_360);
    *b_360 = implicit_cast<TNode<BoolT>>((*t1809_656).value());
    // ../test/torque/test-torque.tq:187:5
    auto t1815 = [=]() {
      int31_t t1817 = 10;
      TNode<Smi> t1818 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1817)));
      TNode<Smi> t1819 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_x), implicit_cast<TNode<Smi>>(t1818)));
      USE(implicit_cast<TNode<Smi>>(t1819));
      return implicit_cast<TNode<Smi>>(t1819);
    };
    auto t1816 = [=]() {
      int31_t t1820 = 100;
      TNode<Smi> t1821 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1820)));
      TNode<Smi> t1822 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_x), implicit_cast<TNode<Smi>>(t1821)));
      USE(implicit_cast<TNode<Smi>>(t1822));
      return implicit_cast<TNode<Smi>>(t1822);
    };
    TVARIABLE(Smi, t1823_658_impl);
    auto t1823_658 = &t1823_658_impl;
    USE(t1823_658);
    {
      Label label__True_511_impl(this);
      Label* label__True_511 = &label__True_511_impl;
      USE(label__True_511);
      Label label__False_512_impl(this);
      Label* label__False_512 = &label__False_512_impl;
      USE(label__False_512);
      Label label__done_659_909_impl(this, {t1823_658});
      Label* label__done_659_909 = &label__done_659_909_impl;
      USE(label__done_659_909);
      Branch(implicit_cast<TNode<BoolT>>((*b_360).value()), label__True_511, label__False_512);
      BIND(label__True_511);
            *t1823_658 = implicit_cast<TNode<Smi>>(t1815());
      Goto(label__done_659_909);
      BIND(label__False_512);
            *t1823_658 = implicit_cast<TNode<Smi>>(t1816());
      Goto(label__done_659_909);
      BIND(label__done_659_909);
    }
    *_return_359 = implicit_cast<TNode<Smi>>((*t1823_658).value());
    Goto(label_macro_end_907);
  }
  BIND(label_macro_end_907);
  return implicit_cast<TNode<Smi>>((*_return_359).value());
}

void TestBuiltinsFromDSLAssembler::TestFunctionPointerToGeneric(TNode<Context> p_c) {
  Label label_macro_end_910_impl(this, {});
  Label* label_macro_end_910 = &label_macro_end_910_impl;
  USE(label_macro_end_910);
  // ../test/torque/test-torque.tq:190:50
  {
    // ../test/torque/test-torque.tq:191:5
    TVARIABLE(Code, fptr1_361_impl);
    auto fptr1_361 = &fptr1_361_impl;
    USE(fptr1_361);
    *fptr1_361 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest5ATSmi).code()));
    // ../test/torque/test-torque.tq:192:5
    TVARIABLE(Code, fptr2_362_impl);
    auto fptr2_362 = &fptr2_362_impl;
    USE(fptr2_362);
    *fptr2_362 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi).code()));
    // ../test/torque/test-torque.tq:194:5
    Label label__True_513_impl(this);
    Label* label__True_513 = &label__True_513_impl;
    USE(label__True_513);
    Label label__False_514_impl(this);
    Label* label__False_514 = &label__False_514_impl;
    USE(label__False_514);
    int31_t t1824 = 0;
    TNode<Smi> t1825 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1824)));
    TNode<Object> t1826 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest5ATSmi).descriptor(), implicit_cast<TNode<Code>>((*fptr1_361).value()), implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Smi>>(t1825)));
    USE(implicit_cast<TNode<Object>>(t1826));
    TNode<BoolT> t1827 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1826), implicit_cast<TNode<Object>>(Null())));
    USE(implicit_cast<TNode<BoolT>>(t1827));
    Branch(implicit_cast<TNode<BoolT>>(t1827), label__True_513, label__False_514);
    BIND(label__False_514);
    Print("assert 'fptr1(c, 0) == Null' failed at ../test/torque/test-torque.tq:194:5");
    Unreachable();
    BIND(label__True_513);
    // ../test/torque/test-torque.tq:195:5
    Label label__True_515_impl(this);
    Label* label__True_515 = &label__True_515_impl;
    USE(label__True_515);
    Label label__False_516_impl(this);
    Label* label__False_516 = &label__False_516_impl;
    USE(label__False_516);
    int31_t t1828 = 1;
    TNode<Smi> t1829 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1828)));
    TNode<Object> t1830 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest5ATSmi).descriptor(), implicit_cast<TNode<Code>>((*fptr1_361).value()), implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Smi>>(t1829)));
    USE(implicit_cast<TNode<Object>>(t1830));
    TNode<BoolT> t1831 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1830), implicit_cast<TNode<Object>>(Null())));
    USE(implicit_cast<TNode<BoolT>>(t1831));
    Branch(implicit_cast<TNode<BoolT>>(t1831), label__True_515, label__False_516);
    BIND(label__False_516);
    Print("assert 'fptr1(c, 1) == Null' failed at ../test/torque/test-torque.tq:195:5");
    Unreachable();
    BIND(label__True_515);
    // ../test/torque/test-torque.tq:196:5
    Label label__True_517_impl(this);
    Label* label__True_517 = &label__True_517_impl;
    USE(label__True_517);
    Label label__False_518_impl(this);
    Label* label__False_518 = &label__False_518_impl;
    USE(label__False_518);
    TNode<Object> t1832 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi).descriptor(), implicit_cast<TNode<Code>>((*fptr2_362).value()), implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<Object>>(t1832));
    TNode<BoolT> t1833 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1832), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<BoolT>>(t1833));
    Branch(implicit_cast<TNode<BoolT>>(t1833), label__True_517, label__False_518);
    BIND(label__False_518);
    Print("assert 'fptr2(c, Undefined) == Undefined' failed at ../test/torque/test-torque.tq:196:5");
    Unreachable();
    BIND(label__True_517);
    // ../test/torque/test-torque.tq:197:5
    Label label__True_519_impl(this);
    Label* label__True_519 = &label__True_519_impl;
    USE(label__True_519);
    Label label__False_520_impl(this);
    Label* label__False_520 = &label__False_520_impl;
    USE(label__False_520);
    TNode<Object> t1834 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi).descriptor(), implicit_cast<TNode<Code>>((*fptr2_362).value()), implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<Object>>(t1834));
    TNode<BoolT> t1835 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1834), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<BoolT>>(t1835));
    Branch(implicit_cast<TNode<BoolT>>(t1835), label__True_519, label__False_520);
    BIND(label__False_520);
    Print("assert 'fptr2(c, Undefined) == Undefined' failed at ../test/torque/test-torque.tq:197:5");
    Unreachable();
    BIND(label__True_519);
  }
}

compiler::TNode<Code> TestBuiltinsFromDSLAssembler::TestTypeAlias(TNode<Code> p_x) {
  TVARIABLE(Code, _return_363_impl);
  auto _return_363 = &_return_363_impl;
  USE(_return_363);
  Label label_macro_end_911_impl(this, {_return_363});
  Label* label_macro_end_911 = &label_macro_end_911_impl;
  USE(label_macro_end_911);
  // ../test/torque/test-torque.tq:201:42
  {
    // ../test/torque/test-torque.tq:202:5
    *_return_363 = implicit_cast<TNode<Code>>(p_x);
    Goto(label_macro_end_911);
  }
  BIND(label_macro_end_911);
  return implicit_cast<TNode<Code>>((*_return_363).value());
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestUnsafeCast(TNode<Context> p_c, TNode<Number> p_n) {
  TVARIABLE(Oddball, _return_364_impl);
  auto _return_364 = &_return_364_impl;
  USE(_return_364);
  Label label_macro_end_912_impl(this, {_return_364});
  Label* label_macro_end_912 = &label_macro_end_912_impl;
  USE(label_macro_end_912);
  // ../test/torque/test-torque.tq:205:56
  {
    // ../test/torque/test-torque.tq:206:5
    {
      Label label__True_521_impl(this);
      Label* label__True_521 = &label__True_521_impl;
      USE(label__True_521);
      Label label__False_522_impl(this, {});
      Label* label__False_522 = &label__False_522_impl;
      USE(label__False_522);
      TNode<BoolT> t1836 = UncheckedCast<BoolT>(TaggedIsSmi(implicit_cast<TNode<Object>>(p_n)));
      USE(implicit_cast<TNode<BoolT>>(t1836));
      Branch(implicit_cast<TNode<BoolT>>(t1836), label__True_521, label__False_522);
      if (label__True_521->is_used())
      {
        BIND(label__True_521);
        // ../test/torque/test-torque.tq:206:25
        {
          // ../test/torque/test-torque.tq:207:7
          TNode<Smi> t1837 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(p_n)));
          USE(implicit_cast<TNode<Smi>>(t1837));
          TVARIABLE(Smi, m_365_impl);
          auto m_365 = &m_365_impl;
          USE(m_365);
          *m_365 = implicit_cast<TNode<Smi>>(t1837);
          // ../test/torque/test-torque.tq:209:7
          Label label__True_523_impl(this);
          Label* label__True_523 = &label__True_523_impl;
          USE(label__True_523);
          Label label__False_524_impl(this);
          Label* label__False_524 = &label__False_524_impl;
          USE(label__False_524);
          TNode<Smi> t1838 = UncheckedCast<Smi>(CallBuiltin(Builtins::kTestHelperPlus1, implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Smi>>((*m_365).value())));
          USE(implicit_cast<TNode<Smi>>(t1838));
          int31_t t1839 = 11;
          TNode<Smi> t1840 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1839)));
          TNode<BoolT> t1841 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t1838), implicit_cast<TNode<Smi>>(t1840)));
          USE(implicit_cast<TNode<BoolT>>(t1841));
          Branch(implicit_cast<TNode<BoolT>>(t1841), label__True_523, label__False_524);
          BIND(label__False_524);
          Print("assert 'TestHelperPlus1(c, m) == 11' failed at ../test/torque/test-torque.tq:209:7");
          Unreachable();
          BIND(label__True_523);
          // ../test/torque/test-torque.tq:210:7
          *_return_364 = implicit_cast<TNode<Oddball>>(True());
          Goto(label_macro_end_912);
        }
      }
      BIND(label__False_522);
    }
    // ../test/torque/test-torque.tq:212:5
    *_return_364 = implicit_cast<TNode<Oddball>>(False());
    Goto(label_macro_end_912);
  }
  BIND(label_macro_end_912);
  return implicit_cast<TNode<Oddball>>((*_return_364).value());
}

void TestBuiltinsFromDSLAssembler::TestHexLiteral() {
  Label label_macro_end_913_impl(this, {});
  Label* label_macro_end_913 = &label_macro_end_913_impl;
  USE(label_macro_end_913);
  // ../test/torque/test-torque.tq:215:26
  {
    // ../test/torque/test-torque.tq:216:5
    Label label__True_525_impl(this);
    Label* label__True_525 = &label__True_525_impl;
    USE(label__True_525);
    Label label__False_526_impl(this);
    Label* label__False_526 = &label__False_526_impl;
    USE(label__False_526);
    int31_t t1842 = 0xffff;
    TNode<IntPtrT> t1843 = UncheckedCast<IntPtrT>(convert8ATintptr(implicit_cast<int31_t>(t1842)));
    USE(implicit_cast<TNode<IntPtrT>>(t1843));
    int31_t t1844 = 1;
    TNode<IntPtrT> t1845 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1844)));
    TNode<IntPtrT> t1846 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(t1843), implicit_cast<TNode<IntPtrT>>(t1845)));
    USE(implicit_cast<TNode<IntPtrT>>(t1846));
    int31_t t1847 = 0x10000;
    TNode<IntPtrT> t1848 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1847)));
    TNode<BoolT> t1849 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<IntPtrT>>(t1846), implicit_cast<TNode<IntPtrT>>(t1848)));
    USE(implicit_cast<TNode<BoolT>>(t1849));
    Branch(implicit_cast<TNode<BoolT>>(t1849), label__True_525, label__False_526);
    BIND(label__False_526);
    Print("assert 'convert<intptr>(0xffff) + 1 == 0x10000' failed at ../test/torque/test-torque.tq:216:5");
    Unreachable();
    BIND(label__True_525);
    // ../test/torque/test-torque.tq:217:5
    Label label__True_527_impl(this);
    Label* label__True_527 = &label__True_527_impl;
    USE(label__True_527);
    Label label__False_528_impl(this);
    Label* label__False_528 = &label__False_528_impl;
    USE(label__False_528);
    int31_t t1850 = -0xffff;
    TNode<IntPtrT> t1851 = UncheckedCast<IntPtrT>(convert8ATintptr(implicit_cast<int31_t>(t1850)));
    USE(implicit_cast<TNode<IntPtrT>>(t1851));
    int31_t t1852 = -65535;
    TNode<IntPtrT> t1853 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1852)));
    TNode<BoolT> t1854 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<IntPtrT>>(t1851), implicit_cast<TNode<IntPtrT>>(t1853)));
    USE(implicit_cast<TNode<BoolT>>(t1854));
    Branch(implicit_cast<TNode<BoolT>>(t1854), label__True_527, label__False_528);
    BIND(label__False_528);
    Print("assert 'convert<intptr>(-0xffff) == -65535' failed at ../test/torque/test-torque.tq:217:5");
    Unreachable();
    BIND(label__True_527);
  }
}

void TestBuiltinsFromDSLAssembler::TestLargeIntegerLiterals(TNode<Context> p_c) {
  Label label_macro_end_914_impl(this, {});
  Label* label_macro_end_914 = &label_macro_end_914_impl;
  USE(label_macro_end_914);
  // ../test/torque/test-torque.tq:220:46
  {
    // ../test/torque/test-torque.tq:221:5
    int32_t t1855 = 0x40000000;
    TVARIABLE(Int32T, x_366_impl);
    auto x_366 = &x_366_impl;
    USE(x_366);
    TNode<Int32T> t1856 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int32_t>(t1855)));
    *x_366 = implicit_cast<TNode<Int32T>>(t1856);
    // ../test/torque/test-torque.tq:222:5
    int32_t t1857 = 0x7fffffff;
    TVARIABLE(Int32T, y_367_impl);
    auto y_367 = &y_367_impl;
    USE(y_367);
    TNode<Int32T> t1858 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int32_t>(t1857)));
    *y_367 = implicit_cast<TNode<Int32T>>(t1858);
  }
}

void TestBuiltinsFromDSLAssembler::TestMultilineAssert() {
  Label label_macro_end_915_impl(this, {});
  Label* label_macro_end_915 = &label_macro_end_915_impl;
  USE(label_macro_end_915);
  // ../test/torque/test-torque.tq:225:31
  {
    // ../test/torque/test-torque.tq:226:5
    int31_t t1859 = 5;
    TVARIABLE(Smi, someVeryLongVariableNameThatWillCauseLineBreaks_368_impl);
    auto someVeryLongVariableNameThatWillCauseLineBreaks_368 = &someVeryLongVariableNameThatWillCauseLineBreaks_368_impl;
    USE(someVeryLongVariableNameThatWillCauseLineBreaks_368);
    TNode<Smi> t1860 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1859)));
    *someVeryLongVariableNameThatWillCauseLineBreaks_368 = implicit_cast<TNode<Smi>>(t1860);
    // ../test/torque/test-torque.tq:227:5
    Label label__True_529_impl(this);
    Label* label__True_529 = &label__True_529_impl;
    USE(label__True_529);
    Label label__False_530_impl(this);
    Label* label__False_530 = &label__False_530_impl;
    USE(label__False_530);
    Label label__True_531_impl(this);
    Label* label__True_531 = &label__True_531_impl;
    USE(label__True_531);
    int31_t t1861 = 0;
    TNode<Smi> t1862 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1861)));
    TNode<BoolT> t1863 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*someVeryLongVariableNameThatWillCauseLineBreaks_368).value()), implicit_cast<TNode<Smi>>(t1862)));
    USE(implicit_cast<TNode<BoolT>>(t1863));
    GotoIfNot(implicit_cast<TNode<BoolT>>(t1863), label__False_530);
    int31_t t1864 = 10;
    TNode<Smi> t1865 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1864)));
    TNode<BoolT> t1866 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*someVeryLongVariableNameThatWillCauseLineBreaks_368).value()), implicit_cast<TNode<Smi>>(t1865)));
    USE(implicit_cast<TNode<BoolT>>(t1866));
    Branch(implicit_cast<TNode<BoolT>>(t1866), label__True_529, label__False_530);
    BIND(label__False_530);
    Print("assert 'someVeryLongVariableNameThatWillCauseLineBreaks > 0 && someVeryLongVariableNameThatWillCauseLineBreaks < 10' failed at ../test/torque/test-torque.tq:227:5");
    Unreachable();
    BIND(label__True_529);
  }
}

void TestBuiltinsFromDSLAssembler::TestNewlineInString() {
  Label label_macro_end_916_impl(this, {});
  Label* label_macro_end_916 = &label_macro_end_916_impl;
  USE(label_macro_end_916);
  // ../test/torque/test-torque.tq:232:31
  {
    // ../test/torque/test-torque.tq:233:5
    const char* t1867 = "Hello, World!\n";
    Print(implicit_cast<const char*>(t1867));
  }
}

int31_t TestBuiltinsFromDSLAssembler::kConstexprConst() {
  int31_t t1868 = 5;
  return implicit_cast<int31_t>(t1868);
}

compiler::TNode<IntPtrT> TestBuiltinsFromDSLAssembler::kIntptrConst() {
  int31_t t1869 = 4;
  TNode<IntPtrT> t1870 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1869)));
  return implicit_cast<TNode<IntPtrT>>(t1870);
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::kSmiConst() {
  int31_t t1871 = 3;
  TNode<Smi> t1872 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1871)));
  return implicit_cast<TNode<Smi>>(t1872);
}

void TestBuiltinsFromDSLAssembler::TestModuleConstBindings() {
  Label label_macro_end_917_impl(this, {});
  Label* label_macro_end_917 = &label_macro_end_917_impl;
  USE(label_macro_end_917);
  // ../test/torque/test-torque.tq:240:35
  {
    // ../test/torque/test-torque.tq:241:5
    Label label__True_532_impl(this);
    Label* label__True_532 = &label__True_532_impl;
    USE(label__True_532);
    Label label__False_533_impl(this);
    Label* label__False_533 = &label__False_533_impl;
    USE(label__False_533);
    int31_t t1873 = 5;
    TNode<Int32T> t1874 = UncheckedCast<Int32T>(Int32Constant(implicit_cast<int31_t>(t1873)));
    USE(implicit_cast<TNode<Int32T>>(t1874));
    TNode<Int32T> t1875 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(kConstexprConst())));
    TNode<BoolT> t1876 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Int32T>>(t1875), implicit_cast<TNode<Int32T>>(t1874)));
    USE(implicit_cast<TNode<BoolT>>(t1876));
    Branch(implicit_cast<TNode<BoolT>>(t1876), label__True_532, label__False_533);
    BIND(label__False_533);
    Print("assert 'kConstexprConst == Int32Constant(5)' failed at ../test/torque/test-torque.tq:241:5");
    Unreachable();
    BIND(label__True_532);
    // ../test/torque/test-torque.tq:242:5
    Label label__True_534_impl(this);
    Label* label__True_534 = &label__True_534_impl;
    USE(label__True_534);
    Label label__False_535_impl(this);
    Label* label__False_535 = &label__False_535_impl;
    USE(label__False_535);
    int31_t t1877 = 4;
    TNode<IntPtrT> t1878 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1877)));
    TNode<BoolT> t1879 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<IntPtrT>>(kIntptrConst()), implicit_cast<TNode<IntPtrT>>(t1878)));
    USE(implicit_cast<TNode<BoolT>>(t1879));
    Branch(implicit_cast<TNode<BoolT>>(t1879), label__True_534, label__False_535);
    BIND(label__False_535);
    Print("assert 'kIntptrConst == 4' failed at ../test/torque/test-torque.tq:242:5");
    Unreachable();
    BIND(label__True_534);
    // ../test/torque/test-torque.tq:243:5
    Label label__True_536_impl(this);
    Label* label__True_536 = &label__True_536_impl;
    USE(label__True_536);
    Label label__False_537_impl(this);
    Label* label__False_537 = &label__False_537_impl;
    USE(label__False_537);
    int31_t t1880 = 3;
    TNode<Smi> t1881 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1880)));
    TNode<BoolT> t1882 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(kSmiConst()), implicit_cast<TNode<Smi>>(t1881)));
    USE(implicit_cast<TNode<BoolT>>(t1882));
    Branch(implicit_cast<TNode<BoolT>>(t1882), label__True_536, label__False_537);
    BIND(label__False_537);
    Print("assert 'kSmiConst == 3' failed at ../test/torque/test-torque.tq:243:5");
    Unreachable();
    BIND(label__True_536);
  }
}

void TestBuiltinsFromDSLAssembler::TestLocalConstBindings() {
  Label label_macro_end_918_impl(this, {});
  Label* label_macro_end_918 = &label_macro_end_918_impl;
  USE(label_macro_end_918);
  // ../test/torque/test-torque.tq:246:34
  {
    // ../test/torque/test-torque.tq:247:5
    int31_t t1883 = 3;
    int31_t x_660_impl;
    auto x_660 = &x_660_impl;
    USE(x_660);
    *x_660 = implicit_cast<int31_t>(t1883);
    // ../test/torque/test-torque.tq:248:5
    TNode<Smi> x_smi_661_impl;
    auto x_smi_661 = &x_smi_661_impl;
    USE(x_smi_661);
    TNode<Smi> t1884 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>((*x_660))));
    *x_smi_661 = implicit_cast<TNode<Smi>>(t1884);
    // ../test/torque/test-torque.tq:249:5
    {
      // ../test/torque/test-torque.tq:250:7
      int31_t t1885 = 1;
      TNode<Smi> t1886 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1885)));
      USE(implicit_cast<TNode<Smi>>(t1886));
      TNode<Smi> t1887 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>((*x_660))));
      TNode<Smi> t1888 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t1887), implicit_cast<TNode<Smi>>(t1886)));
      USE(implicit_cast<TNode<Smi>>(t1888));
      TNode<Smi> x_662_impl;
      auto x_662 = &x_662_impl;
      USE(x_662);
      *x_662 = implicit_cast<TNode<Smi>>(t1888);
      // ../test/torque/test-torque.tq:251:7
      Label label__True_538_impl(this);
      Label* label__True_538 = &label__True_538_impl;
      USE(label__True_538);
      Label label__False_539_impl(this);
      Label* label__False_539 = &label__False_539_impl;
      USE(label__False_539);
      int31_t t1889 = 1;
      TNode<Smi> t1890 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1889)));
      TNode<Smi> t1891 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*x_smi_661)), implicit_cast<TNode<Smi>>(t1890)));
      USE(implicit_cast<TNode<Smi>>(t1891));
      TNode<BoolT> t1892 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*x_662)), implicit_cast<TNode<Smi>>(t1891)));
      USE(implicit_cast<TNode<BoolT>>(t1892));
      Branch(implicit_cast<TNode<BoolT>>(t1892), label__True_538, label__False_539);
      BIND(label__False_539);
      Print("assert 'x == x_smi + 1' failed at ../test/torque/test-torque.tq:251:7");
      Unreachable();
      BIND(label__True_538);
      // ../test/torque/test-torque.tq:252:7
      TNode<Smi> x_smi_663_impl;
      auto x_smi_663 = &x_smi_663_impl;
      USE(x_smi_663);
      *x_smi_663 = implicit_cast<TNode<Smi>>((*x_662));
      // ../test/torque/test-torque.tq:253:7
      Label label__True_540_impl(this);
      Label* label__True_540 = &label__True_540_impl;
      USE(label__True_540);
      Label label__False_541_impl(this);
      Label* label__False_541 = &label__False_541_impl;
      USE(label__False_541);
      TNode<BoolT> t1893 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*x_662)), implicit_cast<TNode<Smi>>((*x_smi_663))));
      USE(implicit_cast<TNode<BoolT>>(t1893));
      Branch(implicit_cast<TNode<BoolT>>(t1893), label__True_540, label__False_541);
      BIND(label__False_541);
      Print("assert 'x == x_smi' failed at ../test/torque/test-torque.tq:253:7");
      Unreachable();
      BIND(label__True_540);
      // ../test/torque/test-torque.tq:254:7
      Label label__True_542_impl(this);
      Label* label__True_542 = &label__True_542_impl;
      USE(label__True_542);
      Label label__False_543_impl(this);
      Label* label__False_543 = &label__False_543_impl;
      USE(label__False_543);
      int31_t t1894 = 4;
      TNode<Smi> t1895 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1894)));
      TNode<BoolT> t1896 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*x_662)), implicit_cast<TNode<Smi>>(t1895)));
      USE(implicit_cast<TNode<BoolT>>(t1896));
      Branch(implicit_cast<TNode<BoolT>>(t1896), label__True_542, label__False_543);
      BIND(label__False_543);
      Print("assert 'x == 4' failed at ../test/torque/test-torque.tq:254:7");
      Unreachable();
      BIND(label__True_542);
    }
    // ../test/torque/test-torque.tq:256:5
    Label label__True_544_impl(this);
    Label* label__True_544 = &label__True_544_impl;
    USE(label__True_544);
    Label label__False_545_impl(this);
    Label* label__False_545 = &label__False_545_impl;
    USE(label__False_545);
    int31_t t1897 = 3;
    TNode<Smi> t1898 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1897)));
    TNode<BoolT> t1899 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*x_smi_661)), implicit_cast<TNode<Smi>>(t1898)));
    USE(implicit_cast<TNode<BoolT>>(t1899));
    Branch(implicit_cast<TNode<BoolT>>(t1899), label__True_544, label__False_545);
    BIND(label__False_545);
    Print("assert 'x_smi == 3' failed at ../test/torque/test-torque.tq:256:5");
    Unreachable();
    BIND(label__True_544);
    // ../test/torque/test-torque.tq:257:5
    Label label__True_546_impl(this);
    Label* label__True_546 = &label__True_546_impl;
    USE(label__True_546);
    Label label__False_547_impl(this);
    Label* label__False_547 = &label__False_547_impl;
    USE(label__False_547);
    TNode<Smi> t1900 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>((*x_660))));
    TNode<BoolT> t1901 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t1900), implicit_cast<TNode<Smi>>((*x_smi_661))));
    USE(implicit_cast<TNode<BoolT>>(t1901));
    Branch(implicit_cast<TNode<BoolT>>(t1901), label__True_546, label__False_547);
    BIND(label__False_547);
    Print("assert 'x == x_smi' failed at ../test/torque/test-torque.tq:257:5");
    Unreachable();
    BIND(label__True_546);
  }
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::TestStruct1(TestStructA p_i) {
  TVARIABLE(Smi, _return_369_impl);
  auto _return_369 = &_return_369_impl;
  USE(_return_369);
  Label label_macro_end_919_impl(this, {_return_369});
  Label* label_macro_end_919 = &label_macro_end_919_impl;
  USE(label_macro_end_919);
  // ../test/torque/test-torque.tq:271:42
  {
    // ../test/torque/test-torque.tq:272:5
    *_return_369 = implicit_cast<TNode<Smi>>(p_i.i);
    Goto(label_macro_end_919);
  }
  BIND(label_macro_end_919);
  return implicit_cast<TNode<Smi>>((*_return_369).value());
}

TestBuiltinsFromDSLAssembler::TestStructA TestBuiltinsFromDSLAssembler::TestStruct2() {
  TVARIABLE(FixedArray, _return_indexes_371_impl);
  auto _return_indexes_371 = &_return_indexes_371_impl;
  USE(_return_indexes_371);
  TVARIABLE(Smi, _return_i_372_impl);
  auto _return_i_372 = &_return_i_372_impl;
  USE(_return_i_372);
  TVARIABLE(Number, _return_k_373_impl);
  auto _return_k_373 = &_return_k_373_impl;
  USE(_return_k_373);
  Label label_macro_end_920_impl(this, {_return_i_372, _return_indexes_371, _return_k_373});
  Label* label_macro_end_920 = &label_macro_end_920_impl;
  USE(label_macro_end_920);
  // ../test/torque/test-torque.tq:275:36
  {
    // ../test/torque/test-torque.tq:276:5
    TNode<FixedArray> t1902 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(kEmptyFixedArray())));
    USE(implicit_cast<TNode<FixedArray>>(t1902));
    int31_t t1903 = 27;
    TNode<Smi> t1904 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1903)));
    int31_t t1905 = 31;
    TNode<Number> t1906 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t1905)));
    TestStructA t1907 = {implicit_cast<TNode<FixedArray>>(t1902), implicit_cast<TNode<Smi>>(t1904), implicit_cast<TNode<Number>>(t1906)};
    *_return_indexes_371 = implicit_cast<TNode<FixedArray>>(implicit_cast<TestStructA>(t1907).indexes);
    *_return_i_372 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(t1907).i);
    *_return_k_373 = implicit_cast<TNode<Number>>(implicit_cast<TestStructA>(t1907).k);
    Goto(label_macro_end_920);
  }
  BIND(label_macro_end_920);
  return TestStructA{implicit_cast<TNode<FixedArray>>((*_return_indexes_371).value()), implicit_cast<TNode<Smi>>((*_return_i_372).value()), implicit_cast<TNode<Number>>((*_return_k_373).value())};
}

TestBuiltinsFromDSLAssembler::TestStructA TestBuiltinsFromDSLAssembler::TestStruct3() {
  TVARIABLE(FixedArray, _return_indexes_375_impl);
  auto _return_indexes_375 = &_return_indexes_375_impl;
  USE(_return_indexes_375);
  TVARIABLE(Smi, _return_i_376_impl);
  auto _return_i_376 = &_return_i_376_impl;
  USE(_return_i_376);
  TVARIABLE(Number, _return_k_377_impl);
  auto _return_k_377 = &_return_k_377_impl;
  USE(_return_k_377);
  Label label_macro_end_921_impl(this, {_return_i_376, _return_indexes_375, _return_k_377});
  Label* label_macro_end_921 = &label_macro_end_921_impl;
  USE(label_macro_end_921);
  // ../test/torque/test-torque.tq:279:36
  {
    // ../test/torque/test-torque.tq:280:5
    TNode<FixedArray> t1908 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(kEmptyFixedArray())));
    USE(implicit_cast<TNode<FixedArray>>(t1908));
    int31_t t1909 = 13;
    TNode<Smi> t1910 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1909)));
    int31_t t1911 = 5;
    TNode<Number> t1912 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t1911)));
    TestStructA t1913 = {implicit_cast<TNode<FixedArray>>(t1908), implicit_cast<TNode<Smi>>(t1910), implicit_cast<TNode<Number>>(t1912)};
    TVARIABLE(FixedArray, a_indexes_379_impl);
    auto a_indexes_379 = &a_indexes_379_impl;
    USE(a_indexes_379);
    TVARIABLE(Smi, a_i_380_impl);
    auto a_i_380 = &a_i_380_impl;
    USE(a_i_380);
    TVARIABLE(Number, a_k_381_impl);
    auto a_k_381 = &a_k_381_impl;
    USE(a_k_381);
    *a_indexes_379 = implicit_cast<TNode<FixedArray>>(implicit_cast<TestStructA>(t1913).indexes);
    *a_i_380 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(t1913).i);
    *a_k_381 = implicit_cast<TNode<Number>>(implicit_cast<TestStructA>(t1913).k);
    // ../test/torque/test-torque.tq:282:5
    TVARIABLE(FixedArray, b_indexes_383_impl);
    auto b_indexes_383 = &b_indexes_383_impl;
    USE(b_indexes_383);
    TVARIABLE(Smi, b_i_384_impl);
    auto b_i_384 = &b_i_384_impl;
    USE(b_i_384);
    TVARIABLE(Number, b_k_385_impl);
    auto b_k_385 = &b_k_385_impl;
    USE(b_k_385);
    *b_indexes_383 = implicit_cast<TNode<FixedArray>>((*a_indexes_379).value());
    *b_i_384 = implicit_cast<TNode<Smi>>((*a_i_380).value());
    *b_k_385 = implicit_cast<TNode<Number>>((*a_k_381).value());
    // ../test/torque/test-torque.tq:283:5
    TestStructA t1914 = (TestStruct2());
    USE(implicit_cast<TestStructA>(t1914));
    TVARIABLE(FixedArray, c_indexes_387_impl);
    auto c_indexes_387 = &c_indexes_387_impl;
    USE(c_indexes_387);
    TVARIABLE(Smi, c_i_388_impl);
    auto c_i_388 = &c_i_388_impl;
    USE(c_i_388);
    TVARIABLE(Number, c_k_389_impl);
    auto c_k_389 = &c_k_389_impl;
    USE(c_k_389);
    *c_indexes_387 = implicit_cast<TNode<FixedArray>>(implicit_cast<TestStructA>(t1914).indexes);
    *c_i_388 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(t1914).i);
    *c_k_389 = implicit_cast<TNode<Number>>(implicit_cast<TestStructA>(t1914).k);
    // ../test/torque/test-torque.tq:284:5
    TNode<Smi> t1915 = UncheckedCast<Smi>(TestStruct1(TestStructA{implicit_cast<TNode<FixedArray>>((*c_indexes_387).value()), implicit_cast<TNode<Smi>>((*c_i_388).value()), implicit_cast<TNode<Number>>((*c_k_389).value())}));
    USE(implicit_cast<TNode<Smi>>(t1915));
    *a_i_380 = implicit_cast<TNode<Smi>>(t1915);
    // ../test/torque/test-torque.tq:285:5
    *a_k_381 = implicit_cast<TNode<Number>>((*a_i_380).value());
    // ../test/torque/test-torque.tq:286:5
    TVARIABLE(FixedArray, d_x_indexes_392_impl);
    auto d_x_indexes_392 = &d_x_indexes_392_impl;
    USE(d_x_indexes_392);
    TVARIABLE(Smi, d_x_i_393_impl);
    auto d_x_i_393 = &d_x_i_393_impl;
    USE(d_x_i_393);
    TVARIABLE(Number, d_x_k_394_impl);
    auto d_x_k_394 = &d_x_k_394_impl;
    USE(d_x_k_394);
    TVARIABLE(Smi, d_y_395_impl);
    auto d_y_395 = &d_y_395_impl;
    USE(d_y_395);
    // ../test/torque/test-torque.tq:287:5
    *d_x_indexes_392 = implicit_cast<TNode<FixedArray>>((*a_indexes_379).value());
    *d_x_i_393 = implicit_cast<TNode<Smi>>((*a_i_380).value());
    *d_x_k_394 = implicit_cast<TNode<Number>>((*a_k_381).value());
    // ../test/torque/test-torque.tq:288:5
    int31_t t1916 = 7;
    TNode<Smi> t1917 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1916)));
    TestStructB t1918 = {TestStructA{implicit_cast<TNode<FixedArray>>((*a_indexes_379).value()), implicit_cast<TNode<Smi>>((*a_i_380).value()), implicit_cast<TNode<Number>>((*a_k_381).value())}, implicit_cast<TNode<Smi>>(t1917)};
    *d_x_indexes_392 = implicit_cast<TNode<FixedArray>>(implicit_cast<TestStructA>(implicit_cast<TestStructB>(t1918).x).indexes);
    *d_x_i_393 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(implicit_cast<TestStructB>(t1918).x).i);
    *d_x_k_394 = implicit_cast<TNode<Number>>(implicit_cast<TestStructA>(implicit_cast<TestStructB>(t1918).x).k);
    *d_y_395 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructB>(t1918).y);
    // ../test/torque/test-torque.tq:289:5
    TVARIABLE(FixedArray, e_indexes_397_impl);
    auto e_indexes_397 = &e_indexes_397_impl;
    USE(e_indexes_397);
    TVARIABLE(Smi, e_i_398_impl);
    auto e_i_398 = &e_i_398_impl;
    USE(e_i_398);
    TVARIABLE(Number, e_k_399_impl);
    auto e_k_399 = &e_k_399_impl;
    USE(e_k_399);
    *e_indexes_397 = implicit_cast<TNode<FixedArray>>((*d_x_indexes_392).value());
    *e_i_398 = implicit_cast<TNode<Smi>>((*d_x_i_393).value());
    *e_k_399 = implicit_cast<TNode<Number>>((*d_x_k_394).value());
    // ../test/torque/test-torque.tq:290:5
    TNode<FixedArray> t1919 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(kEmptyFixedArray())));
    USE(implicit_cast<TNode<FixedArray>>(t1919));
    int31_t t1920 = 27;
    TNode<Smi> t1921 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1920)));
    int31_t t1922 = 31;
    TNode<Number> t1923 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t1922)));
    TestStructA t1924 = {implicit_cast<TNode<FixedArray>>(t1919), implicit_cast<TNode<Smi>>(t1921), implicit_cast<TNode<Number>>(t1923)};
    TVARIABLE(Smi, f_400_impl);
    auto f_400 = &f_400_impl;
    USE(f_400);
    *f_400 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(t1924).i);
    // ../test/torque/test-torque.tq:291:5
    TestStructA t1925 = (TestStruct2());
    USE(implicit_cast<TestStructA>(t1925));
    *f_400 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(t1925).i);
    // ../test/torque/test-torque.tq:292:5
    *_return_indexes_375 = implicit_cast<TNode<FixedArray>>((*a_indexes_379).value());
    *_return_i_376 = implicit_cast<TNode<Smi>>((*a_i_380).value());
    *_return_k_377 = implicit_cast<TNode<Number>>((*a_k_381).value());
    Goto(label_macro_end_921);
  }
  BIND(label_macro_end_921);
  return TestStructA{implicit_cast<TNode<FixedArray>>((*_return_indexes_375).value()), implicit_cast<TNode<Smi>>((*_return_i_376).value()), implicit_cast<TNode<Number>>((*_return_k_377).value())};
}

TestBuiltinsFromDSLAssembler::TestStructC TestBuiltinsFromDSLAssembler::TestStruct4() {
  TVARIABLE(FixedArray, _return_x_indexes_403_impl);
  auto _return_x_indexes_403 = &_return_x_indexes_403_impl;
  USE(_return_x_indexes_403);
  TVARIABLE(Smi, _return_x_i_404_impl);
  auto _return_x_i_404 = &_return_x_i_404_impl;
  USE(_return_x_i_404);
  TVARIABLE(Number, _return_x_k_405_impl);
  auto _return_x_k_405 = &_return_x_k_405_impl;
  USE(_return_x_k_405);
  TVARIABLE(FixedArray, _return_y_indexes_407_impl);
  auto _return_y_indexes_407 = &_return_y_indexes_407_impl;
  USE(_return_y_indexes_407);
  TVARIABLE(Smi, _return_y_i_408_impl);
  auto _return_y_i_408 = &_return_y_i_408_impl;
  USE(_return_y_i_408);
  TVARIABLE(Number, _return_y_k_409_impl);
  auto _return_y_k_409 = &_return_y_k_409_impl;
  USE(_return_y_k_409);
  Label label_macro_end_922_impl(this, {_return_x_i_404, _return_x_indexes_403, _return_x_k_405, _return_y_i_408, _return_y_indexes_407, _return_y_k_409});
  Label* label_macro_end_922 = &label_macro_end_922_impl;
  USE(label_macro_end_922);
  // ../test/torque/test-torque.tq:300:36
  {
    // ../test/torque/test-torque.tq:301:5
    TestStructA t1926 = (TestStruct2());
    USE(implicit_cast<TestStructA>(t1926));
    TestStructA t1927 = (TestStruct2());
    USE(implicit_cast<TestStructA>(t1927));
    TestStructC t1928 = {implicit_cast<TestStructA>(t1926), implicit_cast<TestStructA>(t1927)};
    *_return_x_indexes_403 = implicit_cast<TNode<FixedArray>>(implicit_cast<TestStructA>(implicit_cast<TestStructC>(t1928).x).indexes);
    *_return_x_i_404 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(implicit_cast<TestStructC>(t1928).x).i);
    *_return_x_k_405 = implicit_cast<TNode<Number>>(implicit_cast<TestStructA>(implicit_cast<TestStructC>(t1928).x).k);
    *_return_y_indexes_407 = implicit_cast<TNode<FixedArray>>(implicit_cast<TestStructA>(implicit_cast<TestStructC>(t1928).y).indexes);
    *_return_y_i_408 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(implicit_cast<TestStructC>(t1928).y).i);
    *_return_y_k_409 = implicit_cast<TNode<Number>>(implicit_cast<TestStructA>(implicit_cast<TestStructC>(t1928).y).k);
    Goto(label_macro_end_922);
  }
  BIND(label_macro_end_922);
  return TestStructC{TestStructA{implicit_cast<TNode<FixedArray>>((*_return_x_indexes_403).value()), implicit_cast<TNode<Smi>>((*_return_x_i_404).value()), implicit_cast<TNode<Number>>((*_return_x_k_405).value())}, TestStructA{implicit_cast<TNode<FixedArray>>((*_return_y_indexes_407).value()), implicit_cast<TNode<Smi>>((*_return_y_i_408).value()), implicit_cast<TNode<Number>>((*_return_y_k_409).value())}};
}

void TestBuiltinsFromDSLAssembler::TestForLoop() {
  Label label_macro_end_923_impl(this, {});
  Label* label_macro_end_923 = &label_macro_end_923_impl;
  USE(label_macro_end_923);
  // ../test/torque/test-torque.tq:306:23
  {
    // ../test/torque/test-torque.tq:307:5
    int31_t t1929 = 0;
    TVARIABLE(Smi, sum_410_impl);
    auto sum_410 = &sum_410_impl;
    USE(sum_410);
    TNode<Smi> t1930 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1929)));
    *sum_410 = implicit_cast<TNode<Smi>>(t1930);
    // ../test/torque/test-torque.tq:308:5
    int31_t t1931 = 0;
    TVARIABLE(Smi, i_411_impl);
    auto i_411 = &i_411_impl;
    USE(i_411);
    TNode<Smi> t1932 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1931)));
    *i_411 = implicit_cast<TNode<Smi>>(t1932);
    Label label__True_548_impl(this);
    Label* label__True_548 = &label__True_548_impl;
    USE(label__True_548);
    Label label__False_549_impl(this);
    Label* label__False_549 = &label__False_549_impl;
    USE(label__False_549);
    Label label_header_664_924_impl(this, {i_411, sum_410});
    Label* label_header_664_924 = &label_header_664_924_impl;
    USE(label_header_664_924);
    Goto(label_header_664_924);
    BIND(label_header_664_924);
    Label label_action_665_925_impl(this);
    Label* label_action_665_925 = &label_action_665_925_impl;
    USE(label_action_665_925);
    int31_t t1933 = 5;
    TNode<Smi> t1934 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1933)));
    TNode<BoolT> t1935 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*i_411).value()), implicit_cast<TNode<Smi>>(t1934)));
    USE(implicit_cast<TNode<BoolT>>(t1935));
    Branch(implicit_cast<TNode<BoolT>>(t1935), label__True_548, label__False_549);
    if (label__True_548->is_used())
    {
      BIND(label__True_548);
      // ../test/torque/test-torque.tq:308:38
      TNode<Smi> t1936 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_410).value()), implicit_cast<TNode<Smi>>((*i_411).value())));
      *sum_410 = implicit_cast<TNode<Smi>>(t1936);
      Goto(label_action_665_925);
    }
    {
      BIND(label_action_665_925);
      TNode<Smi> t1937 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t1938 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*i_411).value()), implicit_cast<TNode<Smi>>(t1937)));
      *i_411 = implicit_cast<TNode<Smi>>(t1938);
      Goto(label_header_664_924);
    }
    BIND(label__False_549);
    // ../test/torque/test-torque.tq:309:5
    Label label__True_550_impl(this);
    Label* label__True_550 = &label__True_550_impl;
    USE(label__True_550);
    Label label__False_551_impl(this);
    Label* label__False_551 = &label__False_551_impl;
    USE(label__False_551);
    int31_t t1939 = 10;
    TNode<Smi> t1940 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1939)));
    TNode<BoolT> t1941 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_410).value()), implicit_cast<TNode<Smi>>(t1940)));
    USE(implicit_cast<TNode<BoolT>>(t1941));
    Branch(implicit_cast<TNode<BoolT>>(t1941), label__True_550, label__False_551);
    BIND(label__False_551);
    Print("assert 'sum == 10' failed at ../test/torque/test-torque.tq:309:5");
    Unreachable();
    BIND(label__True_550);
    // ../test/torque/test-torque.tq:311:5
    int31_t t1942 = 0;
    TNode<Smi> t1943 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1942)));
    *sum_410 = implicit_cast<TNode<Smi>>(t1943);
    // ../test/torque/test-torque.tq:312:5
    int31_t t1944 = 0;
    TVARIABLE(Smi, j_412_impl);
    auto j_412 = &j_412_impl;
    USE(j_412);
    TNode<Smi> t1945 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1944)));
    *j_412 = implicit_cast<TNode<Smi>>(t1945);
    // ../test/torque/test-torque.tq:313:5
    Label label__True_552_impl(this);
    Label* label__True_552 = &label__True_552_impl;
    USE(label__True_552);
    Label label__False_553_impl(this);
    Label* label__False_553 = &label__False_553_impl;
    USE(label__False_553);
    Label label_header_666_926_impl(this, {j_412, sum_410});
    Label* label_header_666_926 = &label_header_666_926_impl;
    USE(label_header_666_926);
    Goto(label_header_666_926);
    BIND(label_header_666_926);
    Label label_action_667_927_impl(this);
    Label* label_action_667_927 = &label_action_667_927_impl;
    USE(label_action_667_927);
    int31_t t1946 = 5;
    TNode<Smi> t1947 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1946)));
    TNode<BoolT> t1948 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*j_412).value()), implicit_cast<TNode<Smi>>(t1947)));
    USE(implicit_cast<TNode<BoolT>>(t1948));
    Branch(implicit_cast<TNode<BoolT>>(t1948), label__True_552, label__False_553);
    if (label__True_552->is_used())
    {
      BIND(label__True_552);
      // ../test/torque/test-torque.tq:313:24
      TNode<Smi> t1949 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_410).value()), implicit_cast<TNode<Smi>>((*j_412).value())));
      *sum_410 = implicit_cast<TNode<Smi>>(t1949);
      Goto(label_action_667_927);
    }
    {
      BIND(label_action_667_927);
      TNode<Smi> t1950 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t1951 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_412).value()), implicit_cast<TNode<Smi>>(t1950)));
      *j_412 = implicit_cast<TNode<Smi>>(t1951);
      Goto(label_header_666_926);
    }
    BIND(label__False_553);
    // ../test/torque/test-torque.tq:314:5
    Label label__True_554_impl(this);
    Label* label__True_554 = &label__True_554_impl;
    USE(label__True_554);
    Label label__False_555_impl(this);
    Label* label__False_555 = &label__False_555_impl;
    USE(label__False_555);
    int31_t t1952 = 10;
    TNode<Smi> t1953 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1952)));
    TNode<BoolT> t1954 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_410).value()), implicit_cast<TNode<Smi>>(t1953)));
    USE(implicit_cast<TNode<BoolT>>(t1954));
    Branch(implicit_cast<TNode<BoolT>>(t1954), label__True_554, label__False_555);
    BIND(label__False_555);
    Print("assert 'sum == 10' failed at ../test/torque/test-torque.tq:314:5");
    Unreachable();
    BIND(label__True_554);
    // ../test/torque/test-torque.tq:316:5
    int31_t t1955 = 0;
    TNode<Smi> t1956 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1955)));
    *sum_410 = implicit_cast<TNode<Smi>>(t1956);
    // ../test/torque/test-torque.tq:317:5
    int31_t t1957 = 0;
    TNode<Smi> t1958 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1957)));
    *j_412 = implicit_cast<TNode<Smi>>(t1958);
    // ../test/torque/test-torque.tq:318:5
    Label label__True_556_impl(this);
    Label* label__True_556 = &label__True_556_impl;
    USE(label__True_556);
    Label label__False_557_impl(this);
    Label* label__False_557 = &label__False_557_impl;
    USE(label__False_557);
    Label label_header_668_928_impl(this, {j_412, sum_410});
    Label* label_header_668_928 = &label_header_668_928_impl;
    USE(label_header_668_928);
    Goto(label_header_668_928);
    BIND(label_header_668_928);
    int31_t t1959 = 5;
    TNode<Smi> t1960 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1959)));
    TNode<BoolT> t1961 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*j_412).value()), implicit_cast<TNode<Smi>>(t1960)));
    USE(implicit_cast<TNode<BoolT>>(t1961));
    Branch(implicit_cast<TNode<BoolT>>(t1961), label__True_556, label__False_557);
    if (label__True_556->is_used())
    {
      BIND(label__True_556);
      // ../test/torque/test-torque.tq:318:20
      TNode<Smi> t1962 = implicit_cast<TNode<Smi>>((*j_412).value());
      USE(t1962);
      TNode<Smi> t1963 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t1964 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_412).value()), implicit_cast<TNode<Smi>>(t1963)));
      *j_412 = implicit_cast<TNode<Smi>>(t1964);
      TNode<Smi> t1965 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_410).value()), implicit_cast<TNode<Smi>>(t1962)));
      *sum_410 = implicit_cast<TNode<Smi>>(t1965);
      Goto(label_header_668_928);
    }
    BIND(label__False_557);
    // ../test/torque/test-torque.tq:319:5
    Label label__True_558_impl(this);
    Label* label__True_558 = &label__True_558_impl;
    USE(label__True_558);
    Label label__False_559_impl(this);
    Label* label__False_559 = &label__False_559_impl;
    USE(label__False_559);
    int31_t t1966 = 10;
    TNode<Smi> t1967 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1966)));
    TNode<BoolT> t1968 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_410).value()), implicit_cast<TNode<Smi>>(t1967)));
    USE(implicit_cast<TNode<BoolT>>(t1968));
    Branch(implicit_cast<TNode<BoolT>>(t1968), label__True_558, label__False_559);
    BIND(label__False_559);
    Print("assert 'sum == 10' failed at ../test/torque/test-torque.tq:319:5");
    Unreachable();
    BIND(label__True_558);
    // ../test/torque/test-torque.tq:322:5
    int31_t t1969 = 0;
    TNode<Smi> t1970 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1969)));
    *sum_410 = implicit_cast<TNode<Smi>>(t1970);
    // ../test/torque/test-torque.tq:323:5
    int31_t t1971 = 0;
    TVARIABLE(Smi, i_413_impl);
    auto i_413 = &i_413_impl;
    USE(i_413);
    TNode<Smi> t1972 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1971)));
    *i_413 = implicit_cast<TNode<Smi>>(t1972);
    Label label__True_560_impl(this);
    Label* label__True_560 = &label__True_560_impl;
    USE(label__True_560);
    Label label__False_561_impl(this);
    Label* label__False_561 = &label__False_561_impl;
    USE(label__False_561);
    Label label_header_669_929_impl(this, {i_413, sum_410});
    Label* label_header_669_929 = &label_header_669_929_impl;
    USE(label_header_669_929);
    Goto(label_header_669_929);
    BIND(label_header_669_929);
    Label label_action_670_930_impl(this);
    Label* label_action_670_930 = &label_action_670_930_impl;
    USE(label_action_670_930);
    Goto(label__True_560);
    if (label__True_560->is_used())
    {
      BIND(label__True_560);
      // ../test/torque/test-torque.tq:323:32
      {
        // ../test/torque/test-torque.tq:324:7
        {
          Label label__True_562_impl(this);
          Label* label__True_562 = &label__True_562_impl;
          USE(label__True_562);
          Label label__False_563_impl(this, {});
          Label* label__False_563 = &label__False_563_impl;
          USE(label__False_563);
          int31_t t1973 = 5;
          TNode<Smi> t1974 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1973)));
          TNode<BoolT> t1975 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*i_413).value()), implicit_cast<TNode<Smi>>(t1974)));
          USE(implicit_cast<TNode<BoolT>>(t1975));
          Branch(implicit_cast<TNode<BoolT>>(t1975), label__True_562, label__False_563);
          if (label__True_562->is_used())
          {
            BIND(label__True_562);
            // ../test/torque/test-torque.tq:324:19
            Goto(label__False_561);
          }
          BIND(label__False_563);
        }
        // ../test/torque/test-torque.tq:325:7
        TNode<Smi> t1976 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_410).value()), implicit_cast<TNode<Smi>>((*i_413).value())));
        *sum_410 = implicit_cast<TNode<Smi>>(t1976);
      }
      Goto(label_action_670_930);
    }
    {
      BIND(label_action_670_930);
      TNode<Smi> t1977 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t1978 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*i_413).value()), implicit_cast<TNode<Smi>>(t1977)));
      *i_413 = implicit_cast<TNode<Smi>>(t1978);
      Goto(label_header_669_929);
    }
    BIND(label__False_561);
    // ../test/torque/test-torque.tq:327:5
    Label label__True_564_impl(this);
    Label* label__True_564 = &label__True_564_impl;
    USE(label__True_564);
    Label label__False_565_impl(this);
    Label* label__False_565 = &label__False_565_impl;
    USE(label__False_565);
    int31_t t1979 = 10;
    TNode<Smi> t1980 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1979)));
    TNode<BoolT> t1981 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_410).value()), implicit_cast<TNode<Smi>>(t1980)));
    USE(implicit_cast<TNode<BoolT>>(t1981));
    Branch(implicit_cast<TNode<BoolT>>(t1981), label__True_564, label__False_565);
    BIND(label__False_565);
    Print("assert 'sum == 10' failed at ../test/torque/test-torque.tq:327:5");
    Unreachable();
    BIND(label__True_564);
    // ../test/torque/test-torque.tq:329:5
    int31_t t1982 = 0;
    TNode<Smi> t1983 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1982)));
    *sum_410 = implicit_cast<TNode<Smi>>(t1983);
    // ../test/torque/test-torque.tq:330:5
    int31_t t1984 = 0;
    TNode<Smi> t1985 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1984)));
    *j_412 = implicit_cast<TNode<Smi>>(t1985);
    // ../test/torque/test-torque.tq:331:5
    Label label__True_566_impl(this);
    Label* label__True_566 = &label__True_566_impl;
    USE(label__True_566);
    Label label__False_567_impl(this);
    Label* label__False_567 = &label__False_567_impl;
    USE(label__False_567);
    Label label_header_671_931_impl(this, {j_412, sum_410});
    Label* label_header_671_931 = &label_header_671_931_impl;
    USE(label_header_671_931);
    Goto(label_header_671_931);
    BIND(label_header_671_931);
    Goto(label__True_566);
    if (label__True_566->is_used())
    {
      BIND(label__True_566);
      // ../test/torque/test-torque.tq:331:14
      {
        // ../test/torque/test-torque.tq:332:7
        {
          Label label__True_568_impl(this);
          Label* label__True_568 = &label__True_568_impl;
          USE(label__True_568);
          Label label__False_569_impl(this, {});
          Label* label__False_569 = &label__False_569_impl;
          USE(label__False_569);
          int31_t t1986 = 5;
          TNode<Smi> t1987 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1986)));
          TNode<BoolT> t1988 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*j_412).value()), implicit_cast<TNode<Smi>>(t1987)));
          USE(implicit_cast<TNode<BoolT>>(t1988));
          Branch(implicit_cast<TNode<BoolT>>(t1988), label__True_568, label__False_569);
          if (label__True_568->is_used())
          {
            BIND(label__True_568);
            // ../test/torque/test-torque.tq:332:19
            Goto(label__False_567);
          }
          BIND(label__False_569);
        }
        // ../test/torque/test-torque.tq:333:7
        TNode<Smi> t1989 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_410).value()), implicit_cast<TNode<Smi>>((*j_412).value())));
        *sum_410 = implicit_cast<TNode<Smi>>(t1989);
        // ../test/torque/test-torque.tq:334:7
        TNode<Smi> t1990 = implicit_cast<TNode<Smi>>((*j_412).value());
        USE(t1990);
        TNode<Smi> t1991 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
        TNode<Smi> t1992 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_412).value()), implicit_cast<TNode<Smi>>(t1991)));
        *j_412 = implicit_cast<TNode<Smi>>(t1992);
      }
      Goto(label_header_671_931);
    }
    BIND(label__False_567);
    // ../test/torque/test-torque.tq:336:5
    Label label__True_570_impl(this);
    Label* label__True_570 = &label__True_570_impl;
    USE(label__True_570);
    Label label__False_571_impl(this);
    Label* label__False_571 = &label__False_571_impl;
    USE(label__False_571);
    int31_t t1993 = 10;
    TNode<Smi> t1994 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1993)));
    TNode<BoolT> t1995 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_410).value()), implicit_cast<TNode<Smi>>(t1994)));
    USE(implicit_cast<TNode<BoolT>>(t1995));
    Branch(implicit_cast<TNode<BoolT>>(t1995), label__True_570, label__False_571);
    BIND(label__False_571);
    Print("assert 'sum == 10' failed at ../test/torque/test-torque.tq:336:5");
    Unreachable();
    BIND(label__True_570);
    // ../test/torque/test-torque.tq:340:5
    int31_t t1996 = 0;
    TNode<Smi> t1997 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1996)));
    *sum_410 = implicit_cast<TNode<Smi>>(t1997);
    // ../test/torque/test-torque.tq:341:5
    int31_t t1998 = 0;
    TVARIABLE(Smi, i_414_impl);
    auto i_414 = &i_414_impl;
    USE(i_414);
    TNode<Smi> t1999 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1998)));
    *i_414 = implicit_cast<TNode<Smi>>(t1999);
    Label label__True_572_impl(this);
    Label* label__True_572 = &label__True_572_impl;
    USE(label__True_572);
    Label label__False_573_impl(this);
    Label* label__False_573 = &label__False_573_impl;
    USE(label__False_573);
    Label label_header_672_932_impl(this, {i_414, sum_410});
    Label* label_header_672_932 = &label_header_672_932_impl;
    USE(label_header_672_932);
    Goto(label_header_672_932);
    BIND(label_header_672_932);
    Label label_action_673_933_impl(this);
    Label* label_action_673_933 = &label_action_673_933_impl;
    USE(label_action_673_933);
    int31_t t2000 = 5;
    TNode<Smi> t2001 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2000)));
    TNode<BoolT> t2002 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*i_414).value()), implicit_cast<TNode<Smi>>(t2001)));
    USE(implicit_cast<TNode<BoolT>>(t2002));
    Branch(implicit_cast<TNode<BoolT>>(t2002), label__True_572, label__False_573);
    if (label__True_572->is_used())
    {
      BIND(label__True_572);
      // ../test/torque/test-torque.tq:341:38
      {
        // ../test/torque/test-torque.tq:342:7
        {
          Label label__True_574_impl(this);
          Label* label__True_574 = &label__True_574_impl;
          USE(label__True_574);
          Label label__False_575_impl(this, {});
          Label* label__False_575 = &label__False_575_impl;
          USE(label__False_575);
          int31_t t2003 = 3;
          TNode<Smi> t2004 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2003)));
          TNode<BoolT> t2005 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*i_414).value()), implicit_cast<TNode<Smi>>(t2004)));
          USE(implicit_cast<TNode<BoolT>>(t2005));
          Branch(implicit_cast<TNode<BoolT>>(t2005), label__True_574, label__False_575);
          if (label__True_574->is_used())
          {
            BIND(label__True_574);
            // ../test/torque/test-torque.tq:342:19
            Goto(label_action_673_933);
          }
          BIND(label__False_575);
        }
        // ../test/torque/test-torque.tq:343:7
        TNode<Smi> t2006 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_410).value()), implicit_cast<TNode<Smi>>((*i_414).value())));
        *sum_410 = implicit_cast<TNode<Smi>>(t2006);
      }
      Goto(label_action_673_933);
    }
    {
      BIND(label_action_673_933);
      TNode<Smi> t2007 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2008 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*i_414).value()), implicit_cast<TNode<Smi>>(t2007)));
      *i_414 = implicit_cast<TNode<Smi>>(t2008);
      Goto(label_header_672_932);
    }
    BIND(label__False_573);
    // ../test/torque/test-torque.tq:345:5
    Label label__True_576_impl(this);
    Label* label__True_576 = &label__True_576_impl;
    USE(label__True_576);
    Label label__False_577_impl(this);
    Label* label__False_577 = &label__False_577_impl;
    USE(label__False_577);
    int31_t t2009 = 7;
    TNode<Smi> t2010 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2009)));
    TNode<BoolT> t2011 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_410).value()), implicit_cast<TNode<Smi>>(t2010)));
    USE(implicit_cast<TNode<BoolT>>(t2011));
    Branch(implicit_cast<TNode<BoolT>>(t2011), label__True_576, label__False_577);
    BIND(label__False_577);
    Print("assert 'sum == 7' failed at ../test/torque/test-torque.tq:345:5");
    Unreachable();
    BIND(label__True_576);
    // ../test/torque/test-torque.tq:347:5
    int31_t t2012 = 0;
    TNode<Smi> t2013 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2012)));
    *sum_410 = implicit_cast<TNode<Smi>>(t2013);
    // ../test/torque/test-torque.tq:348:5
    int31_t t2014 = 0;
    TNode<Smi> t2015 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2014)));
    *j_412 = implicit_cast<TNode<Smi>>(t2015);
    // ../test/torque/test-torque.tq:349:5
    Label label__True_578_impl(this);
    Label* label__True_578 = &label__True_578_impl;
    USE(label__True_578);
    Label label__False_579_impl(this);
    Label* label__False_579 = &label__False_579_impl;
    USE(label__False_579);
    Label label_header_674_934_impl(this, {j_412, sum_410});
    Label* label_header_674_934 = &label_header_674_934_impl;
    USE(label_header_674_934);
    Goto(label_header_674_934);
    BIND(label_header_674_934);
    Label label_action_675_935_impl(this);
    Label* label_action_675_935 = &label_action_675_935_impl;
    USE(label_action_675_935);
    int31_t t2016 = 5;
    TNode<Smi> t2017 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2016)));
    TNode<BoolT> t2018 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*j_412).value()), implicit_cast<TNode<Smi>>(t2017)));
    USE(implicit_cast<TNode<BoolT>>(t2018));
    Branch(implicit_cast<TNode<BoolT>>(t2018), label__True_578, label__False_579);
    if (label__True_578->is_used())
    {
      BIND(label__True_578);
      // ../test/torque/test-torque.tq:349:24
      {
        // ../test/torque/test-torque.tq:350:7
        {
          Label label__True_580_impl(this);
          Label* label__True_580 = &label__True_580_impl;
          USE(label__True_580);
          Label label__False_581_impl(this, {});
          Label* label__False_581 = &label__False_581_impl;
          USE(label__False_581);
          int31_t t2019 = 3;
          TNode<Smi> t2020 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2019)));
          TNode<BoolT> t2021 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*j_412).value()), implicit_cast<TNode<Smi>>(t2020)));
          USE(implicit_cast<TNode<BoolT>>(t2021));
          Branch(implicit_cast<TNode<BoolT>>(t2021), label__True_580, label__False_581);
          if (label__True_580->is_used())
          {
            BIND(label__True_580);
            // ../test/torque/test-torque.tq:350:19
            Goto(label_action_675_935);
          }
          BIND(label__False_581);
        }
        // ../test/torque/test-torque.tq:351:7
        TNode<Smi> t2022 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_410).value()), implicit_cast<TNode<Smi>>((*j_412).value())));
        *sum_410 = implicit_cast<TNode<Smi>>(t2022);
      }
      Goto(label_action_675_935);
    }
    {
      BIND(label_action_675_935);
      TNode<Smi> t2023 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2024 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_412).value()), implicit_cast<TNode<Smi>>(t2023)));
      *j_412 = implicit_cast<TNode<Smi>>(t2024);
      Goto(label_header_674_934);
    }
    BIND(label__False_579);
    // ../test/torque/test-torque.tq:353:5
    Label label__True_582_impl(this);
    Label* label__True_582 = &label__True_582_impl;
    USE(label__True_582);
    Label label__False_583_impl(this);
    Label* label__False_583 = &label__False_583_impl;
    USE(label__False_583);
    int31_t t2025 = 7;
    TNode<Smi> t2026 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2025)));
    TNode<BoolT> t2027 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_410).value()), implicit_cast<TNode<Smi>>(t2026)));
    USE(implicit_cast<TNode<BoolT>>(t2027));
    Branch(implicit_cast<TNode<BoolT>>(t2027), label__True_582, label__False_583);
    BIND(label__False_583);
    Print("assert 'sum == 7' failed at ../test/torque/test-torque.tq:353:5");
    Unreachable();
    BIND(label__True_582);
    // ../test/torque/test-torque.tq:355:5
    int31_t t2028 = 0;
    TNode<Smi> t2029 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2028)));
    *sum_410 = implicit_cast<TNode<Smi>>(t2029);
    // ../test/torque/test-torque.tq:356:5
    int31_t t2030 = 0;
    TNode<Smi> t2031 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2030)));
    *j_412 = implicit_cast<TNode<Smi>>(t2031);
    // ../test/torque/test-torque.tq:357:5
    Label label__True_584_impl(this);
    Label* label__True_584 = &label__True_584_impl;
    USE(label__True_584);
    Label label__False_585_impl(this);
    Label* label__False_585 = &label__False_585_impl;
    USE(label__False_585);
    Label label_header_676_936_impl(this, {j_412, sum_410});
    Label* label_header_676_936 = &label_header_676_936_impl;
    USE(label_header_676_936);
    Goto(label_header_676_936);
    BIND(label_header_676_936);
    int31_t t2032 = 5;
    TNode<Smi> t2033 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2032)));
    TNode<BoolT> t2034 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*j_412).value()), implicit_cast<TNode<Smi>>(t2033)));
    USE(implicit_cast<TNode<BoolT>>(t2034));
    Branch(implicit_cast<TNode<BoolT>>(t2034), label__True_584, label__False_585);
    if (label__True_584->is_used())
    {
      BIND(label__True_584);
      // ../test/torque/test-torque.tq:357:20
      {
        // ../test/torque/test-torque.tq:358:7
        {
          Label label__True_586_impl(this);
          Label* label__True_586 = &label__True_586_impl;
          USE(label__True_586);
          Label label__False_587_impl(this, {j_412});
          Label* label__False_587 = &label__False_587_impl;
          USE(label__False_587);
          int31_t t2035 = 3;
          TNode<Smi> t2036 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2035)));
          TNode<BoolT> t2037 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*j_412).value()), implicit_cast<TNode<Smi>>(t2036)));
          USE(implicit_cast<TNode<BoolT>>(t2037));
          Branch(implicit_cast<TNode<BoolT>>(t2037), label__True_586, label__False_587);
          if (label__True_586->is_used())
          {
            BIND(label__True_586);
            // ../test/torque/test-torque.tq:358:19
            {
              // ../test/torque/test-torque.tq:359:9
              TNode<Smi> t2038 = implicit_cast<TNode<Smi>>((*j_412).value());
              USE(t2038);
              TNode<Smi> t2039 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
              TNode<Smi> t2040 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_412).value()), implicit_cast<TNode<Smi>>(t2039)));
              *j_412 = implicit_cast<TNode<Smi>>(t2040);
              // ../test/torque/test-torque.tq:360:9
              Goto(label_header_676_936);
            }
          }
          BIND(label__False_587);
        }
        // ../test/torque/test-torque.tq:362:7
        TNode<Smi> t2041 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_410).value()), implicit_cast<TNode<Smi>>((*j_412).value())));
        *sum_410 = implicit_cast<TNode<Smi>>(t2041);
        // ../test/torque/test-torque.tq:363:7
        TNode<Smi> t2042 = implicit_cast<TNode<Smi>>((*j_412).value());
        USE(t2042);
        TNode<Smi> t2043 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
        TNode<Smi> t2044 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_412).value()), implicit_cast<TNode<Smi>>(t2043)));
        *j_412 = implicit_cast<TNode<Smi>>(t2044);
      }
      Goto(label_header_676_936);
    }
    BIND(label__False_585);
    // ../test/torque/test-torque.tq:365:5
    Label label__True_588_impl(this);
    Label* label__True_588 = &label__True_588_impl;
    USE(label__True_588);
    Label label__False_589_impl(this);
    Label* label__False_589 = &label__False_589_impl;
    USE(label__False_589);
    int31_t t2045 = 7;
    TNode<Smi> t2046 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2045)));
    TNode<BoolT> t2047 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_410).value()), implicit_cast<TNode<Smi>>(t2046)));
    USE(implicit_cast<TNode<BoolT>>(t2047));
    Branch(implicit_cast<TNode<BoolT>>(t2047), label__True_588, label__False_589);
    BIND(label__False_589);
    Print("assert 'sum == 7' failed at ../test/torque/test-torque.tq:365:5");
    Unreachable();
    BIND(label__True_588);
    // ../test/torque/test-torque.tq:367:5
    int31_t t2048 = 0;
    TNode<Smi> t2049 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2048)));
    *sum_410 = implicit_cast<TNode<Smi>>(t2049);
    // ../test/torque/test-torque.tq:368:5
    int31_t t2050 = 0;
    TVARIABLE(Smi, i_415_impl);
    auto i_415 = &i_415_impl;
    USE(i_415);
    TNode<Smi> t2051 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2050)));
    *i_415 = implicit_cast<TNode<Smi>>(t2051);
    Label label__True_590_impl(this);
    Label* label__True_590 = &label__True_590_impl;
    USE(label__True_590);
    Label label__False_591_impl(this);
    Label* label__False_591 = &label__False_591_impl;
    USE(label__False_591);
    Label label_header_677_937_impl(this, {i_415, sum_410});
    Label* label_header_677_937 = &label_header_677_937_impl;
    USE(label_header_677_937);
    Goto(label_header_677_937);
    BIND(label_header_677_937);
    Label label_action_678_938_impl(this);
    Label* label_action_678_938 = &label_action_678_938_impl;
    USE(label_action_678_938);
    Goto(label__True_590);
    if (label__True_590->is_used())
    {
      BIND(label__True_590);
      // ../test/torque/test-torque.tq:368:32
      {
        // ../test/torque/test-torque.tq:369:7
        {
          Label label__True_592_impl(this);
          Label* label__True_592 = &label__True_592_impl;
          USE(label__True_592);
          Label label__False_593_impl(this, {});
          Label* label__False_593 = &label__False_593_impl;
          USE(label__False_593);
          int31_t t2052 = 3;
          TNode<Smi> t2053 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2052)));
          TNode<BoolT> t2054 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*i_415).value()), implicit_cast<TNode<Smi>>(t2053)));
          USE(implicit_cast<TNode<BoolT>>(t2054));
          Branch(implicit_cast<TNode<BoolT>>(t2054), label__True_592, label__False_593);
          if (label__True_592->is_used())
          {
            BIND(label__True_592);
            // ../test/torque/test-torque.tq:369:19
            Goto(label_action_678_938);
          }
          BIND(label__False_593);
        }
        // ../test/torque/test-torque.tq:370:7
        {
          Label label__True_594_impl(this);
          Label* label__True_594 = &label__True_594_impl;
          USE(label__True_594);
          Label label__False_595_impl(this, {});
          Label* label__False_595 = &label__False_595_impl;
          USE(label__False_595);
          int31_t t2055 = 5;
          TNode<Smi> t2056 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2055)));
          TNode<BoolT> t2057 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*i_415).value()), implicit_cast<TNode<Smi>>(t2056)));
          USE(implicit_cast<TNode<BoolT>>(t2057));
          Branch(implicit_cast<TNode<BoolT>>(t2057), label__True_594, label__False_595);
          if (label__True_594->is_used())
          {
            BIND(label__True_594);
            // ../test/torque/test-torque.tq:370:19
            Goto(label__False_591);
          }
          BIND(label__False_595);
        }
        // ../test/torque/test-torque.tq:371:7
        TNode<Smi> t2058 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_410).value()), implicit_cast<TNode<Smi>>((*i_415).value())));
        *sum_410 = implicit_cast<TNode<Smi>>(t2058);
      }
      Goto(label_action_678_938);
    }
    {
      BIND(label_action_678_938);
      TNode<Smi> t2059 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2060 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*i_415).value()), implicit_cast<TNode<Smi>>(t2059)));
      *i_415 = implicit_cast<TNode<Smi>>(t2060);
      Goto(label_header_677_937);
    }
    BIND(label__False_591);
    // ../test/torque/test-torque.tq:373:5
    Label label__True_596_impl(this);
    Label* label__True_596 = &label__True_596_impl;
    USE(label__True_596);
    Label label__False_597_impl(this);
    Label* label__False_597 = &label__False_597_impl;
    USE(label__False_597);
    int31_t t2061 = 7;
    TNode<Smi> t2062 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2061)));
    TNode<BoolT> t2063 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_410).value()), implicit_cast<TNode<Smi>>(t2062)));
    USE(implicit_cast<TNode<BoolT>>(t2063));
    Branch(implicit_cast<TNode<BoolT>>(t2063), label__True_596, label__False_597);
    BIND(label__False_597);
    Print("assert 'sum == 7' failed at ../test/torque/test-torque.tq:373:5");
    Unreachable();
    BIND(label__True_596);
    // ../test/torque/test-torque.tq:375:5
    int31_t t2064 = 0;
    TNode<Smi> t2065 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2064)));
    *sum_410 = implicit_cast<TNode<Smi>>(t2065);
    // ../test/torque/test-torque.tq:376:5
    int31_t t2066 = 0;
    TNode<Smi> t2067 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2066)));
    *j_412 = implicit_cast<TNode<Smi>>(t2067);
    // ../test/torque/test-torque.tq:377:5
    Label label__True_598_impl(this);
    Label* label__True_598 = &label__True_598_impl;
    USE(label__True_598);
    Label label__False_599_impl(this);
    Label* label__False_599 = &label__False_599_impl;
    USE(label__False_599);
    Label label_header_679_939_impl(this, {j_412, sum_410});
    Label* label_header_679_939 = &label_header_679_939_impl;
    USE(label_header_679_939);
    Goto(label_header_679_939);
    BIND(label_header_679_939);
    Goto(label__True_598);
    if (label__True_598->is_used())
    {
      BIND(label__True_598);
      // ../test/torque/test-torque.tq:377:14
      {
        // ../test/torque/test-torque.tq:378:7
        {
          Label label__True_600_impl(this);
          Label* label__True_600 = &label__True_600_impl;
          USE(label__True_600);
          Label label__False_601_impl(this, {j_412});
          Label* label__False_601 = &label__False_601_impl;
          USE(label__False_601);
          int31_t t2068 = 3;
          TNode<Smi> t2069 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2068)));
          TNode<BoolT> t2070 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*j_412).value()), implicit_cast<TNode<Smi>>(t2069)));
          USE(implicit_cast<TNode<BoolT>>(t2070));
          Branch(implicit_cast<TNode<BoolT>>(t2070), label__True_600, label__False_601);
          if (label__True_600->is_used())
          {
            BIND(label__True_600);
            // ../test/torque/test-torque.tq:378:19
            {
              // ../test/torque/test-torque.tq:379:9
              TNode<Smi> t2071 = implicit_cast<TNode<Smi>>((*j_412).value());
              USE(t2071);
              TNode<Smi> t2072 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
              TNode<Smi> t2073 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_412).value()), implicit_cast<TNode<Smi>>(t2072)));
              *j_412 = implicit_cast<TNode<Smi>>(t2073);
              // ../test/torque/test-torque.tq:380:9
              Goto(label_header_679_939);
            }
          }
          BIND(label__False_601);
        }
        // ../test/torque/test-torque.tq:383:7
        {
          Label label__True_602_impl(this);
          Label* label__True_602 = &label__True_602_impl;
          USE(label__True_602);
          Label label__False_603_impl(this, {});
          Label* label__False_603 = &label__False_603_impl;
          USE(label__False_603);
          int31_t t2074 = 5;
          TNode<Smi> t2075 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2074)));
          TNode<BoolT> t2076 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*j_412).value()), implicit_cast<TNode<Smi>>(t2075)));
          USE(implicit_cast<TNode<BoolT>>(t2076));
          Branch(implicit_cast<TNode<BoolT>>(t2076), label__True_602, label__False_603);
          if (label__True_602->is_used())
          {
            BIND(label__True_602);
            // ../test/torque/test-torque.tq:383:19
            Goto(label__False_599);
          }
          BIND(label__False_603);
        }
        // ../test/torque/test-torque.tq:384:7
        TNode<Smi> t2077 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_410).value()), implicit_cast<TNode<Smi>>((*j_412).value())));
        *sum_410 = implicit_cast<TNode<Smi>>(t2077);
        // ../test/torque/test-torque.tq:385:7
        TNode<Smi> t2078 = implicit_cast<TNode<Smi>>((*j_412).value());
        USE(t2078);
        TNode<Smi> t2079 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
        TNode<Smi> t2080 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_412).value()), implicit_cast<TNode<Smi>>(t2079)));
        *j_412 = implicit_cast<TNode<Smi>>(t2080);
      }
      Goto(label_header_679_939);
    }
    BIND(label__False_599);
    // ../test/torque/test-torque.tq:387:5
    Label label__True_604_impl(this);
    Label* label__True_604 = &label__True_604_impl;
    USE(label__True_604);
    Label label__False_605_impl(this);
    Label* label__False_605 = &label__False_605_impl;
    USE(label__False_605);
    int31_t t2081 = 7;
    TNode<Smi> t2082 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2081)));
    TNode<BoolT> t2083 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_410).value()), implicit_cast<TNode<Smi>>(t2082)));
    USE(implicit_cast<TNode<BoolT>>(t2083));
    Branch(implicit_cast<TNode<BoolT>>(t2083), label__True_604, label__False_605);
    BIND(label__False_605);
    Print("assert 'sum == 7' failed at ../test/torque/test-torque.tq:387:5");
    Unreachable();
    BIND(label__True_604);
  }
}

void TestBuiltinsFromDSLAssembler::TestGenericOverload() {
  Label label_macro_end_940_impl(this, {});
  Label* label_macro_end_940 = &label_macro_end_940_impl;
  USE(label_macro_end_940);
  // ../test/torque/test-torque.tq:397:31
  {
    // ../test/torque/test-torque.tq:398:5
    int31_t t2084 = 5;
    TNode<Smi> x_smi_680_impl;
    auto x_smi_680 = &x_smi_680_impl;
    USE(x_smi_680);
    TNode<Smi> t2085 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2084)));
    *x_smi_680 = implicit_cast<TNode<Smi>>(t2085);
    // ../test/torque/test-torque.tq:399:5
    TNode<Object> x_object_681_impl;
    auto x_object_681 = &x_object_681_impl;
    USE(x_object_681);
    *x_object_681 = implicit_cast<TNode<Object>>((*x_smi_680));
    // ../test/torque/test-torque.tq:400:5
    Label label__True_606_impl(this);
    Label* label__True_606 = &label__True_606_impl;
    USE(label__True_606);
    Label label__False_607_impl(this);
    Label* label__False_607 = &label__False_607_impl;
    USE(label__False_607);
    TNode<Smi> t2086 = UncheckedCast<Smi>(ExampleGenericOverload5ATSmi(implicit_cast<TNode<Smi>>((*x_smi_680))));
    USE(implicit_cast<TNode<Smi>>(t2086));
    int31_t t2087 = 6;
    TNode<Smi> t2088 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2087)));
    TNode<BoolT> t2089 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t2086), implicit_cast<TNode<Smi>>(t2088)));
    USE(implicit_cast<TNode<BoolT>>(t2089));
    Branch(implicit_cast<TNode<BoolT>>(t2089), label__True_606, label__False_607);
    BIND(label__False_607);
    Print("assert 'ExampleGenericOverload<Smi>(x_smi) == 6' failed at ../test/torque/test-torque.tq:400:5");
    Unreachable();
    BIND(label__True_606);
    // ../test/torque/test-torque.tq:401:5
    Label label__True_608_impl(this);
    Label* label__True_608 = &label__True_608_impl;
    USE(label__True_608);
    Label label__False_609_impl(this);
    Label* label__False_609 = &label__False_609_impl;
    USE(label__False_609);
    TNode<Object> t2090 = UncheckedCast<Object>(ExampleGenericOverload22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>((*x_object_681))));
    USE(implicit_cast<TNode<Object>>(t2090));
    TNode<Smi> t2091 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(t2090)));
    USE(implicit_cast<TNode<Smi>>(t2091));
    int31_t t2092 = 5;
    TNode<Smi> t2093 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2092)));
    TNode<BoolT> t2094 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t2091), implicit_cast<TNode<Smi>>(t2093)));
    USE(implicit_cast<TNode<BoolT>>(t2094));
    Branch(implicit_cast<TNode<BoolT>>(t2094), label__True_608, label__False_609);
    BIND(label__False_609);
    Print("assert 'unsafe_cast<Smi>(ExampleGenericOverload<Object>(x_object)) == 5' failed at ../test/torque/test-torque.tq:401:5");
    Unreachable();
    BIND(label__True_608);
  }
}

TF_BUILTIN(GenericBuiltinTest5ATSmi, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_c = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_c);
  TNode<Smi> p_param = UncheckedCast<Smi>(Parameter(Descriptor::kParam));
  USE(p_param);
  // ../test/torque/test-torque.tq:85:70
  {
    // ../test/torque/test-torque.tq:86:5
    Return(implicit_cast<TNode<Object>>(Null()));
  }
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTest5ATSmi(TNode<Smi> p_param) {
  TVARIABLE(Object, _return_430_impl);
  auto _return_430 = &_return_430_impl;
  USE(_return_430);
  Label label_macro_end_955_impl(this, {_return_430});
  Label* label_macro_end_955 = &label_macro_end_955_impl;
  USE(label_macro_end_955);
  // ../test/torque/test-torque.tq:131:54
  {
    // ../test/torque/test-torque.tq:132:5
    *_return_430 = implicit_cast<TNode<Object>>(Undefined());
    Goto(label_macro_end_955);
  }
  BIND(label_macro_end_955);
  return implicit_cast<TNode<Object>>((*_return_430).value());
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTestWithLabels5ATSmi(TNode<Smi> p_param, Label* label_X_632) {
  TVARIABLE(Object, _return_431_impl);
  auto _return_431 = &_return_431_impl;
  USE(_return_431);
  Label label_macro_end_956_impl(this, {_return_431});
  Label* label_macro_end_956 = &label_macro_end_956_impl;
  USE(label_macro_end_956);
  // ../test/torque/test-torque.tq:139:73
  {
    // ../test/torque/test-torque.tq:140:5
    *_return_431 = implicit_cast<TNode<Object>>(Undefined());
    Goto(label_macro_end_956);
  }
  BIND(label_macro_end_956);
  return implicit_cast<TNode<Object>>((*_return_431).value());
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::ExampleGenericOverload5ATSmi(TNode<Smi> p_o) {
  TVARIABLE(Smi, _return_433_impl);
  auto _return_433 = &_return_433_impl;
  USE(_return_433);
  Label label_macro_end_958_impl(this, {_return_433});
  Label* label_macro_end_958 = &label_macro_end_958_impl;
  USE(label_macro_end_958);
  // ../test/torque/test-torque.tq:393:54
  {
    // ../test/torque/test-torque.tq:394:5
    int31_t t2188 = 1;
    TNode<Smi> t2189 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2188)));
    TNode<Smi> t2190 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_o), implicit_cast<TNode<Smi>>(t2189)));
    USE(implicit_cast<TNode<Smi>>(t2190));
    *_return_433 = implicit_cast<TNode<Smi>>(t2190);
    Goto(label_macro_end_958);
  }
  BIND(label_macro_end_958);
  return implicit_cast<TNode<Smi>>((*_return_433).value());
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::ExampleGenericOverload22UT12ATHeapObject5ATSmi(TNode<Object> p_o) {
  TVARIABLE(Object, _return_434_impl);
  auto _return_434 = &_return_434_impl;
  USE(_return_434);
  Label label_macro_end_959_impl(this, {_return_434});
  Label* label_macro_end_959 = &label_macro_end_959_impl;
  USE(label_macro_end_959);
  // ../test/torque/test-torque.tq:390:57
  {
    // ../test/torque/test-torque.tq:391:5
    *_return_434 = implicit_cast<TNode<Object>>(p_o);
    Goto(label_macro_end_959);
  }
  BIND(label_macro_end_959);
  return implicit_cast<TNode<Object>>((*_return_434).value());
}

}  // namespace internal
}  // namespace v8

