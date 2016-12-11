#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.Camera
struct Camera_t2727095145;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GUIManager
struct  GUIManager_t793685522  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 GUIManager::vel
	int32_t ___vel_2;
	// UnityEngine.GameObject GUIManager::agent
	GameObject_t3674682005 * ___agent_3;
	// UnityEngine.UI.Text GUIManager::velocityText
	Text_t9039225 * ___velocityText_4;
	// UnityEngine.UI.Text GUIManager::lapText
	Text_t9039225 * ___lapText_5;
	// UnityEngine.UI.Text GUIManager::timeLap_1
	Text_t9039225 * ___timeLap_1_6;
	// UnityEngine.UI.Text GUIManager::timeLap_2
	Text_t9039225 * ___timeLap_2_7;
	// UnityEngine.UI.Text GUIManager::timeLap_3
	Text_t9039225 * ___timeLap_3_8;
	// UnityEngine.UI.Text GUIManager::pressEnter
	Text_t9039225 * ___pressEnter_9;
	// UnityEngine.GameObject GUIManager::ship
	GameObject_t3674682005 * ___ship_11;
	// UnityEngine.Camera GUIManager::cam1
	Camera_t2727095145 * ___cam1_12;
	// UnityEngine.Camera GUIManager::cam2
	Camera_t2727095145 * ___cam2_13;
	// System.Single GUIManager::timer
	float ___timer_14;
	// System.Single GUIManager::greenComponent
	float ___greenComponent_15;
	// System.Int32 GUIManager::count
	int32_t ___count_17;

public:
	inline static int32_t get_offset_of_vel_2() { return static_cast<int32_t>(offsetof(GUIManager_t793685522, ___vel_2)); }
	inline int32_t get_vel_2() const { return ___vel_2; }
	inline int32_t* get_address_of_vel_2() { return &___vel_2; }
	inline void set_vel_2(int32_t value)
	{
		___vel_2 = value;
	}

	inline static int32_t get_offset_of_agent_3() { return static_cast<int32_t>(offsetof(GUIManager_t793685522, ___agent_3)); }
	inline GameObject_t3674682005 * get_agent_3() const { return ___agent_3; }
	inline GameObject_t3674682005 ** get_address_of_agent_3() { return &___agent_3; }
	inline void set_agent_3(GameObject_t3674682005 * value)
	{
		___agent_3 = value;
		Il2CppCodeGenWriteBarrier(&___agent_3, value);
	}

	inline static int32_t get_offset_of_velocityText_4() { return static_cast<int32_t>(offsetof(GUIManager_t793685522, ___velocityText_4)); }
	inline Text_t9039225 * get_velocityText_4() const { return ___velocityText_4; }
	inline Text_t9039225 ** get_address_of_velocityText_4() { return &___velocityText_4; }
	inline void set_velocityText_4(Text_t9039225 * value)
	{
		___velocityText_4 = value;
		Il2CppCodeGenWriteBarrier(&___velocityText_4, value);
	}

	inline static int32_t get_offset_of_lapText_5() { return static_cast<int32_t>(offsetof(GUIManager_t793685522, ___lapText_5)); }
	inline Text_t9039225 * get_lapText_5() const { return ___lapText_5; }
	inline Text_t9039225 ** get_address_of_lapText_5() { return &___lapText_5; }
	inline void set_lapText_5(Text_t9039225 * value)
	{
		___lapText_5 = value;
		Il2CppCodeGenWriteBarrier(&___lapText_5, value);
	}

	inline static int32_t get_offset_of_timeLap_1_6() { return static_cast<int32_t>(offsetof(GUIManager_t793685522, ___timeLap_1_6)); }
	inline Text_t9039225 * get_timeLap_1_6() const { return ___timeLap_1_6; }
	inline Text_t9039225 ** get_address_of_timeLap_1_6() { return &___timeLap_1_6; }
	inline void set_timeLap_1_6(Text_t9039225 * value)
	{
		___timeLap_1_6 = value;
		Il2CppCodeGenWriteBarrier(&___timeLap_1_6, value);
	}

	inline static int32_t get_offset_of_timeLap_2_7() { return static_cast<int32_t>(offsetof(GUIManager_t793685522, ___timeLap_2_7)); }
	inline Text_t9039225 * get_timeLap_2_7() const { return ___timeLap_2_7; }
	inline Text_t9039225 ** get_address_of_timeLap_2_7() { return &___timeLap_2_7; }
	inline void set_timeLap_2_7(Text_t9039225 * value)
	{
		___timeLap_2_7 = value;
		Il2CppCodeGenWriteBarrier(&___timeLap_2_7, value);
	}

	inline static int32_t get_offset_of_timeLap_3_8() { return static_cast<int32_t>(offsetof(GUIManager_t793685522, ___timeLap_3_8)); }
	inline Text_t9039225 * get_timeLap_3_8() const { return ___timeLap_3_8; }
	inline Text_t9039225 ** get_address_of_timeLap_3_8() { return &___timeLap_3_8; }
	inline void set_timeLap_3_8(Text_t9039225 * value)
	{
		___timeLap_3_8 = value;
		Il2CppCodeGenWriteBarrier(&___timeLap_3_8, value);
	}

	inline static int32_t get_offset_of_pressEnter_9() { return static_cast<int32_t>(offsetof(GUIManager_t793685522, ___pressEnter_9)); }
	inline Text_t9039225 * get_pressEnter_9() const { return ___pressEnter_9; }
	inline Text_t9039225 ** get_address_of_pressEnter_9() { return &___pressEnter_9; }
	inline void set_pressEnter_9(Text_t9039225 * value)
	{
		___pressEnter_9 = value;
		Il2CppCodeGenWriteBarrier(&___pressEnter_9, value);
	}

	inline static int32_t get_offset_of_ship_11() { return static_cast<int32_t>(offsetof(GUIManager_t793685522, ___ship_11)); }
	inline GameObject_t3674682005 * get_ship_11() const { return ___ship_11; }
	inline GameObject_t3674682005 ** get_address_of_ship_11() { return &___ship_11; }
	inline void set_ship_11(GameObject_t3674682005 * value)
	{
		___ship_11 = value;
		Il2CppCodeGenWriteBarrier(&___ship_11, value);
	}

	inline static int32_t get_offset_of_cam1_12() { return static_cast<int32_t>(offsetof(GUIManager_t793685522, ___cam1_12)); }
	inline Camera_t2727095145 * get_cam1_12() const { return ___cam1_12; }
	inline Camera_t2727095145 ** get_address_of_cam1_12() { return &___cam1_12; }
	inline void set_cam1_12(Camera_t2727095145 * value)
	{
		___cam1_12 = value;
		Il2CppCodeGenWriteBarrier(&___cam1_12, value);
	}

	inline static int32_t get_offset_of_cam2_13() { return static_cast<int32_t>(offsetof(GUIManager_t793685522, ___cam2_13)); }
	inline Camera_t2727095145 * get_cam2_13() const { return ___cam2_13; }
	inline Camera_t2727095145 ** get_address_of_cam2_13() { return &___cam2_13; }
	inline void set_cam2_13(Camera_t2727095145 * value)
	{
		___cam2_13 = value;
		Il2CppCodeGenWriteBarrier(&___cam2_13, value);
	}

	inline static int32_t get_offset_of_timer_14() { return static_cast<int32_t>(offsetof(GUIManager_t793685522, ___timer_14)); }
	inline float get_timer_14() const { return ___timer_14; }
	inline float* get_address_of_timer_14() { return &___timer_14; }
	inline void set_timer_14(float value)
	{
		___timer_14 = value;
	}

	inline static int32_t get_offset_of_greenComponent_15() { return static_cast<int32_t>(offsetof(GUIManager_t793685522, ___greenComponent_15)); }
	inline float get_greenComponent_15() const { return ___greenComponent_15; }
	inline float* get_address_of_greenComponent_15() { return &___greenComponent_15; }
	inline void set_greenComponent_15(float value)
	{
		___greenComponent_15 = value;
	}

	inline static int32_t get_offset_of_count_17() { return static_cast<int32_t>(offsetof(GUIManager_t793685522, ___count_17)); }
	inline int32_t get_count_17() const { return ___count_17; }
	inline int32_t* get_address_of_count_17() { return &___count_17; }
	inline void set_count_17(int32_t value)
	{
		___count_17 = value;
	}
};

struct GUIManager_t793685522_StaticFields
{
public:
	// System.Boolean GUIManager::playing
	bool ___playing_10;
	// System.Boolean GUIManager::firstTimeRender
	bool ___firstTimeRender_16;

public:
	inline static int32_t get_offset_of_playing_10() { return static_cast<int32_t>(offsetof(GUIManager_t793685522_StaticFields, ___playing_10)); }
	inline bool get_playing_10() const { return ___playing_10; }
	inline bool* get_address_of_playing_10() { return &___playing_10; }
	inline void set_playing_10(bool value)
	{
		___playing_10 = value;
	}

	inline static int32_t get_offset_of_firstTimeRender_16() { return static_cast<int32_t>(offsetof(GUIManager_t793685522_StaticFields, ___firstTimeRender_16)); }
	inline bool get_firstTimeRender_16() const { return ___firstTimeRender_16; }
	inline bool* get_address_of_firstTimeRender_16() { return &___firstTimeRender_16; }
	inline void set_firstTimeRender_16(bool value)
	{
		___firstTimeRender_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
