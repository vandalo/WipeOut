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

// UnityEngine.ParticleSystem/IteratorDelegate
struct IteratorDelegate_t4269758102;
// System.Object
struct Il2CppObject;
// UnityEngine.ParticleSystem
struct ParticleSystem_t381473177;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_ParticleSystem381473177.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UnityEngine.ParticleSystem/IteratorDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void IteratorDelegate__ctor_m2534678614 (IteratorDelegate_t4269758102 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem/IteratorDelegate::Invoke(UnityEngine.ParticleSystem)
extern "C"  bool IteratorDelegate_Invoke_m3641019902 (IteratorDelegate_t4269758102 * __this, ParticleSystem_t381473177 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.ParticleSystem/IteratorDelegate::BeginInvoke(UnityEngine.ParticleSystem,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * IteratorDelegate_BeginInvoke_m3274238639 (IteratorDelegate_t4269758102 * __this, ParticleSystem_t381473177 * ___ps0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem/IteratorDelegate::EndInvoke(System.IAsyncResult)
extern "C"  bool IteratorDelegate_EndInvoke_m3581459136 (IteratorDelegate_t4269758102 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
