// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMVOICEPLUGIN_SteamVoiceComponent_generated_h
#error "SteamVoiceComponent.generated.h already included, missing '#pragma once' in SteamVoiceComponent.h"
#endif
#define STEAMVOICEPLUGIN_SteamVoiceComponent_generated_h

#define HostProject_Plugins_SteamVoicePlugin_Source_SteamVoicePlugin_Public_SteamVoiceComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopSteamVoice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopSteamVoice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartSteamVoice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartSteamVoice(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_SteamVoicePlugin_Source_SteamVoicePlugin_Public_SteamVoiceComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopSteamVoice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopSteamVoice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartSteamVoice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartSteamVoice(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_SteamVoicePlugin_Source_SteamVoicePlugin_Public_SteamVoiceComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamVoiceComponent(); \
	friend STEAMVOICEPLUGIN_API class UClass* Z_Construct_UClass_USteamVoiceComponent(); \
public: \
	DECLARE_CLASS(USteamVoiceComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SteamVoicePlugin"), NO_API) \
	DECLARE_SERIALIZER(USteamVoiceComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_SteamVoicePlugin_Source_SteamVoicePlugin_Public_SteamVoiceComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSteamVoiceComponent(); \
	friend STEAMVOICEPLUGIN_API class UClass* Z_Construct_UClass_USteamVoiceComponent(); \
public: \
	DECLARE_CLASS(USteamVoiceComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SteamVoicePlugin"), NO_API) \
	DECLARE_SERIALIZER(USteamVoiceComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_SteamVoicePlugin_Source_SteamVoicePlugin_Public_SteamVoiceComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamVoiceComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamVoiceComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamVoiceComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamVoiceComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamVoiceComponent(USteamVoiceComponent&&); \
	NO_API USteamVoiceComponent(const USteamVoiceComponent&); \
public:


#define HostProject_Plugins_SteamVoicePlugin_Source_SteamVoicePlugin_Public_SteamVoiceComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamVoiceComponent(USteamVoiceComponent&&); \
	NO_API USteamVoiceComponent(const USteamVoiceComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamVoiceComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamVoiceComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamVoiceComponent)


#define HostProject_Plugins_SteamVoicePlugin_Source_SteamVoicePlugin_Public_SteamVoiceComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamVoicePlugin_Source_SteamVoicePlugin_Public_SteamVoiceComponent_h_12_PROLOG
#define HostProject_Plugins_SteamVoicePlugin_Source_SteamVoicePlugin_Public_SteamVoiceComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamVoicePlugin_Source_SteamVoicePlugin_Public_SteamVoiceComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamVoicePlugin_Source_SteamVoicePlugin_Public_SteamVoiceComponent_h_15_RPC_WRAPPERS \
	HostProject_Plugins_SteamVoicePlugin_Source_SteamVoicePlugin_Public_SteamVoiceComponent_h_15_INCLASS \
	HostProject_Plugins_SteamVoicePlugin_Source_SteamVoicePlugin_Public_SteamVoiceComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamVoicePlugin_Source_SteamVoicePlugin_Public_SteamVoiceComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamVoicePlugin_Source_SteamVoicePlugin_Public_SteamVoiceComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamVoicePlugin_Source_SteamVoicePlugin_Public_SteamVoiceComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamVoicePlugin_Source_SteamVoicePlugin_Public_SteamVoiceComponent_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamVoicePlugin_Source_SteamVoicePlugin_Public_SteamVoiceComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamVoicePlugin_Source_SteamVoicePlugin_Public_SteamVoiceComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
