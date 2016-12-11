#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition[]
struct ReplacementDefinitionU5BU5D_t2779002842;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList
struct  ReplacementList_t282107302  : public Il2CppObject
{
public:
	// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition[] UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList::items
	ReplacementDefinitionU5BU5D_t2779002842* ___items_0;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(ReplacementList_t282107302, ___items_0)); }
	inline ReplacementDefinitionU5BU5D_t2779002842* get_items_0() const { return ___items_0; }
	inline ReplacementDefinitionU5BU5D_t2779002842** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(ReplacementDefinitionU5BU5D_t2779002842* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier(&___items_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
