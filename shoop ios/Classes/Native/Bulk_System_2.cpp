﻿#include "il2cpp-config.h"

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

// System.Uri
struct Uri_t2776692961;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Object
struct Il2CppObject;
// System.UriParser
struct UriParser_t1660745760;
// System.UriFormatException
struct UriFormatException_t1145000641;
// System.Collections.Hashtable
struct Hashtable_t3875263730;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "System_System_Uri2776692961.h"
#include "System_System_Uri2776692961MethodDeclarations.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Void2779279689.h"
#include "mscorlib_System_Boolean211005341.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695MethodDeclarations.h"
#include "mscorlib_System_Object837106420MethodDeclarations.h"
#include "mscorlib_System_String968488902MethodDeclarations.h"
#include "System_System_UriFormatException1145000641MethodDeclarations.h"
#include "mscorlib_System_Int322847414787.h"
#include "System_System_UriKind4268040853.h"
#include "System_System_UriFormatException1145000641.h"
#include "System_System_Uri_UriScheme3266528785MethodDeclarations.h"
#include "System_ArrayTypes.h"
#include "System_System_Uri_UriScheme3266528785.h"
#include "mscorlib_System_Object837106420.h"
#include "System_System_UriPartial2544661034.h"
#include "System_System_Net_IPAddress3220500535MethodDeclarations.h"
#include "System_System_Net_IPv6Address256391031MethodDeclarations.h"
#include "System_System_Net_IPAddress3220500535.h"
#include "System_System_Net_IPv6Address256391031.h"
#include "System_System_UriHostNameType4203425070.h"
#include "mscorlib_System_UInt32985925326MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_UInt32985925326.h"
#include "mscorlib_System_Char2778706699.h"
#include "mscorlib_System_Char2778706699MethodDeclarations.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042MethodDeclarations.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "mscorlib_System_Text_StringBuilder3822575854MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ge190145395MethodDeclarations.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ge190145395.h"
#include "mscorlib_System_ArgumentException124305799MethodDeclarations.h"
#include "mscorlib_System_ArgumentException124305799.h"
#include "mscorlib_System_ArgumentOutOfRangeException3479058991MethodDeclarations.h"
#include "mscorlib_System_ArgumentOutOfRangeException3479058991.h"
#include "mscorlib_System_Text_Encoding180559927MethodDeclarations.h"
#include "mscorlib_System_Byte2778693821.h"
#include "mscorlib_System_Text_Encoding180559927.h"
#include "mscorlib_System_ArgumentNullException3214793280MethodDeclarations.h"
#include "mscorlib_System_ArgumentNullException3214793280.h"
#include "System_Locale2281372282MethodDeclarations.h"
#include "mscorlib_System_Int322847414787MethodDeclarations.h"
#include "mscorlib_System_IO_Path2029632748.h"
#include "mscorlib_System_IO_Path2029632748MethodDeclarations.h"
#include "mscorlib_System_Globalization_NumberStyles3988678145.h"
#include "System_System_UriParser1660745760.h"
#include "System_System_DefaultUriParser625205023.h"
#include "System_System_UriParser1660745760MethodDeclarations.h"
#include "mscorlib_System_Exception1967233988MethodDeclarations.h"
#include "mscorlib_System_Exception1967233988.h"
#include "mscorlib_System_Collections_ArrayList2121638921MethodDeclarations.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"
#include "System_System_DefaultUriParser625205023MethodDeclarations.h"
#include "mscorlib_System_InvalidOperationException2420574324MethodDeclarations.h"
#include "mscorlib_System_InvalidOperationException2420574324.h"
#include "mscorlib_System_FormatException2404802957MethodDeclarations.h"
#include "System_System_UriHostNameType4203425070MethodDeclarations.h"
#include "System_System_UriKind4268040853MethodDeclarations.h"
#include "System_System_Text_RegularExpressions_Regex3802381858MethodDeclarations.h"
#include "System_System_Text_RegularExpressions_Regex3802381858.h"
#include "mscorlib_System_Collections_Hashtable3875263730MethodDeclarations.h"
#include "mscorlib_System_Threading_Monitor2071304733MethodDeclarations.h"
#include "mscorlib_System_Collections_Hashtable3875263730.h"
#include "System_System_GenericUriParser2219856969.h"
#include "System_System_UriPartial2544661034MethodDeclarations.h"
#include "System_System_UriTypeConverter3286319.h"
#include "System_System_UriTypeConverter3286319MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Uri::.ctor(System.String)
extern "C"  void Uri__ctor_m1721267859 (Uri_t2776692961 * __this, String_t* ___uriString, const MethodInfo* method)
{
	{
		String_t* L_0 = ___uriString;
		Uri__ctor_m1689224330(__this, L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppCodeGenString* _stringLiteral384360533;
extern const uint32_t Uri__ctor_m4101815696_MetadataUsageId;
extern "C"  void Uri__ctor_m4101815696 (Uri_t2776692961 * __this, SerializationInfo_t2995724695 * ___serializationInfo, StreamingContext_t986364934  ___streamingContext, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri__ctor_m4101815696_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t2995724695 * L_0 = ___serializationInfo;
		NullCheck(L_0);
		String_t* L_1 = SerializationInfo_GetString_m52579033(L_0, _stringLiteral384360533, /*hidden argument*/NULL);
		Uri__ctor_m1689224330(__this, L_1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::.ctor(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* UriFormatException_t1145000641_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3083898829;
extern const uint32_t Uri__ctor_m1689224330_MetadataUsageId;
extern "C"  void Uri__ctor_m1689224330 (Uri_t2776692961 * __this, String_t* ___uriString, bool ___dontEscape, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri__ctor_m1689224330_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_scheme_3(L_0);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_host_4(L_1);
		__this->set_port_5((-1));
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_path_6(L_2);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_query_7(L_3);
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_fragment_8(L_4);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_userinfo_9(L_5);
		__this->set_isAbsoluteUri_12((bool)1);
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		bool L_6 = ___dontEscape;
		__this->set_userEscaped_14(L_6);
		String_t* L_7 = ___uriString;
		__this->set_source_2(L_7);
		Uri_ParseUri_m3771462925(__this, 1, /*hidden argument*/NULL);
		bool L_8 = __this->get_isAbsoluteUri_12();
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = ___uriString;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral3083898829, L_9, /*hidden argument*/NULL);
		UriFormatException_t1145000641 * L_11 = (UriFormatException_t1145000641 *)il2cpp_codegen_object_new(UriFormatException_t1145000641_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m3185454499(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11);
	}

IL_0087:
	{
		return;
	}
}
// System.Void System.Uri::.cctor()
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern TypeInfo* UriSchemeU5BU5D_t1246605964_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3633740456;
extern Il2CppCodeGenString* _stringLiteral57242;
extern Il2CppCodeGenString* _stringLiteral3143036;
extern Il2CppCodeGenString* _stringLiteral101730;
extern Il2CppCodeGenString* _stringLiteral3054753165;
extern Il2CppCodeGenString* _stringLiteral3213448;
extern Il2CppCodeGenString* _stringLiteral99617003;
extern Il2CppCodeGenString* _stringLiteral3213394546;
extern Il2CppCodeGenString* _stringLiteral3377875;
extern Il2CppCodeGenString* _stringLiteral3386428;
extern Il2CppCodeGenString* _stringLiteral1246071647;
extern Il2CppCodeGenString* _stringLiteral1841314832;
extern Il2CppCodeGenString* _stringLiteral58;
extern const uint32_t Uri__cctor_m2145170622_MetadataUsageId;
extern "C"  void Uri__cctor_m2145170622 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri__cctor_m2145170622_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->set_hexUpperChars_19(_stringLiteral3633740456);
		((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->set_SchemeDelimiter_20(_stringLiteral57242);
		((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->set_UriSchemeFile_21(_stringLiteral3143036);
		((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->set_UriSchemeFtp_22(_stringLiteral101730);
		((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->set_UriSchemeGopher_23(_stringLiteral3054753165);
		((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->set_UriSchemeHttp_24(_stringLiteral3213448);
		((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->set_UriSchemeHttps_25(_stringLiteral99617003);
		((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->set_UriSchemeMailto_26(_stringLiteral3213394546);
		((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->set_UriSchemeNews_27(_stringLiteral3377875);
		((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->set_UriSchemeNntp_28(_stringLiteral3386428);
		((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->set_UriSchemeNetPipe_29(_stringLiteral1246071647);
		((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->set_UriSchemeNetTcp_30(_stringLiteral1841314832);
		UriSchemeU5BU5D_t1246605964* L_0 = ((UriSchemeU5BU5D_t1246605964*)SZArrayNew(UriSchemeU5BU5D_t1246605964_il2cpp_TypeInfo_var, (uint32_t)8));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		String_t* L_1 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeHttp_24();
		String_t* L_2 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_SchemeDelimiter_20();
		UriScheme_t3266528785  L_3;
		memset(&L_3, 0, sizeof(L_3));
		UriScheme__ctor_m535258662(&L_3, L_1, L_2, ((int32_t)80), /*hidden argument*/NULL);
		(*(UriScheme_t3266528785 *)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))) = L_3;
		UriSchemeU5BU5D_t1246605964* L_4 = L_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		String_t* L_5 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeHttps_25();
		String_t* L_6 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_SchemeDelimiter_20();
		UriScheme_t3266528785  L_7;
		memset(&L_7, 0, sizeof(L_7));
		UriScheme__ctor_m535258662(&L_7, L_5, L_6, ((int32_t)443), /*hidden argument*/NULL);
		(*(UriScheme_t3266528785 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))) = L_7;
		UriSchemeU5BU5D_t1246605964* L_8 = L_4;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		String_t* L_9 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeFtp_22();
		String_t* L_10 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_SchemeDelimiter_20();
		UriScheme_t3266528785  L_11;
		memset(&L_11, 0, sizeof(L_11));
		UriScheme__ctor_m535258662(&L_11, L_9, L_10, ((int32_t)21), /*hidden argument*/NULL);
		(*(UriScheme_t3266528785 *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))) = L_11;
		UriSchemeU5BU5D_t1246605964* L_12 = L_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		String_t* L_13 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeFile_21();
		String_t* L_14 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_SchemeDelimiter_20();
		UriScheme_t3266528785  L_15;
		memset(&L_15, 0, sizeof(L_15));
		UriScheme__ctor_m535258662(&L_15, L_13, L_14, (-1), /*hidden argument*/NULL);
		(*(UriScheme_t3266528785 *)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))) = L_15;
		UriSchemeU5BU5D_t1246605964* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		String_t* L_17 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeMailto_26();
		UriScheme_t3266528785  L_18;
		memset(&L_18, 0, sizeof(L_18));
		UriScheme__ctor_m535258662(&L_18, L_17, _stringLiteral58, ((int32_t)25), /*hidden argument*/NULL);
		(*(UriScheme_t3266528785 *)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(4)))) = L_18;
		UriSchemeU5BU5D_t1246605964* L_19 = L_16;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 5);
		String_t* L_20 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNews_27();
		UriScheme_t3266528785  L_21;
		memset(&L_21, 0, sizeof(L_21));
		UriScheme__ctor_m535258662(&L_21, L_20, _stringLiteral58, ((int32_t)119), /*hidden argument*/NULL);
		(*(UriScheme_t3266528785 *)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(5)))) = L_21;
		UriSchemeU5BU5D_t1246605964* L_22 = L_19;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 6);
		String_t* L_23 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNntp_28();
		String_t* L_24 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_SchemeDelimiter_20();
		UriScheme_t3266528785  L_25;
		memset(&L_25, 0, sizeof(L_25));
		UriScheme__ctor_m535258662(&L_25, L_23, L_24, ((int32_t)119), /*hidden argument*/NULL);
		(*(UriScheme_t3266528785 *)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(6)))) = L_25;
		UriSchemeU5BU5D_t1246605964* L_26 = L_22;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 7);
		String_t* L_27 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeGopher_23();
		String_t* L_28 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_SchemeDelimiter_20();
		UriScheme_t3266528785  L_29;
		memset(&L_29, 0, sizeof(L_29));
		UriScheme__ctor_m535258662(&L_29, L_27, L_28, ((int32_t)70), /*hidden argument*/NULL);
		(*(UriScheme_t3266528785 *)((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(7)))) = L_29;
		((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->set_schemes_31(L_26);
		return;
	}
}
// System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppCodeGenString* _stringLiteral384360533;
extern const uint32_t Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m3581151196_MetadataUsageId;
extern "C"  void Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m3581151196 (Uri_t2776692961 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m3581151196_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t2995724695 * L_0 = ___info;
		String_t* L_1 = Uri_get_AbsoluteUri_m2228269430(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_AddValue_m469120675(L_0, _stringLiteral384360533, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Uri::get_AbsoluteUri()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const uint32_t Uri_get_AbsoluteUri_m2228269430_MetadataUsageId;
extern "C"  String_t* Uri_get_AbsoluteUri_m2228269430 (Uri_t2776692961 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_get_AbsoluteUri_m2228269430_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_EnsureAbsoluteUri_m3407571844(__this, /*hidden argument*/NULL);
		String_t* L_0 = __this->get_cachedAbsoluteUri_15();
		if (L_0)
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_1 = Uri_GetLeftPart_m2866425188(__this, 2, /*hidden argument*/NULL);
		__this->set_cachedAbsoluteUri_15(L_1);
		String_t* L_2 = __this->get_query_7();
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m2979997331(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_4 = __this->get_cachedAbsoluteUri_15();
		String_t* L_5 = __this->get_query_7();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m138640077(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		__this->set_cachedAbsoluteUri_15(L_6);
	}

IL_0046:
	{
		String_t* L_7 = __this->get_fragment_8();
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m2979997331(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_9 = __this->get_cachedAbsoluteUri_15();
		String_t* L_10 = __this->get_fragment_8();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m138640077(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		__this->set_cachedAbsoluteUri_15(L_11);
	}

IL_006e:
	{
		String_t* L_12 = __this->get_cachedAbsoluteUri_15();
		return L_12;
	}
}
// System.String System.Uri::get_Authority()
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t2847414787_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral58;
extern const uint32_t Uri_get_Authority_m1914393796_MetadataUsageId;
extern "C"  String_t* Uri_get_Authority_m1914393796 (Uri_t2776692961 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_get_Authority_m1914393796_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		Uri_EnsureAbsoluteUri_m3407571844(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Scheme_m2606456870(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		int32_t L_1 = Uri_GetDefaultPort_m711645873(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_port_5();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = __this->get_host_4();
		G_B3_0 = L_3;
		goto IL_0042;
	}

IL_0027:
	{
		String_t* L_4 = __this->get_host_4();
		int32_t L_5 = __this->get_port_5();
		int32_t L_6 = L_5;
		Il2CppObject * L_7 = Box(Int32_t2847414787_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m2809334143(NULL /*static, unused*/, L_4, _stringLiteral58, L_7, /*hidden argument*/NULL);
		G_B3_0 = L_8;
	}

IL_0042:
	{
		return G_B3_0;
	}
}
// System.String System.Uri::get_Host()
extern "C"  String_t* Uri_get_Host_m1446697833 (Uri_t2776692961 * __this, const MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m3407571844(__this, /*hidden argument*/NULL);
		String_t* L_0 = __this->get_host_4();
		return L_0;
	}
}
// System.Boolean System.Uri::get_IsFile()
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const uint32_t Uri_get_IsFile_m1860057402_MetadataUsageId;
extern "C"  bool Uri_get_IsFile_m1860057402 (Uri_t2776692961 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_get_IsFile_m1860057402_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_EnsureAbsoluteUri_m3407571844(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Scheme_m2606456870(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_1 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeFile_21();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Uri::get_IsLoopback()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IPAddress_t3220500535_il2cpp_TypeInfo_var;
extern TypeInfo* IPv6Address_t256391031_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2257901963;
extern Il2CppCodeGenString* _stringLiteral3090360211;
extern const uint32_t Uri_get_IsLoopback_m224603913_MetadataUsageId;
extern "C"  bool Uri_get_IsLoopback_m224603913 (Uri_t2776692961 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_get_IsLoopback_m224603913_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	IPAddress_t3220500535 * V_0 = NULL;
	IPv6Address_t256391031 * V_1 = NULL;
	{
		Uri_EnsureAbsoluteUri_m3407571844(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Host_m1446697833(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m2979997331(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		bool L_2 = Uri_get_IsFile_m1860057402(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_001d:
	{
		String_t* L_3 = __this->get_host_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_3, _stringLiteral2257901963, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_5 = __this->get_host_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_5, _stringLiteral3090360211, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0049;
		}
	}

IL_0047:
	{
		return (bool)1;
	}

IL_0049:
	{
		String_t* L_7 = __this->get_host_4();
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t3220500535_il2cpp_TypeInfo_var);
		bool L_8 = IPAddress_TryParse_m1385842418(NULL /*static, unused*/, L_7, (&V_0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t3220500535_il2cpp_TypeInfo_var);
		IPAddress_t3220500535 * L_9 = ((IPAddress_t3220500535_StaticFields*)IPAddress_t3220500535_il2cpp_TypeInfo_var->static_fields)->get_Loopback_6();
		IPAddress_t3220500535 * L_10 = V_0;
		NullCheck(L_9);
		bool L_11 = VirtFuncInvoker1< bool, Il2CppObject * >::Invoke(0 /* System.Boolean System.Net.IPAddress::Equals(System.Object) */, L_9, L_10);
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		return (bool)1;
	}

IL_006d:
	{
		String_t* L_12 = __this->get_host_4();
		IL2CPP_RUNTIME_CLASS_INIT(IPv6Address_t256391031_il2cpp_TypeInfo_var);
		bool L_13 = IPv6Address_TryParse_m711194034(NULL /*static, unused*/, L_12, (&V_1), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_008c;
		}
	}
	{
		IPv6Address_t256391031 * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(IPv6Address_t256391031_il2cpp_TypeInfo_var);
		bool L_15 = IPv6Address_IsLoopback_m3559367027(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_008c;
		}
	}
	{
		return (bool)1;
	}

IL_008c:
	{
		return (bool)0;
	}
}
// System.Boolean System.Uri::get_IsUnc()
extern "C"  bool Uri_get_IsUnc_m766729742 (Uri_t2776692961 * __this, const MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m3407571844(__this, /*hidden argument*/NULL);
		bool L_0 = __this->get_isUnc_10();
		return L_0;
	}
}
// System.String System.Uri::get_Scheme()
extern "C"  String_t* Uri_get_Scheme_m2606456870 (Uri_t2776692961 * __this, const MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m3407571844(__this, /*hidden argument*/NULL);
		String_t* L_0 = __this->get_scheme_3();
		return L_0;
	}
}
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C"  bool Uri_get_IsAbsoluteUri_m145672153 (Uri_t2776692961 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_isAbsoluteUri_12();
		return L_0;
	}
}
// System.UriHostNameType System.Uri::CheckHostName(System.String)
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern TypeInfo* IPv6Address_t256391031_il2cpp_TypeInfo_var;
extern const uint32_t Uri_CheckHostName_m294200959_MetadataUsageId;
extern "C"  int32_t Uri_CheckHostName_m294200959 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_CheckHostName_m294200959_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	IPv6Address_t256391031 * V_0 = NULL;
	{
		String_t* L_0 = ___name;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___name;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m2979997331(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (int32_t)(0);
	}

IL_0013:
	{
		String_t* L_3 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		bool L_4 = Uri_IsIPv4Address_m3490090822(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		return (int32_t)(3);
	}

IL_0020:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		bool L_6 = Uri_IsDomainAddress_m740222981(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002d:
	{
		String_t* L_7 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(IPv6Address_t256391031_il2cpp_TypeInfo_var);
		bool L_8 = IPv6Address_TryParse_m711194034(NULL /*static, unused*/, L_7, (&V_0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		return (int32_t)(4);
	}

IL_003c:
	{
		return (int32_t)(0);
	}
}
// System.Boolean System.Uri::IsIPv4Address(System.String)
extern TypeInfo* CharU5BU5D_t3416858730_il2cpp_TypeInfo_var;
extern const uint32_t Uri_IsIPv4Address_m3490090822_MetadataUsageId;
extern "C"  bool Uri_IsIPv4Address_m3490090822 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_IsIPv4Address_m3490090822_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t2956870243* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		String_t* L_0 = ___name;
		CharU5BU5D_t3416858730* L_1 = ((CharU5BU5D_t3416858730*)SZArrayNew(CharU5BU5D_t3416858730_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)((int32_t)46));
		NullCheck(L_0);
		StringU5BU5D_t2956870243* L_2 = String_Split_m290179486(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		StringU5BU5D_t2956870243* L_3 = V_0;
		NullCheck(L_3);
		if ((((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_3)->max_length))))) == ((int32_t)4)))
		{
			goto IL_001d;
		}
	}
	{
		return (bool)0;
	}

IL_001d:
	{
		V_1 = 0;
		goto IL_0057;
	}

IL_0024:
	{
		StringU5BU5D_t2956870243* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck(((L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6))));
		int32_t L_7 = String_get_Length_m2979997331(((L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6))), /*hidden argument*/NULL);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if (L_8)
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		StringU5BU5D_t2956870243* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		bool L_12 = UInt32_TryParse_m537116052(NULL /*static, unused*/, ((L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11))), (&V_3), /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0046;
		}
	}
	{
		return (bool)0;
	}

IL_0046:
	{
		uint32_t L_13 = V_3;
		if ((!(((uint32_t)L_13) > ((uint32_t)((int32_t)255)))))
		{
			goto IL_0053;
		}
	}
	{
		return (bool)0;
	}

IL_0053:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)4)))
		{
			goto IL_0024;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean System.Uri::IsDomainAddress(System.String)
extern TypeInfo* Char_t2778706699_il2cpp_TypeInfo_var;
extern const uint32_t Uri_IsDomainAddress_m740222981_MetadataUsageId;
extern "C"  bool Uri_IsDomainAddress_m740222981 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_IsDomainAddress_m740222981_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	{
		String_t* L_0 = ___name;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m2979997331(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		V_2 = 0;
		goto IL_006e;
	}

IL_0010:
	{
		String_t* L_2 = ___name;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		uint16_t L_4 = String_get_Chars_m3015341861(L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		uint16_t L_6 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2778706699_il2cpp_TypeInfo_var);
		bool L_7 = Char_IsLetterOrDigit_m2290383044(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_002b;
		}
	}
	{
		return (bool)0;
	}

IL_002b:
	{
		goto IL_005c;
	}

IL_0030:
	{
		uint16_t L_8 = V_3;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_003f;
		}
	}
	{
		V_1 = 0;
		goto IL_005c;
	}

IL_003f:
	{
		uint16_t L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2778706699_il2cpp_TypeInfo_var);
		bool L_10 = Char_IsLetterOrDigit_m2290383044(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_005c;
		}
	}
	{
		uint16_t L_11 = V_3;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)45))))
		{
			goto IL_005c;
		}
	}
	{
		uint16_t L_12 = V_3;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)95))))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = ((int32_t)((int32_t)L_13+(int32_t)1));
		V_1 = L_14;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_006a;
		}
	}
	{
		return (bool)0;
	}

IL_006a:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_006e:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean System.Uri::CheckSchemeName(System.String)
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t2778706699_il2cpp_TypeInfo_var;
extern const uint32_t Uri_CheckSchemeName_m3839723091_MetadataUsageId;
extern "C"  bool Uri_CheckSchemeName_m3839723091 (Il2CppObject * __this /* static, unused */, String_t* ___schemeName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_CheckSchemeName_m3839723091_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		String_t* L_0 = ___schemeName;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___schemeName;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m2979997331(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (bool)0;
	}

IL_0013:
	{
		String_t* L_3 = ___schemeName;
		NullCheck(L_3);
		uint16_t L_4 = String_get_Chars_m3015341861(L_3, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		bool L_5 = Uri_IsAlpha_m171894930(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		String_t* L_6 = ___schemeName;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m2979997331(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		V_1 = 1;
		goto IL_0070;
	}

IL_0034:
	{
		String_t* L_8 = ___schemeName;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		uint16_t L_10 = String_get_Chars_m3015341861(L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		uint16_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2778706699_il2cpp_TypeInfo_var);
		bool L_12 = Char_IsDigit_m1743537211(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		bool L_14 = Uri_IsAlpha_m171894930(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)46))))
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)43))))
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)45))))
		{
			goto IL_006c;
		}
	}
	{
		return (bool)0;
	}

IL_006c:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0070:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0034;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean System.Uri::IsAlpha(System.Char)
extern "C"  bool Uri_IsAlpha_m171894930 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	{
		uint16_t L_0 = ___c;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)65))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0027;
		}
	}

IL_0012:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)97))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_4 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_4) > ((int32_t)((int32_t)122)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 0;
	}

IL_0025:
	{
		G_B7_0 = G_B5_0;
		goto IL_0028;
	}

IL_0027:
	{
		G_B7_0 = 1;
	}

IL_0028:
	{
		return (bool)G_B7_0;
	}
}
// System.Boolean System.Uri::Equals(System.Object)
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const uint32_t Uri_Equals_m2208061098_MetadataUsageId;
extern "C"  bool Uri_Equals_m2208061098 (Uri_t2776692961 * __this, Il2CppObject * ___comparant, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_Equals_m2208061098_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t2776692961 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		Il2CppObject * L_0 = ___comparant;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		Il2CppObject * L_1 = ___comparant;
		V_0 = ((Uri_t2776692961 *)IsInstClass(L_1, Uri_t2776692961_il2cpp_TypeInfo_var));
		Uri_t2776692961 * L_2 = V_0;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		Il2CppObject * L_3 = ___comparant;
		V_1 = ((String_t*)IsInstSealed(L_3, String_t_il2cpp_TypeInfo_var));
		String_t* L_4 = V_1;
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		return (bool)0;
	}

IL_0024:
	{
		String_t* L_5 = V_1;
		Uri_t2776692961 * L_6 = (Uri_t2776692961 *)il2cpp_codegen_object_new(Uri_t2776692961_il2cpp_TypeInfo_var);
		Uri__ctor_m1721267859(L_6, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_002b:
	{
		Uri_t2776692961 * L_7 = V_0;
		bool L_8 = Uri_InternalEquals_m2509473274(__this, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean System.Uri::InternalEquals(System.Uri)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t3603717042_il2cpp_TypeInfo_var;
extern const uint32_t Uri_InternalEquals_m2509473274_MetadataUsageId;
extern "C"  bool Uri_InternalEquals_m2509473274 (Uri_t2776692961 * __this, Uri_t2776692961 * ___uri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_InternalEquals_m2509473274_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	CultureInfo_t3603717042 * V_0 = NULL;
	int32_t G_B10_0 = 0;
	{
		bool L_0 = __this->get_isAbsoluteUri_12();
		Uri_t2776692961 * L_1 = ___uri;
		NullCheck(L_1);
		bool L_2 = L_1->get_isAbsoluteUri_12();
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		bool L_3 = __this->get_isAbsoluteUri_12();
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_4 = __this->get_source_2();
		Uri_t2776692961 * L_5 = ___uri;
		NullCheck(L_5);
		String_t* L_6 = L_5->get_source_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3603717042_il2cpp_TypeInfo_var);
		CultureInfo_t3603717042 * L_8 = CultureInfo_get_InvariantCulture_m764001524(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9 = __this->get_scheme_3();
		CultureInfo_t3603717042 * L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11 = String_ToLower_m2140020155(L_9, L_10, /*hidden argument*/NULL);
		Uri_t2776692961 * L_12 = ___uri;
		NullCheck(L_12);
		String_t* L_13 = L_12->get_scheme_3();
		CultureInfo_t3603717042 * L_14 = V_0;
		NullCheck(L_13);
		String_t* L_15 = String_ToLower_m2140020155(L_13, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_16 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_11, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_17 = __this->get_host_4();
		CultureInfo_t3603717042 * L_18 = V_0;
		NullCheck(L_17);
		String_t* L_19 = String_ToLower_m2140020155(L_17, L_18, /*hidden argument*/NULL);
		Uri_t2776692961 * L_20 = ___uri;
		NullCheck(L_20);
		String_t* L_21 = L_20->get_host_4();
		CultureInfo_t3603717042 * L_22 = V_0;
		NullCheck(L_21);
		String_t* L_23 = String_ToLower_m2140020155(L_21, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_24 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_19, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = __this->get_port_5();
		Uri_t2776692961 * L_26 = ___uri;
		NullCheck(L_26);
		int32_t L_27 = L_26->get_port_5();
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_28 = __this->get_query_7();
		Uri_t2776692961 * L_29 = ___uri;
		NullCheck(L_29);
		String_t* L_30 = L_29->get_query_7();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_31 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_28, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_32 = __this->get_path_6();
		Uri_t2776692961 * L_33 = ___uri;
		NullCheck(L_33);
		String_t* L_34 = L_33->get_path_6();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_35 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_32, L_34, /*hidden argument*/NULL);
		G_B10_0 = ((int32_t)(L_35));
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B10_0 = 0;
	}

IL_00b5:
	{
		return (bool)G_B10_0;
	}
}
// System.Int32 System.Uri::GetHashCode()
extern TypeInfo* CultureInfo_t3603717042_il2cpp_TypeInfo_var;
extern const uint32_t Uri_GetHashCode_m629619726_MetadataUsageId;
extern "C"  int32_t Uri_GetHashCode_m629619726 (Uri_t2776692961 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_GetHashCode_m629619726_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	CultureInfo_t3603717042 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_cachedHashCode_18();
		if (L_0)
		{
			goto IL_007a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3603717042_il2cpp_TypeInfo_var);
		CultureInfo_t3603717042 * L_1 = CultureInfo_get_InvariantCulture_m764001524(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = __this->get_isAbsoluteUri_12();
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_3 = __this->get_scheme_3();
		CultureInfo_t3603717042 * L_4 = V_0;
		NullCheck(L_3);
		String_t* L_5 = String_ToLower_m2140020155(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = String_GetHashCode_m471729487(L_5, /*hidden argument*/NULL);
		String_t* L_7 = __this->get_host_4();
		CultureInfo_t3603717042 * L_8 = V_0;
		NullCheck(L_7);
		String_t* L_9 = String_ToLower_m2140020155(L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = String_GetHashCode_m471729487(L_9, /*hidden argument*/NULL);
		int32_t L_11 = __this->get_port_5();
		String_t* L_12 = __this->get_query_7();
		NullCheck(L_12);
		int32_t L_13 = String_GetHashCode_m471729487(L_12, /*hidden argument*/NULL);
		String_t* L_14 = __this->get_path_6();
		NullCheck(L_14);
		int32_t L_15 = String_GetHashCode_m471729487(L_14, /*hidden argument*/NULL);
		__this->set_cachedHashCode_18(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6^(int32_t)L_10))^(int32_t)L_11))^(int32_t)L_13))^(int32_t)L_15)));
		goto IL_007a;
	}

IL_0069:
	{
		String_t* L_16 = __this->get_source_2();
		NullCheck(L_16);
		int32_t L_17 = String_GetHashCode_m471729487(L_16, /*hidden argument*/NULL);
		__this->set_cachedHashCode_18(L_17);
	}

IL_007a:
	{
		int32_t L_18 = __this->get_cachedHashCode_18();
		return L_18;
	}
}
// System.String System.Uri::GetLeftPart(System.UriPartial)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t3822575854_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t190145395_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1958628151_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3213394546;
extern Il2CppCodeGenString* _stringLiteral3377875;
extern const uint32_t Uri_GetLeftPart_m2866425188_MetadataUsageId;
extern "C"  String_t* Uri_GetLeftPart_m2866425188 (Uri_t2776692961 * __this, int32_t ___part, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_GetLeftPart_m2866425188_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t3822575854 * V_1 = NULL;
	StringBuilder_t3822575854 * V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	Dictionary_2_t190145395 * V_5 = NULL;
	int32_t V_6 = 0;
	{
		Uri_EnsureAbsoluteUri_m3407571844(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___part;
		V_3 = L_0;
		int32_t L_1 = V_3;
		if (L_1 == 0)
		{
			goto IL_001f;
		}
		if (L_1 == 1)
		{
			goto IL_0031;
		}
		if (L_1 == 2)
		{
			goto IL_0134;
		}
	}
	{
		goto IL_02ad;
	}

IL_001f:
	{
		String_t* L_2 = __this->get_scheme_3();
		String_t* L_3 = Uri_GetOpaqueWiseSchemeDelimiter_m3781205887(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m138640077(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0031:
	{
		String_t* L_5 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_6 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeMailto_26();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_8 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_9 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNews_27();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		return L_11;
	}

IL_0061:
	{
		StringBuilder_t3822575854 * L_12 = (StringBuilder_t3822575854 *)il2cpp_codegen_object_new(StringBuilder_t3822575854_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m135953004(L_12, /*hidden argument*/NULL);
		V_1 = L_12;
		StringBuilder_t3822575854 * L_13 = V_1;
		String_t* L_14 = __this->get_scheme_3();
		NullCheck(L_13);
		StringBuilder_Append_m3898090075(L_13, L_14, /*hidden argument*/NULL);
		StringBuilder_t3822575854 * L_15 = V_1;
		String_t* L_16 = Uri_GetOpaqueWiseSchemeDelimiter_m3781205887(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		StringBuilder_Append_m3898090075(L_15, L_16, /*hidden argument*/NULL);
		String_t* L_17 = __this->get_path_6();
		NullCheck(L_17);
		int32_t L_18 = String_get_Length_m2979997331(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_00c3;
		}
	}
	{
		String_t* L_19 = __this->get_path_6();
		NullCheck(L_19);
		uint16_t L_20 = String_get_Chars_m3015341861(L_19, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_00c3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_21 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeFile_21();
		String_t* L_22 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_23 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00c3;
		}
	}
	{
		StringBuilder_t3822575854 * L_24 = V_1;
		NullCheck(L_24);
		StringBuilder_Append_m2143093878(L_24, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_00c3:
	{
		String_t* L_25 = __this->get_userinfo_9();
		NullCheck(L_25);
		int32_t L_26 = String_get_Length_m2979997331(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t3822575854 * L_27 = V_1;
		String_t* L_28 = __this->get_userinfo_9();
		NullCheck(L_27);
		StringBuilder_t3822575854 * L_29 = StringBuilder_Append_m3898090075(L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		StringBuilder_Append_m2143093878(L_29, ((int32_t)64), /*hidden argument*/NULL);
	}

IL_00e8:
	{
		StringBuilder_t3822575854 * L_30 = V_1;
		String_t* L_31 = __this->get_host_4();
		NullCheck(L_30);
		StringBuilder_Append_m3898090075(L_30, L_31, /*hidden argument*/NULL);
		String_t* L_32 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		int32_t L_33 = Uri_GetDefaultPort_m711645873(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		int32_t L_34 = __this->get_port_5();
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_012d;
		}
	}
	{
		int32_t L_35 = __this->get_port_5();
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) == ((int32_t)L_36)))
		{
			goto IL_012d;
		}
	}
	{
		StringBuilder_t3822575854 * L_37 = V_1;
		NullCheck(L_37);
		StringBuilder_t3822575854 * L_38 = StringBuilder_Append_m2143093878(L_37, ((int32_t)58), /*hidden argument*/NULL);
		int32_t L_39 = __this->get_port_5();
		NullCheck(L_38);
		StringBuilder_Append_m2189222616(L_38, L_39, /*hidden argument*/NULL);
	}

IL_012d:
	{
		StringBuilder_t3822575854 * L_40 = V_1;
		NullCheck(L_40);
		String_t* L_41 = StringBuilder_ToString_m350379841(L_40, /*hidden argument*/NULL);
		return L_41;
	}

IL_0134:
	{
		StringBuilder_t3822575854 * L_42 = (StringBuilder_t3822575854 *)il2cpp_codegen_object_new(StringBuilder_t3822575854_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m135953004(L_42, /*hidden argument*/NULL);
		V_2 = L_42;
		StringBuilder_t3822575854 * L_43 = V_2;
		String_t* L_44 = __this->get_scheme_3();
		NullCheck(L_43);
		StringBuilder_Append_m3898090075(L_43, L_44, /*hidden argument*/NULL);
		StringBuilder_t3822575854 * L_45 = V_2;
		String_t* L_46 = Uri_GetOpaqueWiseSchemeDelimiter_m3781205887(__this, /*hidden argument*/NULL);
		NullCheck(L_45);
		StringBuilder_Append_m3898090075(L_45, L_46, /*hidden argument*/NULL);
		String_t* L_47 = __this->get_path_6();
		NullCheck(L_47);
		int32_t L_48 = String_get_Length_m2979997331(L_47, /*hidden argument*/NULL);
		if ((((int32_t)L_48) <= ((int32_t)1)))
		{
			goto IL_0196;
		}
	}
	{
		String_t* L_49 = __this->get_path_6();
		NullCheck(L_49);
		uint16_t L_50 = String_get_Chars_m3015341861(L_49, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0196;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_51 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeFile_21();
		String_t* L_52 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_53 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_51, L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0196;
		}
	}
	{
		StringBuilder_t3822575854 * L_54 = V_2;
		NullCheck(L_54);
		StringBuilder_Append_m2143093878(L_54, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_0196:
	{
		String_t* L_55 = __this->get_userinfo_9();
		NullCheck(L_55);
		int32_t L_56 = String_get_Length_m2979997331(L_55, /*hidden argument*/NULL);
		if ((((int32_t)L_56) <= ((int32_t)0)))
		{
			goto IL_01bb;
		}
	}
	{
		StringBuilder_t3822575854 * L_57 = V_2;
		String_t* L_58 = __this->get_userinfo_9();
		NullCheck(L_57);
		StringBuilder_t3822575854 * L_59 = StringBuilder_Append_m3898090075(L_57, L_58, /*hidden argument*/NULL);
		NullCheck(L_59);
		StringBuilder_Append_m2143093878(L_59, ((int32_t)64), /*hidden argument*/NULL);
	}

IL_01bb:
	{
		StringBuilder_t3822575854 * L_60 = V_2;
		String_t* L_61 = __this->get_host_4();
		NullCheck(L_60);
		StringBuilder_Append_m3898090075(L_60, L_61, /*hidden argument*/NULL);
		String_t* L_62 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		int32_t L_63 = Uri_GetDefaultPort_m711645873(NULL /*static, unused*/, L_62, /*hidden argument*/NULL);
		V_0 = L_63;
		int32_t L_64 = __this->get_port_5();
		if ((((int32_t)L_64) == ((int32_t)(-1))))
		{
			goto IL_0200;
		}
	}
	{
		int32_t L_65 = __this->get_port_5();
		int32_t L_66 = V_0;
		if ((((int32_t)L_65) == ((int32_t)L_66)))
		{
			goto IL_0200;
		}
	}
	{
		StringBuilder_t3822575854 * L_67 = V_2;
		NullCheck(L_67);
		StringBuilder_t3822575854 * L_68 = StringBuilder_Append_m2143093878(L_67, ((int32_t)58), /*hidden argument*/NULL);
		int32_t L_69 = __this->get_port_5();
		NullCheck(L_68);
		StringBuilder_Append_m2189222616(L_68, L_69, /*hidden argument*/NULL);
	}

IL_0200:
	{
		String_t* L_70 = __this->get_path_6();
		NullCheck(L_70);
		int32_t L_71 = String_get_Length_m2979997331(L_70, /*hidden argument*/NULL);
		if ((((int32_t)L_71) <= ((int32_t)0)))
		{
			goto IL_02a6;
		}
	}
	{
		String_t* L_72 = Uri_get_Scheme_m2606456870(__this, /*hidden argument*/NULL);
		V_4 = L_72;
		String_t* L_73 = V_4;
		if (!L_73)
		{
			goto IL_0284;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		Dictionary_2_t190145395 * L_74 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__switchU24map14_35();
		if (L_74)
		{
			goto IL_0253;
		}
	}
	{
		Dictionary_2_t190145395 * L_75 = (Dictionary_2_t190145395 *)il2cpp_codegen_object_new(Dictionary_2_t190145395_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1958628151(L_75, 2, /*hidden argument*/Dictionary_2__ctor_m1958628151_MethodInfo_var);
		V_5 = L_75;
		Dictionary_2_t190145395 * L_76 = V_5;
		NullCheck(L_76);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_76, _stringLiteral3213394546, 0);
		Dictionary_2_t190145395 * L_77 = V_5;
		NullCheck(L_77);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_77, _stringLiteral3377875, 0);
		Dictionary_2_t190145395 * L_78 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->set_U3CU3Ef__switchU24map14_35(L_78);
	}

IL_0253:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		Dictionary_2_t190145395 * L_79 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__switchU24map14_35();
		String_t* L_80 = V_4;
		NullCheck(L_79);
		bool L_81 = VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_79, L_80, (&V_6));
		if (!L_81)
		{
			goto IL_0284;
		}
	}
	{
		int32_t L_82 = V_6;
		if (!L_82)
		{
			goto IL_0272;
		}
	}
	{
		goto IL_0284;
	}

IL_0272:
	{
		StringBuilder_t3822575854 * L_83 = V_2;
		String_t* L_84 = __this->get_path_6();
		NullCheck(L_83);
		StringBuilder_Append_m3898090075(L_83, L_84, /*hidden argument*/NULL);
		goto IL_02a6;
	}

IL_0284:
	{
		StringBuilder_t3822575854 * L_85 = V_2;
		String_t* L_86 = __this->get_path_6();
		String_t* L_87 = Uri_get_Scheme_m2606456870(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		bool L_88 = Uri_CompactEscaped_m2021013591(NULL /*static, unused*/, L_87, /*hidden argument*/NULL);
		String_t* L_89 = Uri_Reduce_m1169795993(NULL /*static, unused*/, L_86, L_88, /*hidden argument*/NULL);
		NullCheck(L_85);
		StringBuilder_Append_m3898090075(L_85, L_89, /*hidden argument*/NULL);
		goto IL_02a6;
	}

IL_02a6:
	{
		StringBuilder_t3822575854 * L_90 = V_2;
		NullCheck(L_90);
		String_t* L_91 = StringBuilder_ToString_m350379841(L_90, /*hidden argument*/NULL);
		return L_91;
	}

IL_02ad:
	{
		return (String_t*)NULL;
	}
}
// System.Int32 System.Uri::FromHex(System.Char)
extern TypeInfo* ArgumentException_t124305799_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral95582509;
extern const uint32_t Uri_FromHex_m2865381007_MetadataUsageId;
extern "C"  int32_t Uri_FromHex_m2865381007 (Il2CppObject * __this /* static, unused */, uint16_t ___digit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_FromHex_m2865381007_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint16_t L_0 = ___digit;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_0)))
		{
			goto IL_0015;
		}
	}
	{
		uint16_t L_1 = ___digit;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)57))))
		{
			goto IL_0015;
		}
	}
	{
		uint16_t L_2 = ___digit;
		return ((int32_t)((int32_t)L_2-(int32_t)((int32_t)48)));
	}

IL_0015:
	{
		uint16_t L_3 = ___digit;
		if ((((int32_t)((int32_t)97)) > ((int32_t)L_3)))
		{
			goto IL_002d;
		}
	}
	{
		uint16_t L_4 = ___digit;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)102))))
		{
			goto IL_002d;
		}
	}
	{
		uint16_t L_5 = ___digit;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)((int32_t)97)))+(int32_t)((int32_t)10)));
	}

IL_002d:
	{
		uint16_t L_6 = ___digit;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_6)))
		{
			goto IL_0045;
		}
	}
	{
		uint16_t L_7 = ___digit;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)70))))
		{
			goto IL_0045;
		}
	}
	{
		uint16_t L_8 = ___digit;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_8-(int32_t)((int32_t)65)))+(int32_t)((int32_t)10)));
	}

IL_0045:
	{
		ArgumentException_t124305799 * L_9 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_9, _stringLiteral95582509, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9);
	}
}
// System.String System.Uri::HexEscape(System.Char)
extern TypeInfo* ArgumentOutOfRangeException_t3479058991_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t2778706699_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1564195625;
extern Il2CppCodeGenString* _stringLiteral37;
extern const uint32_t Uri_HexEscape_m2779785335_MetadataUsageId;
extern "C"  String_t* Uri_HexEscape_m2779785335 (Il2CppObject * __this /* static, unused */, uint16_t ___character, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_HexEscape_m2779785335_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint16_t L_0 = ___character;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_t3479058991 * L_1 = (ArgumentOutOfRangeException_t3479058991 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t3479058991_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2026296331(L_1, _stringLiteral1564195625, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_hexUpperChars_19();
		uint16_t L_3 = ___character;
		NullCheck(L_2);
		uint16_t L_4 = String_get_Chars_m3015341861(L_2, ((int32_t)((int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)240)))>>(int32_t)4)), /*hidden argument*/NULL);
		uint16_t L_5 = L_4;
		Il2CppObject * L_6 = Box(Char_t2778706699_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_hexUpperChars_19();
		uint16_t L_8 = ___character;
		NullCheck(L_7);
		uint16_t L_9 = String_get_Chars_m3015341861(L_7, ((int32_t)((int32_t)L_8&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		uint16_t L_10 = L_9;
		Il2CppObject * L_11 = Box(Char_t2778706699_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m2809334143(NULL /*static, unused*/, _stringLiteral37, L_6, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Boolean System.Uri::IsHexDigit(System.Char)
extern "C"  bool Uri_IsHexDigit_m4109487926 (Il2CppObject * __this /* static, unused */, uint16_t ___digit, const MethodInfo* method)
{
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		uint16_t L_0 = ___digit;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_0)))
		{
			goto IL_0010;
		}
	}
	{
		uint16_t L_1 = ___digit;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0035;
		}
	}

IL_0010:
	{
		uint16_t L_2 = ___digit;
		if ((((int32_t)((int32_t)97)) > ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		uint16_t L_3 = ___digit;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)102))))
		{
			goto IL_0035;
		}
	}

IL_0020:
	{
		uint16_t L_4 = ___digit;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_4)))
		{
			goto IL_0032;
		}
	}
	{
		uint16_t L_5 = ___digit;
		G_B7_0 = ((((int32_t)((((int32_t)L_5) > ((int32_t)((int32_t)70)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B7_0 = 0;
	}

IL_0033:
	{
		G_B9_0 = G_B7_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B9_0 = 1;
	}

IL_0036:
	{
		return (bool)G_B9_0;
	}
}
// System.Boolean System.Uri::IsHexEncoding(System.String,System.Int32)
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern const uint32_t Uri_IsHexEncoding_m3196775920_MetadataUsageId;
extern "C"  bool Uri_IsHexEncoding_m3196775920 (Il2CppObject * __this /* static, unused */, String_t* ___pattern, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_IsHexEncoding_m3196775920_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___index;
		String_t* L_1 = ___pattern;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m2979997331(L_1, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_0+(int32_t)3))) <= ((int32_t)L_2)))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		String_t* L_3 = ___pattern;
		int32_t L_4 = ___index;
		int32_t L_5 = L_4;
		___index = ((int32_t)((int32_t)L_5+(int32_t)1));
		NullCheck(L_3);
		uint16_t L_6 = String_get_Chars_m3015341861(L_3, L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_7 = ___pattern;
		int32_t L_8 = ___index;
		int32_t L_9 = L_8;
		___index = ((int32_t)((int32_t)L_9+(int32_t)1));
		NullCheck(L_7);
		uint16_t L_10 = String_get_Chars_m3015341861(L_7, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		bool L_11 = Uri_IsHexDigit_m4109487926(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_12 = ___pattern;
		int32_t L_13 = ___index;
		NullCheck(L_12);
		uint16_t L_14 = String_get_Chars_m3015341861(L_12, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		bool L_15 = Uri_IsHexDigit_m4109487926(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0048;
	}

IL_0047:
	{
		G_B6_0 = 0;
	}

IL_0048:
	{
		return (bool)G_B6_0;
	}
}
// System.Void System.Uri::AppendQueryAndFragment(System.String&)
extern TypeInfo* Char_t2778706699_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const uint32_t Uri_AppendQueryAndFragment_m1562004088_MetadataUsageId;
extern "C"  void Uri_AppendQueryAndFragment_m1562004088 (Uri_t2776692961 * __this, String_t** ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_AppendQueryAndFragment_m1562004088_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		String_t* L_0 = __this->get_query_7();
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m2979997331(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_2 = __this->get_query_7();
		NullCheck(L_2);
		uint16_t L_3 = String_get_Chars_m3015341861(L_2, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0047;
		}
	}
	{
		uint16_t L_4 = ((uint16_t)((int32_t)63));
		Il2CppObject * L_5 = Box(Char_t2778706699_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = __this->get_query_7();
		NullCheck(L_6);
		String_t* L_7 = String_Substring_m2809233063(L_6, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_8 = Uri_Unescape_m416590285(NULL /*static, unused*/, L_7, (bool)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m389863537(NULL /*static, unused*/, L_5, L_8, /*hidden argument*/NULL);
		G_B4_0 = L_9;
		goto IL_0053;
	}

IL_0047:
	{
		String_t* L_10 = __this->get_query_7();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_11 = Uri_Unescape_m416590285(NULL /*static, unused*/, L_10, (bool)0, /*hidden argument*/NULL);
		G_B4_0 = L_11;
	}

IL_0053:
	{
		V_0 = G_B4_0;
		String_t** L_12 = ___result;
		String_t** L_13 = ___result;
		String_t* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m138640077(NULL /*static, unused*/, (*((String_t**)L_13)), L_14, /*hidden argument*/NULL);
		*((Il2CppObject **)(L_12)) = (Il2CppObject *)L_15;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_12), (Il2CppObject *)L_15);
	}

IL_005e:
	{
		String_t* L_16 = __this->get_fragment_8();
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_m2979997331(L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t** L_18 = ___result;
		String_t** L_19 = ___result;
		String_t* L_20 = __this->get_fragment_8();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m138640077(NULL /*static, unused*/, (*((String_t**)L_19)), L_20, /*hidden argument*/NULL);
		*((Il2CppObject **)(L_18)) = (Il2CppObject *)L_21;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_18), (Il2CppObject *)L_21);
	}

IL_007e:
	{
		return;
	}
}
// System.String System.Uri::ToString()
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern const uint32_t Uri_ToString_m967075364_MetadataUsageId;
extern "C"  String_t* Uri_ToString_m967075364 (Uri_t2776692961 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_ToString_m967075364_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = __this->get_cachedToString_16();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = __this->get_cachedToString_16();
		return L_1;
	}

IL_0012:
	{
		bool L_2 = __this->get_isAbsoluteUri_12();
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_3 = Uri_GetLeftPart_m2866425188(__this, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_4 = Uri_Unescape_m416590285(NULL /*static, unused*/, L_3, (bool)1, /*hidden argument*/NULL);
		__this->set_cachedToString_16(L_4);
		goto IL_0047;
	}

IL_0035:
	{
		String_t* L_5 = __this->get_path_6();
		String_t* L_6 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String System.Uri::Unescape(System.String) */, __this, L_5);
		__this->set_cachedToString_16(L_6);
	}

IL_0047:
	{
		String_t** L_7 = __this->get_address_of_cachedToString_16();
		Uri_AppendQueryAndFragment_m1562004088(__this, L_7, /*hidden argument*/NULL);
		String_t* L_8 = __this->get_cachedToString_16();
		return L_8;
	}
}
// System.String System.Uri::EscapeString(System.String)
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern const uint32_t Uri_EscapeString_m2453046424_MetadataUsageId;
extern "C"  String_t* Uri_EscapeString_m2453046424 (Il2CppObject * __this /* static, unused */, String_t* ___str, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_EscapeString_m2453046424_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___str;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_1 = Uri_EscapeString_m1653334917(NULL /*static, unused*/, L_0, (bool)0, (bool)1, (bool)1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t3822575854_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t180559927_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t3416858730_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral216535523;
extern Il2CppCodeGenString* _stringLiteral2172317803;
extern const uint32_t Uri_EscapeString_m1653334917_MetadataUsageId;
extern "C"  String_t* Uri_EscapeString_m1653334917 (Il2CppObject * __this /* static, unused */, String_t* ___str, bool ___escapeReserved, bool ___escapeHex, bool ___escapeBrackets, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_EscapeString_m1653334917_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t3822575854 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t58506160* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0x0;
	{
		String_t* L_0 = ___str;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		return L_1;
	}

IL_000c:
	{
		StringBuilder_t3822575854 * L_2 = (StringBuilder_t3822575854 *)il2cpp_codegen_object_new(StringBuilder_t3822575854_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m135953004(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___str;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m2979997331(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_0105;
	}

IL_0020:
	{
		String_t* L_5 = ___str;
		int32_t L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		bool L_7 = Uri_IsHexEncoding_m3196775920(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		StringBuilder_t3822575854 * L_8 = V_0;
		String_t* L_9 = ___str;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		String_t* L_11 = String_Substring_m675079568(L_9, L_10, 3, /*hidden argument*/NULL);
		NullCheck(L_8);
		StringBuilder_Append_m3898090075(L_8, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)2));
		goto IL_0101;
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t180559927_il2cpp_TypeInfo_var);
		Encoding_t180559927 * L_13 = Encoding_get_UTF8_m619558519(NULL /*static, unused*/, /*hidden argument*/NULL);
		CharU5BU5D_t3416858730* L_14 = ((CharU5BU5D_t3416858730*)SZArrayNew(CharU5BU5D_t3416858730_il2cpp_TypeInfo_var, (uint32_t)1));
		String_t* L_15 = ___str;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		uint16_t L_17 = String_get_Chars_m3015341861(L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 0);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)L_17);
		NullCheck(L_13);
		ByteU5BU5D_t58506160* L_18 = VirtFuncInvoker1< ByteU5BU5D_t58506160*, CharU5BU5D_t3416858730* >::Invoke(12 /* System.Byte[] System.Text.Encoding::GetBytes(System.Char[]) */, L_13, L_14);
		V_3 = L_18;
		ByteU5BU5D_t58506160* L_19 = V_3;
		NullCheck(L_19);
		V_4 = (((int32_t)((int32_t)(((Il2CppArray *)L_19)->max_length))));
		V_5 = 0;
		goto IL_00f8;
	}

IL_006c:
	{
		ByteU5BU5D_t58506160* L_20 = V_3;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		V_6 = (((int32_t)((uint16_t)((L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22))))));
		uint16_t L_23 = V_6;
		if ((((int32_t)L_23) <= ((int32_t)((int32_t)32))))
		{
			goto IL_00d6;
		}
	}
	{
		uint16_t L_24 = V_6;
		if ((((int32_t)L_24) >= ((int32_t)((int32_t)127))))
		{
			goto IL_00d6;
		}
	}
	{
		uint16_t L_25 = V_6;
		NullCheck(_stringLiteral216535523);
		int32_t L_26 = String_IndexOf_m2775210486(_stringLiteral216535523, L_25, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_00d6;
		}
	}
	{
		bool L_27 = ___escapeHex;
		if (!L_27)
		{
			goto IL_00a6;
		}
	}
	{
		uint16_t L_28 = V_6;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)35))))
		{
			goto IL_00d6;
		}
	}

IL_00a6:
	{
		bool L_29 = ___escapeBrackets;
		if (!L_29)
		{
			goto IL_00be;
		}
	}
	{
		uint16_t L_30 = V_6;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)91))))
		{
			goto IL_00d6;
		}
	}
	{
		uint16_t L_31 = V_6;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)93))))
		{
			goto IL_00d6;
		}
	}

IL_00be:
	{
		bool L_32 = ___escapeReserved;
		if (!L_32)
		{
			goto IL_00e9;
		}
	}
	{
		uint16_t L_33 = V_6;
		NullCheck(_stringLiteral2172317803);
		int32_t L_34 = String_IndexOf_m2775210486(_stringLiteral2172317803, L_33, /*hidden argument*/NULL);
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_00e9;
		}
	}

IL_00d6:
	{
		StringBuilder_t3822575854 * L_35 = V_0;
		uint16_t L_36 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_37 = Uri_HexEscape_m2779785335(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		StringBuilder_Append_m3898090075(L_35, L_37, /*hidden argument*/NULL);
		goto IL_00f2;
	}

IL_00e9:
	{
		StringBuilder_t3822575854 * L_38 = V_0;
		uint16_t L_39 = V_6;
		NullCheck(L_38);
		StringBuilder_Append_m2143093878(L_38, L_39, /*hidden argument*/NULL);
	}

IL_00f2:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_00f8:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_4;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_006c;
		}
	}

IL_0101:
	{
		int32_t L_43 = V_2;
		V_2 = ((int32_t)((int32_t)L_43+(int32_t)1));
	}

IL_0105:
	{
		int32_t L_44 = V_2;
		int32_t L_45 = V_1;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0020;
		}
	}
	{
		StringBuilder_t3822575854 * L_46 = V_0;
		NullCheck(L_46);
		String_t* L_47 = StringBuilder_ToString_m350379841(L_46, /*hidden argument*/NULL);
		return L_47;
	}
}
// System.Void System.Uri::ParseUri(System.UriKind)
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t3603717042_il2cpp_TypeInfo_var;
extern const uint32_t Uri_ParseUri_m3771462925_MetadataUsageId;
extern "C"  void Uri_ParseUri_m3771462925 (Uri_t2776692961 * __this, int32_t ___kind, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_ParseUri_m3771462925_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___kind;
		String_t* L_1 = __this->get_source_2();
		Uri_Parse_m561053531(__this, L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = __this->get_userEscaped_14();
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		String_t* L_3 = __this->get_host_4();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_4 = Uri_EscapeString_m1653334917(NULL /*static, unused*/, L_3, (bool)0, (bool)1, (bool)0, /*hidden argument*/NULL);
		__this->set_host_4(L_4);
		String_t* L_5 = __this->get_host_4();
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m2979997331(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)1)))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_7 = __this->get_host_4();
		NullCheck(L_7);
		uint16_t L_8 = String_get_Chars_m3015341861(L_7, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)91))))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_9 = __this->get_host_4();
		String_t* L_10 = __this->get_host_4();
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m2979997331(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		uint16_t L_12 = String_get_Chars_m3015341861(L_9, ((int32_t)((int32_t)L_11-(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)93))))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_13 = __this->get_host_4();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3603717042_il2cpp_TypeInfo_var);
		CultureInfo_t3603717042 * L_14 = CultureInfo_get_InvariantCulture_m764001524(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_15 = String_ToLower_m2140020155(L_13, L_14, /*hidden argument*/NULL);
		__this->set_host_4(L_15);
	}

IL_0086:
	{
		String_t* L_16 = __this->get_path_6();
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_m2979997331(L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		String_t* L_18 = __this->get_path_6();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_19 = Uri_EscapeString_m2453046424(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		__this->set_path_6(L_19);
	}

IL_00a8:
	{
		return;
	}
}
// System.String System.Uri::Unescape(System.String)
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern const uint32_t Uri_Unescape_m4097037232_MetadataUsageId;
extern "C"  String_t* Uri_Unescape_m4097037232 (Uri_t2776692961 * __this, String_t* ___str, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_Unescape_m4097037232_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___str;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_1 = Uri_Unescape_m416590285(NULL /*static, unused*/, L_0, (bool)0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Uri::Unescape(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t3822575854_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral37158;
extern Il2CppCodeGenString* _stringLiteral37160;
extern Il2CppCodeGenString* _stringLiteral37208;
extern const uint32_t Uri_Unescape_m416590285_MetadataUsageId;
extern "C"  String_t* Uri_Unescape_m416590285 (Il2CppObject * __this /* static, unused */, String_t* ___str, bool ___excludeSpecial, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_Unescape_m416590285_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t3822575854 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	uint16_t V_4 = 0x0;
	uint16_t V_5 = 0x0;
	{
		String_t* L_0 = ___str;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		return L_1;
	}

IL_000c:
	{
		StringBuilder_t3822575854 * L_2 = (StringBuilder_t3822575854 *)il2cpp_codegen_object_new(StringBuilder_t3822575854_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m135953004(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___str;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m2979997331(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_00ca;
	}

IL_0020:
	{
		String_t* L_5 = ___str;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		uint16_t L_7 = String_get_Chars_m3015341861(L_5, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		uint16_t L_8 = V_3;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_9 = ___str;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		uint16_t L_10 = Uri_HexUnescapeMultiByte_m3269245053(NULL /*static, unused*/, L_9, (&V_2), (&V_4), /*hidden argument*/NULL);
		V_5 = L_10;
		bool L_11 = ___excludeSpecial;
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		uint16_t L_12 = V_5;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_005c;
		}
	}
	{
		StringBuilder_t3822575854 * L_13 = V_0;
		NullCheck(L_13);
		StringBuilder_Append_m3898090075(L_13, _stringLiteral37158, /*hidden argument*/NULL);
		goto IL_00b5;
	}

IL_005c:
	{
		bool L_14 = ___excludeSpecial;
		if (!L_14)
		{
			goto IL_007c;
		}
	}
	{
		uint16_t L_15 = V_5;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_007c;
		}
	}
	{
		StringBuilder_t3822575854 * L_16 = V_0;
		NullCheck(L_16);
		StringBuilder_Append_m3898090075(L_16, _stringLiteral37160, /*hidden argument*/NULL);
		goto IL_00b5;
	}

IL_007c:
	{
		bool L_17 = ___excludeSpecial;
		if (!L_17)
		{
			goto IL_009c;
		}
	}
	{
		uint16_t L_18 = V_5;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_009c;
		}
	}
	{
		StringBuilder_t3822575854 * L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_Append_m3898090075(L_19, _stringLiteral37208, /*hidden argument*/NULL);
		goto IL_00b5;
	}

IL_009c:
	{
		StringBuilder_t3822575854 * L_20 = V_0;
		uint16_t L_21 = V_5;
		NullCheck(L_20);
		StringBuilder_Append_m2143093878(L_20, L_21, /*hidden argument*/NULL);
		uint16_t L_22 = V_4;
		if (!L_22)
		{
			goto IL_00b5;
		}
	}
	{
		StringBuilder_t3822575854 * L_23 = V_0;
		uint16_t L_24 = V_4;
		NullCheck(L_23);
		StringBuilder_Append_m2143093878(L_23, L_24, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)((int32_t)L_25-(int32_t)1));
		goto IL_00c6;
	}

IL_00be:
	{
		StringBuilder_t3822575854 * L_26 = V_0;
		uint16_t L_27 = V_3;
		NullCheck(L_26);
		StringBuilder_Append_m2143093878(L_26, L_27, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		int32_t L_28 = V_2;
		V_2 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_00ca:
	{
		int32_t L_29 = V_2;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0020;
		}
	}
	{
		StringBuilder_t3822575854 * L_31 = V_0;
		NullCheck(L_31);
		String_t* L_32 = StringBuilder_ToString_m350379841(L_31, /*hidden argument*/NULL);
		return L_32;
	}
}
// System.Void System.Uri::ParseAsWindowsUNC(System.String)
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t3416858730_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral92;
extern Il2CppCodeGenString* _stringLiteral47;
extern const uint32_t Uri_ParseAsWindowsUNC_m3032435497_MetadataUsageId;
extern "C"  void Uri_ParseAsWindowsUNC_m3032435497 (Uri_t2776692961 * __this, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_ParseAsWindowsUNC_m3032435497_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeFile_21();
		__this->set_scheme_3(L_0);
		__this->set_port_5((-1));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_fragment_8(L_1);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_query_7(L_2);
		__this->set_isUnc_10((bool)1);
		String_t* L_3 = ___uriString;
		CharU5BU5D_t3416858730* L_4 = ((CharU5BU5D_t3416858730*)SZArrayNew(CharU5BU5D_t3416858730_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)((int32_t)92));
		NullCheck(L_3);
		String_t* L_5 = String_TrimStart_m3483716918(L_3, L_4, /*hidden argument*/NULL);
		___uriString = L_5;
		String_t* L_6 = ___uriString;
		NullCheck(L_6);
		int32_t L_7 = String_IndexOf_m2775210486(L_6, ((int32_t)92), /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_9 = ___uriString;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11 = String_Substring_m2809233063(L_9, L_10, /*hidden argument*/NULL);
		__this->set_path_6(L_11);
		String_t* L_12 = ___uriString;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		String_t* L_14 = String_Substring_m675079568(L_12, 0, L_13, /*hidden argument*/NULL);
		__this->set_host_4(L_14);
		goto IL_0084;
	}

IL_0072:
	{
		String_t* L_15 = ___uriString;
		__this->set_host_4(L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_path_6(L_16);
	}

IL_0084:
	{
		String_t* L_17 = __this->get_path_6();
		NullCheck(L_17);
		String_t* L_18 = String_Replace_m2915759397(L_17, _stringLiteral92, _stringLiteral47, /*hidden argument*/NULL);
		__this->set_path_6(L_18);
		return;
	}
}
// System.String System.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2703689566;
extern Il2CppCodeGenString* _stringLiteral92;
extern Il2CppCodeGenString* _stringLiteral47;
extern const uint32_t Uri_ParseAsWindowsAbsoluteFilePath_m1155471572_MetadataUsageId;
extern "C"  String_t* Uri_ParseAsWindowsAbsoluteFilePath_m1155471572 (Uri_t2776692961 * __this, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_ParseAsWindowsAbsoluteFilePath_m1155471572_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___uriString;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m2979997331(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)2)))
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_2 = ___uriString;
		NullCheck(L_2);
		uint16_t L_3 = String_get_Chars_m3015341861(L_2, 2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)92))))
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_4 = ___uriString;
		NullCheck(L_4);
		uint16_t L_5 = String_get_Chars_m3015341861(L_4, 2, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)47))))
		{
			goto IL_002e;
		}
	}
	{
		return _stringLiteral2703689566;
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_6 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeFile_21();
		__this->set_scheme_3(L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_host_4(L_7);
		__this->set_port_5((-1));
		String_t* L_8 = ___uriString;
		NullCheck(L_8);
		String_t* L_9 = String_Replace_m2915759397(L_8, _stringLiteral92, _stringLiteral47, /*hidden argument*/NULL);
		__this->set_path_6(L_9);
		String_t* L_10 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_fragment_8(L_10);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_query_7(L_11);
		return (String_t*)NULL;
	}
}
// System.Void System.Uri::ParseAsUnixAbsoluteFilePath(System.String)
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t3416858730_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t2778706699_il2cpp_TypeInfo_var;
extern const uint32_t Uri_ParseAsUnixAbsoluteFilePath_m1730599600_MetadataUsageId;
extern "C"  void Uri_ParseAsUnixAbsoluteFilePath_m1730599600 (Uri_t2776692961 * __this, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_ParseAsUnixAbsoluteFilePath_m1730599600_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->set_isUnixFilePath_1((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeFile_21();
		__this->set_scheme_3(L_0);
		__this->set_port_5((-1));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_fragment_8(L_1);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_query_7(L_2);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_host_4(L_3);
		__this->set_path_6((String_t*)NULL);
		String_t* L_4 = ___uriString;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m2979997331(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_6 = ___uriString;
		NullCheck(L_6);
		uint16_t L_7 = String_get_Chars_m3015341861(L_6, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_8 = ___uriString;
		NullCheck(L_8);
		uint16_t L_9 = String_get_Chars_m3015341861(L_8, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_10 = ___uriString;
		CharU5BU5D_t3416858730* L_11 = ((CharU5BU5D_t3416858730*)SZArrayNew(CharU5BU5D_t3416858730_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)((int32_t)47));
		NullCheck(L_10);
		String_t* L_12 = String_TrimStart_m3483716918(L_10, L_11, /*hidden argument*/NULL);
		___uriString = L_12;
		uint16_t L_13 = ((uint16_t)((int32_t)47));
		Il2CppObject * L_14 = Box(Char_t2778706699_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = ___uriString;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m389863537(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		__this->set_path_6(L_16);
	}

IL_008f:
	{
		String_t* L_17 = __this->get_path_6();
		if (L_17)
		{
			goto IL_00a1;
		}
	}
	{
		String_t* L_18 = ___uriString;
		__this->set_path_6(L_18);
	}

IL_00a1:
	{
		return;
	}
}
// System.Void System.Uri::Parse(System.UriKind,System.String)
extern TypeInfo* ArgumentNullException_t3214793280_il2cpp_TypeInfo_var;
extern TypeInfo* UriFormatException_t1145000641_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1278562461;
extern const uint32_t Uri_Parse_m561053531_MetadataUsageId;
extern "C"  void Uri_Parse_m561053531 (Uri_t2776692961 * __this, int32_t ___kind, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_Parse_m561053531_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___uriString;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t3214793280 * L_1 = (ArgumentNullException_t3214793280 *)il2cpp_codegen_object_new(ArgumentNullException_t3214793280_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m135444188(L_1, _stringLiteral1278562461, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___kind;
		String_t* L_3 = ___uriString;
		String_t* L_4 = Uri_ParseNoExceptions_m2517263517(__this, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_6 = V_0;
		UriFormatException_t1145000641 * L_7 = (UriFormatException_t1145000641 *)il2cpp_codegen_object_new(UriFormatException_t1145000641_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m3185454499(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_0027:
	{
		return;
	}
}
// System.String System.Uri::ParseNoExceptions(System.UriKind,System.String)
extern TypeInfo* Path_t2029632748_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t3603717042_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t2778706699_il2cpp_TypeInfo_var;
extern TypeInfo* IPv6Address_t256391031_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultUriParser_t625205023_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2471698679;
extern Il2CppCodeGenString* _stringLiteral792217255;
extern Il2CppCodeGenString* _stringLiteral3592878077;
extern Il2CppCodeGenString* _stringLiteral2850759705;
extern Il2CppCodeGenString* _stringLiteral35;
extern Il2CppCodeGenString* _stringLiteral1521396000;
extern Il2CppCodeGenString* _stringLiteral66243408;
extern Il2CppCodeGenString* _stringLiteral47;
extern Il2CppCodeGenString* _stringLiteral3048776310;
extern Il2CppCodeGenString* _stringLiteral1504;
extern Il2CppCodeGenString* _stringLiteral1843308621;
extern Il2CppCodeGenString* _stringLiteral91;
extern Il2CppCodeGenString* _stringLiteral93;
extern Il2CppCodeGenString* _stringLiteral2850294089;
extern Il2CppCodeGenString* _stringLiteral41;
extern const uint32_t Uri_ParseNoExceptions_m2517263517_MetadataUsageId;
extern "C"  String_t* Uri_ParseNoExceptions_m2517263517 (Uri_t2776692961 * __this, int32_t ___kind, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_ParseNoExceptions_m2517263517_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	String_t* V_10 = NULL;
	bool V_11 = false;
	IPv6Address_t256391031 * V_12 = NULL;
	UriFormatException_t1145000641 * V_13 = NULL;
	int32_t G_B50_0 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B57_0 = 0;
	int32_t G_B139_0 = 0;
	{
		String_t* L_0 = ___uriString;
		NullCheck(L_0);
		String_t* L_1 = String_Trim_m1030489823(L_0, /*hidden argument*/NULL);
		___uriString = L_1;
		String_t* L_2 = ___uriString;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m2979997331(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = ___kind;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_6 = ___kind;
		if (L_6)
		{
			goto IL_002b;
		}
	}

IL_0022:
	{
		__this->set_isAbsoluteUri_12((bool)0);
		return (String_t*)NULL;
	}

IL_002b:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_8 = ___kind;
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_003f;
		}
	}
	{
		return _stringLiteral2471698679;
	}

IL_003f:
	{
		V_1 = 0;
		String_t* L_9 = ___uriString;
		NullCheck(L_9);
		int32_t L_10 = String_IndexOf_m2775210486(L_9, ((int32_t)58), /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		if (L_11)
		{
			goto IL_0056;
		}
	}
	{
		return _stringLiteral792217255;
	}

IL_0056:
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		String_t* L_13 = ___uriString;
		NullCheck(L_13);
		uint16_t L_14 = String_get_Chars_m3015341861(L_13, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0091;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t2029632748_il2cpp_TypeInfo_var);
		uint16_t L_15 = ((Path_t2029632748_StaticFields*)Path_t2029632748_il2cpp_TypeInfo_var->static_fields)->get_DirectorySeparatorChar_2();
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0091;
		}
	}
	{
		String_t* L_16 = ___uriString;
		Uri_ParseAsUnixAbsoluteFilePath_m1730599600(__this, L_16, /*hidden argument*/NULL);
		int32_t L_17 = ___kind;
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_008c;
		}
	}
	{
		__this->set_isAbsoluteUri_12((bool)0);
	}

IL_008c:
	{
		goto IL_00d3;
	}

IL_0091:
	{
		String_t* L_18 = ___uriString;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m2979997331(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)2)))
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_20 = ___uriString;
		NullCheck(L_20);
		uint16_t L_21 = String_get_Chars_m3015341861(L_20, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_22 = ___uriString;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m3015341861(L_22, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_24 = ___uriString;
		Uri_ParseAsWindowsUNC_m3032435497(__this, L_24, /*hidden argument*/NULL);
		goto IL_00d3;
	}

IL_00c5:
	{
		__this->set_isAbsoluteUri_12((bool)0);
		String_t* L_25 = ___uriString;
		__this->set_path_6(L_25);
	}

IL_00d3:
	{
		return (String_t*)NULL;
	}

IL_00d5:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_0105;
		}
	}
	{
		String_t* L_27 = ___uriString;
		NullCheck(L_27);
		uint16_t L_28 = String_get_Chars_m3015341861(L_27, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		bool L_29 = Uri_IsAlpha_m171894930(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00f3;
		}
	}
	{
		return _stringLiteral3592878077;
	}

IL_00f3:
	{
		String_t* L_30 = ___uriString;
		String_t* L_31 = Uri_ParseAsWindowsAbsoluteFilePath_m1155471572(__this, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		String_t* L_32 = V_2;
		if (!L_32)
		{
			goto IL_0103;
		}
	}
	{
		String_t* L_33 = V_2;
		return L_33;
	}

IL_0103:
	{
		return (String_t*)NULL;
	}

IL_0105:
	{
		String_t* L_34 = ___uriString;
		int32_t L_35 = V_1;
		NullCheck(L_34);
		String_t* L_36 = String_Substring_m675079568(L_34, 0, L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3603717042_il2cpp_TypeInfo_var);
		CultureInfo_t3603717042 * L_37 = CultureInfo_get_InvariantCulture_m764001524(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_36);
		String_t* L_38 = String_ToLower_m2140020155(L_36, L_37, /*hidden argument*/NULL);
		__this->set_scheme_3(L_38);
		String_t* L_39 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		bool L_40 = Uri_CheckSchemeName_m3839723091(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0138;
		}
	}
	{
		String_t* L_41 = Locale_GetText_m3269873186(NULL /*static, unused*/, _stringLiteral2850759705, /*hidden argument*/NULL);
		return L_41;
	}

IL_0138:
	{
		int32_t L_42 = V_1;
		V_3 = ((int32_t)((int32_t)L_42+(int32_t)1));
		String_t* L_43 = ___uriString;
		NullCheck(L_43);
		int32_t L_44 = String_get_Length_m2979997331(L_43, /*hidden argument*/NULL);
		V_4 = L_44;
		String_t* L_45 = ___uriString;
		int32_t L_46 = V_3;
		NullCheck(L_45);
		int32_t L_47 = String_IndexOf_m204546721(L_45, ((int32_t)35), L_46, /*hidden argument*/NULL);
		V_1 = L_47;
		bool L_48 = Uri_get_IsUnc_m766729742(__this, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_019e;
		}
	}
	{
		int32_t L_49 = V_1;
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_019e;
		}
	}
	{
		bool L_50 = __this->get_userEscaped_14();
		if (!L_50)
		{
			goto IL_017d;
		}
	}
	{
		String_t* L_51 = ___uriString;
		int32_t L_52 = V_1;
		NullCheck(L_51);
		String_t* L_53 = String_Substring_m2809233063(L_51, L_52, /*hidden argument*/NULL);
		__this->set_fragment_8(L_53);
		goto IL_019b;
	}

IL_017d:
	{
		String_t* L_54 = ___uriString;
		int32_t L_55 = V_1;
		NullCheck(L_54);
		String_t* L_56 = String_Substring_m2809233063(L_54, ((int32_t)((int32_t)L_55+(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_57 = Uri_EscapeString_m2453046424(NULL /*static, unused*/, L_56, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_58 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral35, L_57, /*hidden argument*/NULL);
		__this->set_fragment_8(L_58);
	}

IL_019b:
	{
		int32_t L_59 = V_1;
		V_4 = L_59;
	}

IL_019e:
	{
		String_t* L_60 = ___uriString;
		int32_t L_61 = V_3;
		int32_t L_62 = V_4;
		int32_t L_63 = V_3;
		NullCheck(L_60);
		int32_t L_64 = String_IndexOf_m2077558742(L_60, ((int32_t)63), L_61, ((int32_t)((int32_t)L_62-(int32_t)L_63)), /*hidden argument*/NULL);
		V_1 = L_64;
		int32_t L_65 = V_1;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01e3;
		}
	}
	{
		String_t* L_66 = ___uriString;
		int32_t L_67 = V_1;
		int32_t L_68 = V_4;
		int32_t L_69 = V_1;
		NullCheck(L_66);
		String_t* L_70 = String_Substring_m675079568(L_66, L_67, ((int32_t)((int32_t)L_68-(int32_t)L_69)), /*hidden argument*/NULL);
		__this->set_query_7(L_70);
		int32_t L_71 = V_1;
		V_4 = L_71;
		bool L_72 = __this->get_userEscaped_14();
		if (L_72)
		{
			goto IL_01e3;
		}
	}
	{
		String_t* L_73 = __this->get_query_7();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_74 = Uri_EscapeString_m2453046424(NULL /*static, unused*/, L_73, /*hidden argument*/NULL);
		__this->set_query_7(L_74);
	}

IL_01e3:
	{
		String_t* L_75 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		bool L_76 = Uri_IsPredefinedScheme_m2987522946(NULL /*static, unused*/, L_75, /*hidden argument*/NULL);
		if (!L_76)
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_77 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_78 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeMailto_26();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_79 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_77, L_78, /*hidden argument*/NULL);
		if (!L_79)
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_80 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_81 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNews_27();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_82 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_80, L_81, /*hidden argument*/NULL);
		if (!L_82)
		{
			goto IL_0255;
		}
	}
	{
		int32_t L_83 = V_4;
		int32_t L_84 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_83-(int32_t)L_84))) < ((int32_t)2)))
		{
			goto IL_024f;
		}
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_85-(int32_t)L_86))) < ((int32_t)2)))
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_87 = ___uriString;
		int32_t L_88 = V_3;
		NullCheck(L_87);
		uint16_t L_89 = String_get_Chars_m3015341861(L_87, L_88, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_89) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_90 = ___uriString;
		int32_t L_91 = V_3;
		NullCheck(L_90);
		uint16_t L_92 = String_get_Chars_m3015341861(L_90, ((int32_t)((int32_t)L_91+(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_92) == ((int32_t)((int32_t)47))))
		{
			goto IL_0255;
		}
	}

IL_024f:
	{
		return _stringLiteral1521396000;
	}

IL_0255:
	{
		int32_t L_93 = V_4;
		int32_t L_94 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_93-(int32_t)L_94))) < ((int32_t)2)))
		{
			goto IL_027c;
		}
	}
	{
		String_t* L_95 = ___uriString;
		int32_t L_96 = V_3;
		NullCheck(L_95);
		uint16_t L_97 = String_get_Chars_m3015341861(L_95, L_96, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_97) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_027c;
		}
	}
	{
		String_t* L_98 = ___uriString;
		int32_t L_99 = V_3;
		NullCheck(L_98);
		uint16_t L_100 = String_get_Chars_m3015341861(L_98, ((int32_t)((int32_t)L_99+(int32_t)1)), /*hidden argument*/NULL);
		G_B50_0 = ((((int32_t)L_100) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_027d;
	}

IL_027c:
	{
		G_B50_0 = 0;
	}

IL_027d:
	{
		V_5 = (bool)G_B50_0;
		String_t* L_101 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_102 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeFile_21();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_103 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_101, L_102, /*hidden argument*/NULL);
		if (!L_103)
		{
			goto IL_02b7;
		}
	}
	{
		bool L_104 = V_5;
		if (!L_104)
		{
			goto IL_02b7;
		}
	}
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_105-(int32_t)L_106))) == ((int32_t)2)))
		{
			goto IL_02b4;
		}
	}
	{
		String_t* L_107 = ___uriString;
		int32_t L_108 = V_3;
		NullCheck(L_107);
		uint16_t L_109 = String_get_Chars_m3015341861(L_107, ((int32_t)((int32_t)L_108+(int32_t)2)), /*hidden argument*/NULL);
		G_B55_0 = ((((int32_t)L_109) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_02b5;
	}

IL_02b4:
	{
		G_B55_0 = 1;
	}

IL_02b5:
	{
		G_B57_0 = G_B55_0;
		goto IL_02b8;
	}

IL_02b7:
	{
		G_B57_0 = 0;
	}

IL_02b8:
	{
		V_6 = (bool)G_B57_0;
		V_7 = (bool)0;
		bool L_110 = V_5;
		if (!L_110)
		{
			goto IL_03a8;
		}
	}
	{
		int32_t L_111 = ___kind;
		if ((!(((uint32_t)L_111) == ((uint32_t)2))))
		{
			goto IL_02d1;
		}
	}
	{
		return _stringLiteral66243408;
	}

IL_02d1:
	{
		String_t* L_112 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_113 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeMailto_26();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_114 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_112, L_113, /*hidden argument*/NULL);
		if (!L_114)
		{
			goto IL_02ff;
		}
	}
	{
		String_t* L_115 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_116 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNews_27();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_117 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_115, L_116, /*hidden argument*/NULL);
		if (!L_117)
		{
			goto IL_02ff;
		}
	}
	{
		int32_t L_118 = V_3;
		V_3 = ((int32_t)((int32_t)L_118+(int32_t)2));
	}

IL_02ff:
	{
		String_t* L_119 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_120 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeFile_21();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_121 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_119, L_120, /*hidden argument*/NULL);
		if (!L_121)
		{
			goto IL_0383;
		}
	}
	{
		V_8 = 2;
		int32_t L_122 = V_3;
		V_9 = L_122;
		goto IL_033f;
	}

IL_031f:
	{
		String_t* L_123 = ___uriString;
		int32_t L_124 = V_9;
		NullCheck(L_123);
		uint16_t L_125 = String_get_Chars_m3015341861(L_123, L_124, /*hidden argument*/NULL);
		if ((((int32_t)L_125) == ((int32_t)((int32_t)47))))
		{
			goto IL_0333;
		}
	}
	{
		goto IL_0348;
	}

IL_0333:
	{
		int32_t L_126 = V_8;
		V_8 = ((int32_t)((int32_t)L_126+(int32_t)1));
		int32_t L_127 = V_9;
		V_9 = ((int32_t)((int32_t)L_127+(int32_t)1));
	}

IL_033f:
	{
		int32_t L_128 = V_9;
		int32_t L_129 = V_4;
		if ((((int32_t)L_128) < ((int32_t)L_129)))
		{
			goto IL_031f;
		}
	}

IL_0348:
	{
		int32_t L_130 = V_8;
		if ((((int32_t)L_130) < ((int32_t)4)))
		{
			goto IL_0377;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_035c;
	}

IL_0358:
	{
		int32_t L_131 = V_3;
		V_3 = ((int32_t)((int32_t)L_131+(int32_t)1));
	}

IL_035c:
	{
		int32_t L_132 = V_3;
		int32_t L_133 = V_4;
		if ((((int32_t)L_132) >= ((int32_t)L_133)))
		{
			goto IL_0372;
		}
	}
	{
		String_t* L_134 = ___uriString;
		int32_t L_135 = V_3;
		NullCheck(L_134);
		uint16_t L_136 = String_get_Chars_m3015341861(L_134, L_135, /*hidden argument*/NULL);
		if ((((int32_t)L_136) == ((int32_t)((int32_t)47))))
		{
			goto IL_0358;
		}
	}

IL_0372:
	{
		goto IL_0383;
	}

IL_0377:
	{
		int32_t L_137 = V_8;
		if ((((int32_t)L_137) < ((int32_t)3)))
		{
			goto IL_0383;
		}
	}
	{
		int32_t L_138 = V_3;
		V_3 = ((int32_t)((int32_t)L_138+(int32_t)1));
	}

IL_0383:
	{
		int32_t L_139 = V_4;
		int32_t L_140 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_139-(int32_t)L_140))) <= ((int32_t)1)))
		{
			goto IL_03a3;
		}
	}
	{
		String_t* L_141 = ___uriString;
		int32_t L_142 = V_3;
		NullCheck(L_141);
		uint16_t L_143 = String_get_Chars_m3015341861(L_141, ((int32_t)((int32_t)L_142+(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_143) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_03a3;
		}
	}
	{
		V_6 = (bool)0;
		V_7 = (bool)1;
	}

IL_03a3:
	{
		goto IL_03d2;
	}

IL_03a8:
	{
		String_t* L_144 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		bool L_145 = Uri_IsPredefinedScheme_m2987522946(NULL /*static, unused*/, L_144, /*hidden argument*/NULL);
		if (L_145)
		{
			goto IL_03d2;
		}
	}
	{
		String_t* L_146 = ___uriString;
		int32_t L_147 = V_3;
		int32_t L_148 = V_4;
		int32_t L_149 = V_3;
		NullCheck(L_146);
		String_t* L_150 = String_Substring_m675079568(L_146, L_147, ((int32_t)((int32_t)L_148-(int32_t)L_149)), /*hidden argument*/NULL);
		__this->set_path_6(L_150);
		__this->set_isOpaquePart_11((bool)1);
		return (String_t*)NULL;
	}

IL_03d2:
	{
		bool L_151 = V_6;
		if (!L_151)
		{
			goto IL_03e0;
		}
	}
	{
		V_1 = (-1);
		goto IL_040a;
	}

IL_03e0:
	{
		String_t* L_152 = ___uriString;
		int32_t L_153 = V_3;
		int32_t L_154 = V_4;
		int32_t L_155 = V_3;
		NullCheck(L_152);
		int32_t L_156 = String_IndexOf_m2077558742(L_152, ((int32_t)47), L_153, ((int32_t)((int32_t)L_154-(int32_t)L_155)), /*hidden argument*/NULL);
		V_1 = L_156;
		int32_t L_157 = V_1;
		if ((!(((uint32_t)L_157) == ((uint32_t)(-1)))))
		{
			goto IL_040a;
		}
	}
	{
		bool L_158 = V_7;
		if (!L_158)
		{
			goto IL_040a;
		}
	}
	{
		String_t* L_159 = ___uriString;
		int32_t L_160 = V_3;
		int32_t L_161 = V_4;
		int32_t L_162 = V_3;
		NullCheck(L_159);
		int32_t L_163 = String_IndexOf_m2077558742(L_159, ((int32_t)92), L_160, ((int32_t)((int32_t)L_161-(int32_t)L_162)), /*hidden argument*/NULL);
		V_1 = L_163;
	}

IL_040a:
	{
		int32_t L_164 = V_1;
		if ((!(((uint32_t)L_164) == ((uint32_t)(-1)))))
		{
			goto IL_044b;
		}
	}
	{
		String_t* L_165 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_166 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeMailto_26();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_167 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_165, L_166, /*hidden argument*/NULL);
		if (!L_167)
		{
			goto IL_0446;
		}
	}
	{
		String_t* L_168 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_169 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNews_27();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_170 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_168, L_169, /*hidden argument*/NULL);
		if (!L_170)
		{
			goto IL_0446;
		}
	}
	{
		__this->set_path_6(_stringLiteral47);
	}

IL_0446:
	{
		goto IL_045f;
	}

IL_044b:
	{
		String_t* L_171 = ___uriString;
		int32_t L_172 = V_1;
		int32_t L_173 = V_4;
		int32_t L_174 = V_1;
		NullCheck(L_171);
		String_t* L_175 = String_Substring_m675079568(L_171, L_172, ((int32_t)((int32_t)L_173-(int32_t)L_174)), /*hidden argument*/NULL);
		__this->set_path_6(L_175);
		int32_t L_176 = V_1;
		V_4 = L_176;
	}

IL_045f:
	{
		bool L_177 = V_6;
		if (!L_177)
		{
			goto IL_046d;
		}
	}
	{
		V_1 = (-1);
		goto IL_047b;
	}

IL_046d:
	{
		String_t* L_178 = ___uriString;
		int32_t L_179 = V_3;
		int32_t L_180 = V_4;
		int32_t L_181 = V_3;
		NullCheck(L_178);
		int32_t L_182 = String_IndexOf_m2077558742(L_178, ((int32_t)64), L_179, ((int32_t)((int32_t)L_180-(int32_t)L_181)), /*hidden argument*/NULL);
		V_1 = L_182;
	}

IL_047b:
	{
		int32_t L_183 = V_1;
		if ((((int32_t)L_183) == ((int32_t)(-1))))
		{
			goto IL_0496;
		}
	}
	{
		String_t* L_184 = ___uriString;
		int32_t L_185 = V_3;
		int32_t L_186 = V_1;
		int32_t L_187 = V_3;
		NullCheck(L_184);
		String_t* L_188 = String_Substring_m675079568(L_184, L_185, ((int32_t)((int32_t)L_186-(int32_t)L_187)), /*hidden argument*/NULL);
		__this->set_userinfo_9(L_188);
		int32_t L_189 = V_1;
		V_3 = ((int32_t)((int32_t)L_189+(int32_t)1));
	}

IL_0496:
	{
		__this->set_port_5((-1));
		bool L_190 = V_6;
		if (!L_190)
		{
			goto IL_04ab;
		}
	}
	{
		V_1 = (-1);
		goto IL_04bc;
	}

IL_04ab:
	{
		String_t* L_191 = ___uriString;
		int32_t L_192 = V_4;
		int32_t L_193 = V_4;
		int32_t L_194 = V_3;
		NullCheck(L_191);
		int32_t L_195 = String_LastIndexOf_m434357900(L_191, ((int32_t)58), ((int32_t)((int32_t)L_192-(int32_t)1)), ((int32_t)((int32_t)L_193-(int32_t)L_194)), /*hidden argument*/NULL);
		V_1 = L_195;
	}

IL_04bc:
	{
		int32_t L_196 = V_1;
		if ((((int32_t)L_196) == ((int32_t)(-1))))
		{
			goto IL_0566;
		}
	}
	{
		int32_t L_197 = V_1;
		int32_t L_198 = V_4;
		if ((((int32_t)L_197) == ((int32_t)((int32_t)((int32_t)L_198-(int32_t)1)))))
		{
			goto IL_0566;
		}
	}
	{
		String_t* L_199 = ___uriString;
		int32_t L_200 = V_1;
		int32_t L_201 = V_4;
		int32_t L_202 = V_1;
		NullCheck(L_199);
		String_t* L_203 = String_Substring_m675079568(L_199, ((int32_t)((int32_t)L_200+(int32_t)1)), ((int32_t)((int32_t)L_201-(int32_t)((int32_t)((int32_t)L_202+(int32_t)1)))), /*hidden argument*/NULL);
		V_10 = L_203;
		String_t* L_204 = V_10;
		NullCheck(L_204);
		int32_t L_205 = String_get_Length_m2979997331(L_204, /*hidden argument*/NULL);
		if ((((int32_t)L_205) <= ((int32_t)0)))
		{
			goto IL_0544;
		}
	}
	{
		String_t* L_206 = V_10;
		String_t* L_207 = V_10;
		NullCheck(L_207);
		int32_t L_208 = String_get_Length_m2979997331(L_207, /*hidden argument*/NULL);
		NullCheck(L_206);
		uint16_t L_209 = String_get_Chars_m3015341861(L_206, ((int32_t)((int32_t)L_208-(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_209) == ((int32_t)((int32_t)93))))
		{
			goto IL_0544;
		}
	}
	{
		String_t* L_210 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3603717042_il2cpp_TypeInfo_var);
		CultureInfo_t3603717042 * L_211 = CultureInfo_get_InvariantCulture_m764001524(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t* L_212 = __this->get_address_of_port_5();
		bool L_213 = Int32_TryParse_m2457543725(NULL /*static, unused*/, L_210, 7, L_211, L_212, /*hidden argument*/NULL);
		if (!L_213)
		{
			goto IL_0536;
		}
	}
	{
		int32_t L_214 = __this->get_port_5();
		if ((((int32_t)L_214) < ((int32_t)0)))
		{
			goto IL_0536;
		}
	}
	{
		int32_t L_215 = __this->get_port_5();
		if ((((int32_t)L_215) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_053c;
		}
	}

IL_0536:
	{
		return _stringLiteral3048776310;
	}

IL_053c:
	{
		int32_t L_216 = V_1;
		V_4 = L_216;
		goto IL_0561;
	}

IL_0544:
	{
		int32_t L_217 = __this->get_port_5();
		if ((!(((uint32_t)L_217) == ((uint32_t)(-1)))))
		{
			goto IL_0561;
		}
	}
	{
		String_t* L_218 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		int32_t L_219 = Uri_GetDefaultPort_m711645873(NULL /*static, unused*/, L_218, /*hidden argument*/NULL);
		__this->set_port_5(L_219);
	}

IL_0561:
	{
		goto IL_0583;
	}

IL_0566:
	{
		int32_t L_220 = __this->get_port_5();
		if ((!(((uint32_t)L_220) == ((uint32_t)(-1)))))
		{
			goto IL_0583;
		}
	}
	{
		String_t* L_221 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		int32_t L_222 = Uri_GetDefaultPort_m711645873(NULL /*static, unused*/, L_221, /*hidden argument*/NULL);
		__this->set_port_5(L_222);
	}

IL_0583:
	{
		String_t* L_223 = ___uriString;
		int32_t L_224 = V_3;
		int32_t L_225 = V_4;
		int32_t L_226 = V_3;
		NullCheck(L_223);
		String_t* L_227 = String_Substring_m675079568(L_223, L_224, ((int32_t)((int32_t)L_225-(int32_t)L_226)), /*hidden argument*/NULL);
		___uriString = L_227;
		String_t* L_228 = ___uriString;
		__this->set_host_4(L_228);
		bool L_229 = V_6;
		if (!L_229)
		{
			goto IL_05c7;
		}
	}
	{
		uint16_t L_230 = ((uint16_t)((int32_t)47));
		Il2CppObject * L_231 = Box(Char_t2778706699_il2cpp_TypeInfo_var, &L_230);
		String_t* L_232 = ___uriString;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_233 = String_Concat_m389863537(NULL /*static, unused*/, L_231, L_232, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_234 = Uri_Reduce_m1169795993(NULL /*static, unused*/, L_233, (bool)1, /*hidden argument*/NULL);
		__this->set_path_6(L_234);
		String_t* L_235 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_host_4(L_235);
		goto IL_071c;
	}

IL_05c7:
	{
		String_t* L_236 = __this->get_host_4();
		NullCheck(L_236);
		int32_t L_237 = String_get_Length_m2979997331(L_236, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_237) == ((uint32_t)2))))
		{
			goto IL_0612;
		}
	}
	{
		String_t* L_238 = __this->get_host_4();
		NullCheck(L_238);
		uint16_t L_239 = String_get_Chars_m3015341861(L_238, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_239) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0612;
		}
	}
	{
		String_t* L_240 = __this->get_host_4();
		String_t* L_241 = __this->get_path_6();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_242 = String_Concat_m138640077(NULL /*static, unused*/, L_240, L_241, /*hidden argument*/NULL);
		__this->set_path_6(L_242);
		String_t* L_243 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_host_4(L_243);
		goto IL_071c;
	}

IL_0612:
	{
		bool L_244 = __this->get_isUnixFilePath_1();
		if (!L_244)
		{
			goto IL_063a;
		}
	}
	{
		String_t* L_245 = ___uriString;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_246 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral1504, L_245, /*hidden argument*/NULL);
		___uriString = L_246;
		String_t* L_247 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_host_4(L_247);
		goto IL_071c;
	}

IL_063a:
	{
		String_t* L_248 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_249 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeFile_21();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_250 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_248, L_249, /*hidden argument*/NULL);
		if (!L_250)
		{
			goto IL_065b;
		}
	}
	{
		__this->set_isUnc_10((bool)1);
		goto IL_071c;
	}

IL_065b:
	{
		String_t* L_251 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_252 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNews_27();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_253 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_251, L_252, /*hidden argument*/NULL);
		if (!L_253)
		{
			goto IL_069d;
		}
	}
	{
		String_t* L_254 = __this->get_host_4();
		NullCheck(L_254);
		int32_t L_255 = String_get_Length_m2979997331(L_254, /*hidden argument*/NULL);
		if ((((int32_t)L_255) <= ((int32_t)0)))
		{
			goto IL_0698;
		}
	}
	{
		String_t* L_256 = __this->get_host_4();
		__this->set_path_6(L_256);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_257 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_host_4(L_257);
	}

IL_0698:
	{
		goto IL_071c;
	}

IL_069d:
	{
		String_t* L_258 = __this->get_host_4();
		NullCheck(L_258);
		int32_t L_259 = String_get_Length_m2979997331(L_258, /*hidden argument*/NULL);
		if (L_259)
		{
			goto IL_071c;
		}
	}
	{
		String_t* L_260 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_261 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeHttp_24();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_262 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_260, L_261, /*hidden argument*/NULL);
		if (L_262)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_263 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_264 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeGopher_23();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_265 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_263, L_264, /*hidden argument*/NULL);
		if (L_265)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_266 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_267 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNntp_28();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_268 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_266, L_267, /*hidden argument*/NULL);
		if (L_268)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_269 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_270 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeHttps_25();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_271 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_269, L_270, /*hidden argument*/NULL);
		if (L_271)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_272 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_273 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeFtp_22();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_274 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_272, L_273, /*hidden argument*/NULL);
		if (!L_274)
		{
			goto IL_071c;
		}
	}

IL_0716:
	{
		return _stringLiteral1843308621;
	}

IL_071c:
	{
		String_t* L_275 = __this->get_host_4();
		NullCheck(L_275);
		int32_t L_276 = String_get_Length_m2979997331(L_275, /*hidden argument*/NULL);
		if ((((int32_t)L_276) <= ((int32_t)0)))
		{
			goto IL_073d;
		}
	}
	{
		String_t* L_277 = __this->get_host_4();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		int32_t L_278 = Uri_CheckHostName_m294200959(NULL /*static, unused*/, L_277, /*hidden argument*/NULL);
		G_B139_0 = ((((int32_t)L_278) == ((int32_t)0))? 1 : 0);
		goto IL_073e;
	}

IL_073d:
	{
		G_B139_0 = 0;
	}

IL_073e:
	{
		V_11 = (bool)G_B139_0;
		bool L_279 = V_11;
		if (L_279)
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_280 = __this->get_host_4();
		NullCheck(L_280);
		int32_t L_281 = String_get_Length_m2979997331(L_280, /*hidden argument*/NULL);
		if ((((int32_t)L_281) <= ((int32_t)1)))
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_282 = __this->get_host_4();
		NullCheck(L_282);
		uint16_t L_283 = String_get_Chars_m3015341861(L_282, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_283) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_284 = __this->get_host_4();
		String_t* L_285 = __this->get_host_4();
		NullCheck(L_285);
		int32_t L_286 = String_get_Length_m2979997331(L_285, /*hidden argument*/NULL);
		NullCheck(L_284);
		uint16_t L_287 = String_get_Chars_m3015341861(L_284, ((int32_t)((int32_t)L_286-(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_287) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_288 = __this->get_host_4();
		IL2CPP_RUNTIME_CLASS_INIT(IPv6Address_t256391031_il2cpp_TypeInfo_var);
		bool L_289 = IPv6Address_TryParse_m711194034(NULL /*static, unused*/, L_288, (&V_12), /*hidden argument*/NULL);
		if (!L_289)
		{
			goto IL_07be;
		}
	}
	{
		IPv6Address_t256391031 * L_290 = V_12;
		NullCheck(L_290);
		String_t* L_291 = IPv6Address_ToString_m2548793323(L_290, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_292 = String_Concat_m1825781833(NULL /*static, unused*/, _stringLiteral91, L_291, _stringLiteral93, /*hidden argument*/NULL);
		__this->set_host_4(L_292);
		goto IL_07c1;
	}

IL_07be:
	{
		V_11 = (bool)1;
	}

IL_07c1:
	{
		bool L_293 = V_11;
		if (!L_293)
		{
			goto IL_07fe;
		}
	}
	{
		UriParser_t1660745760 * L_294 = Uri_get_Parser_m533607664(__this, /*hidden argument*/NULL);
		if (((DefaultUriParser_t625205023 *)IsInstClass(L_294, DefaultUriParser_t625205023_il2cpp_TypeInfo_var)))
		{
			goto IL_07e3;
		}
	}
	{
		UriParser_t1660745760 * L_295 = Uri_get_Parser_m533607664(__this, /*hidden argument*/NULL);
		if (L_295)
		{
			goto IL_07fe;
		}
	}

IL_07e3:
	{
		String_t* L_296 = __this->get_host_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_297 = String_Concat_m1825781833(NULL /*static, unused*/, _stringLiteral2850294089, L_296, _stringLiteral41, /*hidden argument*/NULL);
		String_t* L_298 = Locale_GetText_m3269873186(NULL /*static, unused*/, L_297, /*hidden argument*/NULL);
		return L_298;
	}

IL_07fe:
	{
		V_13 = (UriFormatException_t1145000641 *)NULL;
		UriParser_t1660745760 * L_299 = Uri_get_Parser_m533607664(__this, /*hidden argument*/NULL);
		if (!L_299)
		{
			goto IL_081a;
		}
	}
	{
		UriParser_t1660745760 * L_300 = Uri_get_Parser_m533607664(__this, /*hidden argument*/NULL);
		NullCheck(L_300);
		VirtActionInvoker2< Uri_t2776692961 *, UriFormatException_t1145000641 ** >::Invoke(4 /* System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&) */, L_300, __this, (&V_13));
	}

IL_081a:
	{
		UriFormatException_t1145000641 * L_301 = V_13;
		if (!L_301)
		{
			goto IL_0829;
		}
	}
	{
		UriFormatException_t1145000641 * L_302 = V_13;
		NullCheck(L_302);
		String_t* L_303 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_302);
		return L_303;
	}

IL_0829:
	{
		String_t* L_304 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_305 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeMailto_26();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_306 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_304, L_305, /*hidden argument*/NULL);
		if (!L_306)
		{
			goto IL_0884;
		}
	}
	{
		String_t* L_307 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_308 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNews_27();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_309 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_307, L_308, /*hidden argument*/NULL);
		if (!L_309)
		{
			goto IL_0884;
		}
	}
	{
		String_t* L_310 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_311 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeFile_21();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_312 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_310, L_311, /*hidden argument*/NULL);
		if (!L_312)
		{
			goto IL_0884;
		}
	}
	{
		String_t* L_313 = __this->get_path_6();
		String_t* L_314 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		bool L_315 = Uri_CompactEscaped_m2021013591(NULL /*static, unused*/, L_314, /*hidden argument*/NULL);
		String_t* L_316 = Uri_Reduce_m1169795993(NULL /*static, unused*/, L_313, L_315, /*hidden argument*/NULL);
		__this->set_path_6(L_316);
	}

IL_0884:
	{
		return (String_t*)NULL;
	}
}
// System.Boolean System.Uri::CompactEscaped(System.String)
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t190145395_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1958628151_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3143036;
extern Il2CppCodeGenString* _stringLiteral3213448;
extern Il2CppCodeGenString* _stringLiteral99617003;
extern Il2CppCodeGenString* _stringLiteral1246071647;
extern Il2CppCodeGenString* _stringLiteral1841314832;
extern const uint32_t Uri_CompactEscaped_m2021013591_MetadataUsageId;
extern "C"  bool Uri_CompactEscaped_m2021013591 (Il2CppObject * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_CompactEscaped_m2021013591_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	Dictionary_2_t190145395 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___scheme;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_007a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		Dictionary_2_t190145395 * L_2 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__switchU24map15_36();
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		Dictionary_2_t190145395 * L_3 = (Dictionary_2_t190145395 *)il2cpp_codegen_object_new(Dictionary_2_t190145395_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1958628151(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m1958628151_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t190145395 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_4, _stringLiteral3143036, 0);
		Dictionary_2_t190145395 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_5, _stringLiteral3213448, 0);
		Dictionary_2_t190145395 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_6, _stringLiteral99617003, 0);
		Dictionary_2_t190145395 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_7, _stringLiteral1246071647, 0);
		Dictionary_2_t190145395 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_8, _stringLiteral1841314832, 0);
		Dictionary_2_t190145395 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->set_U3CU3Ef__switchU24map15_36(L_9);
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		Dictionary_2_t190145395 * L_10 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__switchU24map15_36();
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_13 = V_2;
		if (!L_13)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_007a;
	}

IL_0078:
	{
		return (bool)1;
	}

IL_007a:
	{
		return (bool)0;
	}
}
// System.String System.Uri::Reduce(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t3822575854_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t2778706699_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t2121638921_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t287207039_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t1628921374_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral47;
extern Il2CppCodeGenString* _stringLiteral46;
extern Il2CppCodeGenString* _stringLiteral1472;
extern const uint32_t Uri_Reduce_m1169795993_MetadataUsageId;
extern "C"  String_t* Uri_Reduce_m1169795993 (Il2CppObject * __this /* static, unused */, String_t* ___path, bool ___compact_escaped, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_Reduce_m1169795993_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t3822575854 * V_0 = NULL;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	uint16_t V_3 = 0x0;
	uint16_t V_4 = 0x0;
	ArrayList_t2121638921 * V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	String_t* V_11 = NULL;
	Il2CppObject * V_12 = NULL;
	uint16_t V_13 = 0x0;
	Il2CppObject * V_14 = NULL;
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_0, _stringLiteral47, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ___path;
		return L_2;
	}

IL_0012:
	{
		StringBuilder_t3822575854 * L_3 = (StringBuilder_t3822575854 *)il2cpp_codegen_object_new(StringBuilder_t3822575854_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m135953004(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = ___compact_escaped;
		if (!L_4)
		{
			goto IL_00f5;
		}
	}
	{
		V_1 = 0;
		goto IL_00dc;
	}

IL_0025:
	{
		String_t* L_5 = ___path;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		uint16_t L_7 = String_get_Chars_m3015341861(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		uint16_t L_8 = V_2;
		V_13 = L_8;
		uint16_t L_9 = V_13;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)37))))
		{
			goto IL_0055;
		}
	}
	{
		uint16_t L_10 = V_13;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0047;
		}
	}
	{
		goto IL_00cb;
	}

IL_0047:
	{
		StringBuilder_t3822575854 * L_11 = V_0;
		NullCheck(L_11);
		StringBuilder_Append_m2143093878(L_11, ((int32_t)47), /*hidden argument*/NULL);
		goto IL_00d8;
	}

IL_0055:
	{
		int32_t L_12 = V_1;
		String_t* L_13 = ___path;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m2979997331(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)((int32_t)L_14-(int32_t)2)))))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_15 = ___path;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		uint16_t L_17 = String_get_Chars_m3015341861(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_17;
		String_t* L_18 = ___path;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		uint16_t L_20 = String_get_Chars_m3015341861(L_18, ((int32_t)((int32_t)L_19+(int32_t)2)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2778706699_il2cpp_TypeInfo_var);
		uint16_t L_21 = Char_ToUpper_m3343442427(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		uint16_t L_22 = V_3;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)50)))))
		{
			goto IL_008e;
		}
	}
	{
		uint16_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)70))))
		{
			goto IL_009f;
		}
	}

IL_008e:
	{
		uint16_t L_24 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)53)))))
		{
			goto IL_00b1;
		}
	}
	{
		uint16_t L_25 = V_4;
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)67)))))
		{
			goto IL_00b1;
		}
	}

IL_009f:
	{
		StringBuilder_t3822575854 * L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_Append_m2143093878(L_26, ((int32_t)47), /*hidden argument*/NULL);
		int32_t L_27 = V_1;
		V_1 = ((int32_t)((int32_t)L_27+(int32_t)2));
		goto IL_00b9;
	}

IL_00b1:
	{
		StringBuilder_t3822575854 * L_28 = V_0;
		uint16_t L_29 = V_2;
		NullCheck(L_28);
		StringBuilder_Append_m2143093878(L_28, L_29, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		goto IL_00c6;
	}

IL_00be:
	{
		StringBuilder_t3822575854 * L_30 = V_0;
		uint16_t L_31 = V_2;
		NullCheck(L_30);
		StringBuilder_Append_m2143093878(L_30, L_31, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		goto IL_00d8;
	}

IL_00cb:
	{
		StringBuilder_t3822575854 * L_32 = V_0;
		uint16_t L_33 = V_2;
		NullCheck(L_32);
		StringBuilder_Append_m2143093878(L_32, L_33, /*hidden argument*/NULL);
		goto IL_00d8;
	}

IL_00d8:
	{
		int32_t L_34 = V_1;
		V_1 = ((int32_t)((int32_t)L_34+(int32_t)1));
	}

IL_00dc:
	{
		int32_t L_35 = V_1;
		String_t* L_36 = ___path;
		NullCheck(L_36);
		int32_t L_37 = String_get_Length_m2979997331(L_36, /*hidden argument*/NULL);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_0025;
		}
	}
	{
		StringBuilder_t3822575854 * L_38 = V_0;
		NullCheck(L_38);
		String_t* L_39 = StringBuilder_ToString_m350379841(L_38, /*hidden argument*/NULL);
		___path = L_39;
		goto IL_0101;
	}

IL_00f5:
	{
		String_t* L_40 = ___path;
		NullCheck(L_40);
		String_t* L_41 = String_Replace_m3369701083(L_40, ((int32_t)92), ((int32_t)47), /*hidden argument*/NULL);
		___path = L_41;
	}

IL_0101:
	{
		ArrayList_t2121638921 * L_42 = (ArrayList_t2121638921 *)il2cpp_codegen_object_new(ArrayList_t2121638921_il2cpp_TypeInfo_var);
		ArrayList__ctor_m1878432947(L_42, /*hidden argument*/NULL);
		V_5 = L_42;
		V_6 = 0;
		goto IL_01a3;
	}

IL_0110:
	{
		String_t* L_43 = ___path;
		int32_t L_44 = V_6;
		NullCheck(L_43);
		int32_t L_45 = String_IndexOf_m204546721(L_43, ((int32_t)47), L_44, /*hidden argument*/NULL);
		V_7 = L_45;
		int32_t L_46 = V_7;
		if ((!(((uint32_t)L_46) == ((uint32_t)(-1)))))
		{
			goto IL_012c;
		}
	}
	{
		String_t* L_47 = ___path;
		NullCheck(L_47);
		int32_t L_48 = String_get_Length_m2979997331(L_47, /*hidden argument*/NULL);
		V_7 = L_48;
	}

IL_012c:
	{
		String_t* L_49 = ___path;
		int32_t L_50 = V_6;
		int32_t L_51 = V_7;
		int32_t L_52 = V_6;
		NullCheck(L_49);
		String_t* L_53 = String_Substring_m675079568(L_49, L_50, ((int32_t)((int32_t)L_51-(int32_t)L_52)), /*hidden argument*/NULL);
		V_8 = L_53;
		int32_t L_54 = V_7;
		V_6 = ((int32_t)((int32_t)L_54+(int32_t)1));
		String_t* L_55 = V_8;
		NullCheck(L_55);
		int32_t L_56 = String_get_Length_m2979997331(L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_015e;
		}
	}
	{
		String_t* L_57 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_58 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_57, _stringLiteral46, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_0163;
		}
	}

IL_015e:
	{
		goto IL_01a3;
	}

IL_0163:
	{
		String_t* L_59 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_60 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_59, _stringLiteral1472, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_0199;
		}
	}
	{
		ArrayList_t2121638921 * L_61 = V_5;
		NullCheck(L_61);
		int32_t L_62 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_61);
		V_9 = L_62;
		int32_t L_63 = V_9;
		if (L_63)
		{
			goto IL_0189;
		}
	}
	{
		goto IL_01a3;
	}

IL_0189:
	{
		ArrayList_t2121638921 * L_64 = V_5;
		int32_t L_65 = V_9;
		NullCheck(L_64);
		VirtActionInvoker1< int32_t >::Invoke(39 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_64, ((int32_t)((int32_t)L_65-(int32_t)1)));
		goto IL_01a3;
	}

IL_0199:
	{
		ArrayList_t2121638921 * L_66 = V_5;
		String_t* L_67 = V_8;
		NullCheck(L_66);
		VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_66, L_67);
	}

IL_01a3:
	{
		int32_t L_68 = V_6;
		String_t* L_69 = ___path;
		NullCheck(L_69);
		int32_t L_70 = String_get_Length_m2979997331(L_69, /*hidden argument*/NULL);
		if ((((int32_t)L_68) < ((int32_t)L_70)))
		{
			goto IL_0110;
		}
	}
	{
		ArrayList_t2121638921 * L_71 = V_5;
		NullCheck(L_71);
		int32_t L_72 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_71);
		if (L_72)
		{
			goto IL_01c2;
		}
	}
	{
		return _stringLiteral47;
	}

IL_01c2:
	{
		StringBuilder_t3822575854 * L_73 = V_0;
		NullCheck(L_73);
		StringBuilder_set_Length_m1952332172(L_73, 0, /*hidden argument*/NULL);
		String_t* L_74 = ___path;
		NullCheck(L_74);
		uint16_t L_75 = String_get_Chars_m3015341861(L_74, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_01e0;
		}
	}
	{
		StringBuilder_t3822575854 * L_76 = V_0;
		NullCheck(L_76);
		StringBuilder_Append_m2143093878(L_76, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_01e0:
	{
		V_10 = (bool)1;
		ArrayList_t2121638921 * L_77 = V_5;
		NullCheck(L_77);
		Il2CppObject * L_78 = VirtFuncInvoker0< Il2CppObject * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_77);
		V_12 = L_78;
	}

IL_01ec:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0220;
		}

IL_01f1:
		{
			Il2CppObject * L_79 = V_12;
			NullCheck(L_79);
			Il2CppObject * L_80 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_79);
			V_11 = ((String_t*)CastclassSealed(L_80, String_t_il2cpp_TypeInfo_var));
			bool L_81 = V_10;
			if (!L_81)
			{
				goto IL_020e;
			}
		}

IL_0206:
		{
			V_10 = (bool)0;
			goto IL_0217;
		}

IL_020e:
		{
			StringBuilder_t3822575854 * L_82 = V_0;
			NullCheck(L_82);
			StringBuilder_Append_m2143093878(L_82, ((int32_t)47), /*hidden argument*/NULL);
		}

IL_0217:
		{
			StringBuilder_t3822575854 * L_83 = V_0;
			String_t* L_84 = V_11;
			NullCheck(L_83);
			StringBuilder_Append_m3898090075(L_83, L_84, /*hidden argument*/NULL);
		}

IL_0220:
		{
			Il2CppObject * L_85 = V_12;
			NullCheck(L_85);
			bool L_86 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_85);
			if (L_86)
			{
				goto IL_01f1;
			}
		}

IL_022c:
		{
			IL2CPP_LEAVE(0x247, FINALLY_0231);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_0231;
	}

FINALLY_0231:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_87 = V_12;
			V_14 = ((Il2CppObject *)IsInst(L_87, IDisposable_t1628921374_il2cpp_TypeInfo_var));
			Il2CppObject * L_88 = V_14;
			if (L_88)
			{
				goto IL_023f;
			}
		}

IL_023e:
		{
			IL2CPP_END_FINALLY(561)
		}

IL_023f:
		{
			Il2CppObject * L_89 = V_14;
			NullCheck(L_89);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, L_89);
			IL2CPP_END_FINALLY(561)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(561)
	{
		IL2CPP_JUMP_TBL(0x247, IL_0247)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_0247:
	{
		String_t* L_90 = ___path;
		NullCheck(L_90);
		bool L_91 = String_EndsWith_m2265568550(L_90, _stringLiteral47, /*hidden argument*/NULL);
		if (!L_91)
		{
			goto IL_0260;
		}
	}
	{
		StringBuilder_t3822575854 * L_92 = V_0;
		NullCheck(L_92);
		StringBuilder_Append_m2143093878(L_92, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_0260:
	{
		StringBuilder_t3822575854 * L_93 = V_0;
		NullCheck(L_93);
		String_t* L_94 = StringBuilder_ToString_m350379841(L_93, /*hidden argument*/NULL);
		return L_94;
	}
}
// System.Char System.Uri::HexUnescapeMultiByte(System.String,System.Int32&,System.Char&)
extern TypeInfo* ArgumentException_t124305799_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t3479058991_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3503877008;
extern Il2CppCodeGenString* _stringLiteral100346066;
extern const uint32_t Uri_HexUnescapeMultiByte_m3269245053_MetadataUsageId;
extern "C"  uint16_t Uri_HexUnescapeMultiByte_m3269245053 (Il2CppObject * __this /* static, unused */, String_t* ___pattern, int32_t* ___index, uint16_t* ___surrogate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_HexUnescapeMultiByte_m3269245053_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_t58506160* V_5 = NULL;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	uint8_t V_10 = 0x0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		uint16_t* L_0 = ___surrogate;
		*((int16_t*)(L_0)) = (int16_t)0;
		String_t* L_1 = ___pattern;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t124305799 * L_2 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_2, _stringLiteral3503877008, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0014:
	{
		int32_t* L_3 = ___index;
		if ((((int32_t)(*((int32_t*)L_3))) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t* L_4 = ___index;
		String_t* L_5 = ___pattern;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m2979997331(L_5, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_4))) < ((int32_t)L_6)))
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		ArgumentOutOfRangeException_t3479058991 * L_7 = (ArgumentOutOfRangeException_t3479058991 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t3479058991_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2026296331(L_7, _stringLiteral100346066, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_0034:
	{
		String_t* L_8 = ___pattern;
		int32_t* L_9 = ___index;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		bool L_10 = Uri_IsHexEncoding_m3196775920(NULL /*static, unused*/, L_8, (*((int32_t*)L_9)), /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_11 = ___pattern;
		int32_t* L_12 = ___index;
		int32_t* L_13 = ___index;
		int32_t L_14 = (*((int32_t*)L_13));
		V_13 = L_14;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_13;
		NullCheck(L_11);
		uint16_t L_16 = String_get_Chars_m3015341861(L_11, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0053:
	{
		int32_t* L_17 = ___index;
		int32_t* L_18 = ___index;
		int32_t L_19 = (*((int32_t*)L_18));
		V_13 = L_19;
		*((int32_t*)(L_17)) = (int32_t)((int32_t)((int32_t)L_19+(int32_t)1));
		int32_t L_20 = V_13;
		V_0 = L_20;
		String_t* L_21 = ___pattern;
		int32_t* L_22 = ___index;
		int32_t* L_23 = ___index;
		int32_t L_24 = (*((int32_t*)L_23));
		V_13 = L_24;
		*((int32_t*)(L_22)) = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
		int32_t L_25 = V_13;
		NullCheck(L_21);
		uint16_t L_26 = String_get_Chars_m3015341861(L_21, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		int32_t L_27 = Uri_FromHex_m2865381007(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		V_1 = L_27;
		String_t* L_28 = ___pattern;
		int32_t* L_29 = ___index;
		int32_t* L_30 = ___index;
		int32_t L_31 = (*((int32_t*)L_30));
		V_13 = L_31;
		*((int32_t*)(L_29)) = (int32_t)((int32_t)((int32_t)L_31+(int32_t)1));
		int32_t L_32 = V_13;
		NullCheck(L_28);
		uint16_t L_33 = String_get_Chars_m3015341861(L_28, L_32, /*hidden argument*/NULL);
		int32_t L_34 = Uri_FromHex_m2865381007(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		V_2 = L_34;
		int32_t L_35 = V_1;
		V_3 = L_35;
		V_4 = 0;
		goto IL_00a1;
	}

IL_0097:
	{
		int32_t L_36 = V_4;
		V_4 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_3;
		V_3 = ((int32_t)((int32_t)L_37<<(int32_t)1));
	}

IL_00a1:
	{
		int32_t L_38 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_38&(int32_t)8))) == ((int32_t)8)))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_39 = V_4;
		if ((((int32_t)L_39) > ((int32_t)1)))
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_40 = V_1;
		int32_t L_41 = V_2;
		return (((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_40<<(int32_t)4))|(int32_t)L_41)))));
	}

IL_00b9:
	{
		int32_t L_42 = V_4;
		V_5 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)L_42));
		V_6 = (bool)0;
		ByteU5BU5D_t58506160* L_43 = V_5;
		int32_t L_44 = V_1;
		int32_t L_45 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_44<<(int32_t)4))|(int32_t)L_45))))));
		V_7 = 1;
		goto IL_014b;
	}

IL_00d7:
	{
		String_t* L_46 = ___pattern;
		int32_t* L_47 = ___index;
		int32_t* L_48 = ___index;
		int32_t L_49 = (*((int32_t*)L_48));
		V_13 = L_49;
		*((int32_t*)(L_47)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		int32_t L_50 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		bool L_51 = Uri_IsHexEncoding_m3196775920(NULL /*static, unused*/, L_46, L_50, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_00f5;
		}
	}
	{
		V_6 = (bool)1;
		goto IL_0154;
	}

IL_00f5:
	{
		String_t* L_52 = ___pattern;
		int32_t* L_53 = ___index;
		int32_t* L_54 = ___index;
		int32_t L_55 = (*((int32_t*)L_54));
		V_13 = L_55;
		*((int32_t*)(L_53)) = (int32_t)((int32_t)((int32_t)L_55+(int32_t)1));
		int32_t L_56 = V_13;
		NullCheck(L_52);
		uint16_t L_57 = String_get_Chars_m3015341861(L_52, L_56, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		int32_t L_58 = Uri_FromHex_m2865381007(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		V_8 = L_58;
		int32_t L_59 = V_8;
		if ((((int32_t)((int32_t)((int32_t)L_59&(int32_t)((int32_t)12)))) == ((int32_t)8)))
		{
			goto IL_0120;
		}
	}
	{
		V_6 = (bool)1;
		goto IL_0154;
	}

IL_0120:
	{
		String_t* L_60 = ___pattern;
		int32_t* L_61 = ___index;
		int32_t* L_62 = ___index;
		int32_t L_63 = (*((int32_t*)L_62));
		V_13 = L_63;
		*((int32_t*)(L_61)) = (int32_t)((int32_t)((int32_t)L_63+(int32_t)1));
		int32_t L_64 = V_13;
		NullCheck(L_60);
		uint16_t L_65 = String_get_Chars_m3015341861(L_60, L_64, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		int32_t L_66 = Uri_FromHex_m2865381007(NULL /*static, unused*/, L_65, /*hidden argument*/NULL);
		V_9 = L_66;
		ByteU5BU5D_t58506160* L_67 = V_5;
		int32_t L_68 = V_7;
		int32_t L_69 = V_8;
		int32_t L_70 = V_9;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, L_68);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_69<<(int32_t)4))|(int32_t)L_70))))));
		int32_t L_71 = V_7;
		V_7 = ((int32_t)((int32_t)L_71+(int32_t)1));
	}

IL_014b:
	{
		int32_t L_72 = V_7;
		int32_t L_73 = V_4;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_00d7;
		}
	}

IL_0154:
	{
		bool L_74 = V_6;
		if (!L_74)
		{
			goto IL_0166;
		}
	}
	{
		int32_t* L_75 = ___index;
		int32_t L_76 = V_0;
		*((int32_t*)(L_75)) = (int32_t)((int32_t)((int32_t)L_76+(int32_t)3));
		ByteU5BU5D_t58506160* L_77 = V_5;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 0);
		int32_t L_78 = 0;
		return (((int32_t)((uint16_t)((L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78))))));
	}

IL_0166:
	{
		V_10 = ((int32_t)255);
		uint8_t L_79 = V_10;
		int32_t L_80 = V_4;
		V_10 = (((int32_t)((uint8_t)((int32_t)((int32_t)L_79>>(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_80+(int32_t)1))&(int32_t)((int32_t)31))))))));
		ByteU5BU5D_t58506160* L_81 = V_5;
		NullCheck(L_81);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_81, 0);
		int32_t L_82 = 0;
		uint8_t L_83 = V_10;
		V_11 = ((int32_t)((int32_t)((L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82)))&(int32_t)L_83));
		V_12 = 1;
		goto IL_01a4;
	}

IL_018b:
	{
		int32_t L_84 = V_11;
		V_11 = ((int32_t)((int32_t)L_84<<(int32_t)6));
		int32_t L_85 = V_11;
		ByteU5BU5D_t58506160* L_86 = V_5;
		int32_t L_87 = V_12;
		NullCheck(L_86);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_86, L_87);
		int32_t L_88 = L_87;
		V_11 = ((int32_t)((int32_t)L_85|(int32_t)((int32_t)((int32_t)((L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88)))&(int32_t)((int32_t)63)))));
		int32_t L_89 = V_12;
		V_12 = ((int32_t)((int32_t)L_89+(int32_t)1));
	}

IL_01a4:
	{
		int32_t L_90 = V_12;
		int32_t L_91 = V_4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_018b;
		}
	}
	{
		int32_t L_92 = V_11;
		if ((((int32_t)L_92) > ((int32_t)((int32_t)65535))))
		{
			goto IL_01bd;
		}
	}
	{
		int32_t L_93 = V_11;
		return (((int32_t)((uint16_t)L_93)));
	}

IL_01bd:
	{
		int32_t L_94 = V_11;
		V_11 = ((int32_t)((int32_t)L_94-(int32_t)((int32_t)65536)));
		uint16_t* L_95 = ___surrogate;
		int32_t L_96 = V_11;
		*((int16_t*)(L_95)) = (int16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_96&(int32_t)((int32_t)1023)))|(int32_t)((int32_t)56320))))));
		int32_t L_97 = V_11;
		return (((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_97>>(int32_t)((int32_t)10)))|(int32_t)((int32_t)55296))))));
	}
}
// System.String System.Uri::GetSchemeDelimiter(System.String)
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const uint32_t Uri_GetSchemeDelimiter_m1914409694_MetadataUsageId;
extern "C"  String_t* Uri_GetSchemeDelimiter_m1914409694 (Il2CppObject * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_GetSchemeDelimiter_m1914409694_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0037;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		UriSchemeU5BU5D_t1246605964* L_0 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_schemes_31();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		String_t* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_scheme_0();
		String_t* L_3 = ___scheme;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		UriSchemeU5BU5D_t1246605964* L_5 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_schemes_31();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		String_t* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->get_delimiter_1();
		return L_7;
	}

IL_0033:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0037:
	{
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		UriSchemeU5BU5D_t1246605964* L_10 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_schemes_31();
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_10)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_11 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_SchemeDelimiter_20();
		return L_11;
	}
}
// System.Int32 System.Uri::GetDefaultPort(System.String)
extern TypeInfo* UriParser_t1660745760_il2cpp_TypeInfo_var;
extern const uint32_t Uri_GetDefaultPort_m711645873_MetadataUsageId;
extern "C"  int32_t Uri_GetDefaultPort_m711645873 (Il2CppObject * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_GetDefaultPort_m711645873_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	UriParser_t1660745760 * V_0 = NULL;
	{
		String_t* L_0 = ___scheme;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1660745760_il2cpp_TypeInfo_var);
		UriParser_t1660745760 * L_1 = UriParser_GetParser_m635613298(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		UriParser_t1660745760 * L_2 = V_0;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (-1);
	}

IL_000f:
	{
		UriParser_t1660745760 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = UriParser_get_DefaultPort_m3728184791(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String System.Uri::GetOpaqueWiseSchemeDelimiter()
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral58;
extern const uint32_t Uri_GetOpaqueWiseSchemeDelimiter_m3781205887_MetadataUsageId;
extern "C"  String_t* Uri_GetOpaqueWiseSchemeDelimiter_m3781205887 (Uri_t2776692961 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_GetOpaqueWiseSchemeDelimiter_m3781205887_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = __this->get_isOpaquePart_11();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		return _stringLiteral58;
	}

IL_0011:
	{
		String_t* L_1 = __this->get_scheme_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_2 = Uri_GetSchemeDelimiter_m1914409694(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Uri::IsPredefinedScheme(System.String)
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t190145395_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1958628151_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3213448;
extern Il2CppCodeGenString* _stringLiteral99617003;
extern Il2CppCodeGenString* _stringLiteral3143036;
extern Il2CppCodeGenString* _stringLiteral101730;
extern Il2CppCodeGenString* _stringLiteral3386428;
extern Il2CppCodeGenString* _stringLiteral3054753165;
extern Il2CppCodeGenString* _stringLiteral3213394546;
extern Il2CppCodeGenString* _stringLiteral3377875;
extern Il2CppCodeGenString* _stringLiteral1246071647;
extern Il2CppCodeGenString* _stringLiteral1841314832;
extern const uint32_t Uri_IsPredefinedScheme_m2987522946_MetadataUsageId;
extern "C"  bool Uri_IsPredefinedScheme_m2987522946 (Il2CppObject * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_IsPredefinedScheme_m2987522946_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	Dictionary_2_t190145395 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___scheme;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00b7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		Dictionary_2_t190145395 * L_2 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__switchU24map16_37();
		if (L_2)
		{
			goto IL_0098;
		}
	}
	{
		Dictionary_2_t190145395 * L_3 = (Dictionary_2_t190145395 *)il2cpp_codegen_object_new(Dictionary_2_t190145395_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1958628151(L_3, ((int32_t)10), /*hidden argument*/Dictionary_2__ctor_m1958628151_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t190145395 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_4, _stringLiteral3213448, 0);
		Dictionary_2_t190145395 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_5, _stringLiteral99617003, 0);
		Dictionary_2_t190145395 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_6, _stringLiteral3143036, 0);
		Dictionary_2_t190145395 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_7, _stringLiteral101730, 0);
		Dictionary_2_t190145395 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_8, _stringLiteral3386428, 0);
		Dictionary_2_t190145395 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_9, _stringLiteral3054753165, 0);
		Dictionary_2_t190145395 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_10, _stringLiteral3213394546, 0);
		Dictionary_2_t190145395 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_11, _stringLiteral3377875, 0);
		Dictionary_2_t190145395 * L_12 = V_1;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_12, _stringLiteral1246071647, 0);
		Dictionary_2_t190145395 * L_13 = V_1;
		NullCheck(L_13);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_13, _stringLiteral1841314832, 0);
		Dictionary_2_t190145395 * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->set_U3CU3Ef__switchU24map16_37(L_14);
	}

IL_0098:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		Dictionary_2_t190145395 * L_15 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__switchU24map16_37();
		String_t* L_16 = V_0;
		NullCheck(L_15);
		bool L_17 = VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_15, L_16, (&V_2));
		if (!L_17)
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_18 = V_2;
		if (!L_18)
		{
			goto IL_00b5;
		}
	}
	{
		goto IL_00b7;
	}

IL_00b5:
	{
		return (bool)1;
	}

IL_00b7:
	{
		return (bool)0;
	}
}
// System.UriParser System.Uri::get_Parser()
extern TypeInfo* UriParser_t1660745760_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultUriParser_t625205023_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral42;
extern const uint32_t Uri_get_Parser_m533607664_MetadataUsageId;
extern "C"  UriParser_t1660745760 * Uri_get_Parser_m533607664 (Uri_t2776692961 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_get_Parser_m533607664_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		UriParser_t1660745760 * L_0 = __this->get_parser_32();
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_1 = Uri_get_Scheme_m2606456870(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1660745760_il2cpp_TypeInfo_var);
		UriParser_t1660745760 * L_2 = UriParser_GetParser_m635613298(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->set_parser_32(L_2);
		UriParser_t1660745760 * L_3 = __this->get_parser_32();
		if (L_3)
		{
			goto IL_0037;
		}
	}
	{
		DefaultUriParser_t625205023 * L_4 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m2197038465(L_4, _stringLiteral42, /*hidden argument*/NULL);
		__this->set_parser_32(L_4);
	}

IL_0037:
	{
		UriParser_t1660745760 * L_5 = __this->get_parser_32();
		return L_5;
	}
}
// System.Void System.Uri::EnsureAbsoluteUri()
extern TypeInfo* InvalidOperationException_t2420574324_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1730173606;
extern const uint32_t Uri_EnsureAbsoluteUri_m3407571844_MetadataUsageId;
extern "C"  void Uri_EnsureAbsoluteUri_m3407571844 (Uri_t2776692961 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_EnsureAbsoluteUri_m3407571844_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Uri_get_IsAbsoluteUri_m145672153(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t2420574324 * L_1 = (InvalidOperationException_t2420574324 *)il2cpp_codegen_object_new(InvalidOperationException_t2420574324_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m1485483280(L_1, _stringLiteral1730173606, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0016:
	{
		return;
	}
}
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern "C"  bool Uri_op_Equality_m877019543 (Il2CppObject * __this /* static, unused */, Uri_t2776692961 * ___u1, Uri_t2776692961 * ___u2, const MethodInfo* method)
{
	{
		Uri_t2776692961 * L_0 = ___u1;
		Uri_t2776692961 * L_1 = ___u2;
		bool L_2 = Object_Equals_m3175838359(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern const uint32_t Uri_op_Inequality_m2899852498_MetadataUsageId;
extern "C"  bool Uri_op_Inequality_m2899852498 (Il2CppObject * __this /* static, unused */, Uri_t2776692961 * ___u1, Uri_t2776692961 * ___u2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Uri_op_Inequality_m2899852498_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_t2776692961 * L_0 = ___u1;
		Uri_t2776692961 * L_1 = ___u2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		bool L_2 = Uri_op_Equality_m877019543(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
extern "C"  void UriScheme__ctor_m535258662 (UriScheme_t3266528785 * __this, String_t* ___s, String_t* ___d, int32_t ___p, const MethodInfo* method)
{
	{
		String_t* L_0 = ___s;
		__this->set_scheme_0(L_0);
		String_t* L_1 = ___d;
		__this->set_delimiter_1(L_1);
		int32_t L_2 = ___p;
		__this->set_defaultPort_2(L_2);
		return;
	}
}
// Conversion methods for marshalling of: System.Uri/UriScheme
extern "C" void UriScheme_t3266528785_marshal_pinvoke(const UriScheme_t3266528785& unmarshaled, UriScheme_t3266528785_marshaled_pinvoke& marshaled)
{
	marshaled.___scheme_0 = il2cpp_codegen_marshal_string(unmarshaled.get_scheme_0());
	marshaled.___delimiter_1 = il2cpp_codegen_marshal_string(unmarshaled.get_delimiter_1());
	marshaled.___defaultPort_2 = unmarshaled.get_defaultPort_2();
}
extern "C" void UriScheme_t3266528785_marshal_pinvoke_back(const UriScheme_t3266528785_marshaled_pinvoke& marshaled, UriScheme_t3266528785& unmarshaled)
{
	unmarshaled.set_scheme_0(il2cpp_codegen_marshal_string_result(marshaled.___scheme_0));
	unmarshaled.set_delimiter_1(il2cpp_codegen_marshal_string_result(marshaled.___delimiter_1));
	int32_t unmarshaled_defaultPort_temp = 0;
	unmarshaled_defaultPort_temp = marshaled.___defaultPort_2;
	unmarshaled.set_defaultPort_2(unmarshaled_defaultPort_temp);
}
// Conversion method for clean up from marshalling of: System.Uri/UriScheme
extern "C" void UriScheme_t3266528785_marshal_pinvoke_cleanup(UriScheme_t3266528785_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___scheme_0);
	marshaled.___scheme_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___delimiter_1);
	marshaled.___delimiter_1 = NULL;
}
// Conversion methods for marshalling of: System.Uri/UriScheme
extern "C" void UriScheme_t3266528785_marshal_com(const UriScheme_t3266528785& unmarshaled, UriScheme_t3266528785_marshaled_com& marshaled)
{
	marshaled.___scheme_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_scheme_0());
	marshaled.___delimiter_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_delimiter_1());
	marshaled.___defaultPort_2 = unmarshaled.get_defaultPort_2();
}
extern "C" void UriScheme_t3266528785_marshal_com_back(const UriScheme_t3266528785_marshaled_com& marshaled, UriScheme_t3266528785& unmarshaled)
{
	unmarshaled.set_scheme_0(il2cpp_codegen_marshal_bstring_result(marshaled.___scheme_0));
	unmarshaled.set_delimiter_1(il2cpp_codegen_marshal_bstring_result(marshaled.___delimiter_1));
	int32_t unmarshaled_defaultPort_temp = 0;
	unmarshaled_defaultPort_temp = marshaled.___defaultPort_2;
	unmarshaled.set_defaultPort_2(unmarshaled_defaultPort_temp);
}
// Conversion method for clean up from marshalling of: System.Uri/UriScheme
extern "C" void UriScheme_t3266528785_marshal_com_cleanup(UriScheme_t3266528785_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___scheme_0);
	marshaled.___scheme_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___delimiter_1);
	marshaled.___delimiter_1 = NULL;
}
// System.Void System.UriFormatException::.ctor()
extern Il2CppCodeGenString* _stringLiteral32201524;
extern const uint32_t UriFormatException__ctor_m2977644479_MetadataUsageId;
extern "C"  void UriFormatException__ctor_m2977644479 (UriFormatException_t1145000641 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UriFormatException__ctor_m2977644479_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Locale_GetText_m3269873186(NULL /*static, unused*/, _stringLiteral32201524, /*hidden argument*/NULL);
		FormatException__ctor_m27151337(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::.ctor(System.String)
extern "C"  void UriFormatException__ctor_m3185454499 (UriFormatException_t1145000641 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		FormatException__ctor_m27151337(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UriFormatException__ctor_m262177920 (UriFormatException_t1145000641 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2995724695 * L_0 = ___info;
		StreamingContext_t986364934  L_1 = ___context;
		FormatException__ctor_m173965690(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m2011642604 (UriFormatException_t1145000641 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2995724695 * L_0 = ___info;
		StreamingContext_t986364934  L_1 = ___context;
		Exception_GetObjectData_m1945031808(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriParser::.ctor()
extern "C"  void UriParser__ctor_m3933763184 (UriParser_t1660745760 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriParser::.cctor()
extern TypeInfo* Il2CppObject_il2cpp_TypeInfo_var;
extern TypeInfo* UriParser_t1660745760_il2cpp_TypeInfo_var;
extern TypeInfo* Regex_t3802381858_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3057722339;
extern Il2CppCodeGenString* _stringLiteral3989333014;
extern const uint32_t UriParser__cctor_m1205478205_MetadataUsageId;
extern "C"  void UriParser__cctor_m1205478205 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UriParser__cctor_m1205478205_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Il2CppObject * L_0 = (Il2CppObject *)il2cpp_codegen_object_new(Il2CppObject_il2cpp_TypeInfo_var);
		Object__ctor_m1772956182(L_0, /*hidden argument*/NULL);
		((UriParser_t1660745760_StaticFields*)UriParser_t1660745760_il2cpp_TypeInfo_var->static_fields)->set_lock_object_0(L_0);
		Regex_t3802381858 * L_1 = (Regex_t3802381858 *)il2cpp_codegen_object_new(Regex_t3802381858_il2cpp_TypeInfo_var);
		Regex__ctor_m2980635200(L_1, _stringLiteral3057722339, /*hidden argument*/NULL);
		((UriParser_t1660745760_StaticFields*)UriParser_t1660745760_il2cpp_TypeInfo_var->static_fields)->set_uri_regex_4(L_1);
		Regex_t3802381858 * L_2 = (Regex_t3802381858 *)il2cpp_codegen_object_new(Regex_t3802381858_il2cpp_TypeInfo_var);
		Regex__ctor_m2980635200(L_2, _stringLiteral3989333014, /*hidden argument*/NULL);
		((UriParser_t1660745760_StaticFields*)UriParser_t1660745760_il2cpp_TypeInfo_var->static_fields)->set_auth_regex_5(L_2);
		return;
	}
}
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* UriFormatException_t1145000641_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral42;
extern Il2CppCodeGenString* _stringLiteral4198658576;
extern const uint32_t UriParser_InitializeAndValidate_m3968058349_MetadataUsageId;
extern "C"  void UriParser_InitializeAndValidate_m3968058349 (UriParser_t1660745760 * __this, Uri_t2776692961 * ___uri, UriFormatException_t1145000641 ** ___parsingError, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UriParser_InitializeAndValidate_m3968058349_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_t2776692961 * L_0 = ___uri;
		NullCheck(L_0);
		String_t* L_1 = Uri_get_Scheme_m2606456870(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_scheme_name_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = __this->get_scheme_name_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_4, _stringLiteral42, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		UriFormatException_t1145000641 ** L_6 = ___parsingError;
		UriFormatException_t1145000641 * L_7 = (UriFormatException_t1145000641 *)il2cpp_codegen_object_new(UriFormatException_t1145000641_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m3185454499(L_7, _stringLiteral4198658576, /*hidden argument*/NULL);
		*((Il2CppObject **)(L_6)) = (Il2CppObject *)L_7;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_6), (Il2CppObject *)L_7);
		goto IL_003f;
	}

IL_003c:
	{
		UriFormatException_t1145000641 ** L_8 = ___parsingError;
		*((Il2CppObject **)(L_8)) = (Il2CppObject *)NULL;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_8), (Il2CppObject *)NULL);
	}

IL_003f:
	{
		return;
	}
}
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
extern "C"  void UriParser_OnRegister_m3986311499 (UriParser_t1660745760 * __this, String_t* ___schemeName, int32_t ___defaultPort, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.UriParser::set_SchemeName(System.String)
extern "C"  void UriParser_set_SchemeName_m706252033 (UriParser_t1660745760 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->set_scheme_name_2(L_0);
		return;
	}
}
// System.Int32 System.UriParser::get_DefaultPort()
extern "C"  int32_t UriParser_get_DefaultPort_m3728184791 (UriParser_t1660745760 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_default_port_3();
		return L_0;
	}
}
// System.Void System.UriParser::set_DefaultPort(System.Int32)
extern "C"  void UriParser_set_DefaultPort_m1019606244 (UriParser_t1660745760 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->set_default_port_3(L_0);
		return;
	}
}
// System.Void System.UriParser::CreateDefaults()
extern TypeInfo* UriParser_t1660745760_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t3875263730_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultUriParser_t625205023_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3316647;
extern const uint32_t UriParser_CreateDefaults_m2648397058_MetadataUsageId;
extern "C"  void UriParser_CreateDefaults_m2648397058 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UriParser_CreateDefaults_m2648397058_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t3875263730 * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1660745760_il2cpp_TypeInfo_var);
		Hashtable_t3875263730 * L_0 = ((UriParser_t1660745760_StaticFields*)UriParser_t1660745760_il2cpp_TypeInfo_var->static_fields)->get_table_1();
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		Hashtable_t3875263730 * L_1 = (Hashtable_t3875263730 *)il2cpp_codegen_object_new(Hashtable_t3875263730_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1514037738(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		Hashtable_t3875263730 * L_2 = V_0;
		DefaultUriParser_t625205023 * L_3 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeFile_21();
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1660745760_il2cpp_TypeInfo_var);
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_2, L_3, L_4, (-1), /*hidden argument*/NULL);
		Hashtable_t3875263730 * L_5 = V_0;
		DefaultUriParser_t625205023 * L_6 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_6, /*hidden argument*/NULL);
		String_t* L_7 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeFtp_22();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_5, L_6, L_7, ((int32_t)21), /*hidden argument*/NULL);
		Hashtable_t3875263730 * L_8 = V_0;
		DefaultUriParser_t625205023 * L_9 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_9, /*hidden argument*/NULL);
		String_t* L_10 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeGopher_23();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_8, L_9, L_10, ((int32_t)70), /*hidden argument*/NULL);
		Hashtable_t3875263730 * L_11 = V_0;
		DefaultUriParser_t625205023 * L_12 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_12, /*hidden argument*/NULL);
		String_t* L_13 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeHttp_24();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_11, L_12, L_13, ((int32_t)80), /*hidden argument*/NULL);
		Hashtable_t3875263730 * L_14 = V_0;
		DefaultUriParser_t625205023 * L_15 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_15, /*hidden argument*/NULL);
		String_t* L_16 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeHttps_25();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_14, L_15, L_16, ((int32_t)443), /*hidden argument*/NULL);
		Hashtable_t3875263730 * L_17 = V_0;
		DefaultUriParser_t625205023 * L_18 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_18, /*hidden argument*/NULL);
		String_t* L_19 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeMailto_26();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_17, L_18, L_19, ((int32_t)25), /*hidden argument*/NULL);
		Hashtable_t3875263730 * L_20 = V_0;
		DefaultUriParser_t625205023 * L_21 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_21, /*hidden argument*/NULL);
		String_t* L_22 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNetPipe_29();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_20, L_21, L_22, (-1), /*hidden argument*/NULL);
		Hashtable_t3875263730 * L_23 = V_0;
		DefaultUriParser_t625205023 * L_24 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_24, /*hidden argument*/NULL);
		String_t* L_25 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNetTcp_30();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_23, L_24, L_25, (-1), /*hidden argument*/NULL);
		Hashtable_t3875263730 * L_26 = V_0;
		DefaultUriParser_t625205023 * L_27 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_27, /*hidden argument*/NULL);
		String_t* L_28 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNews_27();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_26, L_27, L_28, ((int32_t)119), /*hidden argument*/NULL);
		Hashtable_t3875263730 * L_29 = V_0;
		DefaultUriParser_t625205023 * L_30 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_30, /*hidden argument*/NULL);
		String_t* L_31 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNntp_28();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_29, L_30, L_31, ((int32_t)119), /*hidden argument*/NULL);
		Hashtable_t3875263730 * L_32 = V_0;
		DefaultUriParser_t625205023 * L_33 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_33, /*hidden argument*/NULL);
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_32, L_33, _stringLiteral3316647, ((int32_t)389), /*hidden argument*/NULL);
		Il2CppObject * L_34 = ((UriParser_t1660745760_StaticFields*)UriParser_t1660745760_il2cpp_TypeInfo_var->static_fields)->get_lock_object_0();
		V_1 = L_34;
		Il2CppObject * L_35 = V_1;
		Monitor_Enter_m476686225(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
	}

IL_00e6:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1660745760_il2cpp_TypeInfo_var);
			Hashtable_t3875263730 * L_36 = ((UriParser_t1660745760_StaticFields*)UriParser_t1660745760_il2cpp_TypeInfo_var->static_fields)->get_table_1();
			if (L_36)
			{
				goto IL_00fb;
			}
		}

IL_00f0:
		{
			Hashtable_t3875263730 * L_37 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1660745760_il2cpp_TypeInfo_var);
			((UriParser_t1660745760_StaticFields*)UriParser_t1660745760_il2cpp_TypeInfo_var->static_fields)->set_table_1(L_37);
			goto IL_00fd;
		}

IL_00fb:
		{
			V_0 = (Hashtable_t3875263730 *)NULL;
		}

IL_00fd:
		{
			IL2CPP_LEAVE(0x109, FINALLY_0102);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_0102;
	}

FINALLY_0102:
	{ // begin finally (depth: 1)
		Il2CppObject * L_38 = V_1;
		Monitor_Exit_m2088237919(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(258)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(258)
	{
		IL2CPP_JUMP_TBL(0x109, IL_0109)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_0109:
	{
		return;
	}
}
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
extern TypeInfo* GenericUriParser_t2219856969_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultUriParser_t625205023_il2cpp_TypeInfo_var;
extern const uint32_t UriParser_InternalRegister_m1447570189_MetadataUsageId;
extern "C"  void UriParser_InternalRegister_m1447570189 (Il2CppObject * __this /* static, unused */, Hashtable_t3875263730 * ___table, UriParser_t1660745760 * ___uriParser, String_t* ___schemeName, int32_t ___defaultPort, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UriParser_InternalRegister_m1447570189_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	DefaultUriParser_t625205023 * V_0 = NULL;
	{
		UriParser_t1660745760 * L_0 = ___uriParser;
		String_t* L_1 = ___schemeName;
		NullCheck(L_0);
		UriParser_set_SchemeName_m706252033(L_0, L_1, /*hidden argument*/NULL);
		UriParser_t1660745760 * L_2 = ___uriParser;
		int32_t L_3 = ___defaultPort;
		NullCheck(L_2);
		UriParser_set_DefaultPort_m1019606244(L_2, L_3, /*hidden argument*/NULL);
		UriParser_t1660745760 * L_4 = ___uriParser;
		if (!((GenericUriParser_t2219856969 *)IsInstClass(L_4, GenericUriParser_t2219856969_il2cpp_TypeInfo_var)))
		{
			goto IL_0026;
		}
	}
	{
		Hashtable_t3875263730 * L_5 = ___table;
		String_t* L_6 = ___schemeName;
		UriParser_t1660745760 * L_7 = ___uriParser;
		NullCheck(L_5);
		VirtActionInvoker2< Il2CppObject *, Il2CppObject * >::Invoke(26 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_5, L_6, L_7);
		goto IL_0042;
	}

IL_0026:
	{
		DefaultUriParser_t625205023 * L_8 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_8, /*hidden argument*/NULL);
		V_0 = L_8;
		DefaultUriParser_t625205023 * L_9 = V_0;
		String_t* L_10 = ___schemeName;
		NullCheck(L_9);
		UriParser_set_SchemeName_m706252033(L_9, L_10, /*hidden argument*/NULL);
		DefaultUriParser_t625205023 * L_11 = V_0;
		int32_t L_12 = ___defaultPort;
		NullCheck(L_11);
		UriParser_set_DefaultPort_m1019606244(L_11, L_12, /*hidden argument*/NULL);
		Hashtable_t3875263730 * L_13 = ___table;
		String_t* L_14 = ___schemeName;
		DefaultUriParser_t625205023 * L_15 = V_0;
		NullCheck(L_13);
		VirtActionInvoker2< Il2CppObject *, Il2CppObject * >::Invoke(26 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_13, L_14, L_15);
	}

IL_0042:
	{
		UriParser_t1660745760 * L_16 = ___uriParser;
		String_t* L_17 = ___schemeName;
		int32_t L_18 = ___defaultPort;
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(5 /* System.Void System.UriParser::OnRegister(System.String,System.Int32) */, L_16, L_17, L_18);
		return;
	}
}
// System.UriParser System.UriParser::GetParser(System.String)
extern TypeInfo* UriParser_t1660745760_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t3603717042_il2cpp_TypeInfo_var;
extern const uint32_t UriParser_GetParser_m635613298_MetadataUsageId;
extern "C"  UriParser_t1660745760 * UriParser_GetParser_m635613298 (Il2CppObject * __this /* static, unused */, String_t* ___schemeName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UriParser_GetParser_m635613298_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___schemeName;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (UriParser_t1660745760 *)NULL;
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1660745760_il2cpp_TypeInfo_var);
		UriParser_CreateDefaults_m2648397058(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___schemeName;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3603717042_il2cpp_TypeInfo_var);
		CultureInfo_t3603717042 * L_2 = CultureInfo_get_InvariantCulture_m764001524(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_3 = String_ToLower_m2140020155(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Hashtable_t3875263730 * L_4 = ((UriParser_t1660745760_StaticFields*)UriParser_t1660745760_il2cpp_TypeInfo_var->static_fields)->get_table_1();
		String_t* L_5 = V_0;
		NullCheck(L_4);
		Il2CppObject * L_6 = VirtFuncInvoker1< Il2CppObject *, Il2CppObject * >::Invoke(23 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, L_5);
		return ((UriParser_t1660745760 *)CastclassClass(L_6, UriParser_t1660745760_il2cpp_TypeInfo_var));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
