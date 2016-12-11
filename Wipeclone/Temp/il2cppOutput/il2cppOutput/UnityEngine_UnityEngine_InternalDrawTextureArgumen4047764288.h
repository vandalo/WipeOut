#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t2526458961;
// UnityEngine.Material
struct Material_t3870600107;

#include "mscorlib_System_ValueType1744280289.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_Color32598853688.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.InternalDrawTextureArguments
struct  InternalDrawTextureArguments_t4047764288 
{
public:
	// UnityEngine.Rect UnityEngine.InternalDrawTextureArguments::screenRect
	Rect_t4241904616  ___screenRect_0;
	// UnityEngine.Texture UnityEngine.InternalDrawTextureArguments::texture
	Texture_t2526458961 * ___texture_1;
	// UnityEngine.Rect UnityEngine.InternalDrawTextureArguments::sourceRect
	Rect_t4241904616  ___sourceRect_2;
	// System.Int32 UnityEngine.InternalDrawTextureArguments::leftBorder
	int32_t ___leftBorder_3;
	// System.Int32 UnityEngine.InternalDrawTextureArguments::rightBorder
	int32_t ___rightBorder_4;
	// System.Int32 UnityEngine.InternalDrawTextureArguments::topBorder
	int32_t ___topBorder_5;
	// System.Int32 UnityEngine.InternalDrawTextureArguments::bottomBorder
	int32_t ___bottomBorder_6;
	// UnityEngine.Color32 UnityEngine.InternalDrawTextureArguments::color
	Color32_t598853688  ___color_7;
	// UnityEngine.Material UnityEngine.InternalDrawTextureArguments::mat
	Material_t3870600107 * ___mat_8;

public:
	inline static int32_t get_offset_of_screenRect_0() { return static_cast<int32_t>(offsetof(InternalDrawTextureArguments_t4047764288, ___screenRect_0)); }
	inline Rect_t4241904616  get_screenRect_0() const { return ___screenRect_0; }
	inline Rect_t4241904616 * get_address_of_screenRect_0() { return &___screenRect_0; }
	inline void set_screenRect_0(Rect_t4241904616  value)
	{
		___screenRect_0 = value;
	}

	inline static int32_t get_offset_of_texture_1() { return static_cast<int32_t>(offsetof(InternalDrawTextureArguments_t4047764288, ___texture_1)); }
	inline Texture_t2526458961 * get_texture_1() const { return ___texture_1; }
	inline Texture_t2526458961 ** get_address_of_texture_1() { return &___texture_1; }
	inline void set_texture_1(Texture_t2526458961 * value)
	{
		___texture_1 = value;
		Il2CppCodeGenWriteBarrier(&___texture_1, value);
	}

	inline static int32_t get_offset_of_sourceRect_2() { return static_cast<int32_t>(offsetof(InternalDrawTextureArguments_t4047764288, ___sourceRect_2)); }
	inline Rect_t4241904616  get_sourceRect_2() const { return ___sourceRect_2; }
	inline Rect_t4241904616 * get_address_of_sourceRect_2() { return &___sourceRect_2; }
	inline void set_sourceRect_2(Rect_t4241904616  value)
	{
		___sourceRect_2 = value;
	}

	inline static int32_t get_offset_of_leftBorder_3() { return static_cast<int32_t>(offsetof(InternalDrawTextureArguments_t4047764288, ___leftBorder_3)); }
	inline int32_t get_leftBorder_3() const { return ___leftBorder_3; }
	inline int32_t* get_address_of_leftBorder_3() { return &___leftBorder_3; }
	inline void set_leftBorder_3(int32_t value)
	{
		___leftBorder_3 = value;
	}

	inline static int32_t get_offset_of_rightBorder_4() { return static_cast<int32_t>(offsetof(InternalDrawTextureArguments_t4047764288, ___rightBorder_4)); }
	inline int32_t get_rightBorder_4() const { return ___rightBorder_4; }
	inline int32_t* get_address_of_rightBorder_4() { return &___rightBorder_4; }
	inline void set_rightBorder_4(int32_t value)
	{
		___rightBorder_4 = value;
	}

	inline static int32_t get_offset_of_topBorder_5() { return static_cast<int32_t>(offsetof(InternalDrawTextureArguments_t4047764288, ___topBorder_5)); }
	inline int32_t get_topBorder_5() const { return ___topBorder_5; }
	inline int32_t* get_address_of_topBorder_5() { return &___topBorder_5; }
	inline void set_topBorder_5(int32_t value)
	{
		___topBorder_5 = value;
	}

	inline static int32_t get_offset_of_bottomBorder_6() { return static_cast<int32_t>(offsetof(InternalDrawTextureArguments_t4047764288, ___bottomBorder_6)); }
	inline int32_t get_bottomBorder_6() const { return ___bottomBorder_6; }
	inline int32_t* get_address_of_bottomBorder_6() { return &___bottomBorder_6; }
	inline void set_bottomBorder_6(int32_t value)
	{
		___bottomBorder_6 = value;
	}

	inline static int32_t get_offset_of_color_7() { return static_cast<int32_t>(offsetof(InternalDrawTextureArguments_t4047764288, ___color_7)); }
	inline Color32_t598853688  get_color_7() const { return ___color_7; }
	inline Color32_t598853688 * get_address_of_color_7() { return &___color_7; }
	inline void set_color_7(Color32_t598853688  value)
	{
		___color_7 = value;
	}

	inline static int32_t get_offset_of_mat_8() { return static_cast<int32_t>(offsetof(InternalDrawTextureArguments_t4047764288, ___mat_8)); }
	inline Material_t3870600107 * get_mat_8() const { return ___mat_8; }
	inline Material_t3870600107 ** get_address_of_mat_8() { return &___mat_8; }
	inline void set_mat_8(Material_t3870600107 * value)
	{
		___mat_8 = value;
		Il2CppCodeGenWriteBarrier(&___mat_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.InternalDrawTextureArguments
struct InternalDrawTextureArguments_t4047764288_marshaled_pinvoke
{
	Rect_t4241904616_marshaled_pinvoke ___screenRect_0;
	Texture_t2526458961 * ___texture_1;
	Rect_t4241904616_marshaled_pinvoke ___sourceRect_2;
	int32_t ___leftBorder_3;
	int32_t ___rightBorder_4;
	int32_t ___topBorder_5;
	int32_t ___bottomBorder_6;
	Color32_t598853688_marshaled_pinvoke ___color_7;
	Material_t3870600107 * ___mat_8;
};
// Native definition for marshalling of: UnityEngine.InternalDrawTextureArguments
struct InternalDrawTextureArguments_t4047764288_marshaled_com
{
	Rect_t4241904616_marshaled_com ___screenRect_0;
	Texture_t2526458961 * ___texture_1;
	Rect_t4241904616_marshaled_com ___sourceRect_2;
	int32_t ___leftBorder_3;
	int32_t ___rightBorder_4;
	int32_t ___topBorder_5;
	int32_t ___bottomBorder_6;
	Color32_t598853688_marshaled_com ___color_7;
	Material_t3870600107 * ___mat_8;
};
