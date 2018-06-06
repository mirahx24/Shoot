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

// GvrPointerInputModule
struct GvrPointerInputModule_t2267916028;
// IGvrPointer
struct IGvrPointer_t448681091;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResu959898689.h"

// System.Void GvrPointerInputModule::.ctor()
extern "C"  void GvrPointerInputModule__ctor_m2524933615 (GvrPointerInputModule_t2267916028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IGvrPointer GvrPointerInputModule::get_pointer()
extern "C"  Il2CppObject * GvrPointerInputModule_get_pointer_m3289359089 (GvrPointerInputModule_t2267916028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrPointerInputModule::ShouldActivateModule()
extern "C"  bool GvrPointerInputModule_ShouldActivateModule_m2632263827 (GvrPointerInputModule_t2267916028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerInputModule::DeactivateModule()
extern "C"  void GvrPointerInputModule_DeactivateModule_m911766389 (GvrPointerInputModule_t2267916028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrPointerInputModule::IsPointerOverGameObject(System.Int32)
extern "C"  bool GvrPointerInputModule_IsPointerOverGameObject_m2397068010 (GvrPointerInputModule_t2267916028 * __this, int32_t ___pointerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerInputModule::Process()
extern "C"  void GvrPointerInputModule_Process_m2652290748 (GvrPointerInputModule_t2267916028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerInputModule::CastRay()
extern "C"  void GvrPointerInputModule_CastRay_m540055992 (GvrPointerInputModule_t2267916028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerInputModule::UpdateCurrentObject(UnityEngine.GameObject)
extern "C"  void GvrPointerInputModule_UpdateCurrentObject_m2069634196 (GvrPointerInputModule_t2267916028 * __this, GameObject_t4012695102 * ___previousObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerInputModule::UpdateReticle(UnityEngine.GameObject)
extern "C"  void GvrPointerInputModule_UpdateReticle_m3173467376 (GvrPointerInputModule_t2267916028 * __this, GameObject_t4012695102 * ___previousObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerInputModule::HandleDrag()
extern "C"  void GvrPointerInputModule_HandleDrag_m514255601 (GvrPointerInputModule_t2267916028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerInputModule::HandlePendingClick()
extern "C"  void GvrPointerInputModule_HandlePendingClick_m3100813486 (GvrPointerInputModule_t2267916028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerInputModule::HandleTrigger()
extern "C"  void GvrPointerInputModule_HandleTrigger_m4050906493 (GvrPointerInputModule_t2267916028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GvrPointerInputModule::NormalizedCartesianToSpherical(UnityEngine.Vector3)
extern "C"  Vector2_t3525329788  GvrPointerInputModule_NormalizedCartesianToSpherical_m2358277806 (GvrPointerInputModule_t2267916028 * __this, Vector3_t3525329789  ___cartCoords, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GvrPointerInputModule::GetCurrentGameObject()
extern "C"  GameObject_t4012695102 * GvrPointerInputModule_GetCurrentGameObject_m490771284 (GvrPointerInputModule_t2267916028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray GvrPointerInputModule::GetLastRay()
extern "C"  Ray_t1522967639  GvrPointerInputModule_GetLastRay_m2483071891 (GvrPointerInputModule_t2267916028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 GvrPointerInputModule::GetIntersectionPosition(UnityEngine.Camera,UnityEngine.EventSystems.RaycastResult)
extern "C"  Vector3_t3525329789  GvrPointerInputModule_GetIntersectionPosition_m508703066 (GvrPointerInputModule_t2267916028 * __this, Camera_t3533968274 * ___cam, RaycastResult_t959898689  ___raycastResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerInputModule::DisablePointer()
extern "C"  void GvrPointerInputModule_DisablePointer_m1448585578 (GvrPointerInputModule_t2267916028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GvrPointerInputModule::GetPointerPosition()
extern "C"  Vector2_t3525329788  GvrPointerInputModule_GetPointerPosition_m3746395786 (GvrPointerInputModule_t2267916028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
