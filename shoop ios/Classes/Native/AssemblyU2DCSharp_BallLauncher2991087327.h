#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallLauncher
struct  BallLauncher_t2991087327  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject BallLauncher::ballPrefab
	GameObject_t4012695102 * ___ballPrefab_2;
	// System.Single BallLauncher::ballSpeed
	float ___ballSpeed_3;

public:
	inline static int32_t get_offset_of_ballPrefab_2() { return static_cast<int32_t>(offsetof(BallLauncher_t2991087327, ___ballPrefab_2)); }
	inline GameObject_t4012695102 * get_ballPrefab_2() const { return ___ballPrefab_2; }
	inline GameObject_t4012695102 ** get_address_of_ballPrefab_2() { return &___ballPrefab_2; }
	inline void set_ballPrefab_2(GameObject_t4012695102 * value)
	{
		___ballPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___ballPrefab_2, value);
	}

	inline static int32_t get_offset_of_ballSpeed_3() { return static_cast<int32_t>(offsetof(BallLauncher_t2991087327, ___ballSpeed_3)); }
	inline float get_ballSpeed_3() const { return ___ballSpeed_3; }
	inline float* get_address_of_ballSpeed_3() { return &___ballSpeed_3; }
	inline void set_ballSpeed_3(float value)
	{
		___ballSpeed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
