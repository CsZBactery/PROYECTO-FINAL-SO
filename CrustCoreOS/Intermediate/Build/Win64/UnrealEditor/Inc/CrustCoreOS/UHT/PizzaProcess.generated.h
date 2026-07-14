// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PizzaProcess.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRUSTCOREOS_PizzaProcess_generated_h
#error "PizzaProcess.generated.h already included, missing '#pragma once' in PizzaProcess.h"
#endif
#define CRUSTCOREOS_PizzaProcess_generated_h

#define FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_PizzaProcess_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProcessBlockData_Statics; \
	CRUSTCOREOS_API static class UScriptStruct* StaticStruct();


template<> CRUSTCOREOS_API UScriptStruct* StaticStruct<struct FProcessBlockData>();

#define FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_PizzaProcess_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPizzaProcess(); \
	friend struct Z_Construct_UClass_APizzaProcess_Statics; \
public: \
	DECLARE_CLASS(APizzaProcess, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrustCoreOS"), NO_API) \
	DECLARE_SERIALIZER(APizzaProcess)


#define FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_PizzaProcess_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APizzaProcess(APizzaProcess&&); \
	APizzaProcess(const APizzaProcess&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APizzaProcess); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APizzaProcess); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APizzaProcess) \
	NO_API virtual ~APizzaProcess();


#define FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_PizzaProcess_h_42_PROLOG
#define FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_PizzaProcess_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_PizzaProcess_h_45_INCLASS_NO_PURE_DECLS \
	FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_PizzaProcess_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRUSTCOREOS_API UClass* StaticClass<class APizzaProcess>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cesar_OneDrive_Documentos_Unreal_Projects_PROYECTO_FINAL_SO_CrustCoreOS_Source_CrustCoreOS_PizzaProcess_h


#define FOREACH_ENUM_EPROCESSSTATE(op) \
	op(EProcessState::New) \
	op(EProcessState::Ready) \
	op(EProcessState::Running) \
	op(EProcessState::Blocked) \
	op(EProcessState::Exit) 

enum class EProcessState : uint8;
template<> struct TIsUEnumClass<EProcessState> { enum { Value = true }; };
template<> CRUSTCOREOS_API UEnum* StaticEnum<EProcessState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
