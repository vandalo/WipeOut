#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CannonBehavior
struct  CannonBehavior_t3295932047  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform CannonBehavior::m_cannonRot
	Transform_t1659122786 * ___m_cannonRot_2;
	// UnityEngine.Transform CannonBehavior::m_muzzle
	Transform_t1659122786 * ___m_muzzle_3;
	// UnityEngine.GameObject CannonBehavior::m_shotPrefab
	GameObject_t3674682005 * ___m_shotPrefab_4;
	// UnityEngine.Texture2D CannonBehavior::m_guiTexture
	Texture2D_t3884108195 * ___m_guiTexture_5;

public:
	inline static int32_t get_offset_of_m_cannonRot_2() { return static_cast<int32_t>(offsetof(CannonBehavior_t3295932047, ___m_cannonRot_2)); }
	inline Transform_t1659122786 * get_m_cannonRot_2() const { return ___m_cannonRot_2; }
	inline Transform_t1659122786 ** get_address_of_m_cannonRot_2() { return &___m_cannonRot_2; }
	inline void set_m_cannonRot_2(Transform_t1659122786 * value)
	{
		___m_cannonRot_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_cannonRot_2, value);
	}

	inline static int32_t get_offset_of_m_muzzle_3() { return static_cast<int32_t>(offsetof(CannonBehavior_t3295932047, ___m_muzzle_3)); }
	inline Transform_t1659122786 * get_m_muzzle_3() const { return ___m_muzzle_3; }
	inline Transform_t1659122786 ** get_address_of_m_muzzle_3() { return &___m_muzzle_3; }
	inline void set_m_muzzle_3(Transform_t1659122786 * value)
	{
		___m_muzzle_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_muzzle_3, value);
	}

	inline static int32_t get_offset_of_m_shotPrefab_4() { return static_cast<int32_t>(offsetof(CannonBehavior_t3295932047, ___m_shotPrefab_4)); }
	inline GameObject_t3674682005 * get_m_shotPrefab_4() const { return ___m_shotPrefab_4; }
	inline GameObject_t3674682005 ** get_address_of_m_shotPrefab_4() { return &___m_shotPrefab_4; }
	inline void set_m_shotPrefab_4(GameObject_t3674682005 * value)
	{
		___m_shotPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_shotPrefab_4, value);
	}

	inline static int32_t get_offset_of_m_guiTexture_5() { return static_cast<int32_t>(offsetof(CannonBehavior_t3295932047, ___m_guiTexture_5)); }
	inline Texture2D_t3884108195 * get_m_guiTexture_5() const { return ___m_guiTexture_5; }
	inline Texture2D_t3884108195 ** get_address_of_m_guiTexture_5() { return &___m_guiTexture_5; }
	inline void set_m_guiTexture_5(Texture2D_t3884108195 * value)
	{
		___m_guiTexture_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_guiTexture_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
