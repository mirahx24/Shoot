﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>
struct NodeHelper_t797763783;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t3536813829;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.RBTree/Node
struct Node_t2433570;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_System_Collections_Generic_RBTree_Node2433570.h"

// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
extern "C"  void NodeHelper__ctor_m2519472828_gshared (NodeHelper_t797763783 * __this, Il2CppObject* ___cmp, const MethodInfo* method);
#define NodeHelper__ctor_m2519472828(__this, ___cmp, method) ((  void (*) (NodeHelper_t797763783 *, Il2CppObject*, const MethodInfo*))NodeHelper__ctor_m2519472828_gshared)(__this, ___cmp, method)
// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::.cctor()
extern "C"  void NodeHelper__cctor_m2187755298_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define NodeHelper__cctor_m2187755298(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))NodeHelper__cctor_m2187755298_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::Compare(TKey,System.Collections.Generic.RBTree/Node)
extern "C"  int32_t NodeHelper_Compare_m1733215551_gshared (NodeHelper_t797763783 * __this, Il2CppObject * ___key, Node_t2433570 * ___node, const MethodInfo* method);
#define NodeHelper_Compare_m1733215551(__this, ___key, ___node, method) ((  int32_t (*) (NodeHelper_t797763783 *, Il2CppObject *, Node_t2433570 *, const MethodInfo*))NodeHelper_Compare_m1733215551_gshared)(__this, ___key, ___node, method)
// System.Collections.Generic.RBTree/Node System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::CreateNode(TKey)
extern "C"  Node_t2433570 * NodeHelper_CreateNode_m3318050593_gshared (NodeHelper_t797763783 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define NodeHelper_CreateNode_m3318050593(__this, ___key, method) ((  Node_t2433570 * (*) (NodeHelper_t797763783 *, Il2CppObject *, const MethodInfo*))NodeHelper_CreateNode_m3318050593_gshared)(__this, ___key, method)
// System.Collections.Generic.SortedDictionary`2/NodeHelper<TKey,TValue> System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::GetHelper(System.Collections.Generic.IComparer`1<TKey>)
extern "C"  NodeHelper_t797763783 * NodeHelper_GetHelper_m820403648_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject* ___cmp, const MethodInfo* method);
#define NodeHelper_GetHelper_m820403648(__this /* static, unused */, ___cmp, method) ((  NodeHelper_t797763783 * (*) (Il2CppObject * /* static, unused */, Il2CppObject*, const MethodInfo*))NodeHelper_GetHelper_m820403648_gshared)(__this /* static, unused */, ___cmp, method)
