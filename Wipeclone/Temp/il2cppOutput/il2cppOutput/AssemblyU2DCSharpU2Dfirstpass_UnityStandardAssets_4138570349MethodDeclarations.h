#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_t4138570349;
// System.String
struct String_t;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t1663698965;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t1113062054;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1663698965.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1113062054.h"

// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
extern "C"  void VirtualInput__ctor_m1037850138 (VirtualInput_t4138570349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
extern "C"  Vector3_t4282066566  VirtualInput_get_virtualMousePosition_m1677850236 (VirtualInput_t4138570349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
extern "C"  void VirtualInput_set_virtualMousePosition_m1718465263 (VirtualInput_t4138570349 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
extern "C"  bool VirtualInput_AxisExists_m4150986167 (VirtualInput_t4138570349 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
extern "C"  bool VirtualInput_ButtonExists_m3945423366 (VirtualInput_t4138570349 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C"  void VirtualInput_RegisterVirtualAxis_m483799532 (VirtualInput_t4138570349 * __this, VirtualAxis_t1663698965 * ___axis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern "C"  void VirtualInput_RegisterVirtualButton_m2830656844 (VirtualInput_t4138570349 * __this, VirtualButton_t1113062054 * ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
extern "C"  void VirtualInput_UnRegisterVirtualAxis_m3996469114 (VirtualInput_t4138570349 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
extern "C"  void VirtualInput_UnRegisterVirtualButton_m2596263241 (VirtualInput_t4138570349 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
extern "C"  VirtualAxis_t1663698965 * VirtualInput_VirtualAxisReference_m1031692489 (VirtualInput_t4138570349 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionX_m644163150 (VirtualInput_t4138570349 * __this, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionY_m133628973 (VirtualInput_t4138570349 * __this, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionZ_m3918062092 (VirtualInput_t4138570349 * __this, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
