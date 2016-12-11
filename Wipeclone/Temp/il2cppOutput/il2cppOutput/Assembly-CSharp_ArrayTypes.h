#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// VolumetricLines.VolumetricLineBehavior
struct VolumetricLineBehavior_t1252738936;

#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_VolumetricLines_VolumetricLineBe1252738936.h"

#pragma once
// VolumetricLines.VolumetricLineBehavior[]
struct VolumetricLineBehaviorU5BU5D_t787485609  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) VolumetricLineBehavior_t1252738936 * m_Items[1];

public:
	inline VolumetricLineBehavior_t1252738936 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline VolumetricLineBehavior_t1252738936 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, VolumetricLineBehavior_t1252738936 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
