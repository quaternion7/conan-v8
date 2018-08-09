#ifndef V8_TORQUE_TEST_FROM_DSL_BASE_H__
#define V8_TORQUE_TEST_FROM_DSL_BASE_H__

#include "src/builtins/builtins-test-gen.h"


 namespace v8 {
namespace internal {

class TestBuiltinsFromDSLAssembler: public TestBuiltinsAssembler {
 public:
  explicit TestBuiltinsFromDSLAssembler(compiler::CodeAssemblerState* state) : TestBuiltinsAssembler(state) {}

  using Node = compiler::Node;
  template <class T>
  using TNode = compiler::TNode<T>;
  template <class T>
  using SloppyTNode = compiler::SloppyTNode<T>;

  TNode<BoolT> ElementsKindTestHelper1(ElementsKind p_kind);
  TNode<BoolT> ElementsKindTestHelper2(ElementsKind p_kind);
  bool ElementsKindTestHelper3(ElementsKind p_kind);
  void LabelTestHelper1(Label* label_Label1_436);
  void LabelTestHelper2(Label* label_Label2_437, TVariable<Smi>* Label20_339);
  void LabelTestHelper3(Label* label_Label3_438, TVariable<String>* Label30_340, TVariable<Smi>* Label31_341);
  void TestConstexpr1();
  void TestConstexprIf();
  void TestConstexprReturn();
  TNode<Oddball> TestGotoLabel();
  TNode<Oddball> TestGotoLabelWithOneParameter();
  TNode<Oddball> TestGotoLabelWithTwoParameters();
  void TestBuiltinSpecialization(TNode<Context> p_c);
  void LabelTestHelper4(bool p_flag, Label* label_Label4_472, Label* label_Label5_473);
  TNode<BoolT> CallLabelTestHelper4(bool p_flag);
  TNode<Oddball> TestPartiallyUnusedLabel();
  TNode<Object> GenericMacroTest22UT12ATHeapObject5ATSmi(TNode<Object> p_param2);
  TNode<Object> GenericMacroTestWithLabels22UT12ATHeapObject5ATSmi(TNode<Object> p_param2, Label* label_Y_481);
  void TestMacroSpecialization();
  TNode<Oddball> TestFunctionPointers(TNode<Context> p_context);
  TNode<Oddball> TestVariableRedeclaration(TNode<Context> p_context);
  TNode<Smi> TestTernaryOperator(TNode<Smi> p_x);
  void TestFunctionPointerToGeneric(TNode<Context> p_c);
  TNode<Code> TestTypeAlias(TNode<Code> p_x);
  TNode<Oddball> TestUnsafeCast(TNode<Context> p_c, TNode<Number> p_n);
  void TestHexLiteral();
  void TestLargeIntegerLiterals(TNode<Context> p_c);
  void TestMultilineAssert();
  void TestNewlineInString();
  int31_t kConstexprConst();
  TNode<IntPtrT> kIntptrConst();
  TNode<Smi> kSmiConst();
  void TestModuleConstBindings();
  void TestLocalConstBindings();
  struct TestStructA {
    TNode<FixedArray> indexes;
    TNode<Smi> i;
    TNode<Number> k;
  } ;
  struct TestStructB {
    TestStructA x;
    TNode<Smi> y;
  } ;
  TNode<Smi> TestStruct1(TestStructA p_i);
  TestBuiltinsFromDSLAssembler::TestStructA TestStruct2();
  TestBuiltinsFromDSLAssembler::TestStructA TestStruct3();
  struct TestStructC {
    TestStructA x;
    TestStructA y;
  } ;
  TestBuiltinsFromDSLAssembler::TestStructC TestStruct4();
  void TestForLoop();
  void TestGenericOverload();
  TNode<Object> GenericMacroTest5ATSmi(TNode<Smi> p_param);
  TNode<Object> GenericMacroTestWithLabels5ATSmi(TNode<Smi> p_param, Label* label_X_632);
  TNode<Smi> ExampleGenericOverload5ATSmi(TNode<Smi> p_o);
  TNode<Object> ExampleGenericOverload22UT12ATHeapObject5ATSmi(TNode<Object> p_o);
};

}  // namespace internal
}  // namespace v8

#endif  // V8_TORQUE_TEST_FROM_DSL_BASE_H__
