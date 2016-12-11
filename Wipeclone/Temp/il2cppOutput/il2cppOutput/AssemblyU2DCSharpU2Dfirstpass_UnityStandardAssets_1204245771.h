#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Object
struct Object_t3071478659;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1242198984.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.ActivateTrigger
struct  ActivateTrigger_t1204245771  : public MonoBehaviour_t667441552
{
public:
	// UnityStandardAssets.Utility.ActivateTrigger/Mode UnityStandardAssets.Utility.ActivateTrigger::action
	int32_t ___action_2;
	// UnityEngine.Object UnityStandardAssets.Utility.ActivateTrigger::target
	Object_t3071478659 * ___target_3;
	// UnityEngine.GameObject UnityStandardAssets.Utility.ActivateTrigger::source
	GameObject_t3674682005 * ___source_4;
	// System.Int32 UnityStandardAssets.Utility.ActivateTrigger::triggerCount
	int32_t ___triggerCount_5;
	// System.Boolean UnityStandardAssets.Utility.ActivateTrigger::repeatTrigger
	bool ___repeatTrigger_6;

public:
	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(ActivateTrigger_t1204245771, ___action_2)); }
	inline int32_t get_action_2() const { return ___action_2; }
	inline int32_t* get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(int32_t value)
	{
		___action_2 = value;
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(ActivateTrigger_t1204245771, ___target_3)); }
	inline Object_t3071478659 * get_target_3() const { return ___target_3; }
	inline Object_t3071478659 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Object_t3071478659 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}

	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(ActivateTrigger_t1204245771, ___source_4)); }
	inline GameObject_t3674682005 * get_source_4() const { return ___source_4; }
	inline GameObject_t3674682005 ** get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(GameObject_t3674682005 * value)
	{
		___source_4 = value;
		Il2CppCodeGenWriteBarrier(&___source_4, value);
	}

	inline static int32_t get_offset_of_triggerCount_5() { return static_cast<int32_t>(offsetof(ActivateTrigger_t1204245771, ___triggerCount_5)); }
	inline int32_t get_triggerCount_5() const { return ___triggerCount_5; }
	inline int32_t* get_address_of_triggerCount_5() { return &___triggerCount_5; }
	inline void set_triggerCount_5(int32_t value)
	{
		___triggerCount_5 = value;
	}

	inline static int32_t get_offset_of_repeatTrigger_6() { return static_cast<int32_t>(offsetof(ActivateTrigger_t1204245771, ___repeatTrigger_6)); }
	inline bool get_repeatTrigger_6() const { return ___repeatTrigger_6; }
	inline bool* get_address_of_repeatTrigger_6() { return &___repeatTrigger_6; }
	inline void set_repeatTrigger_6(bool value)
	{
		___repeatTrigger_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
