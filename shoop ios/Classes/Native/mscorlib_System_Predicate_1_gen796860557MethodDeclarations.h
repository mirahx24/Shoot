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

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>>
struct Predicate_1_t796860557;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_225896659.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m1171895175_gshared (Predicate_1_t796860557 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m1171895175(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t796860557 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m1171895175_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m2248829211_gshared (Predicate_1_t796860557 * __this, KeyValuePair_2_t225896659  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m2248829211(__this, ___obj, method) ((  bool (*) (Predicate_1_t796860557 *, KeyValuePair_2_t225896659 , const MethodInfo*))Predicate_1_Invoke_m2248829211_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m2486660266_gshared (Predicate_1_t796860557 * __this, KeyValuePair_2_t225896659  ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m2486660266(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Predicate_1_t796860557 *, KeyValuePair_2_t225896659 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m2486660266_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m3434097049_gshared (Predicate_1_t796860557 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m3434097049(__this, ___result, method) ((  bool (*) (Predicate_1_t796860557 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m3434097049_gshared)(__this, ___result, method)
