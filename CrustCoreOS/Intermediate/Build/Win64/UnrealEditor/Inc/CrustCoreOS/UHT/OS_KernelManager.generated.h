// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OS_KernelManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APizzaProcess;
#ifdef CRUSTCOREOS_OS_KernelManager_generated_h
#error "OS_KernelManager.generated.h already included, missing '#pragma once' in OS_KernelManager.h"
#endif
#define CRUSTCOREOS_OS_KernelManager_generated_h

#define FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_OS_KernelManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSchedulerTick); \
	DECLARE_FUNCTION(execAdmitNewProcess);


#define FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_OS_KernelManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOS_KernelManager(); \
	friend struct Z_Construct_UClass_AOS_KernelManager_Statics; \
public: \
	DECLARE_CLASS(AOS_KernelManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrustCoreOS"), NO_API) \
	DECLARE_SERIALIZER(AOS_KernelManager)


#define FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_OS_KernelManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOS_KernelManager(AOS_KernelManager&&); \
	AOS_KernelManager(const AOS_KernelManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOS_KernelManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOS_KernelManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOS_KernelManager) \
	NO_API virtual ~AOS_KernelManager();


#define FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_OS_KernelManager_h_9_PROLOG
#define FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_OS_KernelManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_OS_KernelManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_OS_KernelManager_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_OS_KernelManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRUSTCOREOS_API UClass* StaticClass<class AOS_KernelManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_OS_KernelManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
