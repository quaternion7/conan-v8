#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/bigint.h"
#include "builtins-data-view-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

compiler::TNode<String> DataViewBuiltinsFromDSLAssembler::MakeDataViewGetterNameString(ElementsKind p_kind) {
  TVARIABLE(String, _return_175_impl);
  auto _return_175 = &_return_175_impl;
  USE(_return_175);
  Label label_macro_end_791_impl(this, {_return_175});
  Label* label_macro_end_791 = &label_macro_end_791_impl;
  USE(label_macro_end_791);
  // ../src/builtins/data-view.tq:16:76
  {
    // ../src/builtins/data-view.tq:17:5
    {
      bool t537 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
      USE(implicit_cast<bool>(t537));
      if ((implicit_cast<bool>(t537))) {
        // ../src/builtins/data-view.tq:17:43
        {
          // ../src/builtins/data-view.tq:18:7
          const char* t538 = "DataView.prototype.getUint8";
          TNode<String> t539 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t538)));
          *_return_175 = implicit_cast<TNode<String>>(t539);
          Goto(label_macro_end_791);
        }
      } else {
        // ../src/builtins/data-view.tq:19:12
        {
          bool t540 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT8_ELEMENTS));
          USE(implicit_cast<bool>(t540));
          if ((implicit_cast<bool>(t540))) {
            // ../src/builtins/data-view.tq:19:49
            {
              // ../src/builtins/data-view.tq:20:7
              const char* t541 = "DataView.prototype.getInt8";
              TNode<String> t542 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t541)));
              *_return_175 = implicit_cast<TNode<String>>(t542);
              Goto(label_macro_end_791);
            }
          } else {
            // ../src/builtins/data-view.tq:21:12
            {
              bool t543 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
              USE(implicit_cast<bool>(t543));
              if ((implicit_cast<bool>(t543))) {
                // ../src/builtins/data-view.tq:21:51
                {
                  // ../src/builtins/data-view.tq:22:7
                  const char* t544 = "DataView.prototype.getUint16";
                  TNode<String> t545 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t544)));
                  *_return_175 = implicit_cast<TNode<String>>(t545);
                  Goto(label_macro_end_791);
                }
              } else {
                // ../src/builtins/data-view.tq:23:12
                {
                  bool t546 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT16_ELEMENTS));
                  USE(implicit_cast<bool>(t546));
                  if ((implicit_cast<bool>(t546))) {
                    // ../src/builtins/data-view.tq:23:50
                    {
                      // ../src/builtins/data-view.tq:24:7
                      const char* t547 = "DataView.prototype.getInt16";
                      TNode<String> t548 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t547)));
                      *_return_175 = implicit_cast<TNode<String>>(t548);
                      Goto(label_macro_end_791);
                    }
                  } else {
                    // ../src/builtins/data-view.tq:25:12
                    {
                      bool t549 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT32_ELEMENTS));
                      USE(implicit_cast<bool>(t549));
                      if ((implicit_cast<bool>(t549))) {
                        // ../src/builtins/data-view.tq:25:51
                        {
                          // ../src/builtins/data-view.tq:26:7
                          const char* t550 = "DataView.prototype.getUint32";
                          TNode<String> t551 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t550)));
                          *_return_175 = implicit_cast<TNode<String>>(t551);
                          Goto(label_macro_end_791);
                        }
                      } else {
                        // ../src/builtins/data-view.tq:27:12
                        {
                          bool t552 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT32_ELEMENTS));
                          USE(implicit_cast<bool>(t552));
                          if ((implicit_cast<bool>(t552))) {
                            // ../src/builtins/data-view.tq:27:50
                            {
                              // ../src/builtins/data-view.tq:28:7
                              const char* t553 = "DataView.prototype.getInt32";
                              TNode<String> t554 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t553)));
                              *_return_175 = implicit_cast<TNode<String>>(t554);
                              Goto(label_macro_end_791);
                            }
                          } else {
                            // ../src/builtins/data-view.tq:29:12
                            {
                              bool t555 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS));
                              USE(implicit_cast<bool>(t555));
                              if ((implicit_cast<bool>(t555))) {
                                // ../src/builtins/data-view.tq:29:52
                                {
                                  // ../src/builtins/data-view.tq:30:7
                                  const char* t556 = "DataView.prototype.getFloat32";
                                  TNode<String> t557 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t556)));
                                  *_return_175 = implicit_cast<TNode<String>>(t557);
                                  Goto(label_macro_end_791);
                                }
                              } else {
                                // ../src/builtins/data-view.tq:31:12
                                {
                                  bool t558 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT64_ELEMENTS));
                                  USE(implicit_cast<bool>(t558));
                                  if ((implicit_cast<bool>(t558))) {
                                    // ../src/builtins/data-view.tq:31:52
                                    {
                                      // ../src/builtins/data-view.tq:32:7
                                      const char* t559 = "DataView.prototype.getFloat64";
                                      TNode<String> t560 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t559)));
                                      *_return_175 = implicit_cast<TNode<String>>(t560);
                                      Goto(label_macro_end_791);
                                    }
                                  } else {
                                    // ../src/builtins/data-view.tq:33:12
                                    {
                                      bool t561 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS));
                                      USE(implicit_cast<bool>(t561));
                                      if ((implicit_cast<bool>(t561))) {
                                        // ../src/builtins/data-view.tq:33:53
                                        {
                                          // ../src/builtins/data-view.tq:34:7
                                          const char* t562 = "DataView.prototype.getBigInt64";
                                          TNode<String> t563 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t562)));
                                          *_return_175 = implicit_cast<TNode<String>>(t563);
                                          Goto(label_macro_end_791);
                                        }
                                      } else {
                                        // ../src/builtins/data-view.tq:35:12
                                        {
                                          bool t564 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS));
                                          USE(implicit_cast<bool>(t564));
                                          if ((implicit_cast<bool>(t564))) {
                                            // ../src/builtins/data-view.tq:35:54
                                            {
                                              // ../src/builtins/data-view.tq:36:7
                                              const char* t565 = "DataView.prototype.getBigUint64";
                                              TNode<String> t566 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t565)));
                                              *_return_175 = implicit_cast<TNode<String>>(t566);
                                              Goto(label_macro_end_791);
                                            }
                                          } else {
                                            // ../src/builtins/data-view.tq:37:12
                                            {
                                              // ../src/builtins/data-view.tq:38:7
                                              Unreachable();
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  BIND(label_macro_end_791);
  return implicit_cast<TNode<String>>((*_return_175).value());
}

compiler::TNode<String> DataViewBuiltinsFromDSLAssembler::MakeDataViewSetterNameString(ElementsKind p_kind) {
  TVARIABLE(String, _return_176_impl);
  auto _return_176 = &_return_176_impl;
  USE(_return_176);
  Label label_macro_end_792_impl(this, {_return_176});
  Label* label_macro_end_792 = &label_macro_end_792_impl;
  USE(label_macro_end_792);
  // ../src/builtins/data-view.tq:42:76
  {
    // ../src/builtins/data-view.tq:43:5
    {
      bool t567 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
      USE(implicit_cast<bool>(t567));
      if ((implicit_cast<bool>(t567))) {
        // ../src/builtins/data-view.tq:43:43
        {
          // ../src/builtins/data-view.tq:44:7
          const char* t568 = "DataView.prototype.setUint8";
          TNode<String> t569 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t568)));
          *_return_176 = implicit_cast<TNode<String>>(t569);
          Goto(label_macro_end_792);
        }
      } else {
        // ../src/builtins/data-view.tq:45:12
        {
          bool t570 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT8_ELEMENTS));
          USE(implicit_cast<bool>(t570));
          if ((implicit_cast<bool>(t570))) {
            // ../src/builtins/data-view.tq:45:49
            {
              // ../src/builtins/data-view.tq:46:7
              const char* t571 = "DataView.prototype.setInt8";
              TNode<String> t572 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t571)));
              *_return_176 = implicit_cast<TNode<String>>(t572);
              Goto(label_macro_end_792);
            }
          } else {
            // ../src/builtins/data-view.tq:47:12
            {
              bool t573 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
              USE(implicit_cast<bool>(t573));
              if ((implicit_cast<bool>(t573))) {
                // ../src/builtins/data-view.tq:47:51
                {
                  // ../src/builtins/data-view.tq:48:7
                  const char* t574 = "DataView.prototype.setUint16";
                  TNode<String> t575 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t574)));
                  *_return_176 = implicit_cast<TNode<String>>(t575);
                  Goto(label_macro_end_792);
                }
              } else {
                // ../src/builtins/data-view.tq:49:12
                {
                  bool t576 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT16_ELEMENTS));
                  USE(implicit_cast<bool>(t576));
                  if ((implicit_cast<bool>(t576))) {
                    // ../src/builtins/data-view.tq:49:50
                    {
                      // ../src/builtins/data-view.tq:50:7
                      const char* t577 = "DataView.prototype.setInt16";
                      TNode<String> t578 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t577)));
                      *_return_176 = implicit_cast<TNode<String>>(t578);
                      Goto(label_macro_end_792);
                    }
                  } else {
                    // ../src/builtins/data-view.tq:51:12
                    {
                      bool t579 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT32_ELEMENTS));
                      USE(implicit_cast<bool>(t579));
                      if ((implicit_cast<bool>(t579))) {
                        // ../src/builtins/data-view.tq:51:51
                        {
                          // ../src/builtins/data-view.tq:52:7
                          const char* t580 = "DataView.prototype.setUint32";
                          TNode<String> t581 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t580)));
                          *_return_176 = implicit_cast<TNode<String>>(t581);
                          Goto(label_macro_end_792);
                        }
                      } else {
                        // ../src/builtins/data-view.tq:53:12
                        {
                          bool t582 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT32_ELEMENTS));
                          USE(implicit_cast<bool>(t582));
                          if ((implicit_cast<bool>(t582))) {
                            // ../src/builtins/data-view.tq:53:50
                            {
                              // ../src/builtins/data-view.tq:54:7
                              const char* t583 = "DataView.prototype.setInt32";
                              TNode<String> t584 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t583)));
                              *_return_176 = implicit_cast<TNode<String>>(t584);
                              Goto(label_macro_end_792);
                            }
                          } else {
                            // ../src/builtins/data-view.tq:55:12
                            {
                              bool t585 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS));
                              USE(implicit_cast<bool>(t585));
                              if ((implicit_cast<bool>(t585))) {
                                // ../src/builtins/data-view.tq:55:52
                                {
                                  // ../src/builtins/data-view.tq:56:7
                                  const char* t586 = "DataView.prototype.setFloat32";
                                  TNode<String> t587 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t586)));
                                  *_return_176 = implicit_cast<TNode<String>>(t587);
                                  Goto(label_macro_end_792);
                                }
                              } else {
                                // ../src/builtins/data-view.tq:57:12
                                {
                                  bool t588 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT64_ELEMENTS));
                                  USE(implicit_cast<bool>(t588));
                                  if ((implicit_cast<bool>(t588))) {
                                    // ../src/builtins/data-view.tq:57:52
                                    {
                                      // ../src/builtins/data-view.tq:58:7
                                      const char* t589 = "DataView.prototype.setFloat64";
                                      TNode<String> t590 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t589)));
                                      *_return_176 = implicit_cast<TNode<String>>(t590);
                                      Goto(label_macro_end_792);
                                    }
                                  } else {
                                    // ../src/builtins/data-view.tq:59:12
                                    {
                                      bool t591 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS));
                                      USE(implicit_cast<bool>(t591));
                                      if ((implicit_cast<bool>(t591))) {
                                        // ../src/builtins/data-view.tq:59:53
                                        {
                                          // ../src/builtins/data-view.tq:60:7
                                          const char* t592 = "DataView.prototype.setBigInt64";
                                          TNode<String> t593 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t592)));
                                          *_return_176 = implicit_cast<TNode<String>>(t593);
                                          Goto(label_macro_end_792);
                                        }
                                      } else {
                                        // ../src/builtins/data-view.tq:61:12
                                        {
                                          bool t594 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS));
                                          USE(implicit_cast<bool>(t594));
                                          if ((implicit_cast<bool>(t594))) {
                                            // ../src/builtins/data-view.tq:61:54
                                            {
                                              // ../src/builtins/data-view.tq:62:7
                                              const char* t595 = "DataView.prototype.setBigUint64";
                                              TNode<String> t596 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t595)));
                                              *_return_176 = implicit_cast<TNode<String>>(t596);
                                              Goto(label_macro_end_792);
                                            }
                                          } else {
                                            // ../src/builtins/data-view.tq:63:12
                                            {
                                              // ../src/builtins/data-view.tq:64:7
                                              Unreachable();
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  BIND(label_macro_end_792);
  return implicit_cast<TNode<String>>((*_return_176).value());
}

compiler::TNode<BoolT> DataViewBuiltinsFromDSLAssembler::WasNeutered(TNode<JSArrayBufferView> p_view) {
  TVARIABLE(BoolT, _return_177_impl);
  auto _return_177 = &_return_177_impl;
  USE(_return_177);
  Label label_macro_end_793_impl(this, {_return_177});
  Label* label_macro_end_793 = &label_macro_end_793_impl;
  USE(label_macro_end_793);
  // ../src/builtins/data-view.tq:68:52
  {
    // ../src/builtins/data-view.tq:69:5
    TNode<JSArrayBuffer> t597 = UncheckedCast<JSArrayBuffer>(LoadArrayBufferViewBuffer(implicit_cast<TNode<JSArrayBufferView>>(p_view)));
    TNode<BoolT> t598 = UncheckedCast<BoolT>(IsDetachedBuffer(implicit_cast<TNode<JSArrayBuffer>>(t597)));
    USE(implicit_cast<TNode<BoolT>>(t598));
    *_return_177 = implicit_cast<TNode<BoolT>>(t598);
    Goto(label_macro_end_793);
  }
  BIND(label_macro_end_793);
  return implicit_cast<TNode<BoolT>>((*_return_177).value());
}

compiler::TNode<JSDataView> DataViewBuiltinsFromDSLAssembler::ValidateDataView(TNode<Context> p_context, TNode<Object> p_o, TNode<String> p_method) {
  TVARIABLE(JSDataView, _return_178_impl);
  auto _return_178 = &_return_178_impl;
  USE(_return_178);
  Label label_macro_end_794_impl(this, {_return_178});
  Label* label_macro_end_794 = &label_macro_end_794_impl;
  USE(label_macro_end_794);
  // ../src/builtins/data-view.tq:73:46
  {
    // ../src/builtins/data-view.tq:74:5
    {
      Label label_try_done_533_795_impl(this);
      Label* label_try_done_533_795 = &label_try_done_533_795_impl;
      USE(label_try_done_533_795);
      Label label_CastError_223_impl(this);
      Label* label_CastError_223 = &label_CastError_223_impl;
      USE(label_CastError_223);
      Label label_try_begin_534_796_impl(this);
      Label* label_try_begin_534_796 = &label_try_begin_534_796_impl;
      USE(label_try_begin_534_796);
      Goto(label_try_begin_534_796);
      if (label_try_begin_534_796->is_used())
      {
        BIND(label_try_begin_534_796);
        // ../src/builtins/data-view.tq:74:9
        {
          // ../src/builtins/data-view.tq:75:7
          TNode<JSDataView> t599 = UncheckedCast<JSDataView>(cast12ATJSDataView(implicit_cast<TNode<Object>>(p_o), label_CastError_223));
          USE(implicit_cast<TNode<JSDataView>>(t599));
          *_return_178 = implicit_cast<TNode<JSDataView>>(t599);
          Goto(label_macro_end_794);
        }
      }
      if (label_CastError_223->is_used())
      {
        BIND(label_CastError_223);
        // ../src/builtins/data-view.tq:77:21
        {
          // ../src/builtins/data-view.tq:78:7
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kIncompatibleMethodReceiver), implicit_cast<TNode<Object>>(p_method));
        }
      }
    }
  }
  BIND(label_macro_end_794);
  return implicit_cast<TNode<JSDataView>>((*_return_178).value());
}

TF_BUILTIN(DataViewPrototypeGetBuffer, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/data-view.tq:84:72
  {
    // ../src/builtins/data-view.tq:85:5
    const char* t600 = "get DataView.prototype.buffer";
    TNode<String> t601 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t600)));
    TNode<JSDataView> t602 = UncheckedCast<JSDataView>(ValidateDataView(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<String>>(t601)));
    USE(implicit_cast<TNode<JSDataView>>(t602));
    TVARIABLE(JSDataView, data_view_179_impl);
    auto data_view_179 = &data_view_179_impl;
    USE(data_view_179);
    *data_view_179 = implicit_cast<TNode<JSDataView>>(t602);
    // ../src/builtins/data-view.tq:87:5
    TNode<JSArrayBuffer> t603 = UncheckedCast<JSArrayBuffer>(LoadArrayBufferViewBuffer(implicit_cast<TNode<JSArrayBufferView>>((*data_view_179).value())));
    arguments->PopAndReturn(implicit_cast<TNode<JSArrayBuffer>>(t603));
  }
}

TF_BUILTIN(DataViewPrototypeGetByteLength, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/data-view.tq:92:65
  {
    // ../src/builtins/data-view.tq:93:5
    const char* t604 = "get DataView.prototype.byte_length";
    TNode<String> t605 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t604)));
    TNode<JSDataView> t606 = UncheckedCast<JSDataView>(ValidateDataView(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<String>>(t605)));
    USE(implicit_cast<TNode<JSDataView>>(t606));
    TVARIABLE(JSDataView, data_view_180_impl);
    auto data_view_180 = &data_view_180_impl;
    USE(data_view_180);
    *data_view_180 = implicit_cast<TNode<JSDataView>>(t606);
    // ../src/builtins/data-view.tq:95:5
    {
      Label label__True_224_impl(this);
      Label* label__True_224 = &label__True_224_impl;
      USE(label__True_224);
      Label label__False_225_impl(this, {});
      Label* label__False_225 = &label__False_225_impl;
      USE(label__False_225);
      TNode<BoolT> t607 = UncheckedCast<BoolT>(WasNeutered(implicit_cast<TNode<JSArrayBufferView>>((*data_view_180).value())));
      USE(implicit_cast<TNode<BoolT>>(t607));
      Branch(implicit_cast<TNode<BoolT>>(t607), label__True_224, label__False_225);
      if (label__True_224->is_used())
      {
        BIND(label__True_224);
        // ../src/builtins/data-view.tq:95:33
        {
          // ../src/builtins/data-view.tq:98:7
          int31_t t608 = 0;
          TNode<Number> t609 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t608)));
          arguments->PopAndReturn(implicit_cast<TNode<Number>>(t609));
        }
      }
      BIND(label__False_225);
    }
    // ../src/builtins/data-view.tq:100:5
    TNode<Number> t610 = UncheckedCast<Number>(LoadDataViewByteLength(implicit_cast<TNode<JSDataView>>((*data_view_180).value())));
    arguments->PopAndReturn(implicit_cast<TNode<Number>>(t610));
  }
}

TF_BUILTIN(DataViewPrototypeGetByteOffset, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/data-view.tq:105:65
  {
    // ../src/builtins/data-view.tq:106:5
    const char* t611 = "get DataView.prototype.byte_offset";
    TNode<String> t612 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t611)));
    TNode<JSDataView> t613 = UncheckedCast<JSDataView>(ValidateDataView(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<String>>(t612)));
    USE(implicit_cast<TNode<JSDataView>>(t613));
    TVARIABLE(JSDataView, data_view_181_impl);
    auto data_view_181 = &data_view_181_impl;
    USE(data_view_181);
    *data_view_181 = implicit_cast<TNode<JSDataView>>(t613);
    // ../src/builtins/data-view.tq:108:5
    {
      Label label__True_226_impl(this);
      Label* label__True_226 = &label__True_226_impl;
      USE(label__True_226);
      Label label__False_227_impl(this, {});
      Label* label__False_227 = &label__False_227_impl;
      USE(label__False_227);
      TNode<BoolT> t614 = UncheckedCast<BoolT>(WasNeutered(implicit_cast<TNode<JSArrayBufferView>>((*data_view_181).value())));
      USE(implicit_cast<TNode<BoolT>>(t614));
      Branch(implicit_cast<TNode<BoolT>>(t614), label__True_226, label__False_227);
      if (label__True_226->is_used())
      {
        BIND(label__True_226);
        // ../src/builtins/data-view.tq:108:33
        {
          // ../src/builtins/data-view.tq:111:7
          int31_t t615 = 0;
          TNode<Number> t616 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t615)));
          arguments->PopAndReturn(implicit_cast<TNode<Number>>(t616));
        }
      }
      BIND(label__False_227);
    }
    // ../src/builtins/data-view.tq:113:5
    TNode<Number> t617 = UncheckedCast<Number>(LoadDataViewByteOffset(implicit_cast<TNode<JSDataView>>((*data_view_181).value())));
    arguments->PopAndReturn(implicit_cast<TNode<Number>>(t617));
  }
}

compiler::TNode<Smi> DataViewBuiltinsFromDSLAssembler::LoadDataView8(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, bool p_signed) {
  TVARIABLE(Smi, _return_182_impl);
  auto _return_182 = &_return_182_impl;
  USE(_return_182);
  Label label_macro_end_797_impl(this, {_return_182});
  Label* label_macro_end_797 = &label_macro_end_797_impl;
  USE(label_macro_end_797);
  // ../src/builtins/data-view.tq:127:56
  {
    // ../src/builtins/data-view.tq:128:5
    {
      if ((implicit_cast<bool>(p_signed))) {
        // ../src/builtins/data-view.tq:128:27
        {
          // ../src/builtins/data-view.tq:129:7
          TNode<RawPtrT> t618 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
          TNode<Int32T> t619 = UncheckedCast<Int32T>(LoadInt8(implicit_cast<TNode<RawPtrT>>(t618), implicit_cast<TNode<IntPtrT>>(p_offset)));
          USE(implicit_cast<TNode<Int32T>>(t619));
          TNode<Smi> t620 = UncheckedCast<Smi>(convert5ATSmi(implicit_cast<TNode<Int32T>>(t619)));
          USE(implicit_cast<TNode<Smi>>(t620));
          *_return_182 = implicit_cast<TNode<Smi>>(t620);
          Goto(label_macro_end_797);
        }
      } else {
        // ../src/builtins/data-view.tq:130:12
        {
          // ../src/builtins/data-view.tq:131:7
          TNode<RawPtrT> t621 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
          TNode<Uint32T> t622 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>(t621), implicit_cast<TNode<IntPtrT>>(p_offset)));
          USE(implicit_cast<TNode<Uint32T>>(t622));
          TNode<Smi> t623 = UncheckedCast<Smi>(convert5ATSmi(implicit_cast<TNode<Uint32T>>(t622)));
          USE(implicit_cast<TNode<Smi>>(t623));
          *_return_182 = implicit_cast<TNode<Smi>>(t623);
          Goto(label_macro_end_797);
        }
      }
    }
  }
  BIND(label_macro_end_797);
  return implicit_cast<TNode<Smi>>((*_return_182).value());
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataView16(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BoolT> p_requested_little_endian, bool p_signed) {
  TVARIABLE(Number, _return_183_impl);
  auto _return_183 = &_return_183_impl;
  USE(_return_183);
  Label label_macro_end_798_impl(this, {_return_183});
  Label* label_macro_end_798 = &label_macro_end_798_impl;
  USE(label_macro_end_798);
  // ../src/builtins/data-view.tq:137:56
  {
    // ../src/builtins/data-view.tq:138:5
    TNode<RawPtrT> t624 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, data_pointer_184_impl);
    auto data_pointer_184 = &data_pointer_184_impl;
    USE(data_pointer_184);
    *data_pointer_184 = implicit_cast<TNode<RawPtrT>>(t624);
    // ../src/builtins/data-view.tq:140:5
    TVARIABLE(Int32T, b0_185_impl);
    auto b0_185 = &b0_185_impl;
    USE(b0_185);
    // ../src/builtins/data-view.tq:141:5
    TVARIABLE(Int32T, b1_186_impl);
    auto b1_186 = &b1_186_impl;
    USE(b1_186);
    // ../src/builtins/data-view.tq:142:5
    TVARIABLE(Int32T, result_187_impl);
    auto result_187 = &result_187_impl;
    USE(result_187);
    // ../src/builtins/data-view.tq:145:5
    {
      Label label__True_230_impl(this);
      Label* label__True_230 = &label__True_230_impl;
      USE(label__True_230);
      Label label__False_231_impl(this);
      Label* label__False_231 = &label__False_231_impl;
      USE(label__False_231);
      Label label_if_done_label_535_799_impl(this, {b0_185, b1_186, result_187});
      Label* label_if_done_label_535_799 = &label_if_done_label_535_799_impl;
      USE(label_if_done_label_535_799);
      Branch(implicit_cast<TNode<BoolT>>(p_requested_little_endian), label__True_230, label__False_231);
      if (label__True_230->is_used())
      {
        BIND(label__True_230);
        // ../src/builtins/data-view.tq:145:34
        {
          // ../src/builtins/data-view.tq:146:7
          TNode<Uint32T> t625 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_184).value()), implicit_cast<TNode<IntPtrT>>(p_offset)));
          USE(implicit_cast<TNode<Uint32T>>(t625));
          TNode<Int32T> t626 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>(t625)));
          USE(implicit_cast<TNode<Int32T>>(t626));
          *b0_185 = implicit_cast<TNode<Int32T>>(t626);
          // ../src/builtins/data-view.tq:147:7
          int31_t t627 = 1;
          TNode<IntPtrT> t628 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t627)));
          TNode<IntPtrT> t629 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t628)));
          USE(implicit_cast<TNode<IntPtrT>>(t629));
          TNode<Int32T> t630 = UncheckedCast<Int32T>(LoadInt8(implicit_cast<TNode<RawPtrT>>((*data_pointer_184).value()), implicit_cast<TNode<IntPtrT>>(t629)));
          USE(implicit_cast<TNode<Int32T>>(t630));
          *b1_186 = implicit_cast<TNode<Int32T>>(t630);
          // ../src/builtins/data-view.tq:148:7
          int31_t t631 = 8;
          TNode<Int32T> t632 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t631)));
          TNode<Int32T> t633 = UncheckedCast<Int32T>(Word32Shl(implicit_cast<TNode<Int32T>>((*b1_186).value()), implicit_cast<TNode<Int32T>>(t632)));
          USE(implicit_cast<TNode<Int32T>>(t633));
          TNode<Int32T> t634 = UncheckedCast<Int32T>(Int32Add(implicit_cast<TNode<Int32T>>(t633), implicit_cast<TNode<Int32T>>((*b0_185).value())));
          USE(implicit_cast<TNode<Int32T>>(t634));
          *result_187 = implicit_cast<TNode<Int32T>>(t634);
        }
        Goto(label_if_done_label_535_799);
      }
      if (label__False_231->is_used())
      {
        BIND(label__False_231);
        // ../src/builtins/data-view.tq:149:12
        {
          // ../src/builtins/data-view.tq:150:7
          TNode<Int32T> t635 = UncheckedCast<Int32T>(LoadInt8(implicit_cast<TNode<RawPtrT>>((*data_pointer_184).value()), implicit_cast<TNode<IntPtrT>>(p_offset)));
          USE(implicit_cast<TNode<Int32T>>(t635));
          *b0_185 = implicit_cast<TNode<Int32T>>(t635);
          // ../src/builtins/data-view.tq:151:7
          int31_t t636 = 1;
          TNode<IntPtrT> t637 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t636)));
          TNode<IntPtrT> t638 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t637)));
          USE(implicit_cast<TNode<IntPtrT>>(t638));
          TNode<Uint32T> t639 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_184).value()), implicit_cast<TNode<IntPtrT>>(t638)));
          USE(implicit_cast<TNode<Uint32T>>(t639));
          TNode<Int32T> t640 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>(t639)));
          USE(implicit_cast<TNode<Int32T>>(t640));
          *b1_186 = implicit_cast<TNode<Int32T>>(t640);
          // ../src/builtins/data-view.tq:152:7
          int31_t t641 = 8;
          TNode<Int32T> t642 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t641)));
          TNode<Int32T> t643 = UncheckedCast<Int32T>(Word32Shl(implicit_cast<TNode<Int32T>>((*b0_185).value()), implicit_cast<TNode<Int32T>>(t642)));
          USE(implicit_cast<TNode<Int32T>>(t643));
          TNode<Int32T> t644 = UncheckedCast<Int32T>(Int32Add(implicit_cast<TNode<Int32T>>(t643), implicit_cast<TNode<Int32T>>((*b1_186).value())));
          USE(implicit_cast<TNode<Int32T>>(t644));
          *result_187 = implicit_cast<TNode<Int32T>>(t644);
        }
        Goto(label_if_done_label_535_799);
      }
      BIND(label_if_done_label_535_799);
    }
    // ../src/builtins/data-view.tq:154:5
    {
      if ((implicit_cast<bool>(p_signed))) {
        // ../src/builtins/data-view.tq:154:27
        {
          // ../src/builtins/data-view.tq:155:7
          TNode<Smi> t645 = UncheckedCast<Smi>(convert5ATSmi(implicit_cast<TNode<Int32T>>((*result_187).value())));
          USE(implicit_cast<TNode<Smi>>(t645));
          *_return_183 = implicit_cast<TNode<Number>>(t645);
          Goto(label_macro_end_798);
        }
      } else {
        // ../src/builtins/data-view.tq:156:12
        {
          // ../src/builtins/data-view.tq:158:7
          int31_t t646 = 0xFFFF;
          TNode<Int32T> t647 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t646)));
          TNode<Int32T> t648 = UncheckedCast<Int32T>(Word32And(implicit_cast<TNode<Int32T>>((*result_187).value()), implicit_cast<TNode<Int32T>>(t647)));
          USE(implicit_cast<TNode<Int32T>>(t648));
          TNode<Smi> t649 = UncheckedCast<Smi>(convert5ATSmi(implicit_cast<TNode<Int32T>>(t648)));
          USE(implicit_cast<TNode<Smi>>(t649));
          *_return_183 = implicit_cast<TNode<Number>>(t649);
          Goto(label_macro_end_798);
        }
      }
    }
  }
  BIND(label_macro_end_798);
  return implicit_cast<TNode<Number>>((*_return_183).value());
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataView32(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BoolT> p_requested_little_endian, ElementsKind p_kind) {
  TVARIABLE(Number, _return_188_impl);
  auto _return_188 = &_return_188_impl;
  USE(_return_188);
  Label label_macro_end_800_impl(this, {_return_188});
  Label* label_macro_end_800 = &label_macro_end_800_impl;
  USE(label_macro_end_800);
  // ../src/builtins/data-view.tq:164:62
  {
    // ../src/builtins/data-view.tq:165:5
    TNode<RawPtrT> t650 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, data_pointer_189_impl);
    auto data_pointer_189 = &data_pointer_189_impl;
    USE(data_pointer_189);
    *data_pointer_189 = implicit_cast<TNode<RawPtrT>>(t650);
    // ../src/builtins/data-view.tq:167:5
    TNode<Uint32T> t651 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_189).value()), implicit_cast<TNode<IntPtrT>>(p_offset)));
    USE(implicit_cast<TNode<Uint32T>>(t651));
    TVARIABLE(Uint32T, b0_190_impl);
    auto b0_190 = &b0_190_impl;
    USE(b0_190);
    *b0_190 = implicit_cast<TNode<Uint32T>>(t651);
    // ../src/builtins/data-view.tq:168:5
    int31_t t652 = 1;
    TNode<IntPtrT> t653 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t652)));
    TNode<IntPtrT> t654 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t653)));
    USE(implicit_cast<TNode<IntPtrT>>(t654));
    TNode<Uint32T> t655 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_189).value()), implicit_cast<TNode<IntPtrT>>(t654)));
    USE(implicit_cast<TNode<Uint32T>>(t655));
    TVARIABLE(Uint32T, b1_191_impl);
    auto b1_191 = &b1_191_impl;
    USE(b1_191);
    *b1_191 = implicit_cast<TNode<Uint32T>>(t655);
    // ../src/builtins/data-view.tq:169:5
    int31_t t656 = 2;
    TNode<IntPtrT> t657 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t656)));
    TNode<IntPtrT> t658 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t657)));
    USE(implicit_cast<TNode<IntPtrT>>(t658));
    TNode<Uint32T> t659 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_189).value()), implicit_cast<TNode<IntPtrT>>(t658)));
    USE(implicit_cast<TNode<Uint32T>>(t659));
    TVARIABLE(Uint32T, b2_192_impl);
    auto b2_192 = &b2_192_impl;
    USE(b2_192);
    *b2_192 = implicit_cast<TNode<Uint32T>>(t659);
    // ../src/builtins/data-view.tq:170:5
    int31_t t660 = 3;
    TNode<IntPtrT> t661 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t660)));
    TNode<IntPtrT> t662 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t661)));
    USE(implicit_cast<TNode<IntPtrT>>(t662));
    TNode<Uint32T> t663 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_189).value()), implicit_cast<TNode<IntPtrT>>(t662)));
    USE(implicit_cast<TNode<Uint32T>>(t663));
    TVARIABLE(Uint32T, b3_193_impl);
    auto b3_193 = &b3_193_impl;
    USE(b3_193);
    *b3_193 = implicit_cast<TNode<Uint32T>>(t663);
    // ../src/builtins/data-view.tq:171:5
    TVARIABLE(Uint32T, result_194_impl);
    auto result_194 = &result_194_impl;
    USE(result_194);
    // ../src/builtins/data-view.tq:173:5
    {
      Label label__True_234_impl(this);
      Label* label__True_234 = &label__True_234_impl;
      USE(label__True_234);
      Label label__False_235_impl(this);
      Label* label__False_235 = &label__False_235_impl;
      USE(label__False_235);
      Label label_if_done_label_536_801_impl(this, {result_194});
      Label* label_if_done_label_536_801 = &label_if_done_label_536_801_impl;
      USE(label_if_done_label_536_801);
      Branch(implicit_cast<TNode<BoolT>>(p_requested_little_endian), label__True_234, label__False_235);
      if (label__True_234->is_used())
      {
        BIND(label__True_234);
        // ../src/builtins/data-view.tq:173:34
        {
          // ../src/builtins/data-view.tq:174:7
          int31_t t664 = 24;
          TNode<Uint32T> t665 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t664)));
          TNode<Uint32T> t666 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b3_193).value()), implicit_cast<TNode<Uint32T>>(t665)));
          USE(implicit_cast<TNode<Uint32T>>(t666));
          int31_t t667 = 16;
          TNode<Uint32T> t668 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t667)));
          TNode<Uint32T> t669 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b2_192).value()), implicit_cast<TNode<Uint32T>>(t668)));
          USE(implicit_cast<TNode<Uint32T>>(t669));
          TNode<Uint32T> t670 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t666), implicit_cast<TNode<Uint32T>>(t669)));
          USE(implicit_cast<TNode<Uint32T>>(t670));
          int31_t t671 = 8;
          TNode<Uint32T> t672 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t671)));
          TNode<Uint32T> t673 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b1_191).value()), implicit_cast<TNode<Uint32T>>(t672)));
          USE(implicit_cast<TNode<Uint32T>>(t673));
          TNode<Uint32T> t674 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t670), implicit_cast<TNode<Uint32T>>(t673)));
          USE(implicit_cast<TNode<Uint32T>>(t674));
          TNode<Uint32T> t675 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t674), implicit_cast<TNode<Uint32T>>((*b0_190).value())));
          USE(implicit_cast<TNode<Uint32T>>(t675));
          *result_194 = implicit_cast<TNode<Uint32T>>(t675);
        }
        Goto(label_if_done_label_536_801);
      }
      if (label__False_235->is_used())
      {
        BIND(label__False_235);
        // ../src/builtins/data-view.tq:175:12
        {
          // ../src/builtins/data-view.tq:176:7
          int31_t t676 = 24;
          TNode<Uint32T> t677 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t676)));
          TNode<Uint32T> t678 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b0_190).value()), implicit_cast<TNode<Uint32T>>(t677)));
          USE(implicit_cast<TNode<Uint32T>>(t678));
          int31_t t679 = 16;
          TNode<Uint32T> t680 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t679)));
          TNode<Uint32T> t681 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b1_191).value()), implicit_cast<TNode<Uint32T>>(t680)));
          USE(implicit_cast<TNode<Uint32T>>(t681));
          TNode<Uint32T> t682 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t678), implicit_cast<TNode<Uint32T>>(t681)));
          USE(implicit_cast<TNode<Uint32T>>(t682));
          int31_t t683 = 8;
          TNode<Uint32T> t684 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t683)));
          TNode<Uint32T> t685 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b2_192).value()), implicit_cast<TNode<Uint32T>>(t684)));
          USE(implicit_cast<TNode<Uint32T>>(t685));
          TNode<Uint32T> t686 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t682), implicit_cast<TNode<Uint32T>>(t685)));
          USE(implicit_cast<TNode<Uint32T>>(t686));
          TNode<Uint32T> t687 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t686), implicit_cast<TNode<Uint32T>>((*b3_193).value())));
          USE(implicit_cast<TNode<Uint32T>>(t687));
          *result_194 = implicit_cast<TNode<Uint32T>>(t687);
        }
        Goto(label_if_done_label_536_801);
      }
      BIND(label_if_done_label_536_801);
    }
    // ../src/builtins/data-view.tq:179:5
    {
      bool t688 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT32_ELEMENTS));
      USE(implicit_cast<bool>(t688));
      if ((implicit_cast<bool>(t688))) {
        // ../src/builtins/data-view.tq:179:43
        {
          // ../src/builtins/data-view.tq:180:7
          TNode<Int32T> t689 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>((*result_194).value())));
          USE(implicit_cast<TNode<Int32T>>(t689));
          TNode<Number> t690 = UncheckedCast<Number>(convert22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Int32T>>(t689)));
          USE(implicit_cast<TNode<Number>>(t690));
          *_return_188 = implicit_cast<TNode<Number>>(t690);
          Goto(label_macro_end_800);
        }
      } else {
        // ../src/builtins/data-view.tq:181:12
        {
          bool t691 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT32_ELEMENTS));
          USE(implicit_cast<bool>(t691));
          if ((implicit_cast<bool>(t691))) {
            // ../src/builtins/data-view.tq:181:51
            {
              // ../src/builtins/data-view.tq:182:7
              TNode<Number> t692 = UncheckedCast<Number>(convert22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Uint32T>>((*result_194).value())));
              USE(implicit_cast<TNode<Number>>(t692));
              *_return_188 = implicit_cast<TNode<Number>>(t692);
              Goto(label_macro_end_800);
            }
          } else {
            // ../src/builtins/data-view.tq:183:12
            {
              bool t693 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS));
              USE(implicit_cast<bool>(t693));
              if ((implicit_cast<bool>(t693))) {
                // ../src/builtins/data-view.tq:183:52
                {
                  // ../src/builtins/data-view.tq:184:7
                  TNode<Float32T> t694 = UncheckedCast<Float32T>(BitcastInt32ToFloat32(implicit_cast<TNode<Uint32T>>((*result_194).value())));
                  USE(implicit_cast<TNode<Float32T>>(t694));
                  TNode<Float64T> t695 = UncheckedCast<Float64T>(convert9ATfloat64(implicit_cast<TNode<Float32T>>(t694)));
                  USE(implicit_cast<TNode<Float64T>>(t695));
                  TVARIABLE(Float64T, float_res_195_impl);
                  auto float_res_195 = &float_res_195_impl;
                  USE(float_res_195);
                  *float_res_195 = implicit_cast<TNode<Float64T>>(t695);
                  // ../src/builtins/data-view.tq:185:7
                  TNode<Number> t696 = UncheckedCast<Number>(convert22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Float64T>>((*float_res_195).value())));
                  USE(implicit_cast<TNode<Number>>(t696));
                  *_return_188 = implicit_cast<TNode<Number>>(t696);
                  Goto(label_macro_end_800);
                }
              } else {
                // ../src/builtins/data-view.tq:186:12
                {
                  // ../src/builtins/data-view.tq:187:7
                  Unreachable();
                }
              }
            }
          }
        }
      }
    }
  }
  BIND(label_macro_end_800);
  return implicit_cast<TNode<Number>>((*_return_188).value());
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataViewFloat64(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BoolT> p_requested_little_endian) {
  TVARIABLE(Number, _return_196_impl);
  auto _return_196 = &_return_196_impl;
  USE(_return_196);
  Label label_macro_end_802_impl(this, {_return_196});
  Label* label_macro_end_802 = &label_macro_end_802_impl;
  USE(label_macro_end_802);
  // ../src/builtins/data-view.tq:192:68
  {
    // ../src/builtins/data-view.tq:193:5
    TNode<RawPtrT> t697 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, data_pointer_197_impl);
    auto data_pointer_197 = &data_pointer_197_impl;
    USE(data_pointer_197);
    *data_pointer_197 = implicit_cast<TNode<RawPtrT>>(t697);
    // ../src/builtins/data-view.tq:195:5
    TNode<Uint32T> t698 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_197).value()), implicit_cast<TNode<IntPtrT>>(p_offset)));
    USE(implicit_cast<TNode<Uint32T>>(t698));
    TVARIABLE(Uint32T, b0_198_impl);
    auto b0_198 = &b0_198_impl;
    USE(b0_198);
    *b0_198 = implicit_cast<TNode<Uint32T>>(t698);
    // ../src/builtins/data-view.tq:196:5
    int31_t t699 = 1;
    TNode<IntPtrT> t700 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t699)));
    TNode<IntPtrT> t701 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t700)));
    USE(implicit_cast<TNode<IntPtrT>>(t701));
    TNode<Uint32T> t702 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_197).value()), implicit_cast<TNode<IntPtrT>>(t701)));
    USE(implicit_cast<TNode<Uint32T>>(t702));
    TVARIABLE(Uint32T, b1_199_impl);
    auto b1_199 = &b1_199_impl;
    USE(b1_199);
    *b1_199 = implicit_cast<TNode<Uint32T>>(t702);
    // ../src/builtins/data-view.tq:197:5
    int31_t t703 = 2;
    TNode<IntPtrT> t704 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t703)));
    TNode<IntPtrT> t705 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t704)));
    USE(implicit_cast<TNode<IntPtrT>>(t705));
    TNode<Uint32T> t706 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_197).value()), implicit_cast<TNode<IntPtrT>>(t705)));
    USE(implicit_cast<TNode<Uint32T>>(t706));
    TVARIABLE(Uint32T, b2_200_impl);
    auto b2_200 = &b2_200_impl;
    USE(b2_200);
    *b2_200 = implicit_cast<TNode<Uint32T>>(t706);
    // ../src/builtins/data-view.tq:198:5
    int31_t t707 = 3;
    TNode<IntPtrT> t708 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t707)));
    TNode<IntPtrT> t709 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t708)));
    USE(implicit_cast<TNode<IntPtrT>>(t709));
    TNode<Uint32T> t710 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_197).value()), implicit_cast<TNode<IntPtrT>>(t709)));
    USE(implicit_cast<TNode<Uint32T>>(t710));
    TVARIABLE(Uint32T, b3_201_impl);
    auto b3_201 = &b3_201_impl;
    USE(b3_201);
    *b3_201 = implicit_cast<TNode<Uint32T>>(t710);
    // ../src/builtins/data-view.tq:199:5
    int31_t t711 = 4;
    TNode<IntPtrT> t712 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t711)));
    TNode<IntPtrT> t713 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t712)));
    USE(implicit_cast<TNode<IntPtrT>>(t713));
    TNode<Uint32T> t714 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_197).value()), implicit_cast<TNode<IntPtrT>>(t713)));
    USE(implicit_cast<TNode<Uint32T>>(t714));
    TVARIABLE(Uint32T, b4_202_impl);
    auto b4_202 = &b4_202_impl;
    USE(b4_202);
    *b4_202 = implicit_cast<TNode<Uint32T>>(t714);
    // ../src/builtins/data-view.tq:200:5
    int31_t t715 = 5;
    TNode<IntPtrT> t716 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t715)));
    TNode<IntPtrT> t717 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t716)));
    USE(implicit_cast<TNode<IntPtrT>>(t717));
    TNode<Uint32T> t718 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_197).value()), implicit_cast<TNode<IntPtrT>>(t717)));
    USE(implicit_cast<TNode<Uint32T>>(t718));
    TVARIABLE(Uint32T, b5_203_impl);
    auto b5_203 = &b5_203_impl;
    USE(b5_203);
    *b5_203 = implicit_cast<TNode<Uint32T>>(t718);
    // ../src/builtins/data-view.tq:201:5
    int31_t t719 = 6;
    TNode<IntPtrT> t720 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t719)));
    TNode<IntPtrT> t721 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t720)));
    USE(implicit_cast<TNode<IntPtrT>>(t721));
    TNode<Uint32T> t722 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_197).value()), implicit_cast<TNode<IntPtrT>>(t721)));
    USE(implicit_cast<TNode<Uint32T>>(t722));
    TVARIABLE(Uint32T, b6_204_impl);
    auto b6_204 = &b6_204_impl;
    USE(b6_204);
    *b6_204 = implicit_cast<TNode<Uint32T>>(t722);
    // ../src/builtins/data-view.tq:202:5
    int31_t t723 = 7;
    TNode<IntPtrT> t724 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t723)));
    TNode<IntPtrT> t725 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t724)));
    USE(implicit_cast<TNode<IntPtrT>>(t725));
    TNode<Uint32T> t726 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_197).value()), implicit_cast<TNode<IntPtrT>>(t725)));
    USE(implicit_cast<TNode<Uint32T>>(t726));
    TVARIABLE(Uint32T, b7_205_impl);
    auto b7_205 = &b7_205_impl;
    USE(b7_205);
    *b7_205 = implicit_cast<TNode<Uint32T>>(t726);
    // ../src/builtins/data-view.tq:203:5
    TVARIABLE(Uint32T, low_word_206_impl);
    auto low_word_206 = &low_word_206_impl;
    USE(low_word_206);
    // ../src/builtins/data-view.tq:204:5
    TVARIABLE(Uint32T, high_word_207_impl);
    auto high_word_207 = &high_word_207_impl;
    USE(high_word_207);
    // ../src/builtins/data-view.tq:206:5
    {
      Label label__True_242_impl(this);
      Label* label__True_242 = &label__True_242_impl;
      USE(label__True_242);
      Label label__False_243_impl(this);
      Label* label__False_243 = &label__False_243_impl;
      USE(label__False_243);
      Label label_if_done_label_537_803_impl(this, {high_word_207, low_word_206});
      Label* label_if_done_label_537_803 = &label_if_done_label_537_803_impl;
      USE(label_if_done_label_537_803);
      Branch(implicit_cast<TNode<BoolT>>(p_requested_little_endian), label__True_242, label__False_243);
      if (label__True_242->is_used())
      {
        BIND(label__True_242);
        // ../src/builtins/data-view.tq:206:34
        {
          // ../src/builtins/data-view.tq:207:7
          int31_t t727 = 24;
          TNode<Uint32T> t728 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t727)));
          TNode<Uint32T> t729 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b3_201).value()), implicit_cast<TNode<Uint32T>>(t728)));
          USE(implicit_cast<TNode<Uint32T>>(t729));
          int31_t t730 = 16;
          TNode<Uint32T> t731 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t730)));
          TNode<Uint32T> t732 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b2_200).value()), implicit_cast<TNode<Uint32T>>(t731)));
          USE(implicit_cast<TNode<Uint32T>>(t732));
          TNode<Uint32T> t733 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t729), implicit_cast<TNode<Uint32T>>(t732)));
          USE(implicit_cast<TNode<Uint32T>>(t733));
          int31_t t734 = 8;
          TNode<Uint32T> t735 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t734)));
          TNode<Uint32T> t736 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b1_199).value()), implicit_cast<TNode<Uint32T>>(t735)));
          USE(implicit_cast<TNode<Uint32T>>(t736));
          TNode<Uint32T> t737 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t733), implicit_cast<TNode<Uint32T>>(t736)));
          USE(implicit_cast<TNode<Uint32T>>(t737));
          TNode<Uint32T> t738 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t737), implicit_cast<TNode<Uint32T>>((*b0_198).value())));
          USE(implicit_cast<TNode<Uint32T>>(t738));
          *low_word_206 = implicit_cast<TNode<Uint32T>>(t738);
          // ../src/builtins/data-view.tq:208:7
          int31_t t739 = 24;
          TNode<Uint32T> t740 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t739)));
          TNode<Uint32T> t741 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b7_205).value()), implicit_cast<TNode<Uint32T>>(t740)));
          USE(implicit_cast<TNode<Uint32T>>(t741));
          int31_t t742 = 16;
          TNode<Uint32T> t743 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t742)));
          TNode<Uint32T> t744 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b6_204).value()), implicit_cast<TNode<Uint32T>>(t743)));
          USE(implicit_cast<TNode<Uint32T>>(t744));
          TNode<Uint32T> t745 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t741), implicit_cast<TNode<Uint32T>>(t744)));
          USE(implicit_cast<TNode<Uint32T>>(t745));
          int31_t t746 = 8;
          TNode<Uint32T> t747 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t746)));
          TNode<Uint32T> t748 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b5_203).value()), implicit_cast<TNode<Uint32T>>(t747)));
          USE(implicit_cast<TNode<Uint32T>>(t748));
          TNode<Uint32T> t749 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t745), implicit_cast<TNode<Uint32T>>(t748)));
          USE(implicit_cast<TNode<Uint32T>>(t749));
          TNode<Uint32T> t750 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t749), implicit_cast<TNode<Uint32T>>((*b4_202).value())));
          USE(implicit_cast<TNode<Uint32T>>(t750));
          *high_word_207 = implicit_cast<TNode<Uint32T>>(t750);
        }
        Goto(label_if_done_label_537_803);
      }
      if (label__False_243->is_used())
      {
        BIND(label__False_243);
        // ../src/builtins/data-view.tq:209:12
        {
          // ../src/builtins/data-view.tq:210:7
          int31_t t751 = 24;
          TNode<Uint32T> t752 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t751)));
          TNode<Uint32T> t753 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b0_198).value()), implicit_cast<TNode<Uint32T>>(t752)));
          USE(implicit_cast<TNode<Uint32T>>(t753));
          int31_t t754 = 16;
          TNode<Uint32T> t755 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t754)));
          TNode<Uint32T> t756 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b1_199).value()), implicit_cast<TNode<Uint32T>>(t755)));
          USE(implicit_cast<TNode<Uint32T>>(t756));
          TNode<Uint32T> t757 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t753), implicit_cast<TNode<Uint32T>>(t756)));
          USE(implicit_cast<TNode<Uint32T>>(t757));
          int31_t t758 = 8;
          TNode<Uint32T> t759 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t758)));
          TNode<Uint32T> t760 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b2_200).value()), implicit_cast<TNode<Uint32T>>(t759)));
          USE(implicit_cast<TNode<Uint32T>>(t760));
          TNode<Uint32T> t761 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t757), implicit_cast<TNode<Uint32T>>(t760)));
          USE(implicit_cast<TNode<Uint32T>>(t761));
          TNode<Uint32T> t762 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t761), implicit_cast<TNode<Uint32T>>((*b3_201).value())));
          USE(implicit_cast<TNode<Uint32T>>(t762));
          *high_word_207 = implicit_cast<TNode<Uint32T>>(t762);
          // ../src/builtins/data-view.tq:211:7
          int31_t t763 = 24;
          TNode<Uint32T> t764 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t763)));
          TNode<Uint32T> t765 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b4_202).value()), implicit_cast<TNode<Uint32T>>(t764)));
          USE(implicit_cast<TNode<Uint32T>>(t765));
          int31_t t766 = 16;
          TNode<Uint32T> t767 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t766)));
          TNode<Uint32T> t768 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b5_203).value()), implicit_cast<TNode<Uint32T>>(t767)));
          USE(implicit_cast<TNode<Uint32T>>(t768));
          TNode<Uint32T> t769 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t765), implicit_cast<TNode<Uint32T>>(t768)));
          USE(implicit_cast<TNode<Uint32T>>(t769));
          int31_t t770 = 8;
          TNode<Uint32T> t771 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t770)));
          TNode<Uint32T> t772 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b6_204).value()), implicit_cast<TNode<Uint32T>>(t771)));
          USE(implicit_cast<TNode<Uint32T>>(t772));
          TNode<Uint32T> t773 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t769), implicit_cast<TNode<Uint32T>>(t772)));
          USE(implicit_cast<TNode<Uint32T>>(t773));
          TNode<Uint32T> t774 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t773), implicit_cast<TNode<Uint32T>>((*b7_205).value())));
          USE(implicit_cast<TNode<Uint32T>>(t774));
          *low_word_206 = implicit_cast<TNode<Uint32T>>(t774);
        }
        Goto(label_if_done_label_537_803);
      }
      BIND(label_if_done_label_537_803);
    }
    // ../src/builtins/data-view.tq:214:5
    int31_t t775 = 0;
    TVARIABLE(Float64T, result_208_impl);
    auto result_208 = &result_208_impl;
    USE(result_208);
    TNode<Float64T> t776 = UncheckedCast<Float64T>(from_constexpr9ATfloat64(implicit_cast<int31_t>(t775)));
    *result_208 = implicit_cast<TNode<Float64T>>(t776);
    // ../src/builtins/data-view.tq:215:5
    TNode<Float64T> t777 = UncheckedCast<Float64T>(Float64InsertLowWord32(implicit_cast<TNode<Float64T>>((*result_208).value()), implicit_cast<TNode<Uint32T>>((*low_word_206).value())));
    USE(implicit_cast<TNode<Float64T>>(t777));
    *result_208 = implicit_cast<TNode<Float64T>>(t777);
    // ../src/builtins/data-view.tq:216:5
    TNode<Float64T> t778 = UncheckedCast<Float64T>(Float64InsertHighWord32(implicit_cast<TNode<Float64T>>((*result_208).value()), implicit_cast<TNode<Uint32T>>((*high_word_207).value())));
    USE(implicit_cast<TNode<Float64T>>(t778));
    *result_208 = implicit_cast<TNode<Float64T>>(t778);
    // ../src/builtins/data-view.tq:218:5
    TNode<Number> t779 = UncheckedCast<Number>(convert22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Float64T>>((*result_208).value())));
    USE(implicit_cast<TNode<Number>>(t779));
    *_return_196 = implicit_cast<TNode<Number>>(t779);
    Goto(label_macro_end_802);
  }
  BIND(label_macro_end_802);
  return implicit_cast<TNode<Number>>((*_return_196).value());
}

bool DataViewBuiltinsFromDSLAssembler::kPositiveBigInt() {
  return implicit_cast<bool>(false);
}

bool DataViewBuiltinsFromDSLAssembler::kNegativeBigInt() {
  return implicit_cast<bool>(true);
}

int31_t DataViewBuiltinsFromDSLAssembler::kZeroDigitBigInt() {
  int31_t t780 = 0;
  return implicit_cast<int31_t>(t780);
}

int31_t DataViewBuiltinsFromDSLAssembler::kOneDigitBigInt() {
  int31_t t781 = 1;
  return implicit_cast<int31_t>(t781);
}

int31_t DataViewBuiltinsFromDSLAssembler::kTwoDigitBigInt() {
  int31_t t782 = 2;
  return implicit_cast<int31_t>(t782);
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::CreateEmptyBigInt(TNode<BoolT> p_is_positive, int31_t p_length) {
  TVARIABLE(BigInt, _return_209_impl);
  auto _return_209 = &_return_209_impl;
  USE(_return_209);
  Label label_macro_end_804_impl(this, {_return_209});
  Label* label_macro_end_804 = &label_macro_end_804_impl;
  USE(label_macro_end_804);
  // ../src/builtins/data-view.tq:233:79
  {
    // ../src/builtins/data-view.tq:235:5
    TNode<IntPtrT> t783 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(p_length)));
    TNode<BigInt> t784 = UncheckedCast<BigInt>(AllocateBigInt(implicit_cast<TNode<IntPtrT>>(t783)));
    USE(implicit_cast<TNode<BigInt>>(t784));
    TVARIABLE(BigInt, result_210_impl);
    auto result_210 = &result_210_impl;
    USE(result_210);
    *result_210 = implicit_cast<TNode<BigInt>>(t784);
    // ../src/builtins/data-view.tq:238:5
    {
      Label label__True_244_impl(this);
      Label* label__True_244 = &label__True_244_impl;
      USE(label__True_244);
      Label label__False_245_impl(this);
      Label* label__False_245 = &label__False_245_impl;
      USE(label__False_245);
      Label label_if_done_label_538_805_impl(this, {});
      Label* label_if_done_label_538_805 = &label_if_done_label_538_805_impl;
      USE(label_if_done_label_538_805);
      Branch(implicit_cast<TNode<BoolT>>(p_is_positive), label__True_244, label__False_245);
      if (label__True_244->is_used())
      {
        BIND(label__True_244);
        // ../src/builtins/data-view.tq:238:22
        {
          // ../src/builtins/data-view.tq:239:7
          TNode<IntPtrT> t785 = UncheckedCast<IntPtrT>(DataViewEncodeBigIntBits(implicit_cast<bool>(kPositiveBigInt()), implicit_cast<int31_t>(p_length)));
          USE(implicit_cast<TNode<IntPtrT>>(t785));
          StoreBigIntBitfield(implicit_cast<TNode<BigInt>>((*result_210).value()), implicit_cast<TNode<IntPtrT>>(t785));
        }
        Goto(label_if_done_label_538_805);
      }
      if (label__False_245->is_used())
      {
        BIND(label__False_245);
        // ../src/builtins/data-view.tq:241:12
        {
          // ../src/builtins/data-view.tq:242:7
          TNode<IntPtrT> t786 = UncheckedCast<IntPtrT>(DataViewEncodeBigIntBits(implicit_cast<bool>(kNegativeBigInt()), implicit_cast<int31_t>(p_length)));
          USE(implicit_cast<TNode<IntPtrT>>(t786));
          StoreBigIntBitfield(implicit_cast<TNode<BigInt>>((*result_210).value()), implicit_cast<TNode<IntPtrT>>(t786));
        }
        Goto(label_if_done_label_538_805);
      }
      BIND(label_if_done_label_538_805);
    }
    // ../src/builtins/data-view.tq:246:5
    *_return_209 = implicit_cast<TNode<BigInt>>((*result_210).value());
    Goto(label_macro_end_804);
  }
  BIND(label_macro_end_804);
  return implicit_cast<TNode<BigInt>>((*_return_209).value());
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::MakeBigIntOn64Bit(TNode<Uint32T> p_low_word, TNode<Uint32T> p_high_word, bool p_signed) {
  TVARIABLE(BigInt, _return_211_impl);
  auto _return_211 = &_return_211_impl;
  USE(_return_211);
  Label label_macro_end_806_impl(this, {_return_211});
  Label* label_macro_end_806 = &label_macro_end_806_impl;
  USE(label_macro_end_806);
  // ../src/builtins/data-view.tq:251:59
  {
    // ../src/builtins/data-view.tq:254:5
    {
      Label label__True_246_impl(this);
      Label* label__True_246 = &label__True_246_impl;
      USE(label__True_246);
      Label label__False_247_impl(this, {});
      Label* label__False_247 = &label__False_247_impl;
      USE(label__False_247);
      Label label__True_248_impl(this);
      Label* label__True_248 = &label__True_248_impl;
      USE(label__True_248);
      int31_t t787 = 0;
      TNode<Uint32T> t788 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t787)));
      TNode<BoolT> t789 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Uint32T>>(p_low_word), implicit_cast<TNode<Uint32T>>(t788)));
      USE(implicit_cast<TNode<BoolT>>(t789));
      GotoIfNot(implicit_cast<TNode<BoolT>>(t789), label__False_247);
      int31_t t790 = 0;
      TNode<Uint32T> t791 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t790)));
      TNode<BoolT> t792 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<TNode<Uint32T>>(t791)));
      USE(implicit_cast<TNode<BoolT>>(t792));
      Branch(implicit_cast<TNode<BoolT>>(t792), label__True_246, label__False_247);
      if (label__True_246->is_used())
      {
        BIND(label__True_246);
        // ../src/builtins/data-view.tq:254:42
        {
          // ../src/builtins/data-view.tq:255:7
          TNode<IntPtrT> t793 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(kZeroDigitBigInt())));
          TNode<BigInt> t794 = UncheckedCast<BigInt>(AllocateBigInt(implicit_cast<TNode<IntPtrT>>(t793)));
          USE(implicit_cast<TNode<BigInt>>(t794));
          *_return_211 = implicit_cast<TNode<BigInt>>(t794);
          Goto(label_macro_end_806);
        }
      }
      BIND(label__False_247);
    }
    // ../src/builtins/data-view.tq:258:5
    TVARIABLE(BoolT, is_positive_212_impl);
    auto is_positive_212 = &is_positive_212_impl;
    USE(is_positive_212);
    TNode<BoolT> t795 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
    *is_positive_212 = implicit_cast<TNode<BoolT>>(t795);
    // ../src/builtins/data-view.tq:259:5
    TNode<UintPtrT> t796 = UncheckedCast<UintPtrT>(convert9ATuintptr(implicit_cast<TNode<Uint32T>>(p_high_word)));
    USE(implicit_cast<TNode<UintPtrT>>(t796));
    TNode<IntPtrT> t797 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<UintPtrT>>(t796)));
    USE(implicit_cast<TNode<IntPtrT>>(t797));
    TVARIABLE(IntPtrT, high_part_213_impl);
    auto high_part_213 = &high_part_213_impl;
    USE(high_part_213);
    *high_part_213 = implicit_cast<TNode<IntPtrT>>(t797);
    // ../src/builtins/data-view.tq:260:5
    TNode<UintPtrT> t798 = UncheckedCast<UintPtrT>(convert9ATuintptr(implicit_cast<TNode<Uint32T>>(p_low_word)));
    USE(implicit_cast<TNode<UintPtrT>>(t798));
    TNode<IntPtrT> t799 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<UintPtrT>>(t798)));
    USE(implicit_cast<TNode<IntPtrT>>(t799));
    TVARIABLE(IntPtrT, low_part_214_impl);
    auto low_part_214 = &low_part_214_impl;
    USE(low_part_214);
    *low_part_214 = implicit_cast<TNode<IntPtrT>>(t799);
    // ../src/builtins/data-view.tq:261:5
    int31_t t800 = 32;
    TNode<IntPtrT> t801 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t800)));
    TNode<IntPtrT> t802 = UncheckedCast<IntPtrT>(WordShl(implicit_cast<TNode<IntPtrT>>((*high_part_213).value()), implicit_cast<TNode<IntPtrT>>(t801)));
    USE(implicit_cast<TNode<IntPtrT>>(t802));
    TNode<IntPtrT> t803 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(t802), implicit_cast<TNode<IntPtrT>>((*low_part_214).value())));
    USE(implicit_cast<TNode<IntPtrT>>(t803));
    TVARIABLE(IntPtrT, raw_value_215_impl);
    auto raw_value_215 = &raw_value_215_impl;
    USE(raw_value_215);
    *raw_value_215 = implicit_cast<TNode<IntPtrT>>(t803);
    // ../src/builtins/data-view.tq:263:5
    {
      if ((implicit_cast<bool>(p_signed))) {
        // ../src/builtins/data-view.tq:263:27
        {
          // ../src/builtins/data-view.tq:264:7
          {
            Label label__True_251_impl(this);
            Label* label__True_251 = &label__True_251_impl;
            USE(label__True_251);
            Label label__False_252_impl(this, {is_positive_212, raw_value_215});
            Label* label__False_252 = &label__False_252_impl;
            USE(label__False_252);
            int31_t t804 = 0;
            TNode<IntPtrT> t805 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t804)));
            TNode<BoolT> t806 = UncheckedCast<BoolT>(IntPtrLessThan(implicit_cast<TNode<IntPtrT>>((*raw_value_215).value()), implicit_cast<TNode<IntPtrT>>(t805)));
            USE(implicit_cast<TNode<BoolT>>(t806));
            Branch(implicit_cast<TNode<BoolT>>(t806), label__True_251, label__False_252);
            if (label__True_251->is_used())
            {
              BIND(label__True_251);
              // ../src/builtins/data-view.tq:264:26
              {
                // ../src/builtins/data-view.tq:265:9
                TNode<BoolT> t807 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
                *is_positive_212 = implicit_cast<TNode<BoolT>>(t807);
                // ../src/builtins/data-view.tq:267:9
                int31_t t808 = 0;
                TNode<IntPtrT> t809 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t808)));
                TNode<IntPtrT> t810 = UncheckedCast<IntPtrT>(IntPtrSub(implicit_cast<TNode<IntPtrT>>(t809), implicit_cast<TNode<IntPtrT>>((*raw_value_215).value())));
                USE(implicit_cast<TNode<IntPtrT>>(t810));
                *raw_value_215 = implicit_cast<TNode<IntPtrT>>(t810);
              }
              Goto(label__False_252);
            }
            BIND(label__False_252);
          }
        }
      }
    }
    // ../src/builtins/data-view.tq:272:5
    TNode<BigInt> t811 = UncheckedCast<BigInt>(CreateEmptyBigInt(implicit_cast<TNode<BoolT>>((*is_positive_212).value()), implicit_cast<int31_t>(kOneDigitBigInt())));
    USE(implicit_cast<TNode<BigInt>>(t811));
    TVARIABLE(BigInt, result_216_impl);
    auto result_216 = &result_216_impl;
    USE(result_216);
    *result_216 = implicit_cast<TNode<BigInt>>(t811);
    // ../src/builtins/data-view.tq:274:5
    int31_t t812 = 0;
    TNode<UintPtrT> t813 = UncheckedCast<UintPtrT>(Unsigned(implicit_cast<TNode<IntPtrT>>((*raw_value_215).value())));
    USE(implicit_cast<TNode<UintPtrT>>(t813));
    StoreBigIntDigit(implicit_cast<TNode<BigInt>>((*result_216).value()), implicit_cast<int31_t>(t812), implicit_cast<TNode<UintPtrT>>(t813));
    // ../src/builtins/data-view.tq:276:5
    *_return_211 = implicit_cast<TNode<BigInt>>((*result_216).value());
    Goto(label_macro_end_806);
  }
  BIND(label_macro_end_806);
  return implicit_cast<TNode<BigInt>>((*_return_211).value());
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::MakeBigIntOn32Bit(TNode<Uint32T> p_low_word, TNode<Uint32T> p_high_word, bool p_signed) {
  TVARIABLE(BigInt, _return_217_impl);
  auto _return_217 = &_return_217_impl;
  USE(_return_217);
  Label label_macro_end_807_impl(this, {_return_217});
  Label* label_macro_end_807 = &label_macro_end_807_impl;
  USE(label_macro_end_807);
  // ../src/builtins/data-view.tq:281:59
  {
    // ../src/builtins/data-view.tq:284:5
    {
      Label label__True_253_impl(this);
      Label* label__True_253 = &label__True_253_impl;
      USE(label__True_253);
      Label label__False_254_impl(this, {});
      Label* label__False_254 = &label__False_254_impl;
      USE(label__False_254);
      Label label__True_255_impl(this);
      Label* label__True_255 = &label__True_255_impl;
      USE(label__True_255);
      int31_t t814 = 0;
      TNode<Uint32T> t815 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t814)));
      TNode<BoolT> t816 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Uint32T>>(p_low_word), implicit_cast<TNode<Uint32T>>(t815)));
      USE(implicit_cast<TNode<BoolT>>(t816));
      GotoIfNot(implicit_cast<TNode<BoolT>>(t816), label__False_254);
      int31_t t817 = 0;
      TNode<Uint32T> t818 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t817)));
      TNode<BoolT> t819 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<TNode<Uint32T>>(t818)));
      USE(implicit_cast<TNode<BoolT>>(t819));
      Branch(implicit_cast<TNode<BoolT>>(t819), label__True_253, label__False_254);
      if (label__True_253->is_used())
      {
        BIND(label__True_253);
        // ../src/builtins/data-view.tq:284:42
        {
          // ../src/builtins/data-view.tq:285:7
          TNode<IntPtrT> t820 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(kZeroDigitBigInt())));
          TNode<BigInt> t821 = UncheckedCast<BigInt>(AllocateBigInt(implicit_cast<TNode<IntPtrT>>(t820)));
          USE(implicit_cast<TNode<BigInt>>(t821));
          *_return_217 = implicit_cast<TNode<BigInt>>(t821);
          Goto(label_macro_end_807);
        }
      }
      BIND(label__False_254);
    }
    // ../src/builtins/data-view.tq:289:5
    TVARIABLE(BoolT, need_two_digits_218_impl);
    auto need_two_digits_218 = &need_two_digits_218_impl;
    USE(need_two_digits_218);
    TNode<BoolT> t822 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
    *need_two_digits_218 = implicit_cast<TNode<BoolT>>(t822);
    // ../src/builtins/data-view.tq:290:5
    TVARIABLE(BoolT, is_positive_219_impl);
    auto is_positive_219 = &is_positive_219_impl;
    USE(is_positive_219);
    TNode<BoolT> t823 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
    *is_positive_219 = implicit_cast<TNode<BoolT>>(t823);
    // ../src/builtins/data-view.tq:294:5
    TNode<Int32T> t824 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>(p_low_word)));
    USE(implicit_cast<TNode<Int32T>>(t824));
    TVARIABLE(Int32T, low_part_220_impl);
    auto low_part_220 = &low_part_220_impl;
    USE(low_part_220);
    *low_part_220 = implicit_cast<TNode<Int32T>>(t824);
    // ../src/builtins/data-view.tq:295:5
    TNode<Int32T> t825 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>(p_high_word)));
    USE(implicit_cast<TNode<Int32T>>(t825));
    TVARIABLE(Int32T, high_part_221_impl);
    auto high_part_221 = &high_part_221_impl;
    USE(high_part_221);
    *high_part_221 = implicit_cast<TNode<Int32T>>(t825);
    // ../src/builtins/data-view.tq:300:5
    {
      Label label__True_256_impl(this);
      Label* label__True_256 = &label__True_256_impl;
      USE(label__True_256);
      Label label__False_257_impl(this, {high_part_221, is_positive_219, low_part_220, need_two_digits_218});
      Label* label__False_257 = &label__False_257_impl;
      USE(label__False_257);
      int31_t t826 = 0;
      TNode<Uint32T> t827 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t826)));
      TNode<BoolT> t828 = UncheckedCast<BoolT>(Word32NotEqual(implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<TNode<Uint32T>>(t827)));
      USE(implicit_cast<TNode<BoolT>>(t828));
      Branch(implicit_cast<TNode<BoolT>>(t828), label__True_256, label__False_257);
      if (label__True_256->is_used())
      {
        BIND(label__True_256);
        // ../src/builtins/data-view.tq:300:25
        {
          // ../src/builtins/data-view.tq:301:7
          {
            if ((implicit_cast<bool>(p_signed))) {
              // ../src/builtins/data-view.tq:301:29
              {
                // ../src/builtins/data-view.tq:304:9
                {
                  Label label__True_260_impl(this);
                  Label* label__True_260 = &label__True_260_impl;
                  USE(label__True_260);
                  Label label__False_261_impl(this);
                  Label* label__False_261 = &label__False_261_impl;
                  USE(label__False_261);
                  Label label_if_done_label_539_808_impl(this, {high_part_221, is_positive_219, low_part_220, need_two_digits_218});
                  Label* label_if_done_label_539_808 = &label_if_done_label_539_808_impl;
                  USE(label_if_done_label_539_808);
                  int31_t t829 = 0;
                  TNode<Int32T> t830 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t829)));
                  TNode<BoolT> t831 = UncheckedCast<BoolT>(Int32LessThan(implicit_cast<TNode<Int32T>>((*high_part_221).value()), implicit_cast<TNode<Int32T>>(t830)));
                  USE(implicit_cast<TNode<BoolT>>(t831));
                  Branch(implicit_cast<TNode<BoolT>>(t831), label__True_260, label__False_261);
                  if (label__True_260->is_used())
                  {
                    BIND(label__True_260);
                    // ../src/builtins/data-view.tq:304:28
                    {
                      // ../src/builtins/data-view.tq:305:11
                      TNode<BoolT> t832 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
                      *is_positive_219 = implicit_cast<TNode<BoolT>>(t832);
                      // ../src/builtins/data-view.tq:310:11
                      int31_t t833 = 0;
                      TNode<Int32T> t834 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t833)));
                      TNode<Int32T> t835 = UncheckedCast<Int32T>(Int32Sub(implicit_cast<TNode<Int32T>>(t834), implicit_cast<TNode<Int32T>>((*high_part_221).value())));
                      USE(implicit_cast<TNode<Int32T>>(t835));
                      *high_part_221 = implicit_cast<TNode<Int32T>>(t835);
                      // ../src/builtins/data-view.tq:311:11
                      {
                        Label label__True_262_impl(this);
                        Label* label__True_262 = &label__True_262_impl;
                        USE(label__True_262);
                        Label label__False_263_impl(this, {high_part_221});
                        Label* label__False_263 = &label__False_263_impl;
                        USE(label__False_263);
                        int31_t t836 = 0;
                        TNode<Int32T> t837 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t836)));
                        TNode<BoolT> t838 = UncheckedCast<BoolT>(Word32NotEqual(implicit_cast<TNode<Int32T>>((*low_part_220).value()), implicit_cast<TNode<Int32T>>(t837)));
                        USE(implicit_cast<TNode<BoolT>>(t838));
                        Branch(implicit_cast<TNode<BoolT>>(t838), label__True_262, label__False_263);
                        if (label__True_262->is_used())
                        {
                          BIND(label__True_262);
                          // ../src/builtins/data-view.tq:311:30
                          {
                            // ../src/builtins/data-view.tq:312:13
                            int31_t t839 = 1;
                            TNode<Int32T> t840 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t839)));
                            TNode<Int32T> t841 = UncheckedCast<Int32T>(Int32Sub(implicit_cast<TNode<Int32T>>((*high_part_221).value()), implicit_cast<TNode<Int32T>>(t840)));
                            USE(implicit_cast<TNode<Int32T>>(t841));
                            *high_part_221 = implicit_cast<TNode<Int32T>>(t841);
                          }
                          Goto(label__False_263);
                        }
                        BIND(label__False_263);
                      }
                      // ../src/builtins/data-view.tq:314:11
                      int31_t t842 = 0;
                      TNode<Int32T> t843 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t842)));
                      TNode<Int32T> t844 = UncheckedCast<Int32T>(Int32Sub(implicit_cast<TNode<Int32T>>(t843), implicit_cast<TNode<Int32T>>((*low_part_220).value())));
                      USE(implicit_cast<TNode<Int32T>>(t844));
                      *low_part_220 = implicit_cast<TNode<Int32T>>(t844);
                      // ../src/builtins/data-view.tq:317:11
                      {
                        Label label__True_264_impl(this);
                        Label* label__True_264 = &label__True_264_impl;
                        USE(label__True_264);
                        Label label__False_265_impl(this, {need_two_digits_218});
                        Label* label__False_265 = &label__False_265_impl;
                        USE(label__False_265);
                        int31_t t845 = 0;
                        TNode<Int32T> t846 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t845)));
                        TNode<BoolT> t847 = UncheckedCast<BoolT>(Word32NotEqual(implicit_cast<TNode<Int32T>>((*high_part_221).value()), implicit_cast<TNode<Int32T>>(t846)));
                        USE(implicit_cast<TNode<BoolT>>(t847));
                        Branch(implicit_cast<TNode<BoolT>>(t847), label__True_264, label__False_265);
                        if (label__True_264->is_used())
                        {
                          BIND(label__True_264);
                          // ../src/builtins/data-view.tq:317:31
                          {
                            // ../src/builtins/data-view.tq:318:13
                            TNode<BoolT> t848 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
                            *need_two_digits_218 = implicit_cast<TNode<BoolT>>(t848);
                          }
                          Goto(label__False_265);
                        }
                        BIND(label__False_265);
                      }
                    }
                    Goto(label_if_done_label_539_808);
                  }
                  if (label__False_261->is_used())
                  {
                    BIND(label__False_261);
                    // ../src/builtins/data-view.tq:321:16
                    {
                      // ../src/builtins/data-view.tq:323:11
                      TNode<BoolT> t849 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
                      *need_two_digits_218 = implicit_cast<TNode<BoolT>>(t849);
                    }
                    Goto(label_if_done_label_539_808);
                  }
                  BIND(label_if_done_label_539_808);
                }
              }
            } else {
              // ../src/builtins/data-view.tq:326:14
              {
                // ../src/builtins/data-view.tq:329:9
                TNode<BoolT> t850 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
                *need_two_digits_218 = implicit_cast<TNode<BoolT>>(t850);
              }
            }
          }
        }
        Goto(label__False_257);
      }
      BIND(label__False_257);
    }
    // ../src/builtins/data-view.tq:334:5
    TVARIABLE(BigInt, result_222_impl);
    auto result_222 = &result_222_impl;
    USE(result_222);
    // ../src/builtins/data-view.tq:335:5
    {
      Label label__True_266_impl(this);
      Label* label__True_266 = &label__True_266_impl;
      USE(label__True_266);
      Label label__False_267_impl(this);
      Label* label__False_267 = &label__False_267_impl;
      USE(label__False_267);
      Label label_if_done_label_540_809_impl(this, {result_222});
      Label* label_if_done_label_540_809 = &label_if_done_label_540_809_impl;
      USE(label_if_done_label_540_809);
      Branch(implicit_cast<TNode<BoolT>>((*need_two_digits_218).value()), label__True_266, label__False_267);
      if (label__True_266->is_used())
      {
        BIND(label__True_266);
        // ../src/builtins/data-view.tq:335:26
        {
          // ../src/builtins/data-view.tq:336:7
          TNode<BigInt> t851 = UncheckedCast<BigInt>(CreateEmptyBigInt(implicit_cast<TNode<BoolT>>((*is_positive_219).value()), implicit_cast<int31_t>(kTwoDigitBigInt())));
          USE(implicit_cast<TNode<BigInt>>(t851));
          *result_222 = implicit_cast<TNode<BigInt>>(t851);
        }
        Goto(label_if_done_label_540_809);
      }
      if (label__False_267->is_used())
      {
        BIND(label__False_267);
        // ../src/builtins/data-view.tq:337:12
        {
          // ../src/builtins/data-view.tq:338:7
          TNode<BigInt> t852 = UncheckedCast<BigInt>(CreateEmptyBigInt(implicit_cast<TNode<BoolT>>((*is_positive_219).value()), implicit_cast<int31_t>(kOneDigitBigInt())));
          USE(implicit_cast<TNode<BigInt>>(t852));
          *result_222 = implicit_cast<TNode<BigInt>>(t852);
        }
        Goto(label_if_done_label_540_809);
      }
      BIND(label_if_done_label_540_809);
    }
    // ../src/builtins/data-view.tq:342:5
    int31_t t853 = 0;
    TNode<IntPtrT> t854 = UncheckedCast<IntPtrT>(convert8ATintptr(implicit_cast<TNode<Int32T>>((*low_part_220).value())));
    USE(implicit_cast<TNode<IntPtrT>>(t854));
    TNode<UintPtrT> t855 = UncheckedCast<UintPtrT>(Unsigned(implicit_cast<TNode<IntPtrT>>(t854)));
    USE(implicit_cast<TNode<UintPtrT>>(t855));
    StoreBigIntDigit(implicit_cast<TNode<BigInt>>((*result_222).value()), implicit_cast<int31_t>(t853), implicit_cast<TNode<UintPtrT>>(t855));
    // ../src/builtins/data-view.tq:344:5
    {
      Label label__True_268_impl(this);
      Label* label__True_268 = &label__True_268_impl;
      USE(label__True_268);
      Label label__False_269_impl(this, {});
      Label* label__False_269 = &label__False_269_impl;
      USE(label__False_269);
      Branch(implicit_cast<TNode<BoolT>>((*need_two_digits_218).value()), label__True_268, label__False_269);
      if (label__True_268->is_used())
      {
        BIND(label__True_268);
        // ../src/builtins/data-view.tq:344:26
        {
          // ../src/builtins/data-view.tq:345:7
          int31_t t856 = 1;
          TNode<IntPtrT> t857 = UncheckedCast<IntPtrT>(convert8ATintptr(implicit_cast<TNode<Int32T>>((*high_part_221).value())));
          USE(implicit_cast<TNode<IntPtrT>>(t857));
          TNode<UintPtrT> t858 = UncheckedCast<UintPtrT>(Unsigned(implicit_cast<TNode<IntPtrT>>(t857)));
          USE(implicit_cast<TNode<UintPtrT>>(t858));
          StoreBigIntDigit(implicit_cast<TNode<BigInt>>((*result_222).value()), implicit_cast<int31_t>(t856), implicit_cast<TNode<UintPtrT>>(t858));
        }
        Goto(label__False_269);
      }
      BIND(label__False_269);
    }
    // ../src/builtins/data-view.tq:348:5
    *_return_217 = implicit_cast<TNode<BigInt>>((*result_222).value());
    Goto(label_macro_end_807);
  }
  BIND(label_macro_end_807);
  return implicit_cast<TNode<BigInt>>((*_return_217).value());
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::MakeBigInt(TNode<Uint32T> p_low_word, TNode<Uint32T> p_high_word, bool p_signed) {
  TVARIABLE(BigInt, _return_223_impl);
  auto _return_223 = &_return_223_impl;
  USE(_return_223);
  Label label_macro_end_810_impl(this, {_return_223});
  Label* label_macro_end_810 = &label_macro_end_810_impl;
  USE(label_macro_end_810);
  // ../src/builtins/data-view.tq:352:52
  {
    // ../src/builtins/data-view.tq:355:5
    {
      bool t859 = Is64();
      USE(implicit_cast<bool>(t859));
      if ((implicit_cast<bool>(t859))) {
        // ../src/builtins/data-view.tq:355:27
        {
          // ../src/builtins/data-view.tq:356:7
          TNode<BigInt> t860 = UncheckedCast<BigInt>(MakeBigIntOn64Bit(implicit_cast<TNode<Uint32T>>(p_low_word), implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<bool>(p_signed)));
          USE(implicit_cast<TNode<BigInt>>(t860));
          *_return_223 = implicit_cast<TNode<BigInt>>(t860);
          Goto(label_macro_end_810);
        }
      } else {
        // ../src/builtins/data-view.tq:357:12
        {
          // ../src/builtins/data-view.tq:358:7
          TNode<BigInt> t861 = UncheckedCast<BigInt>(MakeBigIntOn32Bit(implicit_cast<TNode<Uint32T>>(p_low_word), implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<bool>(p_signed)));
          USE(implicit_cast<TNode<BigInt>>(t861));
          *_return_223 = implicit_cast<TNode<BigInt>>(t861);
          Goto(label_macro_end_810);
        }
      }
    }
  }
  BIND(label_macro_end_810);
  return implicit_cast<TNode<BigInt>>((*_return_223).value());
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::LoadDataViewBigInt(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BoolT> p_requested_little_endian, bool p_signed) {
  TVARIABLE(BigInt, _return_224_impl);
  auto _return_224 = &_return_224_impl;
  USE(_return_224);
  Label label_macro_end_811_impl(this, {_return_224});
  Label* label_macro_end_811 = &label_macro_end_811_impl;
  USE(label_macro_end_811);
  // ../src/builtins/data-view.tq:364:60
  {
    // ../src/builtins/data-view.tq:365:5
    TNode<RawPtrT> t862 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, data_pointer_225_impl);
    auto data_pointer_225 = &data_pointer_225_impl;
    USE(data_pointer_225);
    *data_pointer_225 = implicit_cast<TNode<RawPtrT>>(t862);
    // ../src/builtins/data-view.tq:367:5
    TNode<Uint32T> t863 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_225).value()), implicit_cast<TNode<IntPtrT>>(p_offset)));
    USE(implicit_cast<TNode<Uint32T>>(t863));
    TVARIABLE(Uint32T, b0_226_impl);
    auto b0_226 = &b0_226_impl;
    USE(b0_226);
    *b0_226 = implicit_cast<TNode<Uint32T>>(t863);
    // ../src/builtins/data-view.tq:368:5
    int31_t t864 = 1;
    TNode<IntPtrT> t865 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t864)));
    TNode<IntPtrT> t866 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t865)));
    USE(implicit_cast<TNode<IntPtrT>>(t866));
    TNode<Uint32T> t867 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_225).value()), implicit_cast<TNode<IntPtrT>>(t866)));
    USE(implicit_cast<TNode<Uint32T>>(t867));
    TVARIABLE(Uint32T, b1_227_impl);
    auto b1_227 = &b1_227_impl;
    USE(b1_227);
    *b1_227 = implicit_cast<TNode<Uint32T>>(t867);
    // ../src/builtins/data-view.tq:369:5
    int31_t t868 = 2;
    TNode<IntPtrT> t869 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t868)));
    TNode<IntPtrT> t870 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t869)));
    USE(implicit_cast<TNode<IntPtrT>>(t870));
    TNode<Uint32T> t871 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_225).value()), implicit_cast<TNode<IntPtrT>>(t870)));
    USE(implicit_cast<TNode<Uint32T>>(t871));
    TVARIABLE(Uint32T, b2_228_impl);
    auto b2_228 = &b2_228_impl;
    USE(b2_228);
    *b2_228 = implicit_cast<TNode<Uint32T>>(t871);
    // ../src/builtins/data-view.tq:370:5
    int31_t t872 = 3;
    TNode<IntPtrT> t873 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t872)));
    TNode<IntPtrT> t874 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t873)));
    USE(implicit_cast<TNode<IntPtrT>>(t874));
    TNode<Uint32T> t875 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_225).value()), implicit_cast<TNode<IntPtrT>>(t874)));
    USE(implicit_cast<TNode<Uint32T>>(t875));
    TVARIABLE(Uint32T, b3_229_impl);
    auto b3_229 = &b3_229_impl;
    USE(b3_229);
    *b3_229 = implicit_cast<TNode<Uint32T>>(t875);
    // ../src/builtins/data-view.tq:371:5
    int31_t t876 = 4;
    TNode<IntPtrT> t877 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t876)));
    TNode<IntPtrT> t878 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t877)));
    USE(implicit_cast<TNode<IntPtrT>>(t878));
    TNode<Uint32T> t879 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_225).value()), implicit_cast<TNode<IntPtrT>>(t878)));
    USE(implicit_cast<TNode<Uint32T>>(t879));
    TVARIABLE(Uint32T, b4_230_impl);
    auto b4_230 = &b4_230_impl;
    USE(b4_230);
    *b4_230 = implicit_cast<TNode<Uint32T>>(t879);
    // ../src/builtins/data-view.tq:372:5
    int31_t t880 = 5;
    TNode<IntPtrT> t881 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t880)));
    TNode<IntPtrT> t882 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t881)));
    USE(implicit_cast<TNode<IntPtrT>>(t882));
    TNode<Uint32T> t883 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_225).value()), implicit_cast<TNode<IntPtrT>>(t882)));
    USE(implicit_cast<TNode<Uint32T>>(t883));
    TVARIABLE(Uint32T, b5_231_impl);
    auto b5_231 = &b5_231_impl;
    USE(b5_231);
    *b5_231 = implicit_cast<TNode<Uint32T>>(t883);
    // ../src/builtins/data-view.tq:373:5
    int31_t t884 = 6;
    TNode<IntPtrT> t885 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t884)));
    TNode<IntPtrT> t886 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t885)));
    USE(implicit_cast<TNode<IntPtrT>>(t886));
    TNode<Uint32T> t887 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_225).value()), implicit_cast<TNode<IntPtrT>>(t886)));
    USE(implicit_cast<TNode<Uint32T>>(t887));
    TVARIABLE(Uint32T, b6_232_impl);
    auto b6_232 = &b6_232_impl;
    USE(b6_232);
    *b6_232 = implicit_cast<TNode<Uint32T>>(t887);
    // ../src/builtins/data-view.tq:374:5
    int31_t t888 = 7;
    TNode<IntPtrT> t889 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t888)));
    TNode<IntPtrT> t890 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t889)));
    USE(implicit_cast<TNode<IntPtrT>>(t890));
    TNode<Uint32T> t891 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_225).value()), implicit_cast<TNode<IntPtrT>>(t890)));
    USE(implicit_cast<TNode<Uint32T>>(t891));
    TVARIABLE(Uint32T, b7_233_impl);
    auto b7_233 = &b7_233_impl;
    USE(b7_233);
    *b7_233 = implicit_cast<TNode<Uint32T>>(t891);
    // ../src/builtins/data-view.tq:375:5
    TVARIABLE(Uint32T, low_word_234_impl);
    auto low_word_234 = &low_word_234_impl;
    USE(low_word_234);
    // ../src/builtins/data-view.tq:376:5
    TVARIABLE(Uint32T, high_word_235_impl);
    auto high_word_235 = &high_word_235_impl;
    USE(high_word_235);
    // ../src/builtins/data-view.tq:378:5
    {
      Label label__True_272_impl(this);
      Label* label__True_272 = &label__True_272_impl;
      USE(label__True_272);
      Label label__False_273_impl(this);
      Label* label__False_273 = &label__False_273_impl;
      USE(label__False_273);
      Label label_if_done_label_541_812_impl(this, {high_word_235, low_word_234});
      Label* label_if_done_label_541_812 = &label_if_done_label_541_812_impl;
      USE(label_if_done_label_541_812);
      Branch(implicit_cast<TNode<BoolT>>(p_requested_little_endian), label__True_272, label__False_273);
      if (label__True_272->is_used())
      {
        BIND(label__True_272);
        // ../src/builtins/data-view.tq:378:34
        {
          // ../src/builtins/data-view.tq:379:7
          int31_t t892 = 24;
          TNode<Uint32T> t893 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t892)));
          TNode<Uint32T> t894 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b3_229).value()), implicit_cast<TNode<Uint32T>>(t893)));
          USE(implicit_cast<TNode<Uint32T>>(t894));
          int31_t t895 = 16;
          TNode<Uint32T> t896 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t895)));
          TNode<Uint32T> t897 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b2_228).value()), implicit_cast<TNode<Uint32T>>(t896)));
          USE(implicit_cast<TNode<Uint32T>>(t897));
          TNode<Uint32T> t898 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t894), implicit_cast<TNode<Uint32T>>(t897)));
          USE(implicit_cast<TNode<Uint32T>>(t898));
          int31_t t899 = 8;
          TNode<Uint32T> t900 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t899)));
          TNode<Uint32T> t901 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b1_227).value()), implicit_cast<TNode<Uint32T>>(t900)));
          USE(implicit_cast<TNode<Uint32T>>(t901));
          TNode<Uint32T> t902 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t898), implicit_cast<TNode<Uint32T>>(t901)));
          USE(implicit_cast<TNode<Uint32T>>(t902));
          TNode<Uint32T> t903 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t902), implicit_cast<TNode<Uint32T>>((*b0_226).value())));
          USE(implicit_cast<TNode<Uint32T>>(t903));
          *low_word_234 = implicit_cast<TNode<Uint32T>>(t903);
          // ../src/builtins/data-view.tq:380:7
          int31_t t904 = 24;
          TNode<Uint32T> t905 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t904)));
          TNode<Uint32T> t906 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b7_233).value()), implicit_cast<TNode<Uint32T>>(t905)));
          USE(implicit_cast<TNode<Uint32T>>(t906));
          int31_t t907 = 16;
          TNode<Uint32T> t908 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t907)));
          TNode<Uint32T> t909 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b6_232).value()), implicit_cast<TNode<Uint32T>>(t908)));
          USE(implicit_cast<TNode<Uint32T>>(t909));
          TNode<Uint32T> t910 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t906), implicit_cast<TNode<Uint32T>>(t909)));
          USE(implicit_cast<TNode<Uint32T>>(t910));
          int31_t t911 = 8;
          TNode<Uint32T> t912 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t911)));
          TNode<Uint32T> t913 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b5_231).value()), implicit_cast<TNode<Uint32T>>(t912)));
          USE(implicit_cast<TNode<Uint32T>>(t913));
          TNode<Uint32T> t914 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t910), implicit_cast<TNode<Uint32T>>(t913)));
          USE(implicit_cast<TNode<Uint32T>>(t914));
          TNode<Uint32T> t915 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t914), implicit_cast<TNode<Uint32T>>((*b4_230).value())));
          USE(implicit_cast<TNode<Uint32T>>(t915));
          *high_word_235 = implicit_cast<TNode<Uint32T>>(t915);
        }
        Goto(label_if_done_label_541_812);
      }
      if (label__False_273->is_used())
      {
        BIND(label__False_273);
        // ../src/builtins/data-view.tq:381:12
        {
          // ../src/builtins/data-view.tq:382:7
          int31_t t916 = 24;
          TNode<Uint32T> t917 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t916)));
          TNode<Uint32T> t918 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b0_226).value()), implicit_cast<TNode<Uint32T>>(t917)));
          USE(implicit_cast<TNode<Uint32T>>(t918));
          int31_t t919 = 16;
          TNode<Uint32T> t920 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t919)));
          TNode<Uint32T> t921 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b1_227).value()), implicit_cast<TNode<Uint32T>>(t920)));
          USE(implicit_cast<TNode<Uint32T>>(t921));
          TNode<Uint32T> t922 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t918), implicit_cast<TNode<Uint32T>>(t921)));
          USE(implicit_cast<TNode<Uint32T>>(t922));
          int31_t t923 = 8;
          TNode<Uint32T> t924 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t923)));
          TNode<Uint32T> t925 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b2_228).value()), implicit_cast<TNode<Uint32T>>(t924)));
          USE(implicit_cast<TNode<Uint32T>>(t925));
          TNode<Uint32T> t926 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t922), implicit_cast<TNode<Uint32T>>(t925)));
          USE(implicit_cast<TNode<Uint32T>>(t926));
          TNode<Uint32T> t927 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t926), implicit_cast<TNode<Uint32T>>((*b3_229).value())));
          USE(implicit_cast<TNode<Uint32T>>(t927));
          *high_word_235 = implicit_cast<TNode<Uint32T>>(t927);
          // ../src/builtins/data-view.tq:383:7
          int31_t t928 = 24;
          TNode<Uint32T> t929 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t928)));
          TNode<Uint32T> t930 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b4_230).value()), implicit_cast<TNode<Uint32T>>(t929)));
          USE(implicit_cast<TNode<Uint32T>>(t930));
          int31_t t931 = 16;
          TNode<Uint32T> t932 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t931)));
          TNode<Uint32T> t933 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b5_231).value()), implicit_cast<TNode<Uint32T>>(t932)));
          USE(implicit_cast<TNode<Uint32T>>(t933));
          TNode<Uint32T> t934 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t930), implicit_cast<TNode<Uint32T>>(t933)));
          USE(implicit_cast<TNode<Uint32T>>(t934));
          int31_t t935 = 8;
          TNode<Uint32T> t936 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t935)));
          TNode<Uint32T> t937 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b6_232).value()), implicit_cast<TNode<Uint32T>>(t936)));
          USE(implicit_cast<TNode<Uint32T>>(t937));
          TNode<Uint32T> t938 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t934), implicit_cast<TNode<Uint32T>>(t937)));
          USE(implicit_cast<TNode<Uint32T>>(t938));
          TNode<Uint32T> t939 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t938), implicit_cast<TNode<Uint32T>>((*b7_233).value())));
          USE(implicit_cast<TNode<Uint32T>>(t939));
          *low_word_234 = implicit_cast<TNode<Uint32T>>(t939);
        }
        Goto(label_if_done_label_541_812);
      }
      BIND(label_if_done_label_541_812);
    }
    // ../src/builtins/data-view.tq:386:5
    TNode<BigInt> t940 = UncheckedCast<BigInt>(MakeBigInt(implicit_cast<TNode<Uint32T>>((*low_word_234).value()), implicit_cast<TNode<Uint32T>>((*high_word_235).value()), implicit_cast<bool>(p_signed)));
    USE(implicit_cast<TNode<BigInt>>(t940));
    *_return_224 = implicit_cast<TNode<BigInt>>(t940);
    Goto(label_macro_end_811);
  }
  BIND(label_macro_end_811);
  return implicit_cast<TNode<BigInt>>((*_return_224).value());
}

compiler::TNode<Numeric> DataViewBuiltinsFromDSLAssembler::DataViewGet(TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_offset, TNode<Object> p_requested_little_endian, ElementsKind p_kind) {
  TVARIABLE(Numeric, _return_236_impl);
  auto _return_236 = &_return_236_impl;
  USE(_return_236);
  Label label_macro_end_813_impl(this, {_return_236});
  Label* label_macro_end_813 = &label_macro_end_813_impl;
  USE(label_macro_end_813);
  // ../src/builtins/data-view.tq:396:60
  {
    // ../src/builtins/data-view.tq:398:5
    TNode<String> t941 = UncheckedCast<String>(MakeDataViewGetterNameString(implicit_cast<ElementsKind>(p_kind)));
    USE(implicit_cast<TNode<String>>(t941));
    TNode<JSDataView> t942 = UncheckedCast<JSDataView>(ValidateDataView(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<String>>(t941)));
    USE(implicit_cast<TNode<JSDataView>>(t942));
    TVARIABLE(JSDataView, data_view_237_impl);
    auto data_view_237 = &data_view_237_impl;
    USE(data_view_237);
    *data_view_237 = implicit_cast<TNode<JSDataView>>(t942);
    // ../src/builtins/data-view.tq:401:5
    TVARIABLE(Number, getIndex_238_impl);
    auto getIndex_238 = &getIndex_238_impl;
    USE(getIndex_238);
    // ../src/builtins/data-view.tq:402:5
    {
      Label label_try_done_542_814_impl(this);
      Label* label_try_done_542_814 = &label_try_done_542_814_impl;
      USE(label_try_done_542_814);
      Label label_RangeError_274_impl(this);
      Label* label_RangeError_274 = &label_RangeError_274_impl;
      USE(label_RangeError_274);
      Label label_try_begin_543_815_impl(this);
      Label* label_try_begin_543_815 = &label_try_begin_543_815_impl;
      USE(label_try_begin_543_815);
      Goto(label_try_begin_543_815);
      if (label_try_begin_543_815->is_used())
      {
        BIND(label_try_begin_543_815);
        // ../src/builtins/data-view.tq:402:9
        {
          // ../src/builtins/data-view.tq:403:7
          TNode<Number> t943 = UncheckedCast<Number>(ToIndex(implicit_cast<TNode<Object>>(p_offset), implicit_cast<TNode<Context>>(p_context), label_RangeError_274));
          USE(implicit_cast<TNode<Number>>(t943));
          *getIndex_238 = implicit_cast<TNode<Number>>(t943);
        }
        Goto(label_try_done_542_814);
      }
      if (label_RangeError_274->is_used())
      {
        BIND(label_RangeError_274);
        // ../src/builtins/data-view.tq:405:22
        {
          // ../src/builtins/data-view.tq:406:7
          ThrowRangeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kInvalidDataViewAccessorOffset));
        }
      }
      BIND(label_try_done_542_814);
    }
    // ../src/builtins/data-view.tq:409:5
    TNode<BoolT> t944 = UncheckedCast<BoolT>(ToBoolean(implicit_cast<TNode<Object>>(p_requested_little_endian)));
    USE(implicit_cast<TNode<BoolT>>(t944));
    TVARIABLE(BoolT, littleEndian_239_impl);
    auto littleEndian_239 = &littleEndian_239_impl;
    USE(littleEndian_239);
    *littleEndian_239 = implicit_cast<TNode<BoolT>>(t944);
    // ../src/builtins/data-view.tq:410:5
    TNode<JSArrayBuffer> t945 = UncheckedCast<JSArrayBuffer>(LoadArrayBufferViewBuffer(implicit_cast<TNode<JSArrayBufferView>>((*data_view_237).value())));
    TVARIABLE(JSArrayBuffer, buffer_240_impl);
    auto buffer_240 = &buffer_240_impl;
    USE(buffer_240);
    *buffer_240 = implicit_cast<TNode<JSArrayBuffer>>(t945);
    // ../src/builtins/data-view.tq:412:5
    {
      Label label__True_275_impl(this);
      Label* label__True_275 = &label__True_275_impl;
      USE(label__True_275);
      Label label__False_276_impl(this, {});
      Label* label__False_276 = &label__False_276_impl;
      USE(label__False_276);
      TNode<BoolT> t946 = UncheckedCast<BoolT>(IsDetachedBuffer(implicit_cast<TNode<JSArrayBuffer>>((*buffer_240).value())));
      USE(implicit_cast<TNode<BoolT>>(t946));
      Branch(implicit_cast<TNode<BoolT>>(t946), label__True_275, label__False_276);
      if (label__True_275->is_used())
      {
        BIND(label__True_275);
        // ../src/builtins/data-view.tq:412:35
        {
          // ../src/builtins/data-view.tq:413:7
          TNode<String> t947 = UncheckedCast<String>(MakeDataViewGetterNameString(implicit_cast<ElementsKind>(p_kind)));
          USE(implicit_cast<TNode<String>>(t947));
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kDetachedOperation), implicit_cast<TNode<Object>>(t947));
        }
      }
      BIND(label__False_276);
    }
    // ../src/builtins/data-view.tq:417:5
    TNode<Number> t948 = UncheckedCast<Number>(LoadDataViewByteOffset(implicit_cast<TNode<JSDataView>>((*data_view_237).value())));
    TVARIABLE(Number, viewOffset_241_impl);
    auto viewOffset_241 = &viewOffset_241_impl;
    USE(viewOffset_241);
    *viewOffset_241 = implicit_cast<TNode<Number>>(t948);
    // ../src/builtins/data-view.tq:418:5
    TNode<Number> t949 = UncheckedCast<Number>(LoadDataViewByteLength(implicit_cast<TNode<JSDataView>>((*data_view_237).value())));
    TVARIABLE(Number, viewSize_242_impl);
    auto viewSize_242 = &viewSize_242_impl;
    USE(viewSize_242);
    *viewSize_242 = implicit_cast<TNode<Number>>(t949);
    // ../src/builtins/data-view.tq:419:5
    int31_t t950 = DataViewElementSize(implicit_cast<ElementsKind>(p_kind));
    USE(implicit_cast<int31_t>(t950));
    TVARIABLE(Number, elementSize_243_impl);
    auto elementSize_243 = &elementSize_243_impl;
    USE(elementSize_243);
    TNode<Number> t951 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t950)));
    *elementSize_243 = implicit_cast<TNode<Number>>(t951);
    // ../src/builtins/data-view.tq:421:5
    {
      Label label__True_277_impl(this);
      Label* label__True_277 = &label__True_277_impl;
      USE(label__True_277);
      Label label__False_278_impl(this, {});
      Label* label__False_278 = &label__False_278_impl;
      USE(label__False_278);
      TNode<Number> t952 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*getIndex_238).value()), implicit_cast<TNode<Number>>((*elementSize_243).value())));
      USE(implicit_cast<TNode<Number>>(t952));
      BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>(t952), implicit_cast<TNode<Number>>((*viewSize_242).value()), label__True_277, label__False_278);
      if (label__True_277->is_used())
      {
        BIND(label__True_277);
        // ../src/builtins/data-view.tq:421:44
        {
          // ../src/builtins/data-view.tq:422:7
          ThrowRangeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kInvalidDataViewAccessorOffset));
        }
      }
      BIND(label__False_278);
    }
    // ../src/builtins/data-view.tq:425:5
    TNode<Float64T> t953 = UncheckedCast<Float64T>(convert9ATfloat64(implicit_cast<TNode<Number>>((*getIndex_238).value())));
    USE(implicit_cast<TNode<Float64T>>(t953));
    TVARIABLE(Float64T, getIndexFloat_244_impl);
    auto getIndexFloat_244 = &getIndexFloat_244_impl;
    USE(getIndexFloat_244);
    *getIndexFloat_244 = implicit_cast<TNode<Float64T>>(t953);
    // ../src/builtins/data-view.tq:426:5
    TNode<UintPtrT> t954 = UncheckedCast<UintPtrT>(convert9ATuintptr(implicit_cast<TNode<Float64T>>((*getIndexFloat_244).value())));
    USE(implicit_cast<TNode<UintPtrT>>(t954));
    TNode<IntPtrT> t955 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<UintPtrT>>(t954)));
    USE(implicit_cast<TNode<IntPtrT>>(t955));
    TVARIABLE(IntPtrT, getIndexIntptr_245_impl);
    auto getIndexIntptr_245 = &getIndexIntptr_245_impl;
    USE(getIndexIntptr_245);
    *getIndexIntptr_245 = implicit_cast<TNode<IntPtrT>>(t955);
    // ../src/builtins/data-view.tq:427:5
    TNode<Float64T> t956 = UncheckedCast<Float64T>(convert9ATfloat64(implicit_cast<TNode<Number>>((*viewOffset_241).value())));
    USE(implicit_cast<TNode<Float64T>>(t956));
    TVARIABLE(Float64T, viewOffsetFloat_246_impl);
    auto viewOffsetFloat_246 = &viewOffsetFloat_246_impl;
    USE(viewOffsetFloat_246);
    *viewOffsetFloat_246 = implicit_cast<TNode<Float64T>>(t956);
    // ../src/builtins/data-view.tq:428:5
    TNode<UintPtrT> t957 = UncheckedCast<UintPtrT>(convert9ATuintptr(implicit_cast<TNode<Float64T>>((*viewOffsetFloat_246).value())));
    USE(implicit_cast<TNode<UintPtrT>>(t957));
    TNode<IntPtrT> t958 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<UintPtrT>>(t957)));
    USE(implicit_cast<TNode<IntPtrT>>(t958));
    TVARIABLE(IntPtrT, viewOffsetIntptr_247_impl);
    auto viewOffsetIntptr_247 = &viewOffsetIntptr_247_impl;
    USE(viewOffsetIntptr_247);
    *viewOffsetIntptr_247 = implicit_cast<TNode<IntPtrT>>(t958);
    // ../src/builtins/data-view.tq:430:5
    TNode<IntPtrT> t959 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>((*getIndexIntptr_245).value()), implicit_cast<TNode<IntPtrT>>((*viewOffsetIntptr_247).value())));
    USE(implicit_cast<TNode<IntPtrT>>(t959));
    TVARIABLE(IntPtrT, bufferIndex_248_impl);
    auto bufferIndex_248 = &bufferIndex_248_impl;
    USE(bufferIndex_248);
    *bufferIndex_248 = implicit_cast<TNode<IntPtrT>>(t959);
    // ../src/builtins/data-view.tq:432:5
    {
      bool t960 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
      USE(implicit_cast<bool>(t960));
      if ((implicit_cast<bool>(t960))) {
        // ../src/builtins/data-view.tq:432:43
        {
          // ../src/builtins/data-view.tq:433:7
          TNode<Smi> t961 = UncheckedCast<Smi>(LoadDataView8(implicit_cast<TNode<JSArrayBuffer>>((*buffer_240).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_248).value()), implicit_cast<bool>(false)));
          USE(implicit_cast<TNode<Smi>>(t961));
          *_return_236 = implicit_cast<TNode<Numeric>>(t961);
          Goto(label_macro_end_813);
        }
      } else {
        // ../src/builtins/data-view.tq:434:12
        {
          bool t962 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT8_ELEMENTS));
          USE(implicit_cast<bool>(t962));
          if ((implicit_cast<bool>(t962))) {
            // ../src/builtins/data-view.tq:434:49
            {
              // ../src/builtins/data-view.tq:435:7
              TNode<Smi> t963 = UncheckedCast<Smi>(LoadDataView8(implicit_cast<TNode<JSArrayBuffer>>((*buffer_240).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_248).value()), implicit_cast<bool>(true)));
              USE(implicit_cast<TNode<Smi>>(t963));
              *_return_236 = implicit_cast<TNode<Numeric>>(t963);
              Goto(label_macro_end_813);
            }
          } else {
            // ../src/builtins/data-view.tq:436:12
            {
              bool t964 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
              USE(implicit_cast<bool>(t964));
              if ((implicit_cast<bool>(t964))) {
                // ../src/builtins/data-view.tq:436:51
                {
                  // ../src/builtins/data-view.tq:437:7
                  TNode<Number> t965 = UncheckedCast<Number>(LoadDataView16(implicit_cast<TNode<JSArrayBuffer>>((*buffer_240).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_248).value()), implicit_cast<TNode<BoolT>>((*littleEndian_239).value()), implicit_cast<bool>(false)));
                  USE(implicit_cast<TNode<Number>>(t965));
                  *_return_236 = implicit_cast<TNode<Numeric>>(t965);
                  Goto(label_macro_end_813);
                }
              } else {
                // ../src/builtins/data-view.tq:438:12
                {
                  bool t966 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT16_ELEMENTS));
                  USE(implicit_cast<bool>(t966));
                  if ((implicit_cast<bool>(t966))) {
                    // ../src/builtins/data-view.tq:438:50
                    {
                      // ../src/builtins/data-view.tq:439:7
                      TNode<Number> t967 = UncheckedCast<Number>(LoadDataView16(implicit_cast<TNode<JSArrayBuffer>>((*buffer_240).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_248).value()), implicit_cast<TNode<BoolT>>((*littleEndian_239).value()), implicit_cast<bool>(true)));
                      USE(implicit_cast<TNode<Number>>(t967));
                      *_return_236 = implicit_cast<TNode<Numeric>>(t967);
                      Goto(label_macro_end_813);
                    }
                  } else {
                    // ../src/builtins/data-view.tq:440:12
                    {
                      bool t968 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT32_ELEMENTS));
                      USE(implicit_cast<bool>(t968));
                      if ((implicit_cast<bool>(t968))) {
                        // ../src/builtins/data-view.tq:440:51
                        {
                          // ../src/builtins/data-view.tq:441:7
                          TNode<Number> t969 = UncheckedCast<Number>(LoadDataView32(implicit_cast<TNode<JSArrayBuffer>>((*buffer_240).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_248).value()), implicit_cast<TNode<BoolT>>((*littleEndian_239).value()), implicit_cast<ElementsKind>(p_kind)));
                          USE(implicit_cast<TNode<Number>>(t969));
                          *_return_236 = implicit_cast<TNode<Numeric>>(t969);
                          Goto(label_macro_end_813);
                        }
                      } else {
                        // ../src/builtins/data-view.tq:442:12
                        {
                          bool t970 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT32_ELEMENTS));
                          USE(implicit_cast<bool>(t970));
                          if ((implicit_cast<bool>(t970))) {
                            // ../src/builtins/data-view.tq:442:50
                            {
                              // ../src/builtins/data-view.tq:443:7
                              TNode<Number> t971 = UncheckedCast<Number>(LoadDataView32(implicit_cast<TNode<JSArrayBuffer>>((*buffer_240).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_248).value()), implicit_cast<TNode<BoolT>>((*littleEndian_239).value()), implicit_cast<ElementsKind>(p_kind)));
                              USE(implicit_cast<TNode<Number>>(t971));
                              *_return_236 = implicit_cast<TNode<Numeric>>(t971);
                              Goto(label_macro_end_813);
                            }
                          } else {
                            // ../src/builtins/data-view.tq:444:12
                            {
                              bool t972 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS));
                              USE(implicit_cast<bool>(t972));
                              if ((implicit_cast<bool>(t972))) {
                                // ../src/builtins/data-view.tq:444:52
                                {
                                  // ../src/builtins/data-view.tq:445:7
                                  TNode<Number> t973 = UncheckedCast<Number>(LoadDataView32(implicit_cast<TNode<JSArrayBuffer>>((*buffer_240).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_248).value()), implicit_cast<TNode<BoolT>>((*littleEndian_239).value()), implicit_cast<ElementsKind>(p_kind)));
                                  USE(implicit_cast<TNode<Number>>(t973));
                                  *_return_236 = implicit_cast<TNode<Numeric>>(t973);
                                  Goto(label_macro_end_813);
                                }
                              } else {
                                // ../src/builtins/data-view.tq:446:12
                                {
                                  bool t974 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT64_ELEMENTS));
                                  USE(implicit_cast<bool>(t974));
                                  if ((implicit_cast<bool>(t974))) {
                                    // ../src/builtins/data-view.tq:446:52
                                    {
                                      // ../src/builtins/data-view.tq:447:7
                                      TNode<Number> t975 = UncheckedCast<Number>(LoadDataViewFloat64(implicit_cast<TNode<JSArrayBuffer>>((*buffer_240).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_248).value()), implicit_cast<TNode<BoolT>>((*littleEndian_239).value())));
                                      USE(implicit_cast<TNode<Number>>(t975));
                                      *_return_236 = implicit_cast<TNode<Numeric>>(t975);
                                      Goto(label_macro_end_813);
                                    }
                                  } else {
                                    // ../src/builtins/data-view.tq:448:12
                                    {
                                      bool t976 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS));
                                      USE(implicit_cast<bool>(t976));
                                      if ((implicit_cast<bool>(t976))) {
                                        // ../src/builtins/data-view.tq:448:54
                                        {
                                          // ../src/builtins/data-view.tq:449:7
                                          TNode<BigInt> t977 = UncheckedCast<BigInt>(LoadDataViewBigInt(implicit_cast<TNode<JSArrayBuffer>>((*buffer_240).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_248).value()), implicit_cast<TNode<BoolT>>((*littleEndian_239).value()), implicit_cast<bool>(false)));
                                          USE(implicit_cast<TNode<BigInt>>(t977));
                                          *_return_236 = implicit_cast<TNode<Numeric>>(t977);
                                          Goto(label_macro_end_813);
                                        }
                                      } else {
                                        // ../src/builtins/data-view.tq:450:12
                                        {
                                          bool t978 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS));
                                          USE(implicit_cast<bool>(t978));
                                          if ((implicit_cast<bool>(t978))) {
                                            // ../src/builtins/data-view.tq:450:53
                                            {
                                              // ../src/builtins/data-view.tq:451:7
                                              TNode<BigInt> t979 = UncheckedCast<BigInt>(LoadDataViewBigInt(implicit_cast<TNode<JSArrayBuffer>>((*buffer_240).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_248).value()), implicit_cast<TNode<BoolT>>((*littleEndian_239).value()), implicit_cast<bool>(true)));
                                              USE(implicit_cast<TNode<BigInt>>(t979));
                                              *_return_236 = implicit_cast<TNode<Numeric>>(t979);
                                              Goto(label_macro_end_813);
                                            }
                                          } else {
                                            // ../src/builtins/data-view.tq:452:12
                                            {
                                              // ../src/builtins/data-view.tq:453:7
                                              Unreachable();
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  BIND(label_macro_end_813);
  return implicit_cast<TNode<Numeric>>((*_return_236).value());
}

TF_BUILTIN(DataViewPrototypeGetUint8, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/data-view.tq:458:63
  {
    // ../src/builtins/data-view.tq:459:7
    auto t980 = [=]() {
      int31_t t982 = 0;
      TNode<IntPtrT> t983 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t982)));
      TNode<Object> t984 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t983)));
      return implicit_cast<TNode<Object>>(t984);
    };
    auto t981 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t985_544_impl);
    auto t985_544 = &t985_544_impl;
    USE(t985_544);
    {
      Label label__True_299_impl(this);
      Label* label__True_299 = &label__True_299_impl;
      USE(label__True_299);
      Label label__False_300_impl(this);
      Label* label__False_300 = &label__False_300_impl;
      USE(label__False_300);
      Label label__done_545_816_impl(this, {t985_544});
      Label* label__done_545_816 = &label__done_545_816_impl;
      USE(label__done_545_816);
      TNode<IntPtrT> t986 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t987 = 0;
      TNode<IntPtrT> t988 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t987)));
      TNode<BoolT> t989 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t986), implicit_cast<TNode<IntPtrT>>(t988)));
      USE(implicit_cast<TNode<BoolT>>(t989));
      Branch(implicit_cast<TNode<BoolT>>(t989), label__True_299, label__False_300);
      BIND(label__True_299);
            *t985_544 = implicit_cast<TNode<Object>>(t980());
      Goto(label__done_545_816);
      BIND(label__False_300);
            *t985_544 = implicit_cast<TNode<Object>>(t981());
      Goto(label__done_545_816);
      BIND(label__done_545_816);
    }
    TVARIABLE(Object, offset_249_impl);
    auto offset_249 = &offset_249_impl;
    USE(offset_249);
    *offset_249 = implicit_cast<TNode<Object>>((*t985_544).value());
    // ../src/builtins/data-view.tq:462:7
    TNode<Numeric> t990 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_249).value()), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<ElementsKind>(UINT8_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t990));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t990));
  }
}

TF_BUILTIN(DataViewPrototypeGetInt8, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/data-view.tq:466:65
  {
    // ../src/builtins/data-view.tq:467:5
    auto t991 = [=]() {
      int31_t t993 = 0;
      TNode<IntPtrT> t994 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t993)));
      TNode<Object> t995 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t994)));
      return implicit_cast<TNode<Object>>(t995);
    };
    auto t992 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t996_546_impl);
    auto t996_546 = &t996_546_impl;
    USE(t996_546);
    {
      Label label__True_301_impl(this);
      Label* label__True_301 = &label__True_301_impl;
      USE(label__True_301);
      Label label__False_302_impl(this);
      Label* label__False_302 = &label__False_302_impl;
      USE(label__False_302);
      Label label__done_547_817_impl(this, {t996_546});
      Label* label__done_547_817 = &label__done_547_817_impl;
      USE(label__done_547_817);
      TNode<IntPtrT> t997 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t998 = 0;
      TNode<IntPtrT> t999 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t998)));
      TNode<BoolT> t1000 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t997), implicit_cast<TNode<IntPtrT>>(t999)));
      USE(implicit_cast<TNode<BoolT>>(t1000));
      Branch(implicit_cast<TNode<BoolT>>(t1000), label__True_301, label__False_302);
      BIND(label__True_301);
            *t996_546 = implicit_cast<TNode<Object>>(t991());
      Goto(label__done_547_817);
      BIND(label__False_302);
            *t996_546 = implicit_cast<TNode<Object>>(t992());
      Goto(label__done_547_817);
      BIND(label__done_547_817);
    }
    TVARIABLE(Object, offset_250_impl);
    auto offset_250 = &offset_250_impl;
    USE(offset_250);
    *offset_250 = implicit_cast<TNode<Object>>((*t996_546).value());
    // ../src/builtins/data-view.tq:470:5
    TNode<Numeric> t1001 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_250).value()), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<ElementsKind>(INT8_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1001));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1001));
  }
}

TF_BUILTIN(DataViewPrototypeGetUint16, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/data-view.tq:474:63
  {
    // ../src/builtins/data-view.tq:475:7
    auto t1002 = [=]() {
      int31_t t1004 = 0;
      TNode<IntPtrT> t1005 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1004)));
      TNode<Object> t1006 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1005)));
      return implicit_cast<TNode<Object>>(t1006);
    };
    auto t1003 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1007_548_impl);
    auto t1007_548 = &t1007_548_impl;
    USE(t1007_548);
    {
      Label label__True_303_impl(this);
      Label* label__True_303 = &label__True_303_impl;
      USE(label__True_303);
      Label label__False_304_impl(this);
      Label* label__False_304 = &label__False_304_impl;
      USE(label__False_304);
      Label label__done_549_818_impl(this, {t1007_548});
      Label* label__done_549_818 = &label__done_549_818_impl;
      USE(label__done_549_818);
      TNode<IntPtrT> t1008 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1009 = 0;
      TNode<IntPtrT> t1010 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1009)));
      TNode<BoolT> t1011 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1008), implicit_cast<TNode<IntPtrT>>(t1010)));
      USE(implicit_cast<TNode<BoolT>>(t1011));
      Branch(implicit_cast<TNode<BoolT>>(t1011), label__True_303, label__False_304);
      BIND(label__True_303);
            *t1007_548 = implicit_cast<TNode<Object>>(t1002());
      Goto(label__done_549_818);
      BIND(label__False_304);
            *t1007_548 = implicit_cast<TNode<Object>>(t1003());
      Goto(label__done_549_818);
      BIND(label__done_549_818);
    }
    TVARIABLE(Object, offset_251_impl);
    auto offset_251 = &offset_251_impl;
    USE(offset_251);
    *offset_251 = implicit_cast<TNode<Object>>((*t1007_548).value());
    // ../src/builtins/data-view.tq:478:7
    auto t1012 = [=]() {
      int31_t t1014 = 1;
      TNode<IntPtrT> t1015 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1014)));
      TNode<Object> t1016 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1015)));
      return implicit_cast<TNode<Object>>(t1016);
    };
    auto t1013 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1017_550_impl);
    auto t1017_550 = &t1017_550_impl;
    USE(t1017_550);
    {
      Label label__True_305_impl(this);
      Label* label__True_305 = &label__True_305_impl;
      USE(label__True_305);
      Label label__False_306_impl(this);
      Label* label__False_306 = &label__False_306_impl;
      USE(label__False_306);
      Label label__done_551_819_impl(this, {t1017_550});
      Label* label__done_551_819 = &label__done_551_819_impl;
      USE(label__done_551_819);
      TNode<IntPtrT> t1018 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1019 = 1;
      TNode<IntPtrT> t1020 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1019)));
      TNode<BoolT> t1021 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1018), implicit_cast<TNode<IntPtrT>>(t1020)));
      USE(implicit_cast<TNode<BoolT>>(t1021));
      Branch(implicit_cast<TNode<BoolT>>(t1021), label__True_305, label__False_306);
      BIND(label__True_305);
            *t1017_550 = implicit_cast<TNode<Object>>(t1012());
      Goto(label__done_551_819);
      BIND(label__False_306);
            *t1017_550 = implicit_cast<TNode<Object>>(t1013());
      Goto(label__done_551_819);
      BIND(label__done_551_819);
    }
    TVARIABLE(Object, is_little_endian_252_impl);
    auto is_little_endian_252 = &is_little_endian_252_impl;
    USE(is_little_endian_252);
    *is_little_endian_252 = implicit_cast<TNode<Object>>((*t1017_550).value());
    // ../src/builtins/data-view.tq:481:7
    TNode<Numeric> t1022 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_251).value()), implicit_cast<TNode<Object>>((*is_little_endian_252).value()), implicit_cast<ElementsKind>(UINT16_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1022));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1022));
  }
}

TF_BUILTIN(DataViewPrototypeGetInt16, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/data-view.tq:486:63
  {
    // ../src/builtins/data-view.tq:487:7
    auto t1023 = [=]() {
      int31_t t1025 = 0;
      TNode<IntPtrT> t1026 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1025)));
      TNode<Object> t1027 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1026)));
      return implicit_cast<TNode<Object>>(t1027);
    };
    auto t1024 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1028_552_impl);
    auto t1028_552 = &t1028_552_impl;
    USE(t1028_552);
    {
      Label label__True_307_impl(this);
      Label* label__True_307 = &label__True_307_impl;
      USE(label__True_307);
      Label label__False_308_impl(this);
      Label* label__False_308 = &label__False_308_impl;
      USE(label__False_308);
      Label label__done_553_820_impl(this, {t1028_552});
      Label* label__done_553_820 = &label__done_553_820_impl;
      USE(label__done_553_820);
      TNode<IntPtrT> t1029 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1030 = 0;
      TNode<IntPtrT> t1031 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1030)));
      TNode<BoolT> t1032 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1029), implicit_cast<TNode<IntPtrT>>(t1031)));
      USE(implicit_cast<TNode<BoolT>>(t1032));
      Branch(implicit_cast<TNode<BoolT>>(t1032), label__True_307, label__False_308);
      BIND(label__True_307);
            *t1028_552 = implicit_cast<TNode<Object>>(t1023());
      Goto(label__done_553_820);
      BIND(label__False_308);
            *t1028_552 = implicit_cast<TNode<Object>>(t1024());
      Goto(label__done_553_820);
      BIND(label__done_553_820);
    }
    TVARIABLE(Object, offset_253_impl);
    auto offset_253 = &offset_253_impl;
    USE(offset_253);
    *offset_253 = implicit_cast<TNode<Object>>((*t1028_552).value());
    // ../src/builtins/data-view.tq:490:7
    auto t1033 = [=]() {
      int31_t t1035 = 1;
      TNode<IntPtrT> t1036 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1035)));
      TNode<Object> t1037 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1036)));
      return implicit_cast<TNode<Object>>(t1037);
    };
    auto t1034 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1038_554_impl);
    auto t1038_554 = &t1038_554_impl;
    USE(t1038_554);
    {
      Label label__True_309_impl(this);
      Label* label__True_309 = &label__True_309_impl;
      USE(label__True_309);
      Label label__False_310_impl(this);
      Label* label__False_310 = &label__False_310_impl;
      USE(label__False_310);
      Label label__done_555_821_impl(this, {t1038_554});
      Label* label__done_555_821 = &label__done_555_821_impl;
      USE(label__done_555_821);
      TNode<IntPtrT> t1039 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1040 = 1;
      TNode<IntPtrT> t1041 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1040)));
      TNode<BoolT> t1042 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1039), implicit_cast<TNode<IntPtrT>>(t1041)));
      USE(implicit_cast<TNode<BoolT>>(t1042));
      Branch(implicit_cast<TNode<BoolT>>(t1042), label__True_309, label__False_310);
      BIND(label__True_309);
            *t1038_554 = implicit_cast<TNode<Object>>(t1033());
      Goto(label__done_555_821);
      BIND(label__False_310);
            *t1038_554 = implicit_cast<TNode<Object>>(t1034());
      Goto(label__done_555_821);
      BIND(label__done_555_821);
    }
    TVARIABLE(Object, is_little_endian_254_impl);
    auto is_little_endian_254 = &is_little_endian_254_impl;
    USE(is_little_endian_254);
    *is_little_endian_254 = implicit_cast<TNode<Object>>((*t1038_554).value());
    // ../src/builtins/data-view.tq:493:7
    TNode<Numeric> t1043 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_253).value()), implicit_cast<TNode<Object>>((*is_little_endian_254).value()), implicit_cast<ElementsKind>(INT16_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1043));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1043));
  }
}

TF_BUILTIN(DataViewPrototypeGetUint32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/data-view.tq:498:63
  {
    // ../src/builtins/data-view.tq:499:7
    auto t1044 = [=]() {
      int31_t t1046 = 0;
      TNode<IntPtrT> t1047 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1046)));
      TNode<Object> t1048 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1047)));
      return implicit_cast<TNode<Object>>(t1048);
    };
    auto t1045 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1049_556_impl);
    auto t1049_556 = &t1049_556_impl;
    USE(t1049_556);
    {
      Label label__True_311_impl(this);
      Label* label__True_311 = &label__True_311_impl;
      USE(label__True_311);
      Label label__False_312_impl(this);
      Label* label__False_312 = &label__False_312_impl;
      USE(label__False_312);
      Label label__done_557_822_impl(this, {t1049_556});
      Label* label__done_557_822 = &label__done_557_822_impl;
      USE(label__done_557_822);
      TNode<IntPtrT> t1050 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1051 = 0;
      TNode<IntPtrT> t1052 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1051)));
      TNode<BoolT> t1053 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1050), implicit_cast<TNode<IntPtrT>>(t1052)));
      USE(implicit_cast<TNode<BoolT>>(t1053));
      Branch(implicit_cast<TNode<BoolT>>(t1053), label__True_311, label__False_312);
      BIND(label__True_311);
            *t1049_556 = implicit_cast<TNode<Object>>(t1044());
      Goto(label__done_557_822);
      BIND(label__False_312);
            *t1049_556 = implicit_cast<TNode<Object>>(t1045());
      Goto(label__done_557_822);
      BIND(label__done_557_822);
    }
    TVARIABLE(Object, offset_255_impl);
    auto offset_255 = &offset_255_impl;
    USE(offset_255);
    *offset_255 = implicit_cast<TNode<Object>>((*t1049_556).value());
    // ../src/builtins/data-view.tq:502:7
    auto t1054 = [=]() {
      int31_t t1056 = 1;
      TNode<IntPtrT> t1057 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1056)));
      TNode<Object> t1058 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1057)));
      return implicit_cast<TNode<Object>>(t1058);
    };
    auto t1055 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1059_558_impl);
    auto t1059_558 = &t1059_558_impl;
    USE(t1059_558);
    {
      Label label__True_313_impl(this);
      Label* label__True_313 = &label__True_313_impl;
      USE(label__True_313);
      Label label__False_314_impl(this);
      Label* label__False_314 = &label__False_314_impl;
      USE(label__False_314);
      Label label__done_559_823_impl(this, {t1059_558});
      Label* label__done_559_823 = &label__done_559_823_impl;
      USE(label__done_559_823);
      TNode<IntPtrT> t1060 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1061 = 1;
      TNode<IntPtrT> t1062 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1061)));
      TNode<BoolT> t1063 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1060), implicit_cast<TNode<IntPtrT>>(t1062)));
      USE(implicit_cast<TNode<BoolT>>(t1063));
      Branch(implicit_cast<TNode<BoolT>>(t1063), label__True_313, label__False_314);
      BIND(label__True_313);
            *t1059_558 = implicit_cast<TNode<Object>>(t1054());
      Goto(label__done_559_823);
      BIND(label__False_314);
            *t1059_558 = implicit_cast<TNode<Object>>(t1055());
      Goto(label__done_559_823);
      BIND(label__done_559_823);
    }
    TVARIABLE(Object, is_little_endian_256_impl);
    auto is_little_endian_256 = &is_little_endian_256_impl;
    USE(is_little_endian_256);
    *is_little_endian_256 = implicit_cast<TNode<Object>>((*t1059_558).value());
    // ../src/builtins/data-view.tq:505:7
    TNode<Numeric> t1064 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_255).value()), implicit_cast<TNode<Object>>((*is_little_endian_256).value()), implicit_cast<ElementsKind>(UINT32_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1064));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1064));
  }
}

TF_BUILTIN(DataViewPrototypeGetInt32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/data-view.tq:510:63
  {
    // ../src/builtins/data-view.tq:511:7
    auto t1065 = [=]() {
      int31_t t1067 = 0;
      TNode<IntPtrT> t1068 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1067)));
      TNode<Object> t1069 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1068)));
      return implicit_cast<TNode<Object>>(t1069);
    };
    auto t1066 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1070_560_impl);
    auto t1070_560 = &t1070_560_impl;
    USE(t1070_560);
    {
      Label label__True_315_impl(this);
      Label* label__True_315 = &label__True_315_impl;
      USE(label__True_315);
      Label label__False_316_impl(this);
      Label* label__False_316 = &label__False_316_impl;
      USE(label__False_316);
      Label label__done_561_824_impl(this, {t1070_560});
      Label* label__done_561_824 = &label__done_561_824_impl;
      USE(label__done_561_824);
      TNode<IntPtrT> t1071 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1072 = 0;
      TNode<IntPtrT> t1073 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1072)));
      TNode<BoolT> t1074 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1071), implicit_cast<TNode<IntPtrT>>(t1073)));
      USE(implicit_cast<TNode<BoolT>>(t1074));
      Branch(implicit_cast<TNode<BoolT>>(t1074), label__True_315, label__False_316);
      BIND(label__True_315);
            *t1070_560 = implicit_cast<TNode<Object>>(t1065());
      Goto(label__done_561_824);
      BIND(label__False_316);
            *t1070_560 = implicit_cast<TNode<Object>>(t1066());
      Goto(label__done_561_824);
      BIND(label__done_561_824);
    }
    TVARIABLE(Object, offset_257_impl);
    auto offset_257 = &offset_257_impl;
    USE(offset_257);
    *offset_257 = implicit_cast<TNode<Object>>((*t1070_560).value());
    // ../src/builtins/data-view.tq:514:7
    auto t1075 = [=]() {
      int31_t t1077 = 1;
      TNode<IntPtrT> t1078 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1077)));
      TNode<Object> t1079 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1078)));
      return implicit_cast<TNode<Object>>(t1079);
    };
    auto t1076 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1080_562_impl);
    auto t1080_562 = &t1080_562_impl;
    USE(t1080_562);
    {
      Label label__True_317_impl(this);
      Label* label__True_317 = &label__True_317_impl;
      USE(label__True_317);
      Label label__False_318_impl(this);
      Label* label__False_318 = &label__False_318_impl;
      USE(label__False_318);
      Label label__done_563_825_impl(this, {t1080_562});
      Label* label__done_563_825 = &label__done_563_825_impl;
      USE(label__done_563_825);
      TNode<IntPtrT> t1081 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1082 = 1;
      TNode<IntPtrT> t1083 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1082)));
      TNode<BoolT> t1084 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1081), implicit_cast<TNode<IntPtrT>>(t1083)));
      USE(implicit_cast<TNode<BoolT>>(t1084));
      Branch(implicit_cast<TNode<BoolT>>(t1084), label__True_317, label__False_318);
      BIND(label__True_317);
            *t1080_562 = implicit_cast<TNode<Object>>(t1075());
      Goto(label__done_563_825);
      BIND(label__False_318);
            *t1080_562 = implicit_cast<TNode<Object>>(t1076());
      Goto(label__done_563_825);
      BIND(label__done_563_825);
    }
    TVARIABLE(Object, is_little_endian_258_impl);
    auto is_little_endian_258 = &is_little_endian_258_impl;
    USE(is_little_endian_258);
    *is_little_endian_258 = implicit_cast<TNode<Object>>((*t1080_562).value());
    // ../src/builtins/data-view.tq:517:7
    TNode<Numeric> t1085 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_257).value()), implicit_cast<TNode<Object>>((*is_little_endian_258).value()), implicit_cast<ElementsKind>(INT32_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1085));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1085));
  }
}

TF_BUILTIN(DataViewPrototypeGetFloat32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/data-view.tq:522:63
  {
    // ../src/builtins/data-view.tq:523:7
    auto t1086 = [=]() {
      int31_t t1088 = 0;
      TNode<IntPtrT> t1089 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1088)));
      TNode<Object> t1090 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1089)));
      return implicit_cast<TNode<Object>>(t1090);
    };
    auto t1087 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1091_564_impl);
    auto t1091_564 = &t1091_564_impl;
    USE(t1091_564);
    {
      Label label__True_319_impl(this);
      Label* label__True_319 = &label__True_319_impl;
      USE(label__True_319);
      Label label__False_320_impl(this);
      Label* label__False_320 = &label__False_320_impl;
      USE(label__False_320);
      Label label__done_565_826_impl(this, {t1091_564});
      Label* label__done_565_826 = &label__done_565_826_impl;
      USE(label__done_565_826);
      TNode<IntPtrT> t1092 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1093 = 0;
      TNode<IntPtrT> t1094 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1093)));
      TNode<BoolT> t1095 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1092), implicit_cast<TNode<IntPtrT>>(t1094)));
      USE(implicit_cast<TNode<BoolT>>(t1095));
      Branch(implicit_cast<TNode<BoolT>>(t1095), label__True_319, label__False_320);
      BIND(label__True_319);
            *t1091_564 = implicit_cast<TNode<Object>>(t1086());
      Goto(label__done_565_826);
      BIND(label__False_320);
            *t1091_564 = implicit_cast<TNode<Object>>(t1087());
      Goto(label__done_565_826);
      BIND(label__done_565_826);
    }
    TVARIABLE(Object, offset_259_impl);
    auto offset_259 = &offset_259_impl;
    USE(offset_259);
    *offset_259 = implicit_cast<TNode<Object>>((*t1091_564).value());
    // ../src/builtins/data-view.tq:526:7
    auto t1096 = [=]() {
      int31_t t1098 = 1;
      TNode<IntPtrT> t1099 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1098)));
      TNode<Object> t1100 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1099)));
      return implicit_cast<TNode<Object>>(t1100);
    };
    auto t1097 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1101_566_impl);
    auto t1101_566 = &t1101_566_impl;
    USE(t1101_566);
    {
      Label label__True_321_impl(this);
      Label* label__True_321 = &label__True_321_impl;
      USE(label__True_321);
      Label label__False_322_impl(this);
      Label* label__False_322 = &label__False_322_impl;
      USE(label__False_322);
      Label label__done_567_827_impl(this, {t1101_566});
      Label* label__done_567_827 = &label__done_567_827_impl;
      USE(label__done_567_827);
      TNode<IntPtrT> t1102 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1103 = 1;
      TNode<IntPtrT> t1104 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1103)));
      TNode<BoolT> t1105 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1102), implicit_cast<TNode<IntPtrT>>(t1104)));
      USE(implicit_cast<TNode<BoolT>>(t1105));
      Branch(implicit_cast<TNode<BoolT>>(t1105), label__True_321, label__False_322);
      BIND(label__True_321);
            *t1101_566 = implicit_cast<TNode<Object>>(t1096());
      Goto(label__done_567_827);
      BIND(label__False_322);
            *t1101_566 = implicit_cast<TNode<Object>>(t1097());
      Goto(label__done_567_827);
      BIND(label__done_567_827);
    }
    TVARIABLE(Object, is_little_endian_260_impl);
    auto is_little_endian_260 = &is_little_endian_260_impl;
    USE(is_little_endian_260);
    *is_little_endian_260 = implicit_cast<TNode<Object>>((*t1101_566).value());
    // ../src/builtins/data-view.tq:529:7
    TNode<Numeric> t1106 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_259).value()), implicit_cast<TNode<Object>>((*is_little_endian_260).value()), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1106));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1106));
  }
}

TF_BUILTIN(DataViewPrototypeGetFloat64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/data-view.tq:534:63
  {
    // ../src/builtins/data-view.tq:535:7
    auto t1107 = [=]() {
      int31_t t1109 = 0;
      TNode<IntPtrT> t1110 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1109)));
      TNode<Object> t1111 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1110)));
      return implicit_cast<TNode<Object>>(t1111);
    };
    auto t1108 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1112_568_impl);
    auto t1112_568 = &t1112_568_impl;
    USE(t1112_568);
    {
      Label label__True_323_impl(this);
      Label* label__True_323 = &label__True_323_impl;
      USE(label__True_323);
      Label label__False_324_impl(this);
      Label* label__False_324 = &label__False_324_impl;
      USE(label__False_324);
      Label label__done_569_828_impl(this, {t1112_568});
      Label* label__done_569_828 = &label__done_569_828_impl;
      USE(label__done_569_828);
      TNode<IntPtrT> t1113 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1114 = 0;
      TNode<IntPtrT> t1115 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1114)));
      TNode<BoolT> t1116 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1113), implicit_cast<TNode<IntPtrT>>(t1115)));
      USE(implicit_cast<TNode<BoolT>>(t1116));
      Branch(implicit_cast<TNode<BoolT>>(t1116), label__True_323, label__False_324);
      BIND(label__True_323);
            *t1112_568 = implicit_cast<TNode<Object>>(t1107());
      Goto(label__done_569_828);
      BIND(label__False_324);
            *t1112_568 = implicit_cast<TNode<Object>>(t1108());
      Goto(label__done_569_828);
      BIND(label__done_569_828);
    }
    TVARIABLE(Object, offset_261_impl);
    auto offset_261 = &offset_261_impl;
    USE(offset_261);
    *offset_261 = implicit_cast<TNode<Object>>((*t1112_568).value());
    // ../src/builtins/data-view.tq:538:7
    auto t1117 = [=]() {
      int31_t t1119 = 1;
      TNode<IntPtrT> t1120 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1119)));
      TNode<Object> t1121 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1120)));
      return implicit_cast<TNode<Object>>(t1121);
    };
    auto t1118 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1122_570_impl);
    auto t1122_570 = &t1122_570_impl;
    USE(t1122_570);
    {
      Label label__True_325_impl(this);
      Label* label__True_325 = &label__True_325_impl;
      USE(label__True_325);
      Label label__False_326_impl(this);
      Label* label__False_326 = &label__False_326_impl;
      USE(label__False_326);
      Label label__done_571_829_impl(this, {t1122_570});
      Label* label__done_571_829 = &label__done_571_829_impl;
      USE(label__done_571_829);
      TNode<IntPtrT> t1123 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1124 = 1;
      TNode<IntPtrT> t1125 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1124)));
      TNode<BoolT> t1126 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1123), implicit_cast<TNode<IntPtrT>>(t1125)));
      USE(implicit_cast<TNode<BoolT>>(t1126));
      Branch(implicit_cast<TNode<BoolT>>(t1126), label__True_325, label__False_326);
      BIND(label__True_325);
            *t1122_570 = implicit_cast<TNode<Object>>(t1117());
      Goto(label__done_571_829);
      BIND(label__False_326);
            *t1122_570 = implicit_cast<TNode<Object>>(t1118());
      Goto(label__done_571_829);
      BIND(label__done_571_829);
    }
    TVARIABLE(Object, is_little_endian_262_impl);
    auto is_little_endian_262 = &is_little_endian_262_impl;
    USE(is_little_endian_262);
    *is_little_endian_262 = implicit_cast<TNode<Object>>((*t1122_570).value());
    // ../src/builtins/data-view.tq:541:7
    TNode<Numeric> t1127 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_261).value()), implicit_cast<TNode<Object>>((*is_little_endian_262).value()), implicit_cast<ElementsKind>(FLOAT64_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1127));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1127));
  }
}

TF_BUILTIN(DataViewPrototypeGetBigUint64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/data-view.tq:546:63
  {
    // ../src/builtins/data-view.tq:547:7
    auto t1128 = [=]() {
      int31_t t1130 = 0;
      TNode<IntPtrT> t1131 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1130)));
      TNode<Object> t1132 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1131)));
      return implicit_cast<TNode<Object>>(t1132);
    };
    auto t1129 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1133_572_impl);
    auto t1133_572 = &t1133_572_impl;
    USE(t1133_572);
    {
      Label label__True_327_impl(this);
      Label* label__True_327 = &label__True_327_impl;
      USE(label__True_327);
      Label label__False_328_impl(this);
      Label* label__False_328 = &label__False_328_impl;
      USE(label__False_328);
      Label label__done_573_830_impl(this, {t1133_572});
      Label* label__done_573_830 = &label__done_573_830_impl;
      USE(label__done_573_830);
      TNode<IntPtrT> t1134 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1135 = 0;
      TNode<IntPtrT> t1136 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1135)));
      TNode<BoolT> t1137 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1134), implicit_cast<TNode<IntPtrT>>(t1136)));
      USE(implicit_cast<TNode<BoolT>>(t1137));
      Branch(implicit_cast<TNode<BoolT>>(t1137), label__True_327, label__False_328);
      BIND(label__True_327);
            *t1133_572 = implicit_cast<TNode<Object>>(t1128());
      Goto(label__done_573_830);
      BIND(label__False_328);
            *t1133_572 = implicit_cast<TNode<Object>>(t1129());
      Goto(label__done_573_830);
      BIND(label__done_573_830);
    }
    TVARIABLE(Object, offset_263_impl);
    auto offset_263 = &offset_263_impl;
    USE(offset_263);
    *offset_263 = implicit_cast<TNode<Object>>((*t1133_572).value());
    // ../src/builtins/data-view.tq:550:7
    auto t1138 = [=]() {
      int31_t t1140 = 1;
      TNode<IntPtrT> t1141 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1140)));
      TNode<Object> t1142 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1141)));
      return implicit_cast<TNode<Object>>(t1142);
    };
    auto t1139 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1143_574_impl);
    auto t1143_574 = &t1143_574_impl;
    USE(t1143_574);
    {
      Label label__True_329_impl(this);
      Label* label__True_329 = &label__True_329_impl;
      USE(label__True_329);
      Label label__False_330_impl(this);
      Label* label__False_330 = &label__False_330_impl;
      USE(label__False_330);
      Label label__done_575_831_impl(this, {t1143_574});
      Label* label__done_575_831 = &label__done_575_831_impl;
      USE(label__done_575_831);
      TNode<IntPtrT> t1144 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1145 = 1;
      TNode<IntPtrT> t1146 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1145)));
      TNode<BoolT> t1147 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1144), implicit_cast<TNode<IntPtrT>>(t1146)));
      USE(implicit_cast<TNode<BoolT>>(t1147));
      Branch(implicit_cast<TNode<BoolT>>(t1147), label__True_329, label__False_330);
      BIND(label__True_329);
            *t1143_574 = implicit_cast<TNode<Object>>(t1138());
      Goto(label__done_575_831);
      BIND(label__False_330);
            *t1143_574 = implicit_cast<TNode<Object>>(t1139());
      Goto(label__done_575_831);
      BIND(label__done_575_831);
    }
    TVARIABLE(Object, is_little_endian_264_impl);
    auto is_little_endian_264 = &is_little_endian_264_impl;
    USE(is_little_endian_264);
    *is_little_endian_264 = implicit_cast<TNode<Object>>((*t1143_574).value());
    // ../src/builtins/data-view.tq:553:7
    TNode<Numeric> t1148 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_263).value()), implicit_cast<TNode<Object>>((*is_little_endian_264).value()), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1148));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1148));
  }
}

TF_BUILTIN(DataViewPrototypeGetBigInt64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/data-view.tq:558:63
  {
    // ../src/builtins/data-view.tq:559:7
    auto t1149 = [=]() {
      int31_t t1151 = 0;
      TNode<IntPtrT> t1152 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1151)));
      TNode<Object> t1153 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1152)));
      return implicit_cast<TNode<Object>>(t1153);
    };
    auto t1150 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1154_576_impl);
    auto t1154_576 = &t1154_576_impl;
    USE(t1154_576);
    {
      Label label__True_331_impl(this);
      Label* label__True_331 = &label__True_331_impl;
      USE(label__True_331);
      Label label__False_332_impl(this);
      Label* label__False_332 = &label__False_332_impl;
      USE(label__False_332);
      Label label__done_577_832_impl(this, {t1154_576});
      Label* label__done_577_832 = &label__done_577_832_impl;
      USE(label__done_577_832);
      TNode<IntPtrT> t1155 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1156 = 0;
      TNode<IntPtrT> t1157 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1156)));
      TNode<BoolT> t1158 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1155), implicit_cast<TNode<IntPtrT>>(t1157)));
      USE(implicit_cast<TNode<BoolT>>(t1158));
      Branch(implicit_cast<TNode<BoolT>>(t1158), label__True_331, label__False_332);
      BIND(label__True_331);
            *t1154_576 = implicit_cast<TNode<Object>>(t1149());
      Goto(label__done_577_832);
      BIND(label__False_332);
            *t1154_576 = implicit_cast<TNode<Object>>(t1150());
      Goto(label__done_577_832);
      BIND(label__done_577_832);
    }
    TVARIABLE(Object, offset_265_impl);
    auto offset_265 = &offset_265_impl;
    USE(offset_265);
    *offset_265 = implicit_cast<TNode<Object>>((*t1154_576).value());
    // ../src/builtins/data-view.tq:562:7
    auto t1159 = [=]() {
      int31_t t1161 = 1;
      TNode<IntPtrT> t1162 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1161)));
      TNode<Object> t1163 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1162)));
      return implicit_cast<TNode<Object>>(t1163);
    };
    auto t1160 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1164_578_impl);
    auto t1164_578 = &t1164_578_impl;
    USE(t1164_578);
    {
      Label label__True_333_impl(this);
      Label* label__True_333 = &label__True_333_impl;
      USE(label__True_333);
      Label label__False_334_impl(this);
      Label* label__False_334 = &label__False_334_impl;
      USE(label__False_334);
      Label label__done_579_833_impl(this, {t1164_578});
      Label* label__done_579_833 = &label__done_579_833_impl;
      USE(label__done_579_833);
      TNode<IntPtrT> t1165 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1166 = 1;
      TNode<IntPtrT> t1167 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1166)));
      TNode<BoolT> t1168 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1165), implicit_cast<TNode<IntPtrT>>(t1167)));
      USE(implicit_cast<TNode<BoolT>>(t1168));
      Branch(implicit_cast<TNode<BoolT>>(t1168), label__True_333, label__False_334);
      BIND(label__True_333);
            *t1164_578 = implicit_cast<TNode<Object>>(t1159());
      Goto(label__done_579_833);
      BIND(label__False_334);
            *t1164_578 = implicit_cast<TNode<Object>>(t1160());
      Goto(label__done_579_833);
      BIND(label__done_579_833);
    }
    TVARIABLE(Object, is_little_endian_266_impl);
    auto is_little_endian_266 = &is_little_endian_266_impl;
    USE(is_little_endian_266);
    *is_little_endian_266 = implicit_cast<TNode<Object>>((*t1164_578).value());
    // ../src/builtins/data-view.tq:565:7
    TNode<Numeric> t1169 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_265).value()), implicit_cast<TNode<Object>>((*is_little_endian_266).value()), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1169));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1169));
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView8(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<Uint32T> p_value) {
  Label label_macro_end_834_impl(this, {});
  Label* label_macro_end_834 = &label_macro_end_834_impl;
  USE(label_macro_end_834);
  // ../src/builtins/data-view.tq:577:39
  {
    // ../src/builtins/data-view.tq:578:5
    TNode<RawPtrT> t1170 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    int31_t t1171 = 0xFF;
    TNode<Uint32T> t1172 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1171)));
    TNode<Uint32T> t1173 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1172)));
    USE(implicit_cast<TNode<Uint32T>>(t1173));
    StoreWord8(implicit_cast<TNode<RawPtrT>>(t1170), implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>(t1173));
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView16(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<Uint32T> p_value, TNode<BoolT> p_requested_little_endian) {
  Label label_macro_end_835_impl(this, {});
  Label* label_macro_end_835 = &label_macro_end_835_impl;
  USE(label_macro_end_835);
  // ../src/builtins/data-view.tq:582:56
  {
    // ../src/builtins/data-view.tq:583:5
    TNode<RawPtrT> t1174 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, data_pointer_267_impl);
    auto data_pointer_267 = &data_pointer_267_impl;
    USE(data_pointer_267);
    *data_pointer_267 = implicit_cast<TNode<RawPtrT>>(t1174);
    // ../src/builtins/data-view.tq:585:5
    int31_t t1175 = 0xFF;
    TNode<Uint32T> t1176 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1175)));
    TNode<Uint32T> t1177 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1176)));
    USE(implicit_cast<TNode<Uint32T>>(t1177));
    TVARIABLE(Uint32T, b0_268_impl);
    auto b0_268 = &b0_268_impl;
    USE(b0_268);
    *b0_268 = implicit_cast<TNode<Uint32T>>(t1177);
    // ../src/builtins/data-view.tq:586:5
    int31_t t1178 = 8;
    TNode<Uint32T> t1179 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1178)));
    TNode<Uint32T> t1180 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1179)));
    USE(implicit_cast<TNode<Uint32T>>(t1180));
    int31_t t1181 = 0xFF;
    TNode<Uint32T> t1182 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1181)));
    TNode<Uint32T> t1183 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1180), implicit_cast<TNode<Uint32T>>(t1182)));
    USE(implicit_cast<TNode<Uint32T>>(t1183));
    TVARIABLE(Uint32T, b1_269_impl);
    auto b1_269 = &b1_269_impl;
    USE(b1_269);
    *b1_269 = implicit_cast<TNode<Uint32T>>(t1183);
    // ../src/builtins/data-view.tq:588:5
    {
      Label label__True_335_impl(this);
      Label* label__True_335 = &label__True_335_impl;
      USE(label__True_335);
      Label label__False_336_impl(this);
      Label* label__False_336 = &label__False_336_impl;
      USE(label__False_336);
      Label label_if_done_label_580_836_impl(this, {});
      Label* label_if_done_label_580_836 = &label_if_done_label_580_836_impl;
      USE(label_if_done_label_580_836);
      Branch(implicit_cast<TNode<BoolT>>(p_requested_little_endian), label__True_335, label__False_336);
      if (label__True_335->is_used())
      {
        BIND(label__True_335);
        // ../src/builtins/data-view.tq:588:34
        {
          // ../src/builtins/data-view.tq:589:7
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_267).value()), implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*b0_268).value()));
          // ../src/builtins/data-view.tq:590:7
          int31_t t1184 = 1;
          TNode<IntPtrT> t1185 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1184)));
          TNode<IntPtrT> t1186 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1185)));
          USE(implicit_cast<TNode<IntPtrT>>(t1186));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_267).value()), implicit_cast<TNode<IntPtrT>>(t1186), implicit_cast<TNode<Uint32T>>((*b1_269).value()));
        }
        Goto(label_if_done_label_580_836);
      }
      if (label__False_336->is_used())
      {
        BIND(label__False_336);
        // ../src/builtins/data-view.tq:591:12
        {
          // ../src/builtins/data-view.tq:592:7
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_267).value()), implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*b1_269).value()));
          // ../src/builtins/data-view.tq:593:7
          int31_t t1187 = 1;
          TNode<IntPtrT> t1188 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1187)));
          TNode<IntPtrT> t1189 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1188)));
          USE(implicit_cast<TNode<IntPtrT>>(t1189));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_267).value()), implicit_cast<TNode<IntPtrT>>(t1189), implicit_cast<TNode<Uint32T>>((*b0_268).value()));
        }
        Goto(label_if_done_label_580_836);
      }
      BIND(label_if_done_label_580_836);
    }
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView32(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<Uint32T> p_value, TNode<BoolT> p_requested_little_endian) {
  Label label_macro_end_837_impl(this, {});
  Label* label_macro_end_837 = &label_macro_end_837_impl;
  USE(label_macro_end_837);
  // ../src/builtins/data-view.tq:598:56
  {
    // ../src/builtins/data-view.tq:599:5
    TNode<RawPtrT> t1190 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, data_pointer_270_impl);
    auto data_pointer_270 = &data_pointer_270_impl;
    USE(data_pointer_270);
    *data_pointer_270 = implicit_cast<TNode<RawPtrT>>(t1190);
    // ../src/builtins/data-view.tq:601:5
    int31_t t1191 = 0xFF;
    TNode<Uint32T> t1192 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1191)));
    TNode<Uint32T> t1193 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1192)));
    USE(implicit_cast<TNode<Uint32T>>(t1193));
    TVARIABLE(Uint32T, b0_271_impl);
    auto b0_271 = &b0_271_impl;
    USE(b0_271);
    *b0_271 = implicit_cast<TNode<Uint32T>>(t1193);
    // ../src/builtins/data-view.tq:602:5
    int31_t t1194 = 8;
    TNode<Uint32T> t1195 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1194)));
    TNode<Uint32T> t1196 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1195)));
    USE(implicit_cast<TNode<Uint32T>>(t1196));
    int31_t t1197 = 0xFF;
    TNode<Uint32T> t1198 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1197)));
    TNode<Uint32T> t1199 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1196), implicit_cast<TNode<Uint32T>>(t1198)));
    USE(implicit_cast<TNode<Uint32T>>(t1199));
    TVARIABLE(Uint32T, b1_272_impl);
    auto b1_272 = &b1_272_impl;
    USE(b1_272);
    *b1_272 = implicit_cast<TNode<Uint32T>>(t1199);
    // ../src/builtins/data-view.tq:603:5
    int31_t t1200 = 16;
    TNode<Uint32T> t1201 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1200)));
    TNode<Uint32T> t1202 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1201)));
    USE(implicit_cast<TNode<Uint32T>>(t1202));
    int31_t t1203 = 0xFF;
    TNode<Uint32T> t1204 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1203)));
    TNode<Uint32T> t1205 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1202), implicit_cast<TNode<Uint32T>>(t1204)));
    USE(implicit_cast<TNode<Uint32T>>(t1205));
    TVARIABLE(Uint32T, b2_273_impl);
    auto b2_273 = &b2_273_impl;
    USE(b2_273);
    *b2_273 = implicit_cast<TNode<Uint32T>>(t1205);
    // ../src/builtins/data-view.tq:604:5
    int31_t t1206 = 24;
    TNode<Uint32T> t1207 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1206)));
    TNode<Uint32T> t1208 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1207)));
    USE(implicit_cast<TNode<Uint32T>>(t1208));
    TVARIABLE(Uint32T, b3_274_impl);
    auto b3_274 = &b3_274_impl;
    USE(b3_274);
    *b3_274 = implicit_cast<TNode<Uint32T>>(t1208);
    // ../src/builtins/data-view.tq:606:5
    {
      Label label__True_337_impl(this);
      Label* label__True_337 = &label__True_337_impl;
      USE(label__True_337);
      Label label__False_338_impl(this);
      Label* label__False_338 = &label__False_338_impl;
      USE(label__False_338);
      Label label_if_done_label_581_838_impl(this, {});
      Label* label_if_done_label_581_838 = &label_if_done_label_581_838_impl;
      USE(label_if_done_label_581_838);
      Branch(implicit_cast<TNode<BoolT>>(p_requested_little_endian), label__True_337, label__False_338);
      if (label__True_337->is_used())
      {
        BIND(label__True_337);
        // ../src/builtins/data-view.tq:606:34
        {
          // ../src/builtins/data-view.tq:607:7
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_270).value()), implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*b0_271).value()));
          // ../src/builtins/data-view.tq:608:7
          int31_t t1209 = 1;
          TNode<IntPtrT> t1210 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1209)));
          TNode<IntPtrT> t1211 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1210)));
          USE(implicit_cast<TNode<IntPtrT>>(t1211));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_270).value()), implicit_cast<TNode<IntPtrT>>(t1211), implicit_cast<TNode<Uint32T>>((*b1_272).value()));
          // ../src/builtins/data-view.tq:609:7
          int31_t t1212 = 2;
          TNode<IntPtrT> t1213 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1212)));
          TNode<IntPtrT> t1214 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1213)));
          USE(implicit_cast<TNode<IntPtrT>>(t1214));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_270).value()), implicit_cast<TNode<IntPtrT>>(t1214), implicit_cast<TNode<Uint32T>>((*b2_273).value()));
          // ../src/builtins/data-view.tq:610:7
          int31_t t1215 = 3;
          TNode<IntPtrT> t1216 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1215)));
          TNode<IntPtrT> t1217 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1216)));
          USE(implicit_cast<TNode<IntPtrT>>(t1217));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_270).value()), implicit_cast<TNode<IntPtrT>>(t1217), implicit_cast<TNode<Uint32T>>((*b3_274).value()));
        }
        Goto(label_if_done_label_581_838);
      }
      if (label__False_338->is_used())
      {
        BIND(label__False_338);
        // ../src/builtins/data-view.tq:611:12
        {
          // ../src/builtins/data-view.tq:612:7
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_270).value()), implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*b3_274).value()));
          // ../src/builtins/data-view.tq:613:7
          int31_t t1218 = 1;
          TNode<IntPtrT> t1219 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1218)));
          TNode<IntPtrT> t1220 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1219)));
          USE(implicit_cast<TNode<IntPtrT>>(t1220));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_270).value()), implicit_cast<TNode<IntPtrT>>(t1220), implicit_cast<TNode<Uint32T>>((*b2_273).value()));
          // ../src/builtins/data-view.tq:614:7
          int31_t t1221 = 2;
          TNode<IntPtrT> t1222 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1221)));
          TNode<IntPtrT> t1223 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1222)));
          USE(implicit_cast<TNode<IntPtrT>>(t1223));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_270).value()), implicit_cast<TNode<IntPtrT>>(t1223), implicit_cast<TNode<Uint32T>>((*b1_272).value()));
          // ../src/builtins/data-view.tq:615:7
          int31_t t1224 = 3;
          TNode<IntPtrT> t1225 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1224)));
          TNode<IntPtrT> t1226 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1225)));
          USE(implicit_cast<TNode<IntPtrT>>(t1226));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_270).value()), implicit_cast<TNode<IntPtrT>>(t1226), implicit_cast<TNode<Uint32T>>((*b0_271).value()));
        }
        Goto(label_if_done_label_581_838);
      }
      BIND(label_if_done_label_581_838);
    }
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView64(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<Uint32T> p_low_word, TNode<Uint32T> p_high_word, TNode<BoolT> p_requested_little_endian) {
  Label label_macro_end_839_impl(this, {});
  Label* label_macro_end_839 = &label_macro_end_839_impl;
  USE(label_macro_end_839);
  // ../src/builtins/data-view.tq:621:56
  {
    // ../src/builtins/data-view.tq:622:5
    TNode<RawPtrT> t1227 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, data_pointer_275_impl);
    auto data_pointer_275 = &data_pointer_275_impl;
    USE(data_pointer_275);
    *data_pointer_275 = implicit_cast<TNode<RawPtrT>>(t1227);
    // ../src/builtins/data-view.tq:624:5
    int31_t t1228 = 0xFF;
    TNode<Uint32T> t1229 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1228)));
    TNode<Uint32T> t1230 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(p_low_word), implicit_cast<TNode<Uint32T>>(t1229)));
    USE(implicit_cast<TNode<Uint32T>>(t1230));
    TVARIABLE(Uint32T, b0_276_impl);
    auto b0_276 = &b0_276_impl;
    USE(b0_276);
    *b0_276 = implicit_cast<TNode<Uint32T>>(t1230);
    // ../src/builtins/data-view.tq:625:5
    int31_t t1231 = 8;
    TNode<Uint32T> t1232 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1231)));
    TNode<Uint32T> t1233 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_low_word), implicit_cast<TNode<Uint32T>>(t1232)));
    USE(implicit_cast<TNode<Uint32T>>(t1233));
    int31_t t1234 = 0xFF;
    TNode<Uint32T> t1235 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1234)));
    TNode<Uint32T> t1236 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1233), implicit_cast<TNode<Uint32T>>(t1235)));
    USE(implicit_cast<TNode<Uint32T>>(t1236));
    TVARIABLE(Uint32T, b1_277_impl);
    auto b1_277 = &b1_277_impl;
    USE(b1_277);
    *b1_277 = implicit_cast<TNode<Uint32T>>(t1236);
    // ../src/builtins/data-view.tq:626:5
    int31_t t1237 = 16;
    TNode<Uint32T> t1238 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1237)));
    TNode<Uint32T> t1239 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_low_word), implicit_cast<TNode<Uint32T>>(t1238)));
    USE(implicit_cast<TNode<Uint32T>>(t1239));
    int31_t t1240 = 0xFF;
    TNode<Uint32T> t1241 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1240)));
    TNode<Uint32T> t1242 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1239), implicit_cast<TNode<Uint32T>>(t1241)));
    USE(implicit_cast<TNode<Uint32T>>(t1242));
    TVARIABLE(Uint32T, b2_278_impl);
    auto b2_278 = &b2_278_impl;
    USE(b2_278);
    *b2_278 = implicit_cast<TNode<Uint32T>>(t1242);
    // ../src/builtins/data-view.tq:627:5
    int31_t t1243 = 24;
    TNode<Uint32T> t1244 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1243)));
    TNode<Uint32T> t1245 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_low_word), implicit_cast<TNode<Uint32T>>(t1244)));
    USE(implicit_cast<TNode<Uint32T>>(t1245));
    TVARIABLE(Uint32T, b3_279_impl);
    auto b3_279 = &b3_279_impl;
    USE(b3_279);
    *b3_279 = implicit_cast<TNode<Uint32T>>(t1245);
    // ../src/builtins/data-view.tq:629:5
    int31_t t1246 = 0xFF;
    TNode<Uint32T> t1247 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1246)));
    TNode<Uint32T> t1248 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<TNode<Uint32T>>(t1247)));
    USE(implicit_cast<TNode<Uint32T>>(t1248));
    TVARIABLE(Uint32T, b4_280_impl);
    auto b4_280 = &b4_280_impl;
    USE(b4_280);
    *b4_280 = implicit_cast<TNode<Uint32T>>(t1248);
    // ../src/builtins/data-view.tq:630:5
    int31_t t1249 = 8;
    TNode<Uint32T> t1250 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1249)));
    TNode<Uint32T> t1251 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<TNode<Uint32T>>(t1250)));
    USE(implicit_cast<TNode<Uint32T>>(t1251));
    int31_t t1252 = 0xFF;
    TNode<Uint32T> t1253 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1252)));
    TNode<Uint32T> t1254 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1251), implicit_cast<TNode<Uint32T>>(t1253)));
    USE(implicit_cast<TNode<Uint32T>>(t1254));
    TVARIABLE(Uint32T, b5_281_impl);
    auto b5_281 = &b5_281_impl;
    USE(b5_281);
    *b5_281 = implicit_cast<TNode<Uint32T>>(t1254);
    // ../src/builtins/data-view.tq:631:5
    int31_t t1255 = 16;
    TNode<Uint32T> t1256 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1255)));
    TNode<Uint32T> t1257 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<TNode<Uint32T>>(t1256)));
    USE(implicit_cast<TNode<Uint32T>>(t1257));
    int31_t t1258 = 0xFF;
    TNode<Uint32T> t1259 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1258)));
    TNode<Uint32T> t1260 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1257), implicit_cast<TNode<Uint32T>>(t1259)));
    USE(implicit_cast<TNode<Uint32T>>(t1260));
    TVARIABLE(Uint32T, b6_282_impl);
    auto b6_282 = &b6_282_impl;
    USE(b6_282);
    *b6_282 = implicit_cast<TNode<Uint32T>>(t1260);
    // ../src/builtins/data-view.tq:632:5
    int31_t t1261 = 24;
    TNode<Uint32T> t1262 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1261)));
    TNode<Uint32T> t1263 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<TNode<Uint32T>>(t1262)));
    USE(implicit_cast<TNode<Uint32T>>(t1263));
    TVARIABLE(Uint32T, b7_283_impl);
    auto b7_283 = &b7_283_impl;
    USE(b7_283);
    *b7_283 = implicit_cast<TNode<Uint32T>>(t1263);
    // ../src/builtins/data-view.tq:635:5
    {
      Label label__True_339_impl(this);
      Label* label__True_339 = &label__True_339_impl;
      USE(label__True_339);
      Label label__False_340_impl(this);
      Label* label__False_340 = &label__False_340_impl;
      USE(label__False_340);
      Label label_if_done_label_582_840_impl(this, {});
      Label* label_if_done_label_582_840 = &label_if_done_label_582_840_impl;
      USE(label_if_done_label_582_840);
      Branch(implicit_cast<TNode<BoolT>>(p_requested_little_endian), label__True_339, label__False_340);
      if (label__True_339->is_used())
      {
        BIND(label__True_339);
        // ../src/builtins/data-view.tq:635:34
        {
          // ../src/builtins/data-view.tq:636:7
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_275).value()), implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*b0_276).value()));
          // ../src/builtins/data-view.tq:637:7
          int31_t t1264 = 1;
          TNode<IntPtrT> t1265 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1264)));
          TNode<IntPtrT> t1266 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1265)));
          USE(implicit_cast<TNode<IntPtrT>>(t1266));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_275).value()), implicit_cast<TNode<IntPtrT>>(t1266), implicit_cast<TNode<Uint32T>>((*b1_277).value()));
          // ../src/builtins/data-view.tq:638:7
          int31_t t1267 = 2;
          TNode<IntPtrT> t1268 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1267)));
          TNode<IntPtrT> t1269 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1268)));
          USE(implicit_cast<TNode<IntPtrT>>(t1269));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_275).value()), implicit_cast<TNode<IntPtrT>>(t1269), implicit_cast<TNode<Uint32T>>((*b2_278).value()));
          // ../src/builtins/data-view.tq:639:7
          int31_t t1270 = 3;
          TNode<IntPtrT> t1271 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1270)));
          TNode<IntPtrT> t1272 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1271)));
          USE(implicit_cast<TNode<IntPtrT>>(t1272));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_275).value()), implicit_cast<TNode<IntPtrT>>(t1272), implicit_cast<TNode<Uint32T>>((*b3_279).value()));
          // ../src/builtins/data-view.tq:640:7
          int31_t t1273 = 4;
          TNode<IntPtrT> t1274 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1273)));
          TNode<IntPtrT> t1275 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1274)));
          USE(implicit_cast<TNode<IntPtrT>>(t1275));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_275).value()), implicit_cast<TNode<IntPtrT>>(t1275), implicit_cast<TNode<Uint32T>>((*b4_280).value()));
          // ../src/builtins/data-view.tq:641:7
          int31_t t1276 = 5;
          TNode<IntPtrT> t1277 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1276)));
          TNode<IntPtrT> t1278 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1277)));
          USE(implicit_cast<TNode<IntPtrT>>(t1278));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_275).value()), implicit_cast<TNode<IntPtrT>>(t1278), implicit_cast<TNode<Uint32T>>((*b5_281).value()));
          // ../src/builtins/data-view.tq:642:7
          int31_t t1279 = 6;
          TNode<IntPtrT> t1280 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1279)));
          TNode<IntPtrT> t1281 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1280)));
          USE(implicit_cast<TNode<IntPtrT>>(t1281));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_275).value()), implicit_cast<TNode<IntPtrT>>(t1281), implicit_cast<TNode<Uint32T>>((*b6_282).value()));
          // ../src/builtins/data-view.tq:643:7
          int31_t t1282 = 7;
          TNode<IntPtrT> t1283 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1282)));
          TNode<IntPtrT> t1284 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1283)));
          USE(implicit_cast<TNode<IntPtrT>>(t1284));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_275).value()), implicit_cast<TNode<IntPtrT>>(t1284), implicit_cast<TNode<Uint32T>>((*b7_283).value()));
        }
        Goto(label_if_done_label_582_840);
      }
      if (label__False_340->is_used())
      {
        BIND(label__False_340);
        // ../src/builtins/data-view.tq:644:12
        {
          // ../src/builtins/data-view.tq:645:7
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_275).value()), implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*b7_283).value()));
          // ../src/builtins/data-view.tq:646:7
          int31_t t1285 = 1;
          TNode<IntPtrT> t1286 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1285)));
          TNode<IntPtrT> t1287 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1286)));
          USE(implicit_cast<TNode<IntPtrT>>(t1287));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_275).value()), implicit_cast<TNode<IntPtrT>>(t1287), implicit_cast<TNode<Uint32T>>((*b6_282).value()));
          // ../src/builtins/data-view.tq:647:7
          int31_t t1288 = 2;
          TNode<IntPtrT> t1289 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1288)));
          TNode<IntPtrT> t1290 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1289)));
          USE(implicit_cast<TNode<IntPtrT>>(t1290));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_275).value()), implicit_cast<TNode<IntPtrT>>(t1290), implicit_cast<TNode<Uint32T>>((*b5_281).value()));
          // ../src/builtins/data-view.tq:648:7
          int31_t t1291 = 3;
          TNode<IntPtrT> t1292 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1291)));
          TNode<IntPtrT> t1293 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1292)));
          USE(implicit_cast<TNode<IntPtrT>>(t1293));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_275).value()), implicit_cast<TNode<IntPtrT>>(t1293), implicit_cast<TNode<Uint32T>>((*b4_280).value()));
          // ../src/builtins/data-view.tq:649:7
          int31_t t1294 = 4;
          TNode<IntPtrT> t1295 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1294)));
          TNode<IntPtrT> t1296 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1295)));
          USE(implicit_cast<TNode<IntPtrT>>(t1296));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_275).value()), implicit_cast<TNode<IntPtrT>>(t1296), implicit_cast<TNode<Uint32T>>((*b3_279).value()));
          // ../src/builtins/data-view.tq:650:7
          int31_t t1297 = 5;
          TNode<IntPtrT> t1298 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1297)));
          TNode<IntPtrT> t1299 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1298)));
          USE(implicit_cast<TNode<IntPtrT>>(t1299));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_275).value()), implicit_cast<TNode<IntPtrT>>(t1299), implicit_cast<TNode<Uint32T>>((*b2_278).value()));
          // ../src/builtins/data-view.tq:651:7
          int31_t t1300 = 6;
          TNode<IntPtrT> t1301 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1300)));
          TNode<IntPtrT> t1302 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1301)));
          USE(implicit_cast<TNode<IntPtrT>>(t1302));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_275).value()), implicit_cast<TNode<IntPtrT>>(t1302), implicit_cast<TNode<Uint32T>>((*b1_277).value()));
          // ../src/builtins/data-view.tq:652:7
          int31_t t1303 = 7;
          TNode<IntPtrT> t1304 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1303)));
          TNode<IntPtrT> t1305 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1304)));
          USE(implicit_cast<TNode<IntPtrT>>(t1305));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_275).value()), implicit_cast<TNode<IntPtrT>>(t1305), implicit_cast<TNode<Uint32T>>((*b0_276).value()));
        }
        Goto(label_if_done_label_582_840);
      }
      BIND(label_if_done_label_582_840);
    }
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataViewBigInt(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BigInt> p_bigint_value, TNode<BoolT> p_requested_little_endian) {
  Label label_macro_end_841_impl(this, {});
  Label* label_macro_end_841 = &label_macro_end_841_impl;
  USE(label_macro_end_841);
  // ../src/builtins/data-view.tq:665:60
  {
    // ../src/builtins/data-view.tq:667:5
    TNode<UintPtrT> t1306 = UncheckedCast<UintPtrT>(DataViewDecodeBigIntLength(implicit_cast<TNode<BigInt>>(p_bigint_value)));
    USE(implicit_cast<TNode<UintPtrT>>(t1306));
    TVARIABLE(UintPtrT, length_284_impl);
    auto length_284 = &length_284_impl;
    USE(length_284);
    *length_284 = implicit_cast<TNode<UintPtrT>>(t1306);
    // ../src/builtins/data-view.tq:668:5
    TNode<UintPtrT> t1307 = UncheckedCast<UintPtrT>(DataViewDecodeBigIntSign(implicit_cast<TNode<BigInt>>(p_bigint_value)));
    USE(implicit_cast<TNode<UintPtrT>>(t1307));
    TVARIABLE(UintPtrT, sign_285_impl);
    auto sign_285 = &sign_285_impl;
    USE(sign_285);
    *sign_285 = implicit_cast<TNode<UintPtrT>>(t1307);
    // ../src/builtins/data-view.tq:672:5
    int31_t t1308 = 0;
    TVARIABLE(Uint32T, low_word_286_impl);
    auto low_word_286 = &low_word_286_impl;
    USE(low_word_286);
    TNode<Uint32T> t1309 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1308)));
    *low_word_286 = implicit_cast<TNode<Uint32T>>(t1309);
    // ../src/builtins/data-view.tq:673:5
    int31_t t1310 = 0;
    TVARIABLE(Uint32T, high_word_287_impl);
    auto high_word_287 = &high_word_287_impl;
    USE(high_word_287);
    TNode<Uint32T> t1311 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1310)));
    *high_word_287 = implicit_cast<TNode<Uint32T>>(t1311);
    // ../src/builtins/data-view.tq:676:5
    {
      Label label__True_341_impl(this);
      Label* label__True_341 = &label__True_341_impl;
      USE(label__True_341);
      Label label__False_342_impl(this, {high_word_287, low_word_286});
      Label* label__False_342 = &label__False_342_impl;
      USE(label__False_342);
      int31_t t1312 = 0;
      TNode<UintPtrT> t1313 = UncheckedCast<UintPtrT>(from_constexpr9ATuintptr(implicit_cast<int31_t>(t1312)));
      TNode<BoolT> t1314 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<UintPtrT>>((*length_284).value()), implicit_cast<TNode<UintPtrT>>(t1313)));
      USE(implicit_cast<TNode<BoolT>>(t1314));
      Branch(implicit_cast<TNode<BoolT>>(t1314), label__True_341, label__False_342);
      if (label__True_341->is_used())
      {
        BIND(label__True_341);
        // ../src/builtins/data-view.tq:676:22
        {
          // ../src/builtins/data-view.tq:677:7
          {
            bool t1315 = Is64();
            USE(implicit_cast<bool>(t1315));
            if ((implicit_cast<bool>(t1315))) {
              // ../src/builtins/data-view.tq:677:29
              {
                // ../src/builtins/data-view.tq:679:9
                int31_t t1316 = 0;
                TNode<UintPtrT> t1317 = UncheckedCast<UintPtrT>(LoadBigIntDigit(implicit_cast<TNode<BigInt>>(p_bigint_value), implicit_cast<int31_t>(t1316)));
                USE(implicit_cast<TNode<UintPtrT>>(t1317));
                TVARIABLE(UintPtrT, value_288_impl);
                auto value_288 = &value_288_impl;
                USE(value_288);
                *value_288 = implicit_cast<TNode<UintPtrT>>(t1317);
                // ../src/builtins/data-view.tq:680:9
                TNode<Uint32T> t1318 = UncheckedCast<Uint32T>(convert8ATuint32(implicit_cast<TNode<UintPtrT>>((*value_288).value())));
                USE(implicit_cast<TNode<Uint32T>>(t1318));
                *low_word_286 = implicit_cast<TNode<Uint32T>>(t1318);
                // ../src/builtins/data-view.tq:681:9
                int31_t t1319 = 32;
                TNode<UintPtrT> t1320 = UncheckedCast<UintPtrT>(from_constexpr9ATuintptr(implicit_cast<int31_t>(t1319)));
                TNode<UintPtrT> t1321 = UncheckedCast<UintPtrT>(WordShr(implicit_cast<TNode<UintPtrT>>((*value_288).value()), implicit_cast<TNode<UintPtrT>>(t1320)));
                USE(implicit_cast<TNode<UintPtrT>>(t1321));
                TNode<Uint32T> t1322 = UncheckedCast<Uint32T>(convert8ATuint32(implicit_cast<TNode<UintPtrT>>(t1321)));
                USE(implicit_cast<TNode<Uint32T>>(t1322));
                *high_word_287 = implicit_cast<TNode<Uint32T>>(t1322);
              }
            } else {
              // ../src/builtins/data-view.tq:683:12
              {
                // ../src/builtins/data-view.tq:684:9
                int31_t t1323 = 0;
                TNode<UintPtrT> t1324 = UncheckedCast<UintPtrT>(LoadBigIntDigit(implicit_cast<TNode<BigInt>>(p_bigint_value), implicit_cast<int31_t>(t1323)));
                USE(implicit_cast<TNode<UintPtrT>>(t1324));
                TNode<Uint32T> t1325 = UncheckedCast<Uint32T>(convert8ATuint32(implicit_cast<TNode<UintPtrT>>(t1324)));
                USE(implicit_cast<TNode<Uint32T>>(t1325));
                *low_word_286 = implicit_cast<TNode<Uint32T>>(t1325);
                // ../src/builtins/data-view.tq:685:9
                {
                  Label label__True_345_impl(this);
                  Label* label__True_345 = &label__True_345_impl;
                  USE(label__True_345);
                  Label label__False_346_impl(this, {high_word_287});
                  Label* label__False_346 = &label__False_346_impl;
                  USE(label__False_346);
                  int31_t t1326 = 2;
                  TNode<UintPtrT> t1327 = UncheckedCast<UintPtrT>(from_constexpr9ATuintptr(implicit_cast<int31_t>(t1326)));
                  TNode<BoolT> t1328 = UncheckedCast<BoolT>(UintPtrGreaterThanOrEqual(implicit_cast<TNode<UintPtrT>>((*length_284).value()), implicit_cast<TNode<UintPtrT>>(t1327)));
                  USE(implicit_cast<TNode<BoolT>>(t1328));
                  Branch(implicit_cast<TNode<BoolT>>(t1328), label__True_345, label__False_346);
                  if (label__True_345->is_used())
                  {
                    BIND(label__True_345);
                    // ../src/builtins/data-view.tq:685:26
                    {
                      // ../src/builtins/data-view.tq:686:11
                      int31_t t1329 = 1;
                      TNode<UintPtrT> t1330 = UncheckedCast<UintPtrT>(LoadBigIntDigit(implicit_cast<TNode<BigInt>>(p_bigint_value), implicit_cast<int31_t>(t1329)));
                      USE(implicit_cast<TNode<UintPtrT>>(t1330));
                      TNode<Uint32T> t1331 = UncheckedCast<Uint32T>(convert8ATuint32(implicit_cast<TNode<UintPtrT>>(t1330)));
                      USE(implicit_cast<TNode<Uint32T>>(t1331));
                      *high_word_287 = implicit_cast<TNode<Uint32T>>(t1331);
                    }
                    Goto(label__False_346);
                  }
                  BIND(label__False_346);
                }
              }
            }
          }
        }
        Goto(label__False_342);
      }
      BIND(label__False_342);
    }
    // ../src/builtins/data-view.tq:691:5
    {
      Label label__True_347_impl(this);
      Label* label__True_347 = &label__True_347_impl;
      USE(label__True_347);
      Label label__False_348_impl(this, {high_word_287, low_word_286});
      Label* label__False_348 = &label__False_348_impl;
      USE(label__False_348);
      int31_t t1332 = 0;
      TNode<UintPtrT> t1333 = UncheckedCast<UintPtrT>(from_constexpr9ATuintptr(implicit_cast<int31_t>(t1332)));
      TNode<BoolT> t1334 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<UintPtrT>>((*sign_285).value()), implicit_cast<TNode<UintPtrT>>(t1333)));
      USE(implicit_cast<TNode<BoolT>>(t1334));
      Branch(implicit_cast<TNode<BoolT>>(t1334), label__True_347, label__False_348);
      if (label__True_347->is_used())
      {
        BIND(label__True_347);
        // ../src/builtins/data-view.tq:691:20
        {
          // ../src/builtins/data-view.tq:692:7
          int31_t t1335 = 0;
          TNode<Int32T> t1336 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>((*high_word_287).value())));
          USE(implicit_cast<TNode<Int32T>>(t1336));
          TNode<Int32T> t1337 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t1335)));
          TNode<Int32T> t1338 = UncheckedCast<Int32T>(Int32Sub(implicit_cast<TNode<Int32T>>(t1337), implicit_cast<TNode<Int32T>>(t1336)));
          USE(implicit_cast<TNode<Int32T>>(t1338));
          TNode<Uint32T> t1339 = UncheckedCast<Uint32T>(Unsigned(implicit_cast<TNode<Int32T>>(t1338)));
          USE(implicit_cast<TNode<Uint32T>>(t1339));
          *high_word_287 = implicit_cast<TNode<Uint32T>>(t1339);
          // ../src/builtins/data-view.tq:693:7
          {
            Label label__True_349_impl(this);
            Label* label__True_349 = &label__True_349_impl;
            USE(label__True_349);
            Label label__False_350_impl(this, {high_word_287});
            Label* label__False_350 = &label__False_350_impl;
            USE(label__False_350);
            int31_t t1340 = 0;
            TNode<Uint32T> t1341 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1340)));
            TNode<BoolT> t1342 = UncheckedCast<BoolT>(Word32NotEqual(implicit_cast<TNode<Uint32T>>((*low_word_286).value()), implicit_cast<TNode<Uint32T>>(t1341)));
            USE(implicit_cast<TNode<BoolT>>(t1342));
            Branch(implicit_cast<TNode<BoolT>>(t1342), label__True_349, label__False_350);
            if (label__True_349->is_used())
            {
              BIND(label__True_349);
              // ../src/builtins/data-view.tq:693:26
              {
                // ../src/builtins/data-view.tq:694:9
                TNode<Int32T> t1343 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>((*high_word_287).value())));
                USE(implicit_cast<TNode<Int32T>>(t1343));
                int31_t t1344 = 1;
                TNode<Int32T> t1345 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t1344)));
                TNode<Int32T> t1346 = UncheckedCast<Int32T>(Int32Sub(implicit_cast<TNode<Int32T>>(t1343), implicit_cast<TNode<Int32T>>(t1345)));
                USE(implicit_cast<TNode<Int32T>>(t1346));
                TNode<Uint32T> t1347 = UncheckedCast<Uint32T>(Unsigned(implicit_cast<TNode<Int32T>>(t1346)));
                USE(implicit_cast<TNode<Uint32T>>(t1347));
                *high_word_287 = implicit_cast<TNode<Uint32T>>(t1347);
              }
              Goto(label__False_350);
            }
            BIND(label__False_350);
          }
          // ../src/builtins/data-view.tq:696:7
          int31_t t1348 = 0;
          TNode<Int32T> t1349 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>((*low_word_286).value())));
          USE(implicit_cast<TNode<Int32T>>(t1349));
          TNode<Int32T> t1350 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t1348)));
          TNode<Int32T> t1351 = UncheckedCast<Int32T>(Int32Sub(implicit_cast<TNode<Int32T>>(t1350), implicit_cast<TNode<Int32T>>(t1349)));
          USE(implicit_cast<TNode<Int32T>>(t1351));
          TNode<Uint32T> t1352 = UncheckedCast<Uint32T>(Unsigned(implicit_cast<TNode<Int32T>>(t1351)));
          USE(implicit_cast<TNode<Uint32T>>(t1352));
          *low_word_286 = implicit_cast<TNode<Uint32T>>(t1352);
        }
        Goto(label__False_348);
      }
      BIND(label__False_348);
    }
    // ../src/builtins/data-view.tq:699:5
    StoreDataView64(implicit_cast<TNode<JSArrayBuffer>>(p_buffer), implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*low_word_286).value()), implicit_cast<TNode<Uint32T>>((*high_word_287).value()), implicit_cast<TNode<BoolT>>(p_requested_little_endian));
  }
}

compiler::TNode<Object> DataViewBuiltinsFromDSLAssembler::DataViewSet(TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_offset, TNode<Object> p_value, TNode<Object> p_requested_little_endian, ElementsKind p_kind) {
  TVARIABLE(Object, _return_289_impl);
  auto _return_289 = &_return_289_impl;
  USE(_return_289);
  Label label_macro_end_842_impl(this, {_return_289});
  Label* label_macro_end_842 = &label_macro_end_842_impl;
  USE(label_macro_end_842);
  // ../src/builtins/data-view.tq:708:59
  {
    // ../src/builtins/data-view.tq:710:5
    TNode<String> t1353 = UncheckedCast<String>(MakeDataViewSetterNameString(implicit_cast<ElementsKind>(p_kind)));
    USE(implicit_cast<TNode<String>>(t1353));
    TNode<JSDataView> t1354 = UncheckedCast<JSDataView>(ValidateDataView(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<String>>(t1353)));
    USE(implicit_cast<TNode<JSDataView>>(t1354));
    TVARIABLE(JSDataView, data_view_290_impl);
    auto data_view_290 = &data_view_290_impl;
    USE(data_view_290);
    *data_view_290 = implicit_cast<TNode<JSDataView>>(t1354);
    // ../src/builtins/data-view.tq:713:5
    TVARIABLE(Number, getIndex_291_impl);
    auto getIndex_291 = &getIndex_291_impl;
    USE(getIndex_291);
    // ../src/builtins/data-view.tq:714:5
    {
      Label label_try_done_583_843_impl(this);
      Label* label_try_done_583_843 = &label_try_done_583_843_impl;
      USE(label_try_done_583_843);
      Label label_RangeError_351_impl(this);
      Label* label_RangeError_351 = &label_RangeError_351_impl;
      USE(label_RangeError_351);
      Label label_try_begin_584_844_impl(this);
      Label* label_try_begin_584_844 = &label_try_begin_584_844_impl;
      USE(label_try_begin_584_844);
      Goto(label_try_begin_584_844);
      if (label_try_begin_584_844->is_used())
      {
        BIND(label_try_begin_584_844);
        // ../src/builtins/data-view.tq:714:9
        {
          // ../src/builtins/data-view.tq:715:7
          TNode<Number> t1355 = UncheckedCast<Number>(ToIndex(implicit_cast<TNode<Object>>(p_offset), implicit_cast<TNode<Context>>(p_context), label_RangeError_351));
          USE(implicit_cast<TNode<Number>>(t1355));
          *getIndex_291 = implicit_cast<TNode<Number>>(t1355);
        }
        Goto(label_try_done_583_843);
      }
      if (label_RangeError_351->is_used())
      {
        BIND(label_RangeError_351);
        // ../src/builtins/data-view.tq:717:22
        {
          // ../src/builtins/data-view.tq:718:7
          ThrowRangeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kInvalidDataViewAccessorOffset));
        }
      }
      BIND(label_try_done_583_843);
    }
    // ../src/builtins/data-view.tq:721:5
    TNode<BoolT> t1356 = UncheckedCast<BoolT>(ToBoolean(implicit_cast<TNode<Object>>(p_requested_little_endian)));
    USE(implicit_cast<TNode<BoolT>>(t1356));
    TVARIABLE(BoolT, littleEndian_292_impl);
    auto littleEndian_292 = &littleEndian_292_impl;
    USE(littleEndian_292);
    *littleEndian_292 = implicit_cast<TNode<BoolT>>(t1356);
    // ../src/builtins/data-view.tq:722:5
    TNode<JSArrayBuffer> t1357 = UncheckedCast<JSArrayBuffer>(LoadArrayBufferViewBuffer(implicit_cast<TNode<JSArrayBufferView>>((*data_view_290).value())));
    TVARIABLE(JSArrayBuffer, buffer_293_impl);
    auto buffer_293 = &buffer_293_impl;
    USE(buffer_293);
    *buffer_293 = implicit_cast<TNode<JSArrayBuffer>>(t1357);
    // ../src/builtins/data-view.tq:724:5
    TVARIABLE(BigInt, bigint_value_294_impl);
    auto bigint_value_294 = &bigint_value_294_impl;
    USE(bigint_value_294);
    // ../src/builtins/data-view.tq:725:5
    TVARIABLE(Number, num_value_295_impl);
    auto num_value_295 = &num_value_295_impl;
    USE(num_value_295);
    // ../src/builtins/data-view.tq:728:5
    {
      Label label__False_354_impl(this);
      Label* label__False_354 = &label__False_354_impl;
      USE(label__False_354);
      bool t1358 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS));
      USE(implicit_cast<bool>(t1358));
      bool t1359 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS));
      USE(implicit_cast<bool>(t1359));
      if ((implicit_cast<bool>((implicit_cast<bool>(t1358) || implicit_cast<bool>(t1359))))) {
        // ../src/builtins/data-view.tq:728:76
        {
          // ../src/builtins/data-view.tq:729:7
          TNode<BigInt> t1360 = UncheckedCast<BigInt>(ToBigInt(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_value)));
          USE(implicit_cast<TNode<BigInt>>(t1360));
          *bigint_value_294 = implicit_cast<TNode<BigInt>>(t1360);
        }
      } else {
        // ../src/builtins/data-view.tq:730:12
        {
          // ../src/builtins/data-view.tq:731:7
          TNode<Number> t1361 = UncheckedCast<Number>(ToNumber(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_value)));
          USE(implicit_cast<TNode<Number>>(t1361));
          *num_value_295 = implicit_cast<TNode<Number>>(t1361);
        }
      }
    }
    // ../src/builtins/data-view.tq:734:5
    {
      Label label__True_355_impl(this);
      Label* label__True_355 = &label__True_355_impl;
      USE(label__True_355);
      Label label__False_356_impl(this, {});
      Label* label__False_356 = &label__False_356_impl;
      USE(label__False_356);
      TNode<BoolT> t1362 = UncheckedCast<BoolT>(IsDetachedBuffer(implicit_cast<TNode<JSArrayBuffer>>((*buffer_293).value())));
      USE(implicit_cast<TNode<BoolT>>(t1362));
      Branch(implicit_cast<TNode<BoolT>>(t1362), label__True_355, label__False_356);
      if (label__True_355->is_used())
      {
        BIND(label__True_355);
        // ../src/builtins/data-view.tq:734:35
        {
          // ../src/builtins/data-view.tq:735:7
          TNode<String> t1363 = UncheckedCast<String>(MakeDataViewSetterNameString(implicit_cast<ElementsKind>(p_kind)));
          USE(implicit_cast<TNode<String>>(t1363));
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kDetachedOperation), implicit_cast<TNode<Object>>(t1363));
        }
      }
      BIND(label__False_356);
    }
    // ../src/builtins/data-view.tq:739:5
    TNode<Number> t1364 = UncheckedCast<Number>(LoadDataViewByteOffset(implicit_cast<TNode<JSDataView>>((*data_view_290).value())));
    TVARIABLE(Number, viewOffset_296_impl);
    auto viewOffset_296 = &viewOffset_296_impl;
    USE(viewOffset_296);
    *viewOffset_296 = implicit_cast<TNode<Number>>(t1364);
    // ../src/builtins/data-view.tq:740:5
    TNode<Number> t1365 = UncheckedCast<Number>(LoadDataViewByteLength(implicit_cast<TNode<JSDataView>>((*data_view_290).value())));
    TVARIABLE(Number, viewSize_297_impl);
    auto viewSize_297 = &viewSize_297_impl;
    USE(viewSize_297);
    *viewSize_297 = implicit_cast<TNode<Number>>(t1365);
    // ../src/builtins/data-view.tq:741:5
    int31_t t1366 = DataViewElementSize(implicit_cast<ElementsKind>(p_kind));
    USE(implicit_cast<int31_t>(t1366));
    TVARIABLE(Number, elementSize_298_impl);
    auto elementSize_298 = &elementSize_298_impl;
    USE(elementSize_298);
    TNode<Number> t1367 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t1366)));
    *elementSize_298 = implicit_cast<TNode<Number>>(t1367);
    // ../src/builtins/data-view.tq:743:5
    {
      Label label__True_357_impl(this);
      Label* label__True_357 = &label__True_357_impl;
      USE(label__True_357);
      Label label__False_358_impl(this, {});
      Label* label__False_358 = &label__False_358_impl;
      USE(label__False_358);
      TNode<Number> t1368 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*getIndex_291).value()), implicit_cast<TNode<Number>>((*elementSize_298).value())));
      USE(implicit_cast<TNode<Number>>(t1368));
      BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>(t1368), implicit_cast<TNode<Number>>((*viewSize_297).value()), label__True_357, label__False_358);
      if (label__True_357->is_used())
      {
        BIND(label__True_357);
        // ../src/builtins/data-view.tq:743:44
        {
          // ../src/builtins/data-view.tq:744:7
          ThrowRangeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kInvalidDataViewAccessorOffset));
        }
      }
      BIND(label__False_358);
    }
    // ../src/builtins/data-view.tq:747:5
    TNode<Float64T> t1369 = UncheckedCast<Float64T>(convert9ATfloat64(implicit_cast<TNode<Number>>((*getIndex_291).value())));
    USE(implicit_cast<TNode<Float64T>>(t1369));
    TVARIABLE(Float64T, getIndexFloat_299_impl);
    auto getIndexFloat_299 = &getIndexFloat_299_impl;
    USE(getIndexFloat_299);
    *getIndexFloat_299 = implicit_cast<TNode<Float64T>>(t1369);
    // ../src/builtins/data-view.tq:748:5
    TNode<UintPtrT> t1370 = UncheckedCast<UintPtrT>(convert9ATuintptr(implicit_cast<TNode<Float64T>>((*getIndexFloat_299).value())));
    USE(implicit_cast<TNode<UintPtrT>>(t1370));
    TNode<IntPtrT> t1371 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<UintPtrT>>(t1370)));
    USE(implicit_cast<TNode<IntPtrT>>(t1371));
    TVARIABLE(IntPtrT, getIndexIntptr_300_impl);
    auto getIndexIntptr_300 = &getIndexIntptr_300_impl;
    USE(getIndexIntptr_300);
    *getIndexIntptr_300 = implicit_cast<TNode<IntPtrT>>(t1371);
    // ../src/builtins/data-view.tq:749:5
    TNode<Float64T> t1372 = UncheckedCast<Float64T>(convert9ATfloat64(implicit_cast<TNode<Number>>((*viewOffset_296).value())));
    USE(implicit_cast<TNode<Float64T>>(t1372));
    TVARIABLE(Float64T, viewOffsetFloat_301_impl);
    auto viewOffsetFloat_301 = &viewOffsetFloat_301_impl;
    USE(viewOffsetFloat_301);
    *viewOffsetFloat_301 = implicit_cast<TNode<Float64T>>(t1372);
    // ../src/builtins/data-view.tq:750:5
    TNode<UintPtrT> t1373 = UncheckedCast<UintPtrT>(convert9ATuintptr(implicit_cast<TNode<Float64T>>((*viewOffsetFloat_301).value())));
    USE(implicit_cast<TNode<UintPtrT>>(t1373));
    TNode<IntPtrT> t1374 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<UintPtrT>>(t1373)));
    USE(implicit_cast<TNode<IntPtrT>>(t1374));
    TVARIABLE(IntPtrT, viewOffsetIntptr_302_impl);
    auto viewOffsetIntptr_302 = &viewOffsetIntptr_302_impl;
    USE(viewOffsetIntptr_302);
    *viewOffsetIntptr_302 = implicit_cast<TNode<IntPtrT>>(t1374);
    // ../src/builtins/data-view.tq:752:5
    TNode<IntPtrT> t1375 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>((*getIndexIntptr_300).value()), implicit_cast<TNode<IntPtrT>>((*viewOffsetIntptr_302).value())));
    USE(implicit_cast<TNode<IntPtrT>>(t1375));
    TVARIABLE(IntPtrT, bufferIndex_303_impl);
    auto bufferIndex_303 = &bufferIndex_303_impl;
    USE(bufferIndex_303);
    *bufferIndex_303 = implicit_cast<TNode<IntPtrT>>(t1375);
    // ../src/builtins/data-view.tq:754:5
    {
      Label label__False_361_impl(this);
      Label* label__False_361 = &label__False_361_impl;
      USE(label__False_361);
      bool t1376 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS));
      USE(implicit_cast<bool>(t1376));
      bool t1377 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS));
      USE(implicit_cast<bool>(t1377));
      if ((implicit_cast<bool>((implicit_cast<bool>(t1376) || implicit_cast<bool>(t1377))))) {
        // ../src/builtins/data-view.tq:754:76
        {
          // ../src/builtins/data-view.tq:755:7
          StoreDataViewBigInt(implicit_cast<TNode<JSArrayBuffer>>((*buffer_293).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_303).value()), implicit_cast<TNode<BigInt>>((*bigint_value_294).value()), implicit_cast<TNode<BoolT>>((*littleEndian_292).value()));
        }
      } else {
        // ../src/builtins/data-view.tq:758:10
        {
          // ../src/builtins/data-view.tq:759:7
          TNode<Float64T> t1378 = UncheckedCast<Float64T>(ChangeNumberToFloat64(implicit_cast<TNode<Number>>((*num_value_295).value())));
          USE(implicit_cast<TNode<Float64T>>(t1378));
          TVARIABLE(Float64T, double_value_304_impl);
          auto double_value_304 = &double_value_304_impl;
          USE(double_value_304);
          *double_value_304 = implicit_cast<TNode<Float64T>>(t1378);
          // ../src/builtins/data-view.tq:761:7
          {
            Label label__False_364_impl(this);
            Label* label__False_364 = &label__False_364_impl;
            USE(label__False_364);
            bool t1379 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
            USE(implicit_cast<bool>(t1379));
            bool t1380 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT8_ELEMENTS));
            USE(implicit_cast<bool>(t1380));
            if ((implicit_cast<bool>((implicit_cast<bool>(t1379) || implicit_cast<bool>(t1380))))) {
              // ../src/builtins/data-view.tq:761:70
              {
                // ../src/builtins/data-view.tq:762:9
                TNode<Uint32T> t1381 = UncheckedCast<Uint32T>(TruncateFloat64ToWord32(implicit_cast<TNode<Float64T>>((*double_value_304).value())));
                USE(implicit_cast<TNode<Uint32T>>(t1381));
                StoreDataView8(implicit_cast<TNode<JSArrayBuffer>>((*buffer_293).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_303).value()), implicit_cast<TNode<Uint32T>>(t1381));
              }
            } else {
              // ../src/builtins/data-view.tq:765:12
              {
                Label label__False_367_impl(this);
                Label* label__False_367 = &label__False_367_impl;
                USE(label__False_367);
                bool t1382 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
                USE(implicit_cast<bool>(t1382));
                bool t1383 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT16_ELEMENTS));
                USE(implicit_cast<bool>(t1383));
                if ((implicit_cast<bool>((implicit_cast<bool>(t1382) || implicit_cast<bool>(t1383))))) {
                  // ../src/builtins/data-view.tq:765:77
                  {
                    // ../src/builtins/data-view.tq:766:9
                    TNode<Uint32T> t1384 = UncheckedCast<Uint32T>(TruncateFloat64ToWord32(implicit_cast<TNode<Float64T>>((*double_value_304).value())));
                    USE(implicit_cast<TNode<Uint32T>>(t1384));
                    StoreDataView16(implicit_cast<TNode<JSArrayBuffer>>((*buffer_293).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_303).value()), implicit_cast<TNode<Uint32T>>(t1384), implicit_cast<TNode<BoolT>>((*littleEndian_292).value()));
                  }
                } else {
                  // ../src/builtins/data-view.tq:769:12
                  {
                    Label label__False_370_impl(this);
                    Label* label__False_370 = &label__False_370_impl;
                    USE(label__False_370);
                    bool t1385 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT32_ELEMENTS));
                    USE(implicit_cast<bool>(t1385));
                    bool t1386 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT32_ELEMENTS));
                    USE(implicit_cast<bool>(t1386));
                    if ((implicit_cast<bool>((implicit_cast<bool>(t1385) || implicit_cast<bool>(t1386))))) {
                      // ../src/builtins/data-view.tq:769:77
                      {
                        // ../src/builtins/data-view.tq:770:9
                        TNode<Uint32T> t1387 = UncheckedCast<Uint32T>(TruncateFloat64ToWord32(implicit_cast<TNode<Float64T>>((*double_value_304).value())));
                        USE(implicit_cast<TNode<Uint32T>>(t1387));
                        StoreDataView32(implicit_cast<TNode<JSArrayBuffer>>((*buffer_293).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_303).value()), implicit_cast<TNode<Uint32T>>(t1387), implicit_cast<TNode<BoolT>>((*littleEndian_292).value()));
                      }
                    } else {
                      // ../src/builtins/data-view.tq:773:12
                      {
                        bool t1388 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS));
                        USE(implicit_cast<bool>(t1388));
                        if ((implicit_cast<bool>(t1388))) {
                          // ../src/builtins/data-view.tq:773:52
                          {
                            // ../src/builtins/data-view.tq:774:9
                            TNode<Float32T> t1389 = UncheckedCast<Float32T>(TruncateFloat64ToFloat32(implicit_cast<TNode<Float64T>>((*double_value_304).value())));
                            USE(implicit_cast<TNode<Float32T>>(t1389));
                            TVARIABLE(Float32T, float_value_305_impl);
                            auto float_value_305 = &float_value_305_impl;
                            USE(float_value_305);
                            *float_value_305 = implicit_cast<TNode<Float32T>>(t1389);
                            // ../src/builtins/data-view.tq:775:9
                            TNode<Uint32T> t1390 = UncheckedCast<Uint32T>(BitcastFloat32ToInt32(implicit_cast<TNode<Float32T>>((*float_value_305).value())));
                            USE(implicit_cast<TNode<Uint32T>>(t1390));
                            StoreDataView32(implicit_cast<TNode<JSArrayBuffer>>((*buffer_293).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_303).value()), implicit_cast<TNode<Uint32T>>(t1390), implicit_cast<TNode<BoolT>>((*littleEndian_292).value()));
                          }
                        } else {
                          // ../src/builtins/data-view.tq:778:12
                          {
                            bool t1391 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT64_ELEMENTS));
                            USE(implicit_cast<bool>(t1391));
                            if ((implicit_cast<bool>(t1391))) {
                              // ../src/builtins/data-view.tq:778:52
                              {
                                // ../src/builtins/data-view.tq:779:9
                                TNode<Uint32T> t1392 = UncheckedCast<Uint32T>(Float64ExtractLowWord32(implicit_cast<TNode<Float64T>>((*double_value_304).value())));
                                USE(implicit_cast<TNode<Uint32T>>(t1392));
                                TVARIABLE(Uint32T, low_word_306_impl);
                                auto low_word_306 = &low_word_306_impl;
                                USE(low_word_306);
                                *low_word_306 = implicit_cast<TNode<Uint32T>>(t1392);
                                // ../src/builtins/data-view.tq:780:9
                                TNode<Uint32T> t1393 = UncheckedCast<Uint32T>(Float64ExtractHighWord32(implicit_cast<TNode<Float64T>>((*double_value_304).value())));
                                USE(implicit_cast<TNode<Uint32T>>(t1393));
                                TVARIABLE(Uint32T, high_word_307_impl);
                                auto high_word_307 = &high_word_307_impl;
                                USE(high_word_307);
                                *high_word_307 = implicit_cast<TNode<Uint32T>>(t1393);
                                // ../src/builtins/data-view.tq:781:9
                                StoreDataView64(implicit_cast<TNode<JSArrayBuffer>>((*buffer_293).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_303).value()), implicit_cast<TNode<Uint32T>>((*low_word_306).value()), implicit_cast<TNode<Uint32T>>((*high_word_307).value()), implicit_cast<TNode<BoolT>>((*littleEndian_292).value()));
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    // ../src/builtins/data-view.tq:785:5
    *_return_289 = implicit_cast<TNode<Object>>(Undefined());
    Goto(label_macro_end_842);
  }
  BIND(label_macro_end_842);
  return implicit_cast<TNode<Object>>((*_return_289).value());
}

TF_BUILTIN(DataViewPrototypeSetUint8, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/data-view.tq:789:63
  {
    // ../src/builtins/data-view.tq:790:7
    auto t1394 = [=]() {
      int31_t t1396 = 0;
      TNode<IntPtrT> t1397 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1396)));
      TNode<Object> t1398 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1397)));
      return implicit_cast<TNode<Object>>(t1398);
    };
    auto t1395 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1399_585_impl);
    auto t1399_585 = &t1399_585_impl;
    USE(t1399_585);
    {
      Label label__True_375_impl(this);
      Label* label__True_375 = &label__True_375_impl;
      USE(label__True_375);
      Label label__False_376_impl(this);
      Label* label__False_376 = &label__False_376_impl;
      USE(label__False_376);
      Label label__done_586_845_impl(this, {t1399_585});
      Label* label__done_586_845 = &label__done_586_845_impl;
      USE(label__done_586_845);
      TNode<IntPtrT> t1400 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1401 = 0;
      TNode<IntPtrT> t1402 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1401)));
      TNode<BoolT> t1403 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1400), implicit_cast<TNode<IntPtrT>>(t1402)));
      USE(implicit_cast<TNode<BoolT>>(t1403));
      Branch(implicit_cast<TNode<BoolT>>(t1403), label__True_375, label__False_376);
      BIND(label__True_375);
            *t1399_585 = implicit_cast<TNode<Object>>(t1394());
      Goto(label__done_586_845);
      BIND(label__False_376);
            *t1399_585 = implicit_cast<TNode<Object>>(t1395());
      Goto(label__done_586_845);
      BIND(label__done_586_845);
    }
    TVARIABLE(Object, offset_308_impl);
    auto offset_308 = &offset_308_impl;
    USE(offset_308);
    *offset_308 = implicit_cast<TNode<Object>>((*t1399_585).value());
    // ../src/builtins/data-view.tq:793:7
    auto t1404 = [=]() {
      int31_t t1406 = 1;
      TNode<IntPtrT> t1407 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1406)));
      TNode<Object> t1408 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1407)));
      return implicit_cast<TNode<Object>>(t1408);
    };
    auto t1405 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1409_587_impl);
    auto t1409_587 = &t1409_587_impl;
    USE(t1409_587);
    {
      Label label__True_377_impl(this);
      Label* label__True_377 = &label__True_377_impl;
      USE(label__True_377);
      Label label__False_378_impl(this);
      Label* label__False_378 = &label__False_378_impl;
      USE(label__False_378);
      Label label__done_588_846_impl(this, {t1409_587});
      Label* label__done_588_846 = &label__done_588_846_impl;
      USE(label__done_588_846);
      TNode<IntPtrT> t1410 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1411 = 1;
      TNode<IntPtrT> t1412 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1411)));
      TNode<BoolT> t1413 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1410), implicit_cast<TNode<IntPtrT>>(t1412)));
      USE(implicit_cast<TNode<BoolT>>(t1413));
      Branch(implicit_cast<TNode<BoolT>>(t1413), label__True_377, label__False_378);
      BIND(label__True_377);
            *t1409_587 = implicit_cast<TNode<Object>>(t1404());
      Goto(label__done_588_846);
      BIND(label__False_378);
            *t1409_587 = implicit_cast<TNode<Object>>(t1405());
      Goto(label__done_588_846);
      BIND(label__done_588_846);
    }
    TVARIABLE(Object, value_309_impl);
    auto value_309 = &value_309_impl;
    USE(value_309);
    *value_309 = implicit_cast<TNode<Object>>((*t1409_587).value());
    // ../src/builtins/data-view.tq:796:7
    TNode<Object> t1414 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_308).value()), implicit_cast<TNode<Object>>((*value_309).value()), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<ElementsKind>(UINT8_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1414));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1414));
  }
}

TF_BUILTIN(DataViewPrototypeSetInt8, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/data-view.tq:801:63
  {
    // ../src/builtins/data-view.tq:802:7
    auto t1415 = [=]() {
      int31_t t1417 = 0;
      TNode<IntPtrT> t1418 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1417)));
      TNode<Object> t1419 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1418)));
      return implicit_cast<TNode<Object>>(t1419);
    };
    auto t1416 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1420_589_impl);
    auto t1420_589 = &t1420_589_impl;
    USE(t1420_589);
    {
      Label label__True_379_impl(this);
      Label* label__True_379 = &label__True_379_impl;
      USE(label__True_379);
      Label label__False_380_impl(this);
      Label* label__False_380 = &label__False_380_impl;
      USE(label__False_380);
      Label label__done_590_847_impl(this, {t1420_589});
      Label* label__done_590_847 = &label__done_590_847_impl;
      USE(label__done_590_847);
      TNode<IntPtrT> t1421 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1422 = 0;
      TNode<IntPtrT> t1423 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1422)));
      TNode<BoolT> t1424 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1421), implicit_cast<TNode<IntPtrT>>(t1423)));
      USE(implicit_cast<TNode<BoolT>>(t1424));
      Branch(implicit_cast<TNode<BoolT>>(t1424), label__True_379, label__False_380);
      BIND(label__True_379);
            *t1420_589 = implicit_cast<TNode<Object>>(t1415());
      Goto(label__done_590_847);
      BIND(label__False_380);
            *t1420_589 = implicit_cast<TNode<Object>>(t1416());
      Goto(label__done_590_847);
      BIND(label__done_590_847);
    }
    TVARIABLE(Object, offset_310_impl);
    auto offset_310 = &offset_310_impl;
    USE(offset_310);
    *offset_310 = implicit_cast<TNode<Object>>((*t1420_589).value());
    // ../src/builtins/data-view.tq:805:7
    auto t1425 = [=]() {
      int31_t t1427 = 1;
      TNode<IntPtrT> t1428 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1427)));
      TNode<Object> t1429 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1428)));
      return implicit_cast<TNode<Object>>(t1429);
    };
    auto t1426 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1430_591_impl);
    auto t1430_591 = &t1430_591_impl;
    USE(t1430_591);
    {
      Label label__True_381_impl(this);
      Label* label__True_381 = &label__True_381_impl;
      USE(label__True_381);
      Label label__False_382_impl(this);
      Label* label__False_382 = &label__False_382_impl;
      USE(label__False_382);
      Label label__done_592_848_impl(this, {t1430_591});
      Label* label__done_592_848 = &label__done_592_848_impl;
      USE(label__done_592_848);
      TNode<IntPtrT> t1431 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1432 = 1;
      TNode<IntPtrT> t1433 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1432)));
      TNode<BoolT> t1434 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1431), implicit_cast<TNode<IntPtrT>>(t1433)));
      USE(implicit_cast<TNode<BoolT>>(t1434));
      Branch(implicit_cast<TNode<BoolT>>(t1434), label__True_381, label__False_382);
      BIND(label__True_381);
            *t1430_591 = implicit_cast<TNode<Object>>(t1425());
      Goto(label__done_592_848);
      BIND(label__False_382);
            *t1430_591 = implicit_cast<TNode<Object>>(t1426());
      Goto(label__done_592_848);
      BIND(label__done_592_848);
    }
    TVARIABLE(Object, value_311_impl);
    auto value_311 = &value_311_impl;
    USE(value_311);
    *value_311 = implicit_cast<TNode<Object>>((*t1430_591).value());
    // ../src/builtins/data-view.tq:808:7
    TNode<Object> t1435 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_310).value()), implicit_cast<TNode<Object>>((*value_311).value()), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<ElementsKind>(INT8_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1435));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1435));
  }
}

TF_BUILTIN(DataViewPrototypeSetUint16, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/data-view.tq:813:63
  {
    // ../src/builtins/data-view.tq:814:7
    auto t1436 = [=]() {
      int31_t t1438 = 0;
      TNode<IntPtrT> t1439 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1438)));
      TNode<Object> t1440 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1439)));
      return implicit_cast<TNode<Object>>(t1440);
    };
    auto t1437 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1441_593_impl);
    auto t1441_593 = &t1441_593_impl;
    USE(t1441_593);
    {
      Label label__True_383_impl(this);
      Label* label__True_383 = &label__True_383_impl;
      USE(label__True_383);
      Label label__False_384_impl(this);
      Label* label__False_384 = &label__False_384_impl;
      USE(label__False_384);
      Label label__done_594_849_impl(this, {t1441_593});
      Label* label__done_594_849 = &label__done_594_849_impl;
      USE(label__done_594_849);
      TNode<IntPtrT> t1442 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1443 = 0;
      TNode<IntPtrT> t1444 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1443)));
      TNode<BoolT> t1445 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1442), implicit_cast<TNode<IntPtrT>>(t1444)));
      USE(implicit_cast<TNode<BoolT>>(t1445));
      Branch(implicit_cast<TNode<BoolT>>(t1445), label__True_383, label__False_384);
      BIND(label__True_383);
            *t1441_593 = implicit_cast<TNode<Object>>(t1436());
      Goto(label__done_594_849);
      BIND(label__False_384);
            *t1441_593 = implicit_cast<TNode<Object>>(t1437());
      Goto(label__done_594_849);
      BIND(label__done_594_849);
    }
    TVARIABLE(Object, offset_312_impl);
    auto offset_312 = &offset_312_impl;
    USE(offset_312);
    *offset_312 = implicit_cast<TNode<Object>>((*t1441_593).value());
    // ../src/builtins/data-view.tq:817:7
    auto t1446 = [=]() {
      int31_t t1448 = 1;
      TNode<IntPtrT> t1449 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1448)));
      TNode<Object> t1450 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1449)));
      return implicit_cast<TNode<Object>>(t1450);
    };
    auto t1447 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1451_595_impl);
    auto t1451_595 = &t1451_595_impl;
    USE(t1451_595);
    {
      Label label__True_385_impl(this);
      Label* label__True_385 = &label__True_385_impl;
      USE(label__True_385);
      Label label__False_386_impl(this);
      Label* label__False_386 = &label__False_386_impl;
      USE(label__False_386);
      Label label__done_596_850_impl(this, {t1451_595});
      Label* label__done_596_850 = &label__done_596_850_impl;
      USE(label__done_596_850);
      TNode<IntPtrT> t1452 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1453 = 1;
      TNode<IntPtrT> t1454 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1453)));
      TNode<BoolT> t1455 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1452), implicit_cast<TNode<IntPtrT>>(t1454)));
      USE(implicit_cast<TNode<BoolT>>(t1455));
      Branch(implicit_cast<TNode<BoolT>>(t1455), label__True_385, label__False_386);
      BIND(label__True_385);
            *t1451_595 = implicit_cast<TNode<Object>>(t1446());
      Goto(label__done_596_850);
      BIND(label__False_386);
            *t1451_595 = implicit_cast<TNode<Object>>(t1447());
      Goto(label__done_596_850);
      BIND(label__done_596_850);
    }
    TVARIABLE(Object, value_313_impl);
    auto value_313 = &value_313_impl;
    USE(value_313);
    *value_313 = implicit_cast<TNode<Object>>((*t1451_595).value());
    // ../src/builtins/data-view.tq:820:7
    auto t1456 = [=]() {
      int31_t t1458 = 2;
      TNode<IntPtrT> t1459 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1458)));
      TNode<Object> t1460 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1459)));
      return implicit_cast<TNode<Object>>(t1460);
    };
    auto t1457 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1461_597_impl);
    auto t1461_597 = &t1461_597_impl;
    USE(t1461_597);
    {
      Label label__True_387_impl(this);
      Label* label__True_387 = &label__True_387_impl;
      USE(label__True_387);
      Label label__False_388_impl(this);
      Label* label__False_388 = &label__False_388_impl;
      USE(label__False_388);
      Label label__done_598_851_impl(this, {t1461_597});
      Label* label__done_598_851 = &label__done_598_851_impl;
      USE(label__done_598_851);
      TNode<IntPtrT> t1462 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1463 = 2;
      TNode<IntPtrT> t1464 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1463)));
      TNode<BoolT> t1465 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1462), implicit_cast<TNode<IntPtrT>>(t1464)));
      USE(implicit_cast<TNode<BoolT>>(t1465));
      Branch(implicit_cast<TNode<BoolT>>(t1465), label__True_387, label__False_388);
      BIND(label__True_387);
            *t1461_597 = implicit_cast<TNode<Object>>(t1456());
      Goto(label__done_598_851);
      BIND(label__False_388);
            *t1461_597 = implicit_cast<TNode<Object>>(t1457());
      Goto(label__done_598_851);
      BIND(label__done_598_851);
    }
    TVARIABLE(Object, is_little_endian_314_impl);
    auto is_little_endian_314 = &is_little_endian_314_impl;
    USE(is_little_endian_314);
    *is_little_endian_314 = implicit_cast<TNode<Object>>((*t1461_597).value());
    // ../src/builtins/data-view.tq:823:7
    TNode<Object> t1466 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_312).value()), implicit_cast<TNode<Object>>((*value_313).value()), implicit_cast<TNode<Object>>((*is_little_endian_314).value()), implicit_cast<ElementsKind>(UINT16_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1466));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1466));
  }
}

TF_BUILTIN(DataViewPrototypeSetInt16, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/data-view.tq:828:63
  {
    // ../src/builtins/data-view.tq:829:7
    auto t1467 = [=]() {
      int31_t t1469 = 0;
      TNode<IntPtrT> t1470 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1469)));
      TNode<Object> t1471 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1470)));
      return implicit_cast<TNode<Object>>(t1471);
    };
    auto t1468 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1472_599_impl);
    auto t1472_599 = &t1472_599_impl;
    USE(t1472_599);
    {
      Label label__True_389_impl(this);
      Label* label__True_389 = &label__True_389_impl;
      USE(label__True_389);
      Label label__False_390_impl(this);
      Label* label__False_390 = &label__False_390_impl;
      USE(label__False_390);
      Label label__done_600_852_impl(this, {t1472_599});
      Label* label__done_600_852 = &label__done_600_852_impl;
      USE(label__done_600_852);
      TNode<IntPtrT> t1473 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1474 = 0;
      TNode<IntPtrT> t1475 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1474)));
      TNode<BoolT> t1476 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1473), implicit_cast<TNode<IntPtrT>>(t1475)));
      USE(implicit_cast<TNode<BoolT>>(t1476));
      Branch(implicit_cast<TNode<BoolT>>(t1476), label__True_389, label__False_390);
      BIND(label__True_389);
            *t1472_599 = implicit_cast<TNode<Object>>(t1467());
      Goto(label__done_600_852);
      BIND(label__False_390);
            *t1472_599 = implicit_cast<TNode<Object>>(t1468());
      Goto(label__done_600_852);
      BIND(label__done_600_852);
    }
    TVARIABLE(Object, offset_315_impl);
    auto offset_315 = &offset_315_impl;
    USE(offset_315);
    *offset_315 = implicit_cast<TNode<Object>>((*t1472_599).value());
    // ../src/builtins/data-view.tq:832:7
    auto t1477 = [=]() {
      int31_t t1479 = 1;
      TNode<IntPtrT> t1480 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1479)));
      TNode<Object> t1481 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1480)));
      return implicit_cast<TNode<Object>>(t1481);
    };
    auto t1478 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1482_601_impl);
    auto t1482_601 = &t1482_601_impl;
    USE(t1482_601);
    {
      Label label__True_391_impl(this);
      Label* label__True_391 = &label__True_391_impl;
      USE(label__True_391);
      Label label__False_392_impl(this);
      Label* label__False_392 = &label__False_392_impl;
      USE(label__False_392);
      Label label__done_602_853_impl(this, {t1482_601});
      Label* label__done_602_853 = &label__done_602_853_impl;
      USE(label__done_602_853);
      TNode<IntPtrT> t1483 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1484 = 1;
      TNode<IntPtrT> t1485 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1484)));
      TNode<BoolT> t1486 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1483), implicit_cast<TNode<IntPtrT>>(t1485)));
      USE(implicit_cast<TNode<BoolT>>(t1486));
      Branch(implicit_cast<TNode<BoolT>>(t1486), label__True_391, label__False_392);
      BIND(label__True_391);
            *t1482_601 = implicit_cast<TNode<Object>>(t1477());
      Goto(label__done_602_853);
      BIND(label__False_392);
            *t1482_601 = implicit_cast<TNode<Object>>(t1478());
      Goto(label__done_602_853);
      BIND(label__done_602_853);
    }
    TVARIABLE(Object, value_316_impl);
    auto value_316 = &value_316_impl;
    USE(value_316);
    *value_316 = implicit_cast<TNode<Object>>((*t1482_601).value());
    // ../src/builtins/data-view.tq:835:7
    auto t1487 = [=]() {
      int31_t t1489 = 2;
      TNode<IntPtrT> t1490 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1489)));
      TNode<Object> t1491 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1490)));
      return implicit_cast<TNode<Object>>(t1491);
    };
    auto t1488 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1492_603_impl);
    auto t1492_603 = &t1492_603_impl;
    USE(t1492_603);
    {
      Label label__True_393_impl(this);
      Label* label__True_393 = &label__True_393_impl;
      USE(label__True_393);
      Label label__False_394_impl(this);
      Label* label__False_394 = &label__False_394_impl;
      USE(label__False_394);
      Label label__done_604_854_impl(this, {t1492_603});
      Label* label__done_604_854 = &label__done_604_854_impl;
      USE(label__done_604_854);
      TNode<IntPtrT> t1493 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1494 = 2;
      TNode<IntPtrT> t1495 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1494)));
      TNode<BoolT> t1496 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1493), implicit_cast<TNode<IntPtrT>>(t1495)));
      USE(implicit_cast<TNode<BoolT>>(t1496));
      Branch(implicit_cast<TNode<BoolT>>(t1496), label__True_393, label__False_394);
      BIND(label__True_393);
            *t1492_603 = implicit_cast<TNode<Object>>(t1487());
      Goto(label__done_604_854);
      BIND(label__False_394);
            *t1492_603 = implicit_cast<TNode<Object>>(t1488());
      Goto(label__done_604_854);
      BIND(label__done_604_854);
    }
    TVARIABLE(Object, is_little_endian_317_impl);
    auto is_little_endian_317 = &is_little_endian_317_impl;
    USE(is_little_endian_317);
    *is_little_endian_317 = implicit_cast<TNode<Object>>((*t1492_603).value());
    // ../src/builtins/data-view.tq:838:7
    TNode<Object> t1497 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_315).value()), implicit_cast<TNode<Object>>((*value_316).value()), implicit_cast<TNode<Object>>((*is_little_endian_317).value()), implicit_cast<ElementsKind>(INT16_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1497));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1497));
  }
}

TF_BUILTIN(DataViewPrototypeSetUint32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/data-view.tq:843:63
  {
    // ../src/builtins/data-view.tq:844:7
    auto t1498 = [=]() {
      int31_t t1500 = 0;
      TNode<IntPtrT> t1501 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1500)));
      TNode<Object> t1502 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1501)));
      return implicit_cast<TNode<Object>>(t1502);
    };
    auto t1499 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1503_605_impl);
    auto t1503_605 = &t1503_605_impl;
    USE(t1503_605);
    {
      Label label__True_395_impl(this);
      Label* label__True_395 = &label__True_395_impl;
      USE(label__True_395);
      Label label__False_396_impl(this);
      Label* label__False_396 = &label__False_396_impl;
      USE(label__False_396);
      Label label__done_606_855_impl(this, {t1503_605});
      Label* label__done_606_855 = &label__done_606_855_impl;
      USE(label__done_606_855);
      TNode<IntPtrT> t1504 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1505 = 0;
      TNode<IntPtrT> t1506 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1505)));
      TNode<BoolT> t1507 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1504), implicit_cast<TNode<IntPtrT>>(t1506)));
      USE(implicit_cast<TNode<BoolT>>(t1507));
      Branch(implicit_cast<TNode<BoolT>>(t1507), label__True_395, label__False_396);
      BIND(label__True_395);
            *t1503_605 = implicit_cast<TNode<Object>>(t1498());
      Goto(label__done_606_855);
      BIND(label__False_396);
            *t1503_605 = implicit_cast<TNode<Object>>(t1499());
      Goto(label__done_606_855);
      BIND(label__done_606_855);
    }
    TVARIABLE(Object, offset_318_impl);
    auto offset_318 = &offset_318_impl;
    USE(offset_318);
    *offset_318 = implicit_cast<TNode<Object>>((*t1503_605).value());
    // ../src/builtins/data-view.tq:847:7
    auto t1508 = [=]() {
      int31_t t1510 = 1;
      TNode<IntPtrT> t1511 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1510)));
      TNode<Object> t1512 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1511)));
      return implicit_cast<TNode<Object>>(t1512);
    };
    auto t1509 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1513_607_impl);
    auto t1513_607 = &t1513_607_impl;
    USE(t1513_607);
    {
      Label label__True_397_impl(this);
      Label* label__True_397 = &label__True_397_impl;
      USE(label__True_397);
      Label label__False_398_impl(this);
      Label* label__False_398 = &label__False_398_impl;
      USE(label__False_398);
      Label label__done_608_856_impl(this, {t1513_607});
      Label* label__done_608_856 = &label__done_608_856_impl;
      USE(label__done_608_856);
      TNode<IntPtrT> t1514 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1515 = 1;
      TNode<IntPtrT> t1516 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1515)));
      TNode<BoolT> t1517 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1514), implicit_cast<TNode<IntPtrT>>(t1516)));
      USE(implicit_cast<TNode<BoolT>>(t1517));
      Branch(implicit_cast<TNode<BoolT>>(t1517), label__True_397, label__False_398);
      BIND(label__True_397);
            *t1513_607 = implicit_cast<TNode<Object>>(t1508());
      Goto(label__done_608_856);
      BIND(label__False_398);
            *t1513_607 = implicit_cast<TNode<Object>>(t1509());
      Goto(label__done_608_856);
      BIND(label__done_608_856);
    }
    TVARIABLE(Object, value_319_impl);
    auto value_319 = &value_319_impl;
    USE(value_319);
    *value_319 = implicit_cast<TNode<Object>>((*t1513_607).value());
    // ../src/builtins/data-view.tq:850:7
    auto t1518 = [=]() {
      int31_t t1520 = 2;
      TNode<IntPtrT> t1521 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1520)));
      TNode<Object> t1522 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1521)));
      return implicit_cast<TNode<Object>>(t1522);
    };
    auto t1519 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1523_609_impl);
    auto t1523_609 = &t1523_609_impl;
    USE(t1523_609);
    {
      Label label__True_399_impl(this);
      Label* label__True_399 = &label__True_399_impl;
      USE(label__True_399);
      Label label__False_400_impl(this);
      Label* label__False_400 = &label__False_400_impl;
      USE(label__False_400);
      Label label__done_610_857_impl(this, {t1523_609});
      Label* label__done_610_857 = &label__done_610_857_impl;
      USE(label__done_610_857);
      TNode<IntPtrT> t1524 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1525 = 2;
      TNode<IntPtrT> t1526 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1525)));
      TNode<BoolT> t1527 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1524), implicit_cast<TNode<IntPtrT>>(t1526)));
      USE(implicit_cast<TNode<BoolT>>(t1527));
      Branch(implicit_cast<TNode<BoolT>>(t1527), label__True_399, label__False_400);
      BIND(label__True_399);
            *t1523_609 = implicit_cast<TNode<Object>>(t1518());
      Goto(label__done_610_857);
      BIND(label__False_400);
            *t1523_609 = implicit_cast<TNode<Object>>(t1519());
      Goto(label__done_610_857);
      BIND(label__done_610_857);
    }
    TVARIABLE(Object, is_little_endian_320_impl);
    auto is_little_endian_320 = &is_little_endian_320_impl;
    USE(is_little_endian_320);
    *is_little_endian_320 = implicit_cast<TNode<Object>>((*t1523_609).value());
    // ../src/builtins/data-view.tq:853:7
    TNode<Object> t1528 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_318).value()), implicit_cast<TNode<Object>>((*value_319).value()), implicit_cast<TNode<Object>>((*is_little_endian_320).value()), implicit_cast<ElementsKind>(UINT32_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1528));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1528));
  }
}

TF_BUILTIN(DataViewPrototypeSetInt32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/data-view.tq:858:63
  {
    // ../src/builtins/data-view.tq:859:7
    auto t1529 = [=]() {
      int31_t t1531 = 0;
      TNode<IntPtrT> t1532 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1531)));
      TNode<Object> t1533 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1532)));
      return implicit_cast<TNode<Object>>(t1533);
    };
    auto t1530 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1534_611_impl);
    auto t1534_611 = &t1534_611_impl;
    USE(t1534_611);
    {
      Label label__True_401_impl(this);
      Label* label__True_401 = &label__True_401_impl;
      USE(label__True_401);
      Label label__False_402_impl(this);
      Label* label__False_402 = &label__False_402_impl;
      USE(label__False_402);
      Label label__done_612_858_impl(this, {t1534_611});
      Label* label__done_612_858 = &label__done_612_858_impl;
      USE(label__done_612_858);
      TNode<IntPtrT> t1535 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1536 = 0;
      TNode<IntPtrT> t1537 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1536)));
      TNode<BoolT> t1538 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1535), implicit_cast<TNode<IntPtrT>>(t1537)));
      USE(implicit_cast<TNode<BoolT>>(t1538));
      Branch(implicit_cast<TNode<BoolT>>(t1538), label__True_401, label__False_402);
      BIND(label__True_401);
            *t1534_611 = implicit_cast<TNode<Object>>(t1529());
      Goto(label__done_612_858);
      BIND(label__False_402);
            *t1534_611 = implicit_cast<TNode<Object>>(t1530());
      Goto(label__done_612_858);
      BIND(label__done_612_858);
    }
    TVARIABLE(Object, offset_321_impl);
    auto offset_321 = &offset_321_impl;
    USE(offset_321);
    *offset_321 = implicit_cast<TNode<Object>>((*t1534_611).value());
    // ../src/builtins/data-view.tq:862:7
    auto t1539 = [=]() {
      int31_t t1541 = 1;
      TNode<IntPtrT> t1542 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1541)));
      TNode<Object> t1543 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1542)));
      return implicit_cast<TNode<Object>>(t1543);
    };
    auto t1540 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1544_613_impl);
    auto t1544_613 = &t1544_613_impl;
    USE(t1544_613);
    {
      Label label__True_403_impl(this);
      Label* label__True_403 = &label__True_403_impl;
      USE(label__True_403);
      Label label__False_404_impl(this);
      Label* label__False_404 = &label__False_404_impl;
      USE(label__False_404);
      Label label__done_614_859_impl(this, {t1544_613});
      Label* label__done_614_859 = &label__done_614_859_impl;
      USE(label__done_614_859);
      TNode<IntPtrT> t1545 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1546 = 1;
      TNode<IntPtrT> t1547 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1546)));
      TNode<BoolT> t1548 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1545), implicit_cast<TNode<IntPtrT>>(t1547)));
      USE(implicit_cast<TNode<BoolT>>(t1548));
      Branch(implicit_cast<TNode<BoolT>>(t1548), label__True_403, label__False_404);
      BIND(label__True_403);
            *t1544_613 = implicit_cast<TNode<Object>>(t1539());
      Goto(label__done_614_859);
      BIND(label__False_404);
            *t1544_613 = implicit_cast<TNode<Object>>(t1540());
      Goto(label__done_614_859);
      BIND(label__done_614_859);
    }
    TVARIABLE(Object, value_322_impl);
    auto value_322 = &value_322_impl;
    USE(value_322);
    *value_322 = implicit_cast<TNode<Object>>((*t1544_613).value());
    // ../src/builtins/data-view.tq:865:7
    auto t1549 = [=]() {
      int31_t t1551 = 2;
      TNode<IntPtrT> t1552 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1551)));
      TNode<Object> t1553 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1552)));
      return implicit_cast<TNode<Object>>(t1553);
    };
    auto t1550 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1554_615_impl);
    auto t1554_615 = &t1554_615_impl;
    USE(t1554_615);
    {
      Label label__True_405_impl(this);
      Label* label__True_405 = &label__True_405_impl;
      USE(label__True_405);
      Label label__False_406_impl(this);
      Label* label__False_406 = &label__False_406_impl;
      USE(label__False_406);
      Label label__done_616_860_impl(this, {t1554_615});
      Label* label__done_616_860 = &label__done_616_860_impl;
      USE(label__done_616_860);
      TNode<IntPtrT> t1555 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1556 = 2;
      TNode<IntPtrT> t1557 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1556)));
      TNode<BoolT> t1558 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1555), implicit_cast<TNode<IntPtrT>>(t1557)));
      USE(implicit_cast<TNode<BoolT>>(t1558));
      Branch(implicit_cast<TNode<BoolT>>(t1558), label__True_405, label__False_406);
      BIND(label__True_405);
            *t1554_615 = implicit_cast<TNode<Object>>(t1549());
      Goto(label__done_616_860);
      BIND(label__False_406);
            *t1554_615 = implicit_cast<TNode<Object>>(t1550());
      Goto(label__done_616_860);
      BIND(label__done_616_860);
    }
    TVARIABLE(Object, is_little_endian_323_impl);
    auto is_little_endian_323 = &is_little_endian_323_impl;
    USE(is_little_endian_323);
    *is_little_endian_323 = implicit_cast<TNode<Object>>((*t1554_615).value());
    // ../src/builtins/data-view.tq:868:7
    TNode<Object> t1559 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_321).value()), implicit_cast<TNode<Object>>((*value_322).value()), implicit_cast<TNode<Object>>((*is_little_endian_323).value()), implicit_cast<ElementsKind>(INT32_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1559));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1559));
  }
}

TF_BUILTIN(DataViewPrototypeSetFloat32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/data-view.tq:873:63
  {
    // ../src/builtins/data-view.tq:874:7
    auto t1560 = [=]() {
      int31_t t1562 = 0;
      TNode<IntPtrT> t1563 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1562)));
      TNode<Object> t1564 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1563)));
      return implicit_cast<TNode<Object>>(t1564);
    };
    auto t1561 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1565_617_impl);
    auto t1565_617 = &t1565_617_impl;
    USE(t1565_617);
    {
      Label label__True_407_impl(this);
      Label* label__True_407 = &label__True_407_impl;
      USE(label__True_407);
      Label label__False_408_impl(this);
      Label* label__False_408 = &label__False_408_impl;
      USE(label__False_408);
      Label label__done_618_861_impl(this, {t1565_617});
      Label* label__done_618_861 = &label__done_618_861_impl;
      USE(label__done_618_861);
      TNode<IntPtrT> t1566 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1567 = 0;
      TNode<IntPtrT> t1568 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1567)));
      TNode<BoolT> t1569 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1566), implicit_cast<TNode<IntPtrT>>(t1568)));
      USE(implicit_cast<TNode<BoolT>>(t1569));
      Branch(implicit_cast<TNode<BoolT>>(t1569), label__True_407, label__False_408);
      BIND(label__True_407);
            *t1565_617 = implicit_cast<TNode<Object>>(t1560());
      Goto(label__done_618_861);
      BIND(label__False_408);
            *t1565_617 = implicit_cast<TNode<Object>>(t1561());
      Goto(label__done_618_861);
      BIND(label__done_618_861);
    }
    TVARIABLE(Object, offset_324_impl);
    auto offset_324 = &offset_324_impl;
    USE(offset_324);
    *offset_324 = implicit_cast<TNode<Object>>((*t1565_617).value());
    // ../src/builtins/data-view.tq:877:7
    auto t1570 = [=]() {
      int31_t t1572 = 1;
      TNode<IntPtrT> t1573 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1572)));
      TNode<Object> t1574 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1573)));
      return implicit_cast<TNode<Object>>(t1574);
    };
    auto t1571 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1575_619_impl);
    auto t1575_619 = &t1575_619_impl;
    USE(t1575_619);
    {
      Label label__True_409_impl(this);
      Label* label__True_409 = &label__True_409_impl;
      USE(label__True_409);
      Label label__False_410_impl(this);
      Label* label__False_410 = &label__False_410_impl;
      USE(label__False_410);
      Label label__done_620_862_impl(this, {t1575_619});
      Label* label__done_620_862 = &label__done_620_862_impl;
      USE(label__done_620_862);
      TNode<IntPtrT> t1576 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1577 = 1;
      TNode<IntPtrT> t1578 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1577)));
      TNode<BoolT> t1579 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1576), implicit_cast<TNode<IntPtrT>>(t1578)));
      USE(implicit_cast<TNode<BoolT>>(t1579));
      Branch(implicit_cast<TNode<BoolT>>(t1579), label__True_409, label__False_410);
      BIND(label__True_409);
            *t1575_619 = implicit_cast<TNode<Object>>(t1570());
      Goto(label__done_620_862);
      BIND(label__False_410);
            *t1575_619 = implicit_cast<TNode<Object>>(t1571());
      Goto(label__done_620_862);
      BIND(label__done_620_862);
    }
    TVARIABLE(Object, value_325_impl);
    auto value_325 = &value_325_impl;
    USE(value_325);
    *value_325 = implicit_cast<TNode<Object>>((*t1575_619).value());
    // ../src/builtins/data-view.tq:880:7
    auto t1580 = [=]() {
      int31_t t1582 = 2;
      TNode<IntPtrT> t1583 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1582)));
      TNode<Object> t1584 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1583)));
      return implicit_cast<TNode<Object>>(t1584);
    };
    auto t1581 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1585_621_impl);
    auto t1585_621 = &t1585_621_impl;
    USE(t1585_621);
    {
      Label label__True_411_impl(this);
      Label* label__True_411 = &label__True_411_impl;
      USE(label__True_411);
      Label label__False_412_impl(this);
      Label* label__False_412 = &label__False_412_impl;
      USE(label__False_412);
      Label label__done_622_863_impl(this, {t1585_621});
      Label* label__done_622_863 = &label__done_622_863_impl;
      USE(label__done_622_863);
      TNode<IntPtrT> t1586 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1587 = 2;
      TNode<IntPtrT> t1588 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1587)));
      TNode<BoolT> t1589 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1586), implicit_cast<TNode<IntPtrT>>(t1588)));
      USE(implicit_cast<TNode<BoolT>>(t1589));
      Branch(implicit_cast<TNode<BoolT>>(t1589), label__True_411, label__False_412);
      BIND(label__True_411);
            *t1585_621 = implicit_cast<TNode<Object>>(t1580());
      Goto(label__done_622_863);
      BIND(label__False_412);
            *t1585_621 = implicit_cast<TNode<Object>>(t1581());
      Goto(label__done_622_863);
      BIND(label__done_622_863);
    }
    TVARIABLE(Object, is_little_endian_326_impl);
    auto is_little_endian_326 = &is_little_endian_326_impl;
    USE(is_little_endian_326);
    *is_little_endian_326 = implicit_cast<TNode<Object>>((*t1585_621).value());
    // ../src/builtins/data-view.tq:883:7
    TNode<Object> t1590 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_324).value()), implicit_cast<TNode<Object>>((*value_325).value()), implicit_cast<TNode<Object>>((*is_little_endian_326).value()), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1590));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1590));
  }
}

TF_BUILTIN(DataViewPrototypeSetFloat64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/data-view.tq:888:63
  {
    // ../src/builtins/data-view.tq:889:7
    auto t1591 = [=]() {
      int31_t t1593 = 0;
      TNode<IntPtrT> t1594 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1593)));
      TNode<Object> t1595 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1594)));
      return implicit_cast<TNode<Object>>(t1595);
    };
    auto t1592 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1596_623_impl);
    auto t1596_623 = &t1596_623_impl;
    USE(t1596_623);
    {
      Label label__True_413_impl(this);
      Label* label__True_413 = &label__True_413_impl;
      USE(label__True_413);
      Label label__False_414_impl(this);
      Label* label__False_414 = &label__False_414_impl;
      USE(label__False_414);
      Label label__done_624_864_impl(this, {t1596_623});
      Label* label__done_624_864 = &label__done_624_864_impl;
      USE(label__done_624_864);
      TNode<IntPtrT> t1597 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1598 = 0;
      TNode<IntPtrT> t1599 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1598)));
      TNode<BoolT> t1600 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1597), implicit_cast<TNode<IntPtrT>>(t1599)));
      USE(implicit_cast<TNode<BoolT>>(t1600));
      Branch(implicit_cast<TNode<BoolT>>(t1600), label__True_413, label__False_414);
      BIND(label__True_413);
            *t1596_623 = implicit_cast<TNode<Object>>(t1591());
      Goto(label__done_624_864);
      BIND(label__False_414);
            *t1596_623 = implicit_cast<TNode<Object>>(t1592());
      Goto(label__done_624_864);
      BIND(label__done_624_864);
    }
    TVARIABLE(Object, offset_327_impl);
    auto offset_327 = &offset_327_impl;
    USE(offset_327);
    *offset_327 = implicit_cast<TNode<Object>>((*t1596_623).value());
    // ../src/builtins/data-view.tq:892:7
    auto t1601 = [=]() {
      int31_t t1603 = 1;
      TNode<IntPtrT> t1604 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1603)));
      TNode<Object> t1605 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1604)));
      return implicit_cast<TNode<Object>>(t1605);
    };
    auto t1602 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1606_625_impl);
    auto t1606_625 = &t1606_625_impl;
    USE(t1606_625);
    {
      Label label__True_415_impl(this);
      Label* label__True_415 = &label__True_415_impl;
      USE(label__True_415);
      Label label__False_416_impl(this);
      Label* label__False_416 = &label__False_416_impl;
      USE(label__False_416);
      Label label__done_626_865_impl(this, {t1606_625});
      Label* label__done_626_865 = &label__done_626_865_impl;
      USE(label__done_626_865);
      TNode<IntPtrT> t1607 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1608 = 1;
      TNode<IntPtrT> t1609 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1608)));
      TNode<BoolT> t1610 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1607), implicit_cast<TNode<IntPtrT>>(t1609)));
      USE(implicit_cast<TNode<BoolT>>(t1610));
      Branch(implicit_cast<TNode<BoolT>>(t1610), label__True_415, label__False_416);
      BIND(label__True_415);
            *t1606_625 = implicit_cast<TNode<Object>>(t1601());
      Goto(label__done_626_865);
      BIND(label__False_416);
            *t1606_625 = implicit_cast<TNode<Object>>(t1602());
      Goto(label__done_626_865);
      BIND(label__done_626_865);
    }
    TVARIABLE(Object, value_328_impl);
    auto value_328 = &value_328_impl;
    USE(value_328);
    *value_328 = implicit_cast<TNode<Object>>((*t1606_625).value());
    // ../src/builtins/data-view.tq:895:7
    auto t1611 = [=]() {
      int31_t t1613 = 2;
      TNode<IntPtrT> t1614 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1613)));
      TNode<Object> t1615 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1614)));
      return implicit_cast<TNode<Object>>(t1615);
    };
    auto t1612 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1616_627_impl);
    auto t1616_627 = &t1616_627_impl;
    USE(t1616_627);
    {
      Label label__True_417_impl(this);
      Label* label__True_417 = &label__True_417_impl;
      USE(label__True_417);
      Label label__False_418_impl(this);
      Label* label__False_418 = &label__False_418_impl;
      USE(label__False_418);
      Label label__done_628_866_impl(this, {t1616_627});
      Label* label__done_628_866 = &label__done_628_866_impl;
      USE(label__done_628_866);
      TNode<IntPtrT> t1617 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1618 = 2;
      TNode<IntPtrT> t1619 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1618)));
      TNode<BoolT> t1620 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1617), implicit_cast<TNode<IntPtrT>>(t1619)));
      USE(implicit_cast<TNode<BoolT>>(t1620));
      Branch(implicit_cast<TNode<BoolT>>(t1620), label__True_417, label__False_418);
      BIND(label__True_417);
            *t1616_627 = implicit_cast<TNode<Object>>(t1611());
      Goto(label__done_628_866);
      BIND(label__False_418);
            *t1616_627 = implicit_cast<TNode<Object>>(t1612());
      Goto(label__done_628_866);
      BIND(label__done_628_866);
    }
    TVARIABLE(Object, is_little_endian_329_impl);
    auto is_little_endian_329 = &is_little_endian_329_impl;
    USE(is_little_endian_329);
    *is_little_endian_329 = implicit_cast<TNode<Object>>((*t1616_627).value());
    // ../src/builtins/data-view.tq:898:7
    TNode<Object> t1621 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_327).value()), implicit_cast<TNode<Object>>((*value_328).value()), implicit_cast<TNode<Object>>((*is_little_endian_329).value()), implicit_cast<ElementsKind>(FLOAT64_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1621));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1621));
  }
}

TF_BUILTIN(DataViewPrototypeSetBigUint64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/data-view.tq:903:63
  {
    // ../src/builtins/data-view.tq:904:7
    auto t1622 = [=]() {
      int31_t t1624 = 0;
      TNode<IntPtrT> t1625 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1624)));
      TNode<Object> t1626 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1625)));
      return implicit_cast<TNode<Object>>(t1626);
    };
    auto t1623 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1627_629_impl);
    auto t1627_629 = &t1627_629_impl;
    USE(t1627_629);
    {
      Label label__True_419_impl(this);
      Label* label__True_419 = &label__True_419_impl;
      USE(label__True_419);
      Label label__False_420_impl(this);
      Label* label__False_420 = &label__False_420_impl;
      USE(label__False_420);
      Label label__done_630_867_impl(this, {t1627_629});
      Label* label__done_630_867 = &label__done_630_867_impl;
      USE(label__done_630_867);
      TNode<IntPtrT> t1628 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1629 = 0;
      TNode<IntPtrT> t1630 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1629)));
      TNode<BoolT> t1631 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1628), implicit_cast<TNode<IntPtrT>>(t1630)));
      USE(implicit_cast<TNode<BoolT>>(t1631));
      Branch(implicit_cast<TNode<BoolT>>(t1631), label__True_419, label__False_420);
      BIND(label__True_419);
            *t1627_629 = implicit_cast<TNode<Object>>(t1622());
      Goto(label__done_630_867);
      BIND(label__False_420);
            *t1627_629 = implicit_cast<TNode<Object>>(t1623());
      Goto(label__done_630_867);
      BIND(label__done_630_867);
    }
    TVARIABLE(Object, offset_330_impl);
    auto offset_330 = &offset_330_impl;
    USE(offset_330);
    *offset_330 = implicit_cast<TNode<Object>>((*t1627_629).value());
    // ../src/builtins/data-view.tq:907:7
    auto t1632 = [=]() {
      int31_t t1634 = 1;
      TNode<IntPtrT> t1635 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1634)));
      TNode<Object> t1636 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1635)));
      return implicit_cast<TNode<Object>>(t1636);
    };
    auto t1633 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1637_631_impl);
    auto t1637_631 = &t1637_631_impl;
    USE(t1637_631);
    {
      Label label__True_421_impl(this);
      Label* label__True_421 = &label__True_421_impl;
      USE(label__True_421);
      Label label__False_422_impl(this);
      Label* label__False_422 = &label__False_422_impl;
      USE(label__False_422);
      Label label__done_632_868_impl(this, {t1637_631});
      Label* label__done_632_868 = &label__done_632_868_impl;
      USE(label__done_632_868);
      TNode<IntPtrT> t1638 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1639 = 1;
      TNode<IntPtrT> t1640 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1639)));
      TNode<BoolT> t1641 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1638), implicit_cast<TNode<IntPtrT>>(t1640)));
      USE(implicit_cast<TNode<BoolT>>(t1641));
      Branch(implicit_cast<TNode<BoolT>>(t1641), label__True_421, label__False_422);
      BIND(label__True_421);
            *t1637_631 = implicit_cast<TNode<Object>>(t1632());
      Goto(label__done_632_868);
      BIND(label__False_422);
            *t1637_631 = implicit_cast<TNode<Object>>(t1633());
      Goto(label__done_632_868);
      BIND(label__done_632_868);
    }
    TVARIABLE(Object, value_331_impl);
    auto value_331 = &value_331_impl;
    USE(value_331);
    *value_331 = implicit_cast<TNode<Object>>((*t1637_631).value());
    // ../src/builtins/data-view.tq:910:7
    auto t1642 = [=]() {
      int31_t t1644 = 2;
      TNode<IntPtrT> t1645 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1644)));
      TNode<Object> t1646 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1645)));
      return implicit_cast<TNode<Object>>(t1646);
    };
    auto t1643 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1647_633_impl);
    auto t1647_633 = &t1647_633_impl;
    USE(t1647_633);
    {
      Label label__True_423_impl(this);
      Label* label__True_423 = &label__True_423_impl;
      USE(label__True_423);
      Label label__False_424_impl(this);
      Label* label__False_424 = &label__False_424_impl;
      USE(label__False_424);
      Label label__done_634_869_impl(this, {t1647_633});
      Label* label__done_634_869 = &label__done_634_869_impl;
      USE(label__done_634_869);
      TNode<IntPtrT> t1648 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1649 = 2;
      TNode<IntPtrT> t1650 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1649)));
      TNode<BoolT> t1651 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1648), implicit_cast<TNode<IntPtrT>>(t1650)));
      USE(implicit_cast<TNode<BoolT>>(t1651));
      Branch(implicit_cast<TNode<BoolT>>(t1651), label__True_423, label__False_424);
      BIND(label__True_423);
            *t1647_633 = implicit_cast<TNode<Object>>(t1642());
      Goto(label__done_634_869);
      BIND(label__False_424);
            *t1647_633 = implicit_cast<TNode<Object>>(t1643());
      Goto(label__done_634_869);
      BIND(label__done_634_869);
    }
    TVARIABLE(Object, is_little_endian_332_impl);
    auto is_little_endian_332 = &is_little_endian_332_impl;
    USE(is_little_endian_332);
    *is_little_endian_332 = implicit_cast<TNode<Object>>((*t1647_633).value());
    // ../src/builtins/data-view.tq:913:7
    TNode<Object> t1652 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_330).value()), implicit_cast<TNode<Object>>((*value_331).value()), implicit_cast<TNode<Object>>((*is_little_endian_332).value()), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1652));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1652));
  }
}

TF_BUILTIN(DataViewPrototypeSetBigInt64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../src/builtins/data-view.tq:918:63
  {
    // ../src/builtins/data-view.tq:919:7
    auto t1653 = [=]() {
      int31_t t1655 = 0;
      TNode<IntPtrT> t1656 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1655)));
      TNode<Object> t1657 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1656)));
      return implicit_cast<TNode<Object>>(t1657);
    };
    auto t1654 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1658_635_impl);
    auto t1658_635 = &t1658_635_impl;
    USE(t1658_635);
    {
      Label label__True_425_impl(this);
      Label* label__True_425 = &label__True_425_impl;
      USE(label__True_425);
      Label label__False_426_impl(this);
      Label* label__False_426 = &label__False_426_impl;
      USE(label__False_426);
      Label label__done_636_870_impl(this, {t1658_635});
      Label* label__done_636_870 = &label__done_636_870_impl;
      USE(label__done_636_870);
      TNode<IntPtrT> t1659 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1660 = 0;
      TNode<IntPtrT> t1661 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1660)));
      TNode<BoolT> t1662 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1659), implicit_cast<TNode<IntPtrT>>(t1661)));
      USE(implicit_cast<TNode<BoolT>>(t1662));
      Branch(implicit_cast<TNode<BoolT>>(t1662), label__True_425, label__False_426);
      BIND(label__True_425);
            *t1658_635 = implicit_cast<TNode<Object>>(t1653());
      Goto(label__done_636_870);
      BIND(label__False_426);
            *t1658_635 = implicit_cast<TNode<Object>>(t1654());
      Goto(label__done_636_870);
      BIND(label__done_636_870);
    }
    TVARIABLE(Object, offset_333_impl);
    auto offset_333 = &offset_333_impl;
    USE(offset_333);
    *offset_333 = implicit_cast<TNode<Object>>((*t1658_635).value());
    // ../src/builtins/data-view.tq:922:7
    auto t1663 = [=]() {
      int31_t t1665 = 1;
      TNode<IntPtrT> t1666 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1665)));
      TNode<Object> t1667 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1666)));
      return implicit_cast<TNode<Object>>(t1667);
    };
    auto t1664 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1668_637_impl);
    auto t1668_637 = &t1668_637_impl;
    USE(t1668_637);
    {
      Label label__True_427_impl(this);
      Label* label__True_427 = &label__True_427_impl;
      USE(label__True_427);
      Label label__False_428_impl(this);
      Label* label__False_428 = &label__False_428_impl;
      USE(label__False_428);
      Label label__done_638_871_impl(this, {t1668_637});
      Label* label__done_638_871 = &label__done_638_871_impl;
      USE(label__done_638_871);
      TNode<IntPtrT> t1669 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1670 = 1;
      TNode<IntPtrT> t1671 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1670)));
      TNode<BoolT> t1672 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1669), implicit_cast<TNode<IntPtrT>>(t1671)));
      USE(implicit_cast<TNode<BoolT>>(t1672));
      Branch(implicit_cast<TNode<BoolT>>(t1672), label__True_427, label__False_428);
      BIND(label__True_427);
            *t1668_637 = implicit_cast<TNode<Object>>(t1663());
      Goto(label__done_638_871);
      BIND(label__False_428);
            *t1668_637 = implicit_cast<TNode<Object>>(t1664());
      Goto(label__done_638_871);
      BIND(label__done_638_871);
    }
    TVARIABLE(Object, value_334_impl);
    auto value_334 = &value_334_impl;
    USE(value_334);
    *value_334 = implicit_cast<TNode<Object>>((*t1668_637).value());
    // ../src/builtins/data-view.tq:925:7
    auto t1673 = [=]() {
      int31_t t1675 = 2;
      TNode<IntPtrT> t1676 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1675)));
      TNode<Object> t1677 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1676)));
      return implicit_cast<TNode<Object>>(t1677);
    };
    auto t1674 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1678_639_impl);
    auto t1678_639 = &t1678_639_impl;
    USE(t1678_639);
    {
      Label label__True_429_impl(this);
      Label* label__True_429 = &label__True_429_impl;
      USE(label__True_429);
      Label label__False_430_impl(this);
      Label* label__False_430 = &label__False_430_impl;
      USE(label__False_430);
      Label label__done_640_872_impl(this, {t1678_639});
      Label* label__done_640_872 = &label__done_640_872_impl;
      USE(label__done_640_872);
      TNode<IntPtrT> t1679 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1680 = 2;
      TNode<IntPtrT> t1681 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1680)));
      TNode<BoolT> t1682 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1679), implicit_cast<TNode<IntPtrT>>(t1681)));
      USE(implicit_cast<TNode<BoolT>>(t1682));
      Branch(implicit_cast<TNode<BoolT>>(t1682), label__True_429, label__False_430);
      BIND(label__True_429);
            *t1678_639 = implicit_cast<TNode<Object>>(t1673());
      Goto(label__done_640_872);
      BIND(label__False_430);
            *t1678_639 = implicit_cast<TNode<Object>>(t1674());
      Goto(label__done_640_872);
      BIND(label__done_640_872);
    }
    TVARIABLE(Object, is_little_endian_335_impl);
    auto is_little_endian_335 = &is_little_endian_335_impl;
    USE(is_little_endian_335);
    *is_little_endian_335 = implicit_cast<TNode<Object>>((*t1678_639).value());
    // ../src/builtins/data-view.tq:928:7
    TNode<Object> t1683 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_333).value()), implicit_cast<TNode<Object>>((*value_334).value()), implicit_cast<TNode<Object>>((*is_little_endian_335).value()), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1683));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1683));
  }
}

}  // namespace internal
}  // namespace v8

