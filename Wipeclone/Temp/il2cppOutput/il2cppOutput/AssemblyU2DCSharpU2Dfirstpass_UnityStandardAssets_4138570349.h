#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_t2484117335;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_t1933480424;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct  VirtualInput_t4138570349  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualAxes
	Dictionary_2_t2484117335 * ___m_VirtualAxes_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualButtons
	Dictionary_2_t1933480424 * ___m_VirtualButtons_1;
	// System.Collections.Generic.List`1<System.String> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_AlwaysUseVirtual
	List_1_t1375417109 * ___m_AlwaysUseVirtual_2;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::<virtualMousePosition>k__BackingField
	Vector3_t4282066566  ___U3CvirtualMousePositionU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_VirtualAxes_0() { return static_cast<int32_t>(offsetof(VirtualInput_t4138570349, ___m_VirtualAxes_0)); }
	inline Dictionary_2_t2484117335 * get_m_VirtualAxes_0() const { return ___m_VirtualAxes_0; }
	inline Dictionary_2_t2484117335 ** get_address_of_m_VirtualAxes_0() { return &___m_VirtualAxes_0; }
	inline void set_m_VirtualAxes_0(Dictionary_2_t2484117335 * value)
	{
		___m_VirtualAxes_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_VirtualAxes_0, value);
	}

	inline static int32_t get_offset_of_m_VirtualButtons_1() { return static_cast<int32_t>(offsetof(VirtualInput_t4138570349, ___m_VirtualButtons_1)); }
	inline Dictionary_2_t1933480424 * get_m_VirtualButtons_1() const { return ___m_VirtualButtons_1; }
	inline Dictionary_2_t1933480424 ** get_address_of_m_VirtualButtons_1() { return &___m_VirtualButtons_1; }
	inline void set_m_VirtualButtons_1(Dictionary_2_t1933480424 * value)
	{
		___m_VirtualButtons_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_VirtualButtons_1, value);
	}

	inline static int32_t get_offset_of_m_AlwaysUseVirtual_2() { return static_cast<int32_t>(offsetof(VirtualInput_t4138570349, ___m_AlwaysUseVirtual_2)); }
	inline List_1_t1375417109 * get_m_AlwaysUseVirtual_2() const { return ___m_AlwaysUseVirtual_2; }
	inline List_1_t1375417109 ** get_address_of_m_AlwaysUseVirtual_2() { return &___m_AlwaysUseVirtual_2; }
	inline void set_m_AlwaysUseVirtual_2(List_1_t1375417109 * value)
	{
		___m_AlwaysUseVirtual_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_AlwaysUseVirtual_2, value);
	}

	inline static int32_t get_offset_of_U3CvirtualMousePositionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VirtualInput_t4138570349, ___U3CvirtualMousePositionU3Ek__BackingField_3)); }
	inline Vector3_t4282066566  get_U3CvirtualMousePositionU3Ek__BackingField_3() const { return ___U3CvirtualMousePositionU3Ek__BackingField_3; }
	inline Vector3_t4282066566 * get_address_of_U3CvirtualMousePositionU3Ek__BackingField_3() { return &___U3CvirtualMousePositionU3Ek__BackingField_3; }
	inline void set_U3CvirtualMousePositionU3Ek__BackingField_3(Vector3_t4282066566  value)
	{
		___U3CvirtualMousePositionU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
