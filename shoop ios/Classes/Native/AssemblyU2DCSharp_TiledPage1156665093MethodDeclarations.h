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

// TiledPage
struct TiledPage_t1156665093;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_RectTransform3317474837.h"

// System.Void TiledPage::.ctor()
extern "C"  void TiledPage__ctor_m2795625478 (TiledPage_t1156665093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TiledPage::FlushLayoutCache()
extern "C"  void TiledPage_FlushLayoutCache_m183914706 (TiledPage_t1156665093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TiledPage::ApplyScrollEffect(System.Single,System.Single,System.Boolean)
extern "C"  void TiledPage_ApplyScrollEffect_m881605405 (TiledPage_t1156665093 * __this, float ___scrollDistance, float ___scrollSpacing, bool ___isInteractable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TiledPage::UpdateTile(UnityEngine.Transform,UnityEngine.Vector3,System.Boolean)
extern "C"  void TiledPage_UpdateTile_m3494847042 (TiledPage_t1156665093 * __this, Transform_t284553113 * ___tile, Vector3_t3525329789  ___position, bool ___isInteractable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TiledPage::CalculateTilesByDistance()
extern "C"  void TiledPage_CalculateTilesByDistance_m2355531721 (TiledPage_t1156665093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TiledPage::GetTilePoint(UnityEngine.RectTransform)
extern "C"  Vector3_t3525329789  TiledPage_GetTilePoint_m2970982705 (TiledPage_t1156665093 * __this, RectTransform_t3317474837 * ___tileRect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform TiledPage::GetTileCell(UnityEngine.Transform)
extern "C"  RectTransform_t3317474837 * TiledPage_GetTileCell_m2566486097 (TiledPage_t1156665093 * __this, Transform_t284553113 * ___tile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
