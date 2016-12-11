#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t2727095145;
// System.Object
struct Il2CppObject;
// UnityStandardAssets.Utility.DragRigidbody
struct DragRigidbody_t1067467903;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Ray3134616544.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator3
struct  U3CDragObjectU3Ec__Iterator3_t945184386  : public Il2CppObject
{
public:
	// System.Single UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator3::<oldDrag>__0
	float ___U3ColdDragU3E__0_0;
	// System.Single UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator3::<oldAngularDrag>__1
	float ___U3ColdAngularDragU3E__1_1;
	// UnityEngine.Camera UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator3::<mainCamera>__2
	Camera_t2727095145 * ___U3CmainCameraU3E__2_2;
	// UnityEngine.Ray UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator3::<ray>__3
	Ray_t3134616544  ___U3CrayU3E__3_3;
	// System.Single UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator3::distance
	float ___distance_4;
	// System.Int32 UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator3::$PC
	int32_t ___U24PC_5;
	// System.Object UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator3::$current
	Il2CppObject * ___U24current_6;
	// System.Single UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator3::<$>distance
	float ___U3CU24U3Edistance_7;
	// UnityStandardAssets.Utility.DragRigidbody UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator3::<>f__this
	DragRigidbody_t1067467903 * ___U3CU3Ef__this_8;

public:
	inline static int32_t get_offset_of_U3ColdDragU3E__0_0() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator3_t945184386, ___U3ColdDragU3E__0_0)); }
	inline float get_U3ColdDragU3E__0_0() const { return ___U3ColdDragU3E__0_0; }
	inline float* get_address_of_U3ColdDragU3E__0_0() { return &___U3ColdDragU3E__0_0; }
	inline void set_U3ColdDragU3E__0_0(float value)
	{
		___U3ColdDragU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3ColdAngularDragU3E__1_1() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator3_t945184386, ___U3ColdAngularDragU3E__1_1)); }
	inline float get_U3ColdAngularDragU3E__1_1() const { return ___U3ColdAngularDragU3E__1_1; }
	inline float* get_address_of_U3ColdAngularDragU3E__1_1() { return &___U3ColdAngularDragU3E__1_1; }
	inline void set_U3ColdAngularDragU3E__1_1(float value)
	{
		___U3ColdAngularDragU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U3CmainCameraU3E__2_2() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator3_t945184386, ___U3CmainCameraU3E__2_2)); }
	inline Camera_t2727095145 * get_U3CmainCameraU3E__2_2() const { return ___U3CmainCameraU3E__2_2; }
	inline Camera_t2727095145 ** get_address_of_U3CmainCameraU3E__2_2() { return &___U3CmainCameraU3E__2_2; }
	inline void set_U3CmainCameraU3E__2_2(Camera_t2727095145 * value)
	{
		___U3CmainCameraU3E__2_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CmainCameraU3E__2_2, value);
	}

	inline static int32_t get_offset_of_U3CrayU3E__3_3() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator3_t945184386, ___U3CrayU3E__3_3)); }
	inline Ray_t3134616544  get_U3CrayU3E__3_3() const { return ___U3CrayU3E__3_3; }
	inline Ray_t3134616544 * get_address_of_U3CrayU3E__3_3() { return &___U3CrayU3E__3_3; }
	inline void set_U3CrayU3E__3_3(Ray_t3134616544  value)
	{
		___U3CrayU3E__3_3 = value;
	}

	inline static int32_t get_offset_of_distance_4() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator3_t945184386, ___distance_4)); }
	inline float get_distance_4() const { return ___distance_4; }
	inline float* get_address_of_distance_4() { return &___distance_4; }
	inline void set_distance_4(float value)
	{
		___distance_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator3_t945184386, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator3_t945184386, ___U24current_6)); }
	inline Il2CppObject * get_U24current_6() const { return ___U24current_6; }
	inline Il2CppObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(Il2CppObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_6, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Edistance_7() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator3_t945184386, ___U3CU24U3Edistance_7)); }
	inline float get_U3CU24U3Edistance_7() const { return ___U3CU24U3Edistance_7; }
	inline float* get_address_of_U3CU24U3Edistance_7() { return &___U3CU24U3Edistance_7; }
	inline void set_U3CU24U3Edistance_7(float value)
	{
		___U3CU24U3Edistance_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_8() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator3_t945184386, ___U3CU3Ef__this_8)); }
	inline DragRigidbody_t1067467903 * get_U3CU3Ef__this_8() const { return ___U3CU3Ef__this_8; }
	inline DragRigidbody_t1067467903 ** get_address_of_U3CU3Ef__this_8() { return &___U3CU3Ef__this_8; }
	inline void set_U3CU3Ef__this_8(DragRigidbody_t1067467903 * value)
	{
		___U3CU3Ef__this_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
