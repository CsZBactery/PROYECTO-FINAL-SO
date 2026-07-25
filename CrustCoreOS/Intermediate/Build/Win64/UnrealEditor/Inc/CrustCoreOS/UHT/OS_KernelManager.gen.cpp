// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrustCoreOS/OS_KernelManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOS_KernelManager() {}

// Begin Cross Module References
CRUSTCOREOS_API UClass* Z_Construct_UClass_AOS_KernelManager();
CRUSTCOREOS_API UClass* Z_Construct_UClass_AOS_KernelManager_NoRegister();
CRUSTCOREOS_API UClass* Z_Construct_UClass_APizzaProcess_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_CrustCoreOS();
// End Cross Module References

// Begin Class AOS_KernelManager Function AdmitNewProcess
struct Z_Construct_UFunction_AOS_KernelManager_AdmitNewProcess_Statics
{
	struct OS_KernelManager_eventAdmitNewProcess_Parms
	{
		APizzaProcess* NewPizza;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OS | Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Funci\xef\xbf\xbdn para admitir un nuevo proceso al sistema\n" },
#endif
		{ "ModuleRelativePath", "OS_KernelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Funci\xef\xbf\xbdn para admitir un nuevo proceso al sistema" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPizza;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOS_KernelManager_AdmitNewProcess_Statics::NewProp_NewPizza = { "NewPizza", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OS_KernelManager_eventAdmitNewProcess_Parms, NewPizza), Z_Construct_UClass_APizzaProcess_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOS_KernelManager_AdmitNewProcess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOS_KernelManager_AdmitNewProcess_Statics::NewProp_NewPizza,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOS_KernelManager_AdmitNewProcess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOS_KernelManager_AdmitNewProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOS_KernelManager, nullptr, "AdmitNewProcess", nullptr, nullptr, Z_Construct_UFunction_AOS_KernelManager_AdmitNewProcess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOS_KernelManager_AdmitNewProcess_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOS_KernelManager_AdmitNewProcess_Statics::OS_KernelManager_eventAdmitNewProcess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOS_KernelManager_AdmitNewProcess_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOS_KernelManager_AdmitNewProcess_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOS_KernelManager_AdmitNewProcess_Statics::OS_KernelManager_eventAdmitNewProcess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOS_KernelManager_AdmitNewProcess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOS_KernelManager_AdmitNewProcess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOS_KernelManager::execAdmitNewProcess)
{
	P_GET_OBJECT(APizzaProcess,Z_Param_NewPizza);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AdmitNewProcess(Z_Param_NewPizza);
	P_NATIVE_END;
}
// End Class AOS_KernelManager Function AdmitNewProcess

// Begin Class AOS_KernelManager Function SchedulerTick
struct Z_Construct_UFunction_AOS_KernelManager_SchedulerTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OS | Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Funci\xef\xbf\xbdn que el planificador llama para revisar qui\xef\xbf\xbdn entra a los n\xef\xbf\xbd""cleos\n" },
#endif
		{ "ModuleRelativePath", "OS_KernelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Funci\xef\xbf\xbdn que el planificador llama para revisar qui\xef\xbf\xbdn entra a los n\xef\xbf\xbd""cleos" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOS_KernelManager_SchedulerTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOS_KernelManager, nullptr, "SchedulerTick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOS_KernelManager_SchedulerTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOS_KernelManager_SchedulerTick_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOS_KernelManager_SchedulerTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOS_KernelManager_SchedulerTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOS_KernelManager::execSchedulerTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SchedulerTick();
	P_NATIVE_END;
}
// End Class AOS_KernelManager Function SchedulerTick

// Begin Class AOS_KernelManager
void AOS_KernelManager::StaticRegisterNativesAOS_KernelManager()
{
	UClass* Class = AOS_KernelManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AdmitNewProcess", &AOS_KernelManager::execAdmitNewProcess },
		{ "SchedulerTick", &AOS_KernelManager::execSchedulerTick },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOS_KernelManager);
UClass* Z_Construct_UClass_AOS_KernelManager_NoRegister()
{
	return AOS_KernelManager::StaticClass();
}
struct Z_Construct_UClass_AOS_KernelManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OS_KernelManager.h" },
		{ "ModuleRelativePath", "OS_KernelManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReadyQueue_MetaData[] = {
		{ "Category", "OS | Queues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array din\xef\xbf\xbdmico (Lista) para procesos en estado \"Listo\"\n" },
#endif
		{ "ModuleRelativePath", "OS_KernelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array din\xef\xbf\xbdmico (Lista) para procesos en estado \"Listo\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockedQueue_MetaData[] = {
		{ "Category", "OS | Queues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array din\xef\xbf\xbdmico para procesos en estado \"Bloqueado\"\n" },
#endif
		{ "ModuleRelativePath", "OS_KernelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array din\xef\xbf\xbdmico para procesos en estado \"Bloqueado\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionCores_MetaData[] = {
		{ "Category", "OS | Cores" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array para simular los 2 n\xef\xbf\xbd""cleos (Hilos) del procesador\n// El tama\xef\xbf\xbdo m\xef\xbf\xbdximo ser\xef\xbf\xbd estrictamente de 2, como pide la r\xef\xbf\xbd""brica\n" },
#endif
		{ "ModuleRelativePath", "OS_KernelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array para simular los 2 n\xef\xbf\xbd""cleos (Hilos) del procesador\nEl tama\xef\xbf\xbdo m\xef\xbf\xbdximo ser\xef\xbf\xbd estrictamente de 2, como pide la r\xef\xbf\xbd""brica" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeQuantum_MetaData[] = {
		{ "Category", "OS | Scheduling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// El Quantum de tiempo m\xef\xbf\xbdximo que un proceso normal puede estar en el n\xef\xbf\xbd""cleo\n" },
#endif
		{ "ModuleRelativePath", "OS_KernelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "El Quantum de tiempo m\xef\xbf\xbdximo que un proceso normal puede estar en el n\xef\xbf\xbd""cleo" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReadyQueue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReadyQueue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockedQueue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlockedQueue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExecutionCores_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExecutionCores;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeQuantum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOS_KernelManager_AdmitNewProcess, "AdmitNewProcess" }, // 591743586
		{ &Z_Construct_UFunction_AOS_KernelManager_SchedulerTick, "SchedulerTick" }, // 3355228154
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOS_KernelManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOS_KernelManager_Statics::NewProp_ReadyQueue_Inner = { "ReadyQueue", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APizzaProcess_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOS_KernelManager_Statics::NewProp_ReadyQueue = { "ReadyQueue", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOS_KernelManager, ReadyQueue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReadyQueue_MetaData), NewProp_ReadyQueue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOS_KernelManager_Statics::NewProp_BlockedQueue_Inner = { "BlockedQueue", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APizzaProcess_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOS_KernelManager_Statics::NewProp_BlockedQueue = { "BlockedQueue", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOS_KernelManager, BlockedQueue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockedQueue_MetaData), NewProp_BlockedQueue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOS_KernelManager_Statics::NewProp_ExecutionCores_Inner = { "ExecutionCores", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APizzaProcess_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOS_KernelManager_Statics::NewProp_ExecutionCores = { "ExecutionCores", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOS_KernelManager, ExecutionCores), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionCores_MetaData), NewProp_ExecutionCores_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOS_KernelManager_Statics::NewProp_TimeQuantum = { "TimeQuantum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOS_KernelManager, TimeQuantum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeQuantum_MetaData), NewProp_TimeQuantum_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOS_KernelManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOS_KernelManager_Statics::NewProp_ReadyQueue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOS_KernelManager_Statics::NewProp_ReadyQueue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOS_KernelManager_Statics::NewProp_BlockedQueue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOS_KernelManager_Statics::NewProp_BlockedQueue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOS_KernelManager_Statics::NewProp_ExecutionCores_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOS_KernelManager_Statics::NewProp_ExecutionCores,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOS_KernelManager_Statics::NewProp_TimeQuantum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOS_KernelManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOS_KernelManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CrustCoreOS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOS_KernelManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOS_KernelManager_Statics::ClassParams = {
	&AOS_KernelManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOS_KernelManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOS_KernelManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOS_KernelManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AOS_KernelManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOS_KernelManager()
{
	if (!Z_Registration_Info_UClass_AOS_KernelManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOS_KernelManager.OuterSingleton, Z_Construct_UClass_AOS_KernelManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOS_KernelManager.OuterSingleton;
}
template<> CRUSTCOREOS_API UClass* StaticClass<AOS_KernelManager>()
{
	return AOS_KernelManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOS_KernelManager);
AOS_KernelManager::~AOS_KernelManager() {}
// End Class AOS_KernelManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_OS_KernelManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOS_KernelManager, AOS_KernelManager::StaticClass, TEXT("AOS_KernelManager"), &Z_Registration_Info_UClass_AOS_KernelManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOS_KernelManager), 4247187361U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_OS_KernelManager_h_3700118322(TEXT("/Script/CrustCoreOS"),
	Z_CompiledInDeferFile_FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_OS_KernelManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_OS_KernelManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
