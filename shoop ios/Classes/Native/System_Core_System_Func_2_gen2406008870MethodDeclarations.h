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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>,System.Boolean>
struct Func_2_t2406008870;
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

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1151884123_gshared (Func_2_t2406008870 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m1151884123(__this, ___object, ___method, method) ((  void (*) (Func_2_t2406008870 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m1151884123_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>,System.Boolean>::Invoke(T)
extern "C"  bool Func_2_Invoke_m2100583079_gshared (Func_2_t2406008870 * __this, KeyValuePair_2_t225896659  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m2100583079(__this, ___arg1, method) ((  bool (*) (Func_2_t2406008870 *, KeyValuePair_2_t225896659 , const MethodInfo*))Func_2_Invoke_m2100583079_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m1721708118_gshared (Func_2_t2406008870 * __this, KeyValuePair_2_t225896659  ___arg1, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m1721708118(__this, ___arg1, ___callback, ___object, method) ((  Il2CppObject * (*) (Func_2_t2406008870 *, KeyValuePair_2_t225896659 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m1721708118_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Single,System.Object>,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Func_2_EndInvoke_m2398676877_gshared (Func_2_t2406008870 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m2398676877(__this, ___result, method) ((  bool (*) (Func_2_t2406008870 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m2398676877_gshared)(__this, ___result, method)
