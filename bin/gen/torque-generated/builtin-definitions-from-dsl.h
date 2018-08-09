#ifndef V8_BUILTINS_BUILTIN_DEFINITIONS_FROM_DSL_H_
#define V8_BUILTINS_BUILTIN_DEFINITIONS_FROM_DSL_H_

#define BUILTIN_LIST_FROM_DSL(CPP, API, TFJ, TFC, TFS, TFH, ASM) \
TFJ(ArraySpliceTorque, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ArrayForEachLoopEagerDeoptContinuation, 4, kReceiver, kCallback, kThisArg, kInitialK, kLength) \
TFJ(ArrayForEachLoopLazyDeoptContinuation, 5, kReceiver, kCallback, kThisArg, kInitialK, kLength, kResult) \
TFS(ArrayForEachLoopContinuation, kReceiver, kCallback, kThisArg, kArray, kObject, kInitialK, kLength, kTo) \
TFJ(ArrayForEach, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFS(TypedArrayQuickSort, kArray, kFrom, kTo, kComparefn, kLoad, kStore) \
TFJ(TypedArrayPrototypeSort, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetBuffer, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetByteLength, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetByteOffset, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetUint8, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetInt8, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetUint16, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetInt16, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetUint32, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetInt32, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetFloat32, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetFloat64, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetBigUint64, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetBigInt64, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeSetUint8, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeSetInt8, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeSetUint16, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeSetInt16, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeSetUint32, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeSetInt32, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeSetFloat32, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeSetFloat64, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeSetBigUint64, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeSetBigInt64, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFS(GenericBuiltinTest22UT12ATHeapObject5ATSmi, kParam) \
TFS(TestHelperPlus1, kX) \
TFS(TestHelperPlus2, kX) \
TFS(LoadFixedElement17ATFixedInt32Array, kArray, kIndex) \
TFS(StoreFixedElement17ATFixedInt32Array, kArray, kIndex, kValue) \
TFS(LoadFixedElement19ATFixedFloat32Array, kArray, kIndex) \
TFS(StoreFixedElement19ATFixedFloat32Array, kArray, kIndex, kValue) \
TFS(LoadFixedElement19ATFixedFloat64Array, kArray, kIndex) \
TFS(StoreFixedElement19ATFixedFloat64Array, kArray, kIndex, kValue) \
TFS(LoadFixedElement24ATFixedUint8ClampedArray, kArray, kIndex) \
TFS(StoreFixedElement24ATFixedUint8ClampedArray, kArray, kIndex, kValue) \
TFS(LoadFixedElement21ATFixedBigUint64Array, kArray, kIndex) \
TFS(StoreFixedElement21ATFixedBigUint64Array, kArray, kIndex, kValue) \
TFS(LoadFixedElement20ATFixedBigInt64Array, kArray, kIndex) \
TFS(StoreFixedElement20ATFixedBigInt64Array, kArray, kIndex, kValue) \
TFS(LoadFixedElement17ATFixedUint8Array, kArray, kIndex) \
TFS(StoreFixedElement17ATFixedUint8Array, kArray, kIndex, kValue) \
TFS(LoadFixedElement16ATFixedInt8Array, kArray, kIndex) \
TFS(StoreFixedElement16ATFixedInt8Array, kArray, kIndex, kValue) \
TFS(LoadFixedElement18ATFixedUint16Array, kArray, kIndex) \
TFS(StoreFixedElement18ATFixedUint16Array, kArray, kIndex, kValue) \
TFS(LoadFixedElement17ATFixedInt16Array, kArray, kIndex) \
TFS(StoreFixedElement17ATFixedInt16Array, kArray, kIndex, kValue) \
TFS(LoadFixedElement18ATFixedUint32Array, kArray, kIndex) \
TFS(StoreFixedElement18ATFixedUint32Array, kArray, kIndex, kValue) \
TFS(GenericBuiltinTest5ATSmi, kParam) \

#endif  // V8_BUILTINS_BUILTIN_DEFINITIONS_FROM_DSL_H_
