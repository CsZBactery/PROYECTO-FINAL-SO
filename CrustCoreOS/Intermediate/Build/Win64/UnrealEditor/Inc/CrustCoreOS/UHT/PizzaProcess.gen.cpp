// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrustCoreOS/PizzaProcess.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePizzaProcess() {}

// Begin Cross Module References
CRUSTCOREOS_API UClass* Z_Construct_UClass_APizzaProcess();
CRUSTCOREOS_API UClass* Z_Construct_UClass_APizzaProcess_NoRegister();
CRUSTCOREOS_API UEnum* Z_Construct_UEnum_CrustCoreOS_EProcessState();
CRUSTCOREOS_API UScriptStruct* Z_Construct_UScriptStruct_FProcessBlockData();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_CrustCoreOS();
// End Cross Module References

// Begin Enum EProcessState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProcessState;
static UEnum* EProcessState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProcessState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProcessState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CrustCoreOS_EProcessState, (UObject*)Z_Construct_UPackage__Script_CrustCoreOS(), TEXT("EProcessState"));
	}
	return Z_Registration_Info_UEnum_EProcessState.OuterSingleton;
}
template<> CRUSTCOREOS_API UEnum* StaticEnum<EProcessState>()
{
	return EProcessState_StaticEnum();
}
struct Z_Construct_UEnum_CrustCoreOS_EProcessState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Blocked.DisplayName", "Bloqueado (Sin Suministros)" },
		{ "Blocked.Name", "EProcessState::Blocked" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 1. PRIMERO VAN LOS ENUMS\n" },
#endif
		{ "Exit.DisplayName", "Terminado (Entrega)" },
		{ "Exit.Name", "EProcessState::Exit" },
		{ "ModuleRelativePath", "PizzaProcess.h" },
		{ "New.DisplayName", "Nuevo (Men\xef\xbf\xbd)" },
		{ "New.Name", "EProcessState::New" },
		{ "Ready.DisplayName", "Listo (Caja)" },
		{ "Ready.Name", "EProcessState::Ready" },
		{ "Running.DisplayName", "Ejecuci\xef\xbf\xbdn (Cocina)" },
		{ "Running.Name", "EProcessState::Running" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "1. PRIMERO VAN LOS ENUMS" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProcessState::New", (int64)EProcessState::New },
		{ "EProcessState::Ready", (int64)EProcessState::Ready },
		{ "EProcessState::Running", (int64)EProcessState::Running },
		{ "EProcessState::Blocked", (int64)EProcessState::Blocked },
		{ "EProcessState::Exit", (int64)EProcessState::Exit },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CrustCoreOS_EProcessState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CrustCoreOS,
	nullptr,
	"EProcessState",
	"EProcessState",
	Z_Construct_UEnum_CrustCoreOS_EProcessState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CrustCoreOS_EProcessState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CrustCoreOS_EProcessState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CrustCoreOS_EProcessState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CrustCoreOS_EProcessState()
{
	if (!Z_Registration_Info_UEnum_EProcessState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProcessState.InnerSingleton, Z_Construct_UEnum_CrustCoreOS_EProcessState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProcessState.InnerSingleton;
}
// End Enum EProcessState

// Begin ScriptStruct FProcessBlockData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProcessBlockData;
class UScriptStruct* FProcessBlockData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProcessBlockData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProcessBlockData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProcessBlockData, (UObject*)Z_Construct_UPackage__Script_CrustCoreOS(), TEXT("ProcessBlockData"));
	}
	return Z_Registration_Info_UScriptStruct_ProcessBlockData.OuterSingleton;
}
template<> CRUSTCOREOS_API UScriptStruct* StaticStruct<FProcessBlockData>()
{
	return FProcessBlockData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProcessBlockData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 2. SEGUNDO VAN LOS STRUCTS (EL BCP)\n" },
#endif
		{ "ModuleRelativePath", "PizzaProcess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "2. SEGUNDO VAN LOS STRUCTS (EL BCP)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcessID_MetaData[] = {
		{ "Category", "BCP" },
		{ "ModuleRelativePath", "PizzaProcess.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "BCP" },
		{ "ModuleRelativePath", "PizzaProcess.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingExecutionTime_MetaData[] = {
		{ "Category", "BCP" },
		{ "ModuleRelativePath", "PizzaProcess.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalExecutionCycle_MetaData[] = {
		{ "Category", "BCP" },
		{ "ModuleRelativePath", "PizzaProcess.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "BCP" },
		{ "ModuleRelativePath", "PizzaProcess.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProcessID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RemainingExecutionTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalExecutionCycle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProcessBlockData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProcessBlockData_Statics::NewProp_ProcessID = { "ProcessID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProcessBlockData, ProcessID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcessID_MetaData), NewProp_ProcessID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProcessBlockData_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProcessBlockData, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProcessBlockData_Statics::NewProp_RemainingExecutionTime = { "RemainingExecutionTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProcessBlockData, RemainingExecutionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingExecutionTime_MetaData), NewProp_RemainingExecutionTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProcessBlockData_Statics::NewProp_TotalExecutionCycle = { "TotalExecutionCycle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProcessBlockData, TotalExecutionCycle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalExecutionCycle_MetaData), NewProp_TotalExecutionCycle_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProcessBlockData_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProcessBlockData_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProcessBlockData, CurrentState), Z_Construct_UEnum_CrustCoreOS_EProcessState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 3977928324
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProcessBlockData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessBlockData_Statics::NewProp_ProcessID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessBlockData_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessBlockData_Statics::NewProp_RemainingExecutionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessBlockData_Statics::NewProp_TotalExecutionCycle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessBlockData_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessBlockData_Statics::NewProp_CurrentState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessBlockData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProcessBlockData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CrustCoreOS,
	nullptr,
	&NewStructOps,
	"ProcessBlockData",
	Z_Construct_UScriptStruct_FProcessBlockData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessBlockData_Statics::PropPointers),
	sizeof(FProcessBlockData),
	alignof(FProcessBlockData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessBlockData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProcessBlockData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProcessBlockData()
{
	if (!Z_Registration_Info_UScriptStruct_ProcessBlockData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProcessBlockData.InnerSingleton, Z_Construct_UScriptStruct_FProcessBlockData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProcessBlockData.InnerSingleton;
}
// End ScriptStruct FProcessBlockData

// Begin Class APizzaProcess
void APizzaProcess::StaticRegisterNativesAPizzaProcess()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APizzaProcess);
UClass* Z_Construct_UClass_APizzaProcess_NoRegister()
{
	return APizzaProcess::StaticClass();
}
struct Z_Construct_UClass_APizzaProcess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 3. POR \xef\xbf\xbdLTIMO VA LA CLASE DEL ACTOR\n" },
#endif
		{ "IncludePath", "PizzaProcess.h" },
		{ "ModuleRelativePath", "PizzaProcess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "3. POR \xef\xbf\xbdLTIMO VA LA CLASE DEL ACTOR" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BCPData_MetaData[] = {
		{ "Category", "Pizza | OS Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Aqu\xef\xbf\xbd abajo creamos una variable interna para que este Actor tenga su propio BCP asignado\n" },
#endif
		{ "ModuleRelativePath", "PizzaProcess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Aqu\xef\xbf\xbd abajo creamos una variable interna para que este Actor tenga su propio BCP asignado" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BCPData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APizzaProcess>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APizzaProcess_Statics::NewProp_BCPData = { "BCPData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APizzaProcess, BCPData), Z_Construct_UScriptStruct_FProcessBlockData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BCPData_MetaData), NewProp_BCPData_MetaData) }; // 1917225323
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APizzaProcess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APizzaProcess_Statics::NewProp_BCPData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APizzaProcess_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APizzaProcess_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CrustCoreOS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APizzaProcess_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APizzaProcess_Statics::ClassParams = {
	&APizzaProcess::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APizzaProcess_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APizzaProcess_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APizzaProcess_Statics::Class_MetaDataParams), Z_Construct_UClass_APizzaProcess_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APizzaProcess()
{
	if (!Z_Registration_Info_UClass_APizzaProcess.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APizzaProcess.OuterSingleton, Z_Construct_UClass_APizzaProcess_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APizzaProcess.OuterSingleton;
}
template<> CRUSTCOREOS_API UClass* StaticClass<APizzaProcess>()
{
	return APizzaProcess::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APizzaProcess);
APizzaProcess::~APizzaProcess() {}
// End Class APizzaProcess

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_PizzaProcess_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EProcessState_StaticEnum, TEXT("EProcessState"), &Z_Registration_Info_UEnum_EProcessState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3977928324U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProcessBlockData::StaticStruct, Z_Construct_UScriptStruct_FProcessBlockData_Statics::NewStructOps, TEXT("ProcessBlockData"), &Z_Registration_Info_UScriptStruct_ProcessBlockData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProcessBlockData), 1917225323U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APizzaProcess, APizzaProcess::StaticClass, TEXT("APizzaProcess"), &Z_Registration_Info_UClass_APizzaProcess, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APizzaProcess), 719419019U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_PizzaProcess_h_309968328(TEXT("/Script/CrustCoreOS"),
	Z_CompiledInDeferFile_FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_PizzaProcess_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_PizzaProcess_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_PizzaProcess_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_PizzaProcess_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_PizzaProcess_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_PizzaProcess_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
