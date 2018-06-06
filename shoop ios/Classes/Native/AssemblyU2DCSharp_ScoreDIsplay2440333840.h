#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;
// ScoreKeeper
struct ScoreKeeper_t2936965124;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreDIsplay
struct  ScoreDIsplay_t2440333840  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text ScoreDIsplay::text
	Text_t3286458198 * ___text_2;
	// ScoreKeeper ScoreDIsplay::scorekeeper
	ScoreKeeper_t2936965124 * ___scorekeeper_3;

public:
	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(ScoreDIsplay_t2440333840, ___text_2)); }
	inline Text_t3286458198 * get_text_2() const { return ___text_2; }
	inline Text_t3286458198 ** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(Text_t3286458198 * value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier(&___text_2, value);
	}

	inline static int32_t get_offset_of_scorekeeper_3() { return static_cast<int32_t>(offsetof(ScoreDIsplay_t2440333840, ___scorekeeper_3)); }
	inline ScoreKeeper_t2936965124 * get_scorekeeper_3() const { return ___scorekeeper_3; }
	inline ScoreKeeper_t2936965124 ** get_address_of_scorekeeper_3() { return &___scorekeeper_3; }
	inline void set_scorekeeper_3(ScoreKeeper_t2936965124 * value)
	{
		___scorekeeper_3 = value;
		Il2CppCodeGenWriteBarrier(&___scorekeeper_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
