#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t1355284823;
// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t3970404496;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t4064996374;
// System.Object
struct Il2CppObject;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "UnityEngine_UI_UnityEngine_UI_ListPool_1_gen3379703851.h"
#include "UnityEngine_UI_UnityEngine_UI_ListPool_1_gen3379703851MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen1249464826.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1355284823.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen1249464826MethodDeclarations.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen1154872948.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen1154872948MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1355284823MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen3970404496.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen3970404496MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen4064996374.h"
#include "mscorlib_System_Object4170816371MethodDeclarations.h"
#include "System_System_Collections_Generic_Stack_1_gen2974409999.h"
#include "System_System_Collections_Generic_Stack_1_gen2974409999MethodDeclarations.h"
#include "mscorlib_System_Int321153838500.h"
#include "mscorlib_System_Activator2714366379MethodDeclarations.h"
#include "mscorlib_System_Activator2714366379.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen4064996374MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug4195163081MethodDeclarations.h"
#include "mscorlib_System_Boolean476798718.h"
#include "mscorlib_System_String7231557.h"

// !!0 System.Activator::CreateInstance<System.Object>()
extern "C"  Il2CppObject * Activator_CreateInstance_TisIl2CppObject_m1443760614_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define Activator_CreateInstance_TisIl2CppObject_m1443760614(__this /* static, unused */, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Activator_CreateInstance_TisIl2CppObject_m1443760614_gshared)(__this /* static, unused */, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::.cctor()
extern "C"  void ListPool_1__cctor_m3826110151_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	Il2CppObject * G_B2_0 = NULL;
	Il2CppObject * G_B1_0 = NULL;
	{
		UnityAction_1_t1249464826 * L_0 = ((ListPool_1_t3379703851_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->get_U3CU3Ef__amU24cache1_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_1;
		L_1.set_m_value_0((void*)(void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		UnityAction_1_t1249464826 * L_2 = (UnityAction_1_t1249464826 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		((  void (*) (UnityAction_1_t1249464826 *, Il2CppObject *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->methodPointer)(L_2, (Il2CppObject *)NULL, (IntPtr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		((ListPool_1_t3379703851_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->set_U3CU3Ef__amU24cache1_1(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t1249464826 * L_3 = ((ListPool_1_t3379703851_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->get_U3CU3Ef__amU24cache1_1();
		ObjectPool_1_t1154872948 * L_4 = (ObjectPool_1_t1154872948 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		((  void (*) (ObjectPool_1_t1154872948 *, UnityAction_1_t1249464826 *, UnityAction_1_t1249464826 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->methodPointer)(L_4, (UnityAction_1_t1249464826 *)G_B2_0, (UnityAction_1_t1249464826 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((ListPool_1_t3379703851_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->set_s_ListPool_0(L_4);
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Get()
extern "C"  List_1_t1355284823 * ListPool_1_Get_m2459207115_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectPool_1_t1154872948 * L_0 = ((ListPool_1_t3379703851_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t1154872948 *)L_0);
		List_1_t1355284823 * L_1 = ((  List_1_t1355284823 * (*) (ObjectPool_1_t1154872948 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->methodPointer)((ObjectPool_1_t1154872948 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Release(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_Release_m3953668899_gshared (Il2CppObject * __this /* static, unused */, List_1_t1355284823 * ___toRelease0, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectPool_1_t1154872948 * L_0 = ((ListPool_1_t3379703851_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->get_s_ListPool_0();
		List_1_t1355284823 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t1154872948 *)L_0);
		((  void (*) (ObjectPool_1_t1154872948 *, List_1_t1355284823 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->methodPointer)((ObjectPool_1_t1154872948 *)L_0, (List_1_t1355284823 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::<s_ListPool>m__14(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_U3Cs_ListPoolU3Em__14_m2476287024_gshared (Il2CppObject * __this /* static, unused */, List_1_t1355284823 * ___l0, const MethodInfo* method)
{
	{
		List_1_t1355284823 * L_0 = ___l0;
		NullCheck((List_1_t1355284823 *)L_0);
		((  void (*) (List_1_t1355284823 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->methodPointer)((List_1_t1355284823 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C"  void ObjectPool_1__ctor_m2532712771_gshared (ObjectPool_1_t3970404496 * __this, UnityAction_1_t4064996374 * ___actionOnGet0, UnityAction_1_t4064996374 * ___actionOnRelease1, const MethodInfo* method)
{
	{
		Stack_1_t2974409999 * L_0 = (Stack_1_t2974409999 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 0));
		((  void (*) (Stack_1_t2974409999 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 1));
		__this->set_m_Stack_0(L_0);
		NullCheck((Il2CppObject *)__this);
		Object__ctor_m1772956182((Il2CppObject *)__this, /*hidden argument*/NULL);
		UnityAction_1_t4064996374 * L_1 = ___actionOnGet0;
		__this->set_m_ActionOnGet_1(L_1);
		UnityAction_1_t4064996374 * L_2 = ___actionOnRelease1;
		__this->set_m_ActionOnRelease_2(L_2);
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C"  int32_t ObjectPool_1_get_countAll_m3327915100_gshared (ObjectPool_1_t3970404496 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CcountAllU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C"  void ObjectPool_1_set_countAll_m2125882937_gshared (ObjectPool_1_t3970404496 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CcountAllU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C"  int32_t ObjectPool_1_get_countActive_m2082506317_gshared (ObjectPool_1_t3970404496 * __this, const MethodInfo* method)
{
	{
		NullCheck((ObjectPool_1_t3970404496 *)__this);
		int32_t L_0 = ((  int32_t (*) (ObjectPool_1_t3970404496 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)((ObjectPool_1_t3970404496 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		NullCheck((ObjectPool_1_t3970404496 *)__this);
		int32_t L_1 = ((  int32_t (*) (ObjectPool_1_t3970404496 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->methodPointer)((ObjectPool_1_t3970404496 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
		return ((int32_t)((int32_t)L_0-(int32_t)L_1));
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C"  int32_t ObjectPool_1_get_countInactive_m19645682_gshared (ObjectPool_1_t3970404496 * __this, const MethodInfo* method)
{
	{
		Stack_1_t2974409999 * L_0 = (Stack_1_t2974409999 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t2974409999 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t2974409999 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)((Stack_1_t2974409999 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		return L_1;
	}
}
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern Il2CppClass* Il2CppObject_il2cpp_TypeInfo_var;
extern const uint32_t ObjectPool_1_Get_m3052664832_MetadataUsageId;
extern "C"  Il2CppObject * ObjectPool_1_Get_m3052664832_gshared (ObjectPool_1_t3970404496 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_Get_m3052664832_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Il2CppObject * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	Il2CppObject * G_B4_0 = NULL;
	{
		Stack_1_t2974409999 * L_0 = (Stack_1_t2974409999 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t2974409999 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t2974409999 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)((Stack_1_t2974409999 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		if (L_1)
		{
			goto IL_0047;
		}
	}
	{
		Initobj (Il2CppObject_il2cpp_TypeInfo_var, (&V_1));
		Il2CppObject * L_2 = V_1;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		Initobj (Il2CppObject_il2cpp_TypeInfo_var, (&V_1));
		Il2CppObject * L_3 = V_1;
		G_B4_0 = L_3;
		goto IL_0033;
	}

IL_002e:
	{
		Il2CppObject * L_4 = ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6));
		G_B4_0 = L_4;
	}

IL_0033:
	{
		V_0 = (Il2CppObject *)G_B4_0;
		NullCheck((ObjectPool_1_t3970404496 *)__this);
		int32_t L_5 = ((  int32_t (*) (ObjectPool_1_t3970404496 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2)->methodPointer)((ObjectPool_1_t3970404496 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		NullCheck((ObjectPool_1_t3970404496 *)__this);
		((  void (*) (ObjectPool_1_t3970404496 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7)->methodPointer)((ObjectPool_1_t3970404496 *)__this, (int32_t)((int32_t)((int32_t)L_5+(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7));
		goto IL_0053;
	}

IL_0047:
	{
		Stack_1_t2974409999 * L_6 = (Stack_1_t2974409999 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t2974409999 *)L_6);
		Il2CppObject * L_7 = ((  Il2CppObject * (*) (Stack_1_t2974409999 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->methodPointer)((Stack_1_t2974409999 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
		V_0 = (Il2CppObject *)L_7;
	}

IL_0053:
	{
		UnityAction_1_t4064996374 * L_8 = (UnityAction_1_t4064996374 *)__this->get_m_ActionOnGet_1();
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		UnityAction_1_t4064996374 * L_9 = (UnityAction_1_t4064996374 *)__this->get_m_ActionOnGet_1();
		Il2CppObject * L_10 = V_0;
		NullCheck((UnityAction_1_t4064996374 *)L_9);
		((  void (*) (UnityAction_1_t4064996374 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 9)->methodPointer)((UnityAction_1_t4064996374 *)L_9, (Il2CppObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 9));
	}

IL_006a:
	{
		Il2CppObject * L_11 = V_0;
		return L_11;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3474434835;
extern const uint32_t ObjectPool_1_Release_m1110976910_MetadataUsageId;
extern "C"  void ObjectPool_1_Release_m1110976910_gshared (ObjectPool_1_t3970404496 * __this, Il2CppObject * ___element0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_Release_m1110976910_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stack_1_t2974409999 * L_0 = (Stack_1_t2974409999 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t2974409999 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t2974409999 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)((Stack_1_t2974409999 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		Stack_1_t2974409999 * L_2 = (Stack_1_t2974409999 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t2974409999 *)L_2);
		Il2CppObject * L_3 = ((  Il2CppObject * (*) (Stack_1_t2974409999 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 10)->methodPointer)((Stack_1_t2974409999 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 10));
		Il2CppObject * L_4 = ___element0;
		bool L_5 = Object_ReferenceEquals_m3695130242(NULL /*static, unused*/, (Il2CppObject *)L_3, (Il2CppObject *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_LogError_m4127342994(NULL /*static, unused*/, (Il2CppObject *)_stringLiteral3474434835, /*hidden argument*/NULL);
	}

IL_003b:
	{
		UnityAction_1_t4064996374 * L_6 = (UnityAction_1_t4064996374 *)__this->get_m_ActionOnRelease_2();
		if (!L_6)
		{
			goto IL_0052;
		}
	}
	{
		UnityAction_1_t4064996374 * L_7 = (UnityAction_1_t4064996374 *)__this->get_m_ActionOnRelease_2();
		Il2CppObject * L_8 = ___element0;
		NullCheck((UnityAction_1_t4064996374 *)L_7);
		((  void (*) (UnityAction_1_t4064996374 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 9)->methodPointer)((UnityAction_1_t4064996374 *)L_7, (Il2CppObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 9));
	}

IL_0052:
	{
		Stack_1_t2974409999 * L_9 = (Stack_1_t2974409999 *)__this->get_m_Stack_0();
		Il2CppObject * L_10 = ___element0;
		NullCheck((Stack_1_t2974409999 *)L_9);
		((  void (*) (Stack_1_t2974409999 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 11)->methodPointer)((Stack_1_t2974409999 *)L_9, (Il2CppObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 11));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
