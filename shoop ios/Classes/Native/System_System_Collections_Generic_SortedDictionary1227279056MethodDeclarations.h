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

// System.Collections.Generic.SortedDictionary`2/Node<System.Single,System.Object>
struct Node_t1227279056;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.RBTree/Node
struct Node_t2433570;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_System_Collections_Generic_RBTree_Node2433570.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_225896659.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Single,System.Object>::.ctor(TKey)
extern "C"  void Node__ctor_m1897931547_gshared (Node_t1227279056 * __this, float ___key, const MethodInfo* method);
#define Node__ctor_m1897931547(__this, ___key, method) ((  void (*) (Node_t1227279056 *, float, const MethodInfo*))Node__ctor_m1897931547_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Single,System.Object>::.ctor(TKey,TValue)
extern "C"  void Node__ctor_m4097554798_gshared (Node_t1227279056 * __this, float ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Node__ctor_m4097554798(__this, ___key, ___value, method) ((  void (*) (Node_t1227279056 *, float, Il2CppObject *, const MethodInfo*))Node__ctor_m4097554798_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Single,System.Object>::SwapValue(System.Collections.Generic.RBTree/Node)
extern "C"  void Node_SwapValue_m2586335950_gshared (Node_t1227279056 * __this, Node_t2433570 * ___other, const MethodInfo* method);
#define Node_SwapValue_m2586335950(__this, ___other, method) ((  void (*) (Node_t1227279056 *, Node_t2433570 *, const MethodInfo*))Node_SwapValue_m2586335950_gshared)(__this, ___other, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Node<System.Single,System.Object>::AsKV()
extern "C"  KeyValuePair_2_t225896659  Node_AsKV_m4024115083_gshared (Node_t1227279056 * __this, const MethodInfo* method);
#define Node_AsKV_m4024115083(__this, method) ((  KeyValuePair_2_t225896659  (*) (Node_t1227279056 *, const MethodInfo*))Node_AsKV_m4024115083_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Node<System.Single,System.Object>::AsDE()
extern "C"  DictionaryEntry_t130027246  Node_AsDE_m3032445782_gshared (Node_t1227279056 * __this, const MethodInfo* method);
#define Node_AsDE_m3032445782(__this, method) ((  DictionaryEntry_t130027246  (*) (Node_t1227279056 *, const MethodInfo*))Node_AsDE_m3032445782_gshared)(__this, method)
