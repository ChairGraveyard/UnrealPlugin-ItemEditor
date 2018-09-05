#pragma once

#include "UnrealEd.h"
#include "InventorySimpleFactory.generated.h"

UCLASS()
class UInventorySimpleFactory : public UFactory
{
  GENERATED_UCLASS_BODY()
  virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
};
