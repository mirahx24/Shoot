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
// ScoreAbsorber
struct ScoreAbsorber_t2414452524;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameOverScore
struct  GameOverScore_t537348652  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text GameOverScore::text
	Text_t3286458198 * ___text_2;
	// ScoreAbsorber GameOverScore::scoreAbsorber
	ScoreAbsorber_t2414452524 * ___scoreAbsorber_3;

public:
	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(GameOverScore_t537348652, ___text_2)); }
	inline Text_t3286458198 * get_text_2() const { return ___text_2; }
	inline Text_t3286458198 ** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(Text_t3286458198 * value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier(&___text_2, value);
	}

	inline static int32_t get_offset_of_scoreAbsorber_3() { return static_cast<int32_t>(offsetof(GameOverScore_t537348652, ___scoreAbsorber_3)); }
	inline ScoreAbsorber_t2414452524 * get_scoreAbsorber_3() const { return ___scoreAbsorber_3; }
	inline ScoreAbsorber_t2414452524 ** get_address_of_scoreAbsorber_3() { return &___scoreAbsorber_3; }
	inline void set_scoreAbsorber_3(ScoreAbsorber_t2414452524 * value)
	{
		___scoreAbsorber_3 = value;
		Il2CppCodeGenWriteBarrier(&___scoreAbsorber_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif