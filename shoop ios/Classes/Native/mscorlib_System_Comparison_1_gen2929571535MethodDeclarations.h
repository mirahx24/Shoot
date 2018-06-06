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

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>>
struct Comparison_1_t2929571535;
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

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m1368349877_gshared (Comparison_1_t2929571535 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1368349877(__this, ___object, ___method, method) ((  void (*) (Comparison_1_t2929571535 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1368349877_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m2474570723_gshared (Comparison_1_t2929571535 * __this, KeyValuePair_2_t225896659  ___x, KeyValuePair_2_t225896659  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m2474570723(__this, ___x, ___y, method) ((  int32_t (*) (Comparison_1_t2929571535 *, KeyValuePair_2_t225896659 , KeyValuePair_2_t225896659 , const MethodInfo*))Comparison_1_Invoke_m2474570723_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Comparison_1_BeginInvoke_m2240079916_gshared (Comparison_1_t2929571535 * __this, KeyValuePair_2_t225896659  ___x, KeyValuePair_2_t225896659  ___y, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m2240079916(__this, ___x, ___y, ___callback, ___object, method) ((  Il2CppObject * (*) (Comparison_1_t2929571535 *, KeyValuePair_2_t225896659 , KeyValuePair_2_t225896659 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Comparison_1_BeginInvoke_m2240079916_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m2196140969_gshared (Comparison_1_t2929571535 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m2196140969(__this, ___result, method) ((  int32_t (*) (Comparison_1_t2929571535 *, Il2CppObject *, const MethodInfo*))Comparison_1_EndInvoke_m2196140969_gshared)(__this, ___result, method)
