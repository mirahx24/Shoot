#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelManager
struct  LevelManager_t2278695849  : public MonoBehaviour_t3012272455
{
public:
	// System.Single LevelManager::timer
	float ___timer_2;

public:
	inline static int32_t get_offset_of_timer_2() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___timer_2)); }
	inline float get_timer_2() const { return ___timer_2; }
	inline float* get_address_of_timer_2() { return &___timer_2; }
	inline void set_timer_2(float value)
	{
		___timer_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
