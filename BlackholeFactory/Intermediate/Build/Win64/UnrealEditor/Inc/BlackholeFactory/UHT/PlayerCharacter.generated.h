// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/PlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLACKHOLEFACTORY_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define BLACKHOLEFACTORY_PlayerCharacter_generated_h

#define FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Character_PlayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, AAllCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlackholeFactory"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Character_PlayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerCharacter(APlayerCharacter&&); \
	APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter) \
	NO_API virtual ~APlayerCharacter();


#define FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Character_PlayerCharacter_h_12_PROLOG
#define FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Character_PlayerCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Character_PlayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Character_PlayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLACKHOLEFACTORY_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Character_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS