#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Single,System.Object>
struct NodeHelper_t2005671290;
// System.Collections.Generic.IComparer`1<System.Single>
struct IComparer_1_t3657916430;
// System.Collections.Generic.RBTree/Node
struct Node_t2433570;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_RBTree_Node2433570.h"

// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Single,System.Object>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
extern "C"  void NodeHelper__ctor_m484542277_gshared (NodeHelper_t2005671290 * __this, Il2CppObject* ___cmp, const MethodInfo* method);
#define NodeHelper__ctor_m484542277(__this, ___cmp, method) ((  void (*) (NodeHelper_t2005671290 *, Il2CppObject*, const MethodInfo*))NodeHelper__ctor_m484542277_gshared)(__this, ___cmp, method)
// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Single,System.Object>::.cctor()
extern "C"  void NodeHelper__cctor_m1237428793_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define NodeHelper__cctor_m1237428793(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))NodeHelper__cctor_m1237428793_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Single,System.Object>::Compare(TKey,System.Collections.Generic.RBTree/Node)
extern "C"  int32_t NodeHelper_Compare_m3074877910_gshared (NodeHelper_t2005671290 * __this, float ___key, Node_t2433570 * ___node, const MethodInfo* method);
#define NodeHelper_Compare_m3074877910(__this, ___key, ___node, method) ((  int32_t (*) (NodeHelper_t2005671290 *, float, Node_t2433570 *, const MethodInfo*))NodeHelper_Compare_m3074877910_gshared)(__this, ___key, ___node, method)
// System.Collections.Generic.RBTree/Node System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Single,System.Object>::CreateNode(TKey)
extern "C"  Node_t2433570 * NodeHelper_CreateNode_m3538654008_gshared (NodeHelper_t2005671290 * __this, float ___key, const MethodInfo* method);
#define NodeHelper_CreateNode_m3538654008(__this, ___key, method) ((  Node_t2433570 * (*) (NodeHelper_t2005671290 *, float, const MethodInfo*))NodeHelper_CreateNode_m3538654008_gshared)(__this, ___key, method)
// System.Collections.Generic.SortedDictionary`2/NodeHelper<TKey,TValue> System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Single,System.Object>::GetHelper(System.Collections.Generic.IComparer`1<TKey>)
extern "C"  NodeHelper_t2005671290 * NodeHelper_GetHelper_m1318084041_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject* ___cmp, const MethodInfo* method);
#define NodeHelper_GetHelper_m1318084041(__this /* static, unused */, ___cmp, method) ((  NodeHelper_t2005671290 * (*) (Il2CppObject * /* static, unused */, Il2CppObject*, const MethodInfo*))NodeHelper_GetHelper_m1318084041_gshared)(__this /* static, unused */, ___cmp, method)
