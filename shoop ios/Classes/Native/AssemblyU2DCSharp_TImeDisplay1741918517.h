﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;
// LevelManager
struct LevelManager_t2278695849;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TImeDisplay
struct  TImeDisplay_t1741918517  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text TImeDisplay::text
	Text_t3286458198 * ___text_2;
	// LevelManager TImeDisplay::timer
	LevelManager_t2278695849 * ___timer_3;

public:
	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(TImeDisplay_t1741918517, ___text_2)); }
	inline Text_t3286458198 * get_text_2() const { return ___text_2; }
	inline Text_t3286458198 ** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(Text_t3286458198 * value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier(&___text_2, value);
	}

	inline static int32_t get_offset_of_timer_3() { return static_cast<int32_t>(offsetof(TImeDisplay_t1741918517, ___timer_3)); }
	inline LevelManager_t2278695849 * get_timer_3() const { return ___timer_3; }
	inline LevelManager_t2278695849 ** get_address_of_timer_3() { return &___timer_3; }
	inline void set_timer_3(LevelManager_t2278695849 * value)
	{
		___timer_3 = value;
		Il2CppCodeGenWriteBarrier(&___timer_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
