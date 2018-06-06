#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[]
struct TransformU5BU5D_t3681339876;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// System.Collections.Generic.SortedDictionary`2<System.Single,System.Collections.Generic.List`1<UnityEngine.Transform>>
struct SortedDictionary_2_t1900695494;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_TiledPage_TileOrderBy2972000663.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TiledPage
struct  TiledPage_t1156665093  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform[] TiledPage::tiles
	TransformU5BU5D_t3681339876* ___tiles_3;
	// UnityEngine.RectTransform TiledPage::layoutTransform
	RectTransform_t3317474837 * ___layoutTransform_4;
	// System.Single TiledPage::staggerAnimationIntensity
	float ___staggerAnimationIntensity_5;
	// TiledPage/TileOrderBy TiledPage::tileOrderBy
	int32_t ___tileOrderBy_6;
	// System.Collections.Generic.SortedDictionary`2<System.Single,System.Collections.Generic.List`1<UnityEngine.Transform>> TiledPage::tilesByDistanceFromLeft
	SortedDictionary_2_t1900695494 * ___tilesByDistanceFromLeft_7;

public:
	inline static int32_t get_offset_of_tiles_3() { return static_cast<int32_t>(offsetof(TiledPage_t1156665093, ___tiles_3)); }
	inline TransformU5BU5D_t3681339876* get_tiles_3() const { return ___tiles_3; }
	inline TransformU5BU5D_t3681339876** get_address_of_tiles_3() { return &___tiles_3; }
	inline void set_tiles_3(TransformU5BU5D_t3681339876* value)
	{
		___tiles_3 = value;
		Il2CppCodeGenWriteBarrier(&___tiles_3, value);
	}

	inline static int32_t get_offset_of_layoutTransform_4() { return static_cast<int32_t>(offsetof(TiledPage_t1156665093, ___layoutTransform_4)); }
	inline RectTransform_t3317474837 * get_layoutTransform_4() const { return ___layoutTransform_4; }
	inline RectTransform_t3317474837 ** get_address_of_layoutTransform_4() { return &___layoutTransform_4; }
	inline void set_layoutTransform_4(RectTransform_t3317474837 * value)
	{
		___layoutTransform_4 = value;
		Il2CppCodeGenWriteBarrier(&___layoutTransform_4, value);
	}

	inline static int32_t get_offset_of_staggerAnimationIntensity_5() { return static_cast<int32_t>(offsetof(TiledPage_t1156665093, ___staggerAnimationIntensity_5)); }
	inline float get_staggerAnimationIntensity_5() const { return ___staggerAnimationIntensity_5; }
	inline float* get_address_of_staggerAnimationIntensity_5() { return &___staggerAnimationIntensity_5; }
	inline void set_staggerAnimationIntensity_5(float value)
	{
		___staggerAnimationIntensity_5 = value;
	}

	inline static int32_t get_offset_of_tileOrderBy_6() { return static_cast<int32_t>(offsetof(TiledPage_t1156665093, ___tileOrderBy_6)); }
	inline int32_t get_tileOrderBy_6() const { return ___tileOrderBy_6; }
	inline int32_t* get_address_of_tileOrderBy_6() { return &___tileOrderBy_6; }
	inline void set_tileOrderBy_6(int32_t value)
	{
		___tileOrderBy_6 = value;
	}

	inline static int32_t get_offset_of_tilesByDistanceFromLeft_7() { return static_cast<int32_t>(offsetof(TiledPage_t1156665093, ___tilesByDistanceFromLeft_7)); }
	inline SortedDictionary_2_t1900695494 * get_tilesByDistanceFromLeft_7() const { return ___tilesByDistanceFromLeft_7; }
	inline SortedDictionary_2_t1900695494 ** get_address_of_tilesByDistanceFromLeft_7() { return &___tilesByDistanceFromLeft_7; }
	inline void set_tilesByDistanceFromLeft_7(SortedDictionary_2_t1900695494 * value)
	{
		___tilesByDistanceFromLeft_7 = value;
		Il2CppCodeGenWriteBarrier(&___tilesByDistanceFromLeft_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
