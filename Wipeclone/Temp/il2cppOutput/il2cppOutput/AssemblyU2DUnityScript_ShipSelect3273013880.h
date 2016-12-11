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
// UnityEngine.UI.Slider
struct Slider_t79469677;
// UnityEngine.UI.Button
struct Button_t3896396478;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShipSelect
struct  ShipSelect_t3273013880  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject ShipSelect::ship1
	GameObject_t3674682005 * ___ship1_2;
	// UnityEngine.GameObject ShipSelect::ship2
	GameObject_t3674682005 * ___ship2_3;
	// UnityEngine.GameObject ShipSelect::ship3
	GameObject_t3674682005 * ___ship3_4;
	// UnityEngine.GameObject ShipSelect::ship4
	GameObject_t3674682005 * ___ship4_5;
	// UnityEngine.UI.Slider ShipSelect::velocity
	Slider_t79469677 * ___velocity_6;
	// UnityEngine.UI.Slider ShipSelect::acceleration
	Slider_t79469677 * ___acceleration_7;
	// UnityEngine.UI.Slider ShipSelect::torque
	Slider_t79469677 * ___torque_8;
	// UnityEngine.UI.Button ShipSelect::blue
	Button_t3896396478 * ___blue_9;
	// UnityEngine.UI.Button ShipSelect::red
	Button_t3896396478 * ___red_10;
	// UnityEngine.UI.Button ShipSelect::green
	Button_t3896396478 * ___green_11;
	// UnityEngine.UI.Button ShipSelect::start
	Button_t3896396478 * ___start_12;
	// UnityEngine.Texture2D ShipSelect::textureBlue
	Texture2D_t3884108195 * ___textureBlue_13;
	// UnityEngine.Texture2D ShipSelect::textureGreen
	Texture2D_t3884108195 * ___textureGreen_14;
	// UnityEngine.Texture2D ShipSelect::textureRed
	Texture2D_t3884108195 * ___textureRed_15;
	// System.Int32 ShipSelect::pointerShip
	int32_t ___pointerShip_16;
	// System.Int32 ShipSelect::movment
	int32_t ___movment_17;
	// System.Boolean ShipSelect::finishIn
	bool ___finishIn_18;
	// System.Boolean ShipSelect::finishOut
	bool ___finishOut_19;
	// System.Single ShipSelect::velocityShip1
	float ___velocityShip1_20;
	// System.Single ShipSelect::accelerationShip1
	float ___accelerationShip1_21;
	// System.Single ShipSelect::torqueShip1
	float ___torqueShip1_22;
	// System.Single ShipSelect::velocityShip2
	float ___velocityShip2_23;
	// System.Single ShipSelect::accelerationShip2
	float ___accelerationShip2_24;
	// System.Single ShipSelect::torqueShip2
	float ___torqueShip2_25;
	// System.Single ShipSelect::velocityShip3
	float ___velocityShip3_26;
	// System.Single ShipSelect::accelerationShip3
	float ___accelerationShip3_27;
	// System.Single ShipSelect::torqueShip3
	float ___torqueShip3_28;
	// System.Single ShipSelect::velocityShip4
	float ___velocityShip4_29;
	// System.Single ShipSelect::accelerationShip4
	float ___accelerationShip4_30;
	// System.Single ShipSelect::torqueShip4
	float ___torqueShip4_31;
	// System.Single ShipSelect::incrementSlider
	float ___incrementSlider_32;

public:
	inline static int32_t get_offset_of_ship1_2() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___ship1_2)); }
	inline GameObject_t3674682005 * get_ship1_2() const { return ___ship1_2; }
	inline GameObject_t3674682005 ** get_address_of_ship1_2() { return &___ship1_2; }
	inline void set_ship1_2(GameObject_t3674682005 * value)
	{
		___ship1_2 = value;
		Il2CppCodeGenWriteBarrier(&___ship1_2, value);
	}

	inline static int32_t get_offset_of_ship2_3() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___ship2_3)); }
	inline GameObject_t3674682005 * get_ship2_3() const { return ___ship2_3; }
	inline GameObject_t3674682005 ** get_address_of_ship2_3() { return &___ship2_3; }
	inline void set_ship2_3(GameObject_t3674682005 * value)
	{
		___ship2_3 = value;
		Il2CppCodeGenWriteBarrier(&___ship2_3, value);
	}

	inline static int32_t get_offset_of_ship3_4() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___ship3_4)); }
	inline GameObject_t3674682005 * get_ship3_4() const { return ___ship3_4; }
	inline GameObject_t3674682005 ** get_address_of_ship3_4() { return &___ship3_4; }
	inline void set_ship3_4(GameObject_t3674682005 * value)
	{
		___ship3_4 = value;
		Il2CppCodeGenWriteBarrier(&___ship3_4, value);
	}

	inline static int32_t get_offset_of_ship4_5() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___ship4_5)); }
	inline GameObject_t3674682005 * get_ship4_5() const { return ___ship4_5; }
	inline GameObject_t3674682005 ** get_address_of_ship4_5() { return &___ship4_5; }
	inline void set_ship4_5(GameObject_t3674682005 * value)
	{
		___ship4_5 = value;
		Il2CppCodeGenWriteBarrier(&___ship4_5, value);
	}

	inline static int32_t get_offset_of_velocity_6() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___velocity_6)); }
	inline Slider_t79469677 * get_velocity_6() const { return ___velocity_6; }
	inline Slider_t79469677 ** get_address_of_velocity_6() { return &___velocity_6; }
	inline void set_velocity_6(Slider_t79469677 * value)
	{
		___velocity_6 = value;
		Il2CppCodeGenWriteBarrier(&___velocity_6, value);
	}

	inline static int32_t get_offset_of_acceleration_7() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___acceleration_7)); }
	inline Slider_t79469677 * get_acceleration_7() const { return ___acceleration_7; }
	inline Slider_t79469677 ** get_address_of_acceleration_7() { return &___acceleration_7; }
	inline void set_acceleration_7(Slider_t79469677 * value)
	{
		___acceleration_7 = value;
		Il2CppCodeGenWriteBarrier(&___acceleration_7, value);
	}

	inline static int32_t get_offset_of_torque_8() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___torque_8)); }
	inline Slider_t79469677 * get_torque_8() const { return ___torque_8; }
	inline Slider_t79469677 ** get_address_of_torque_8() { return &___torque_8; }
	inline void set_torque_8(Slider_t79469677 * value)
	{
		___torque_8 = value;
		Il2CppCodeGenWriteBarrier(&___torque_8, value);
	}

	inline static int32_t get_offset_of_blue_9() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___blue_9)); }
	inline Button_t3896396478 * get_blue_9() const { return ___blue_9; }
	inline Button_t3896396478 ** get_address_of_blue_9() { return &___blue_9; }
	inline void set_blue_9(Button_t3896396478 * value)
	{
		___blue_9 = value;
		Il2CppCodeGenWriteBarrier(&___blue_9, value);
	}

	inline static int32_t get_offset_of_red_10() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___red_10)); }
	inline Button_t3896396478 * get_red_10() const { return ___red_10; }
	inline Button_t3896396478 ** get_address_of_red_10() { return &___red_10; }
	inline void set_red_10(Button_t3896396478 * value)
	{
		___red_10 = value;
		Il2CppCodeGenWriteBarrier(&___red_10, value);
	}

	inline static int32_t get_offset_of_green_11() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___green_11)); }
	inline Button_t3896396478 * get_green_11() const { return ___green_11; }
	inline Button_t3896396478 ** get_address_of_green_11() { return &___green_11; }
	inline void set_green_11(Button_t3896396478 * value)
	{
		___green_11 = value;
		Il2CppCodeGenWriteBarrier(&___green_11, value);
	}

	inline static int32_t get_offset_of_start_12() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___start_12)); }
	inline Button_t3896396478 * get_start_12() const { return ___start_12; }
	inline Button_t3896396478 ** get_address_of_start_12() { return &___start_12; }
	inline void set_start_12(Button_t3896396478 * value)
	{
		___start_12 = value;
		Il2CppCodeGenWriteBarrier(&___start_12, value);
	}

	inline static int32_t get_offset_of_textureBlue_13() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___textureBlue_13)); }
	inline Texture2D_t3884108195 * get_textureBlue_13() const { return ___textureBlue_13; }
	inline Texture2D_t3884108195 ** get_address_of_textureBlue_13() { return &___textureBlue_13; }
	inline void set_textureBlue_13(Texture2D_t3884108195 * value)
	{
		___textureBlue_13 = value;
		Il2CppCodeGenWriteBarrier(&___textureBlue_13, value);
	}

	inline static int32_t get_offset_of_textureGreen_14() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___textureGreen_14)); }
	inline Texture2D_t3884108195 * get_textureGreen_14() const { return ___textureGreen_14; }
	inline Texture2D_t3884108195 ** get_address_of_textureGreen_14() { return &___textureGreen_14; }
	inline void set_textureGreen_14(Texture2D_t3884108195 * value)
	{
		___textureGreen_14 = value;
		Il2CppCodeGenWriteBarrier(&___textureGreen_14, value);
	}

	inline static int32_t get_offset_of_textureRed_15() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___textureRed_15)); }
	inline Texture2D_t3884108195 * get_textureRed_15() const { return ___textureRed_15; }
	inline Texture2D_t3884108195 ** get_address_of_textureRed_15() { return &___textureRed_15; }
	inline void set_textureRed_15(Texture2D_t3884108195 * value)
	{
		___textureRed_15 = value;
		Il2CppCodeGenWriteBarrier(&___textureRed_15, value);
	}

	inline static int32_t get_offset_of_pointerShip_16() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___pointerShip_16)); }
	inline int32_t get_pointerShip_16() const { return ___pointerShip_16; }
	inline int32_t* get_address_of_pointerShip_16() { return &___pointerShip_16; }
	inline void set_pointerShip_16(int32_t value)
	{
		___pointerShip_16 = value;
	}

	inline static int32_t get_offset_of_movment_17() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___movment_17)); }
	inline int32_t get_movment_17() const { return ___movment_17; }
	inline int32_t* get_address_of_movment_17() { return &___movment_17; }
	inline void set_movment_17(int32_t value)
	{
		___movment_17 = value;
	}

	inline static int32_t get_offset_of_finishIn_18() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___finishIn_18)); }
	inline bool get_finishIn_18() const { return ___finishIn_18; }
	inline bool* get_address_of_finishIn_18() { return &___finishIn_18; }
	inline void set_finishIn_18(bool value)
	{
		___finishIn_18 = value;
	}

	inline static int32_t get_offset_of_finishOut_19() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___finishOut_19)); }
	inline bool get_finishOut_19() const { return ___finishOut_19; }
	inline bool* get_address_of_finishOut_19() { return &___finishOut_19; }
	inline void set_finishOut_19(bool value)
	{
		___finishOut_19 = value;
	}

	inline static int32_t get_offset_of_velocityShip1_20() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___velocityShip1_20)); }
	inline float get_velocityShip1_20() const { return ___velocityShip1_20; }
	inline float* get_address_of_velocityShip1_20() { return &___velocityShip1_20; }
	inline void set_velocityShip1_20(float value)
	{
		___velocityShip1_20 = value;
	}

	inline static int32_t get_offset_of_accelerationShip1_21() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___accelerationShip1_21)); }
	inline float get_accelerationShip1_21() const { return ___accelerationShip1_21; }
	inline float* get_address_of_accelerationShip1_21() { return &___accelerationShip1_21; }
	inline void set_accelerationShip1_21(float value)
	{
		___accelerationShip1_21 = value;
	}

	inline static int32_t get_offset_of_torqueShip1_22() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___torqueShip1_22)); }
	inline float get_torqueShip1_22() const { return ___torqueShip1_22; }
	inline float* get_address_of_torqueShip1_22() { return &___torqueShip1_22; }
	inline void set_torqueShip1_22(float value)
	{
		___torqueShip1_22 = value;
	}

	inline static int32_t get_offset_of_velocityShip2_23() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___velocityShip2_23)); }
	inline float get_velocityShip2_23() const { return ___velocityShip2_23; }
	inline float* get_address_of_velocityShip2_23() { return &___velocityShip2_23; }
	inline void set_velocityShip2_23(float value)
	{
		___velocityShip2_23 = value;
	}

	inline static int32_t get_offset_of_accelerationShip2_24() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___accelerationShip2_24)); }
	inline float get_accelerationShip2_24() const { return ___accelerationShip2_24; }
	inline float* get_address_of_accelerationShip2_24() { return &___accelerationShip2_24; }
	inline void set_accelerationShip2_24(float value)
	{
		___accelerationShip2_24 = value;
	}

	inline static int32_t get_offset_of_torqueShip2_25() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___torqueShip2_25)); }
	inline float get_torqueShip2_25() const { return ___torqueShip2_25; }
	inline float* get_address_of_torqueShip2_25() { return &___torqueShip2_25; }
	inline void set_torqueShip2_25(float value)
	{
		___torqueShip2_25 = value;
	}

	inline static int32_t get_offset_of_velocityShip3_26() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___velocityShip3_26)); }
	inline float get_velocityShip3_26() const { return ___velocityShip3_26; }
	inline float* get_address_of_velocityShip3_26() { return &___velocityShip3_26; }
	inline void set_velocityShip3_26(float value)
	{
		___velocityShip3_26 = value;
	}

	inline static int32_t get_offset_of_accelerationShip3_27() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___accelerationShip3_27)); }
	inline float get_accelerationShip3_27() const { return ___accelerationShip3_27; }
	inline float* get_address_of_accelerationShip3_27() { return &___accelerationShip3_27; }
	inline void set_accelerationShip3_27(float value)
	{
		___accelerationShip3_27 = value;
	}

	inline static int32_t get_offset_of_torqueShip3_28() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___torqueShip3_28)); }
	inline float get_torqueShip3_28() const { return ___torqueShip3_28; }
	inline float* get_address_of_torqueShip3_28() { return &___torqueShip3_28; }
	inline void set_torqueShip3_28(float value)
	{
		___torqueShip3_28 = value;
	}

	inline static int32_t get_offset_of_velocityShip4_29() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___velocityShip4_29)); }
	inline float get_velocityShip4_29() const { return ___velocityShip4_29; }
	inline float* get_address_of_velocityShip4_29() { return &___velocityShip4_29; }
	inline void set_velocityShip4_29(float value)
	{
		___velocityShip4_29 = value;
	}

	inline static int32_t get_offset_of_accelerationShip4_30() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___accelerationShip4_30)); }
	inline float get_accelerationShip4_30() const { return ___accelerationShip4_30; }
	inline float* get_address_of_accelerationShip4_30() { return &___accelerationShip4_30; }
	inline void set_accelerationShip4_30(float value)
	{
		___accelerationShip4_30 = value;
	}

	inline static int32_t get_offset_of_torqueShip4_31() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___torqueShip4_31)); }
	inline float get_torqueShip4_31() const { return ___torqueShip4_31; }
	inline float* get_address_of_torqueShip4_31() { return &___torqueShip4_31; }
	inline void set_torqueShip4_31(float value)
	{
		___torqueShip4_31 = value;
	}

	inline static int32_t get_offset_of_incrementSlider_32() { return static_cast<int32_t>(offsetof(ShipSelect_t3273013880, ___incrementSlider_32)); }
	inline float get_incrementSlider_32() const { return ___incrementSlider_32; }
	inline float* get_address_of_incrementSlider_32() { return &___incrementSlider_32; }
	inline void set_incrementSlider_32(float value)
	{
		___incrementSlider_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
