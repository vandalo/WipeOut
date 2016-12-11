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

// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_ForceMode2134283300.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219.h"

// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern "C"  Vector3_t4282066566  Rigidbody_get_velocity_m2696244068 (Rigidbody_t3346577219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C"  void Rigidbody_set_velocity_m799562119 (Rigidbody_t3346577219 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_get_velocity_m1063590501 (Rigidbody_t3346577219 * __this, Vector3_t4282066566 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_set_velocity_m484592601 (Rigidbody_t3346577219 * __this, Vector3_t4282066566 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
extern "C"  void Rigidbody_set_angularVelocity_m3510265645 (Rigidbody_t3346577219 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_set_angularVelocity_m1952192267 (Rigidbody_t3346577219 * __this, Vector3_t4282066566 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody::get_drag()
extern "C"  float Rigidbody_get_drag_m3710595753 (Rigidbody_t3346577219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
extern "C"  void Rigidbody_set_drag_m4061586082 (Rigidbody_t3346577219 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody::get_angularDrag()
extern "C"  float Rigidbody_get_angularDrag_m2925737411 (Rigidbody_t3346577219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_angularDrag(System.Single)
extern "C"  void Rigidbody_set_angularDrag_m2909317064 (Rigidbody_t3346577219 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
extern "C"  bool Rigidbody_get_isKinematic_m3963857442 (Rigidbody_t3346577219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
extern "C"  void Rigidbody_set_isKinematic_m294703295 (Rigidbody_t3346577219 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C"  void Rigidbody_AddForce_m557267180 (Rigidbody_t3346577219 * __this, Vector3_t4282066566  ___force0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C"  void Rigidbody_INTERNAL_CALL_AddForce_m3651654387 (Il2CppObject * __this /* static, unused */, Rigidbody_t3346577219 * ___self0, Vector3_t4282066566 * ___force1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(System.Single,System.Single,System.Single,UnityEngine.ForceMode)
extern "C"  void Rigidbody_AddForce_m2887927240 (Rigidbody_t3346577219 * __this, float ___x0, float ___y1, float ___z2, int32_t ___mode3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddRelativeForce(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C"  void Rigidbody_AddRelativeForce_m2803598808 (Rigidbody_t3346577219 * __this, Vector3_t4282066566  ___force0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddRelativeForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C"  void Rigidbody_INTERNAL_CALL_AddRelativeForce_m3589442951 (Il2CppObject * __this /* static, unused */, Rigidbody_t3346577219 * ___self0, Vector3_t4282066566 * ___force1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddRelativeForce(System.Single,System.Single,System.Single)
extern "C"  void Rigidbody_AddRelativeForce_m1219746815 (Rigidbody_t3346577219 * __this, float ___x0, float ___y1, float ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddRelativeForce(System.Single,System.Single,System.Single,UnityEngine.ForceMode)
extern "C"  void Rigidbody_AddRelativeForce_m238999988 (Rigidbody_t3346577219 * __this, float ___x0, float ___y1, float ___z2, int32_t ___mode3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C"  void Rigidbody_AddTorque_m3009708185 (Rigidbody_t3346577219 * __this, Vector3_t4282066566  ___torque0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3)
extern "C"  void Rigidbody_AddTorque_m3012148388 (Rigidbody_t3346577219 * __this, Vector3_t4282066566  ___torque0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddTorque(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C"  void Rigidbody_INTERNAL_CALL_AddTorque_m4194065160 (Il2CppObject * __this /* static, unused */, Rigidbody_t3346577219 * ___self0, Vector3_t4282066566 * ___torque1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddTorque(System.Single,System.Single,System.Single,UnityEngine.ForceMode)
extern "C"  void Rigidbody_AddTorque_m2476006837 (Rigidbody_t3346577219 * __this, float ___x0, float ___y1, float ___z2, int32_t ___mode3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Rigidbody_AddForceAtPosition_m1572987758 (Rigidbody_t3346577219 * __this, Vector3_t4282066566  ___force0, Vector3_t4282066566  ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C"  void Rigidbody_INTERNAL_CALL_AddForceAtPosition_m1493622644 (Il2CppObject * __this /* static, unused */, Rigidbody_t3346577219 * ___self0, Vector3_t4282066566 * ___force1, Vector3_t4282066566 * ___position2, int32_t ___mode3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddExplosionForce(System.Single,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.ForceMode)
extern "C"  void Rigidbody_AddExplosionForce_m196999228 (Rigidbody_t3346577219 * __this, float ___explosionForce0, Vector3_t4282066566  ___explosionPosition1, float ___explosionRadius2, float ___upwardsModifier3, int32_t ___mode4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddExplosionForce(UnityEngine.Rigidbody,System.Single,UnityEngine.Vector3&,System.Single,System.Single,UnityEngine.ForceMode)
extern "C"  void Rigidbody_INTERNAL_CALL_AddExplosionForce_m3109367769 (Il2CppObject * __this /* static, unused */, Rigidbody_t3346577219 * ___self0, float ___explosionForce1, Vector3_t4282066566 * ___explosionPosition2, float ___explosionRadius3, float ___upwardsModifier4, int32_t ___mode5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
extern "C"  Vector3_t4282066566  Rigidbody_get_position_m1751901360 (Rigidbody_t3346577219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_position(UnityEngine.Vector3)
extern "C"  void Rigidbody_set_position_m2995840187 (Rigidbody_t3346577219 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_get_position_m428733873 (Rigidbody_t3346577219 * __this, Vector3_t4282066566 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_set_position_m4144703269 (Rigidbody_t3346577219 * __this, Vector3_t4282066566 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_maxAngularVelocity(System.Single)
extern "C"  void Rigidbody_set_maxAngularVelocity_m3320880411 (Rigidbody_t3346577219 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
