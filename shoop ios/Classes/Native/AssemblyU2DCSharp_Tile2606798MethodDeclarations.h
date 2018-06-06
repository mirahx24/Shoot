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

// Tile
struct Tile_t2606798;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;
// TiledPage
struct TiledPage_t1156665093;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve3205101634.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void Tile::.ctor()
extern "C"  void Tile__ctor_m2580515725 (Tile_t2606798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform Tile::get_Cell()
extern "C"  RectTransform_t3317474837 * Tile_get_Cell_m307982180 (Tile_t2606798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Tile::get_IsInteractable()
extern "C"  bool Tile_get_IsInteractable_m4241002862 (Tile_t2606798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::set_IsInteractable(System.Boolean)
extern "C"  void Tile_set_IsInteractable_m3000513829 (Tile_t2606798 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::Awake()
extern "C"  void Tile_Awake_m2818120944 (Tile_t2606798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Tile_OnPointerEnter_m2926462061 (Tile_t2606798 * __this, PointerEventData_t3205101634 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Tile_OnPointerExit_m4044485655 (Tile_t2606798 * __this, PointerEventData_t3205101634 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::OnGvrPointerHover(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Tile_OnGvrPointerHover_m4192839216 (Tile_t2606798 * __this, PointerEventData_t3205101634 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::Update()
extern "C"  void Tile_Update_m118470944 (Tile_t2606798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::UpdateDesiredRotation(UnityEngine.Vector3)
extern "C"  void Tile_UpdateDesiredRotation_m2116861055 (Tile_t2606798 * __this, Vector3_t3525329789  ___pointerIntersectionWorldPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Tile::CalculateLocalSize()
extern "C"  Vector2_t3525329788  Tile_CalculateLocalSize_m4018037496 (Tile_t2606798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Tile::CalculateLocalCenter()
extern "C"  Vector3_t3525329789  Tile_CalculateLocalCenter_m2766700651 (Tile_t2606798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TiledPage Tile::GetPage()
extern "C"  TiledPage_t1156665093 * Tile_GetPage_m4076587586 (Tile_t2606798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Tile::GetMetersToCanvasScale()
extern "C"  float Tile_GetMetersToCanvasScale_m3912798426 (Tile_t2606798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Tile::clampEuler(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3525329789  Tile_clampEuler_m2294624383 (Tile_t2606798 * __this, Vector3_t3525329789  ___rotation, float ___maxDegrees, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Tile::clampDegrees(System.Single,System.Single)
extern "C"  float Tile_clampDegrees_m2579734593 (Tile_t2606798 * __this, float ___degrees, float ___maxDegrees, const MethodInfo* method) IL2CPP_METHOD_ATTR;
