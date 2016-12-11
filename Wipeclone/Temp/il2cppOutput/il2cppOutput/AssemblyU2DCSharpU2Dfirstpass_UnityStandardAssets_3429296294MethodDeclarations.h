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

// UnityStandardAssets.Utility.CameraRefocus
struct CameraRefocus_t3429296294;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void UnityStandardAssets.Utility.CameraRefocus::.ctor(UnityEngine.Camera,UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void CameraRefocus__ctor_m352762240 (CameraRefocus_t3429296294 * __this, Camera_t2727095145 * ___camera0, Transform_t1659122786 * ___parent1, Vector3_t4282066566  ___origCameraPos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeCamera(UnityEngine.Camera)
extern "C"  void CameraRefocus_ChangeCamera_m4250063435 (CameraRefocus_t3429296294 * __this, Camera_t2727095145 * ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeParent(UnityEngine.Transform)
extern "C"  void CameraRefocus_ChangeParent_m1964577041 (CameraRefocus_t3429296294 * __this, Transform_t1659122786 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::GetFocusPoint()
extern "C"  void CameraRefocus_GetFocusPoint_m2103529598 (CameraRefocus_t3429296294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::SetFocusPoint()
extern "C"  void CameraRefocus_SetFocusPoint_m3014282122 (CameraRefocus_t3429296294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
