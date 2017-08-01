// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SteamVoicePlugin.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1SteamVoicePlugin() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();

	STEAMVOICEPLUGIN_API class UFunction* Z_Construct_UFunction_USteamVoiceComponent_StartSteamVoice();
	STEAMVOICEPLUGIN_API class UFunction* Z_Construct_UFunction_USteamVoiceComponent_StopSteamVoice();
	STEAMVOICEPLUGIN_API class UClass* Z_Construct_UClass_USteamVoiceComponent_NoRegister();
	STEAMVOICEPLUGIN_API class UClass* Z_Construct_UClass_USteamVoiceComponent();
	STEAMVOICEPLUGIN_API class UPackage* Z_Construct_UPackage__Script_SteamVoicePlugin();
	void USteamVoiceComponent::StaticRegisterNativesUSteamVoiceComponent()
	{
		UClass* Class = USteamVoiceComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "StartSteamVoice", (Native)&USteamVoiceComponent::execStartSteamVoice },
			{ "StopSteamVoice", (Native)&USteamVoiceComponent::execStopSteamVoice },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 2);
	}
	UFunction* Z_Construct_UFunction_USteamVoiceComponent_StartSteamVoice()
	{
		UObject* Outer=Z_Construct_UClass_USteamVoiceComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartSteamVoice"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Steam Voice Plugin"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SteamVoiceComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USteamVoiceComponent_StopSteamVoice()
	{
		UObject* Outer=Z_Construct_UClass_USteamVoiceComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopSteamVoice"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Steam Voice Plugin"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SteamVoiceComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamVoiceComponent_NoRegister()
	{
		return USteamVoiceComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USteamVoiceComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_SteamVoicePlugin();
			OuterClass = USteamVoiceComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;

				OuterClass->LinkChild(Z_Construct_UFunction_USteamVoiceComponent_StartSteamVoice());
				OuterClass->LinkChild(Z_Construct_UFunction_USteamVoiceComponent_StopSteamVoice());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USteamVoiceComponent_StartSteamVoice(), "StartSteamVoice"); // 3261953827
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USteamVoiceComponent_StopSteamVoice(), "StopSteamVoice"); // 484065429
				static TCppClassTypeInfo<TCppClassTypeTraits<USteamVoiceComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("SteamVoicePlugin"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SteamVoiceComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SteamVoiceComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamVoiceComponent, 361221004);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamVoiceComponent(Z_Construct_UClass_USteamVoiceComponent, &USteamVoiceComponent::StaticClass, TEXT("/Script/SteamVoicePlugin"), TEXT("USteamVoiceComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamVoiceComponent);
	UPackage* Z_Construct_UPackage__Script_SteamVoicePlugin()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/SteamVoicePlugin")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xC2CBEC93;
			Guid.B = 0x140FF210;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
