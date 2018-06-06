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

// GvrReticlePointer
struct GvrReticlePointer_t2844437388;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"

// System.Void GvrReticlePointer::.ctor()
extern "C"  void GvrReticlePointer__ctor_m2957197151 (GvrReticlePointer_t2844437388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointer::Start()
extern "C"  void GvrReticlePointer_Start_m1904334943 (GvrReticlePointer_t2844437388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointer::Update()
extern "C"  void GvrReticlePointer_Update_m3205660558 (GvrReticlePointer_t2844437388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointer::OnInputModuleEnabled()
extern "C"  void GvrReticlePointer_OnInputModuleEnabled_m545775439 (GvrReticlePointer_t2844437388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointer::OnInputModuleDisabled()
extern "C"  void GvrReticlePointer_OnInputModuleDisabled_m521592528 (GvrReticlePointer_t2844437388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointer::OnPointerEnter(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Ray,System.Boolean)
extern "C"  void GvrReticlePointer_OnPointerEnter_m828629306 (GvrReticlePointer_t2844437388 * __this, GameObject_t4012695102 * ___targetObject, Vector3_t3525329789  ___intersectionPosition, Ray_t1522967639  ___intersectionRay, bool ___isInteractive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointer::OnPointerHover(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Ray,System.Boolean)
extern "C"  void GvrReticlePointer_OnPointerHover_m74029142 (GvrReticlePointer_t2844437388 * __this, GameObject_t4012695102 * ___targetObject, Vector3_t3525329789  ___intersectionPosition, Ray_t1522967639  ___intersectionRay, bool ___isInteractive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointer::OnPointerExit(UnityEngine.GameObject)
extern "C"  void GvrReticlePointer_OnPointerExit_m648095185 (GvrReticlePointer_t2844437388 * __this, GameObject_t4012695102 * ___targetObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointer::OnPointerClickDown()
extern "C"  void GvrReticlePointer_OnPointerClickDown_m2020483217 (GvrReticlePointer_t2844437388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointer::OnPointerClickUp()
extern "C"  void GvrReticlePointer_OnPointerClickUp_m1365734346 (GvrReticlePointer_t2844437388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrReticlePointer::GetMaxPointerDistance()
extern "C"  float GvrReticlePointer_GetMaxPointerDistance_m3145362061 (GvrReticlePointer_t2844437388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointer::GetPointerRadius(System.Single&,System.Single&)
extern "C"  void GvrReticlePointer_GetPointerRadius_m3271386472 (GvrReticlePointer_t2844437388 * __this, float* ___innerRadius, float* ___outerRadius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointer::CreateReticleVertices()
extern "C"  void GvrReticlePointer_CreateReticleVertices_m2335086574 (GvrReticlePointer_t2844437388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointer::UpdateDiameters()
extern "C"  void GvrReticlePointer_UpdateDiameters_m1942189306 (GvrReticlePointer_t2844437388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointer::SetPointerTarget(UnityEngine.Vector3,System.Boolean)
extern "C"  void GvrReticlePointer_SetPointerTarget_m3606154293 (GvrReticlePointer_t2844437388 * __this, Vector3_t3525329789  ___target, bool ___interactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
