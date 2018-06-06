#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;
// TiledPage
struct TiledPage_t1156665093;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tile
struct  Tile_t2606798  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean Tile::isHovering
	bool ___isHovering_8;
	// System.Boolean Tile::isInteractable
	bool ___isInteractable_9;
	// UnityEngine.Transform Tile::originalParent
	Transform_t284553113 * ___originalParent_10;
	// TiledPage Tile::page
	TiledPage_t1156665093 * ___page_11;
	// UnityEngine.Quaternion Tile::desiredRotation
	Quaternion_t1891715979  ___desiredRotation_12;
	// System.Single Tile::desiredPositionZ
	float ___desiredPositionZ_13;
	// UnityEngine.Vector3 Tile::desiredScale
	Vector3_t3525329789  ___desiredScale_14;

public:
	inline static int32_t get_offset_of_isHovering_8() { return static_cast<int32_t>(offsetof(Tile_t2606798, ___isHovering_8)); }
	inline bool get_isHovering_8() const { return ___isHovering_8; }
	inline bool* get_address_of_isHovering_8() { return &___isHovering_8; }
	inline void set_isHovering_8(bool value)
	{
		___isHovering_8 = value;
	}

	inline static int32_t get_offset_of_isInteractable_9() { return static_cast<int32_t>(offsetof(Tile_t2606798, ___isInteractable_9)); }
	inline bool get_isInteractable_9() const { return ___isInteractable_9; }
	inline bool* get_address_of_isInteractable_9() { return &___isInteractable_9; }
	inline void set_isInteractable_9(bool value)
	{
		___isInteractable_9 = value;
	}

	inline static int32_t get_offset_of_originalParent_10() { return static_cast<int32_t>(offsetof(Tile_t2606798, ___originalParent_10)); }
	inline Transform_t284553113 * get_originalParent_10() const { return ___originalParent_10; }
	inline Transform_t284553113 ** get_address_of_originalParent_10() { return &___originalParent_10; }
	inline void set_originalParent_10(Transform_t284553113 * value)
	{
		___originalParent_10 = value;
		Il2CppCodeGenWriteBarrier(&___originalParent_10, value);
	}

	inline static int32_t get_offset_of_page_11() { return static_cast<int32_t>(offsetof(Tile_t2606798, ___page_11)); }
	inline TiledPage_t1156665093 * get_page_11() const { return ___page_11; }
	inline TiledPage_t1156665093 ** get_address_of_page_11() { return &___page_11; }
	inline void set_page_11(TiledPage_t1156665093 * value)
	{
		___page_11 = value;
		Il2CppCodeGenWriteBarrier(&___page_11, value);
	}

	inline static int32_t get_offset_of_desiredRotation_12() { return static_cast<int32_t>(offsetof(Tile_t2606798, ___desiredRotation_12)); }
	inline Quaternion_t1891715979  get_desiredRotation_12() const { return ___desiredRotation_12; }
	inline Quaternion_t1891715979 * get_address_of_desiredRotation_12() { return &___desiredRotation_12; }
	inline void set_desiredRotation_12(Quaternion_t1891715979  value)
	{
		___desiredRotation_12 = value;
	}

	inline static int32_t get_offset_of_desiredPositionZ_13() { return static_cast<int32_t>(offsetof(Tile_t2606798, ___desiredPositionZ_13)); }
	inline float get_desiredPositionZ_13() const { return ___desiredPositionZ_13; }
	inline float* get_address_of_desiredPositionZ_13() { return &___desiredPositionZ_13; }
	inline void set_desiredPositionZ_13(float value)
	{
		___desiredPositionZ_13 = value;
	}

	inline static int32_t get_offset_of_desiredScale_14() { return static_cast<int32_t>(offsetof(Tile_t2606798, ___desiredScale_14)); }
	inline Vector3_t3525329789  get_desiredScale_14() const { return ___desiredScale_14; }
	inline Vector3_t3525329789 * get_address_of_desiredScale_14() { return &___desiredScale_14; }
	inline void set_desiredScale_14(Vector3_t3525329789  value)
	{
		___desiredScale_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
