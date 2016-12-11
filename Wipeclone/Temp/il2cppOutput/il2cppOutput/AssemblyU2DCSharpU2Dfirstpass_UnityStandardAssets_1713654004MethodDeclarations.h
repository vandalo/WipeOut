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

// UnityStandardAssets.Utility.CurveControlledBob
struct CurveControlledBob_t1713654004;
// UnityEngine.Camera
struct Camera_t2727095145;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void UnityStandardAssets.Utility.CurveControlledBob::.ctor()
extern "C"  void CurveControlledBob__ctor_m127163612 (CurveControlledBob_t1713654004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CurveControlledBob::Setup(UnityEngine.Camera,System.Single)
extern "C"  void CurveControlledBob_Setup_m3709126080 (CurveControlledBob_t1713654004 * __this, Camera_t2727095145 * ___camera0, float ___bobBaseInterval1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::DoHeadBob(System.Single)
extern "C"  Vector3_t4282066566  CurveControlledBob_DoHeadBob_m2653854721 (CurveControlledBob_t1713654004 * __this, float ___speed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
