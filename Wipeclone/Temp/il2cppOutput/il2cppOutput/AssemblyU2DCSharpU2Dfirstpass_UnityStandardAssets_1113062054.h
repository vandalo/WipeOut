#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct  VirtualButton_t1113062054  : public Il2CppObject
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_LastPressedFrame
	int32_t ___m_LastPressedFrame_0;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_ReleasedFrame
	int32_t ___m_ReleasedFrame_1;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_Pressed
	bool ___m_Pressed_2;
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_3;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_m_LastPressedFrame_0() { return static_cast<int32_t>(offsetof(VirtualButton_t1113062054, ___m_LastPressedFrame_0)); }
	inline int32_t get_m_LastPressedFrame_0() const { return ___m_LastPressedFrame_0; }
	inline int32_t* get_address_of_m_LastPressedFrame_0() { return &___m_LastPressedFrame_0; }
	inline void set_m_LastPressedFrame_0(int32_t value)
	{
		___m_LastPressedFrame_0 = value;
	}

	inline static int32_t get_offset_of_m_ReleasedFrame_1() { return static_cast<int32_t>(offsetof(VirtualButton_t1113062054, ___m_ReleasedFrame_1)); }
	inline int32_t get_m_ReleasedFrame_1() const { return ___m_ReleasedFrame_1; }
	inline int32_t* get_address_of_m_ReleasedFrame_1() { return &___m_ReleasedFrame_1; }
	inline void set_m_ReleasedFrame_1(int32_t value)
	{
		___m_ReleasedFrame_1 = value;
	}

	inline static int32_t get_offset_of_m_Pressed_2() { return static_cast<int32_t>(offsetof(VirtualButton_t1113062054, ___m_Pressed_2)); }
	inline bool get_m_Pressed_2() const { return ___m_Pressed_2; }
	inline bool* get_address_of_m_Pressed_2() { return &___m_Pressed_2; }
	inline void set_m_Pressed_2(bool value)
	{
		___m_Pressed_2 = value;
	}

	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VirtualButton_t1113062054, ___U3CnameU3Ek__BackingField_3)); }
	inline String_t* get_U3CnameU3Ek__BackingField_3() const { return ___U3CnameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_3() { return &___U3CnameU3Ek__BackingField_3; }
	inline void set_U3CnameU3Ek__BackingField_3(String_t* value)
	{
		___U3CnameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CnameU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VirtualButton_t1113062054, ___U3CmatchWithInputManagerU3Ek__BackingField_4)); }
	inline bool get_U3CmatchWithInputManagerU3Ek__BackingField_4() const { return ___U3CmatchWithInputManagerU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CmatchWithInputManagerU3Ek__BackingField_4() { return &___U3CmatchWithInputManagerU3Ek__BackingField_4; }
	inline void set_U3CmatchWithInputManagerU3Ek__BackingField_4(bool value)
	{
		___U3CmatchWithInputManagerU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
