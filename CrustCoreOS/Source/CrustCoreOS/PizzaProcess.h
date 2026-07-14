#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
// Este .generated.h SIEMPRE debe ser el último include de la lista por reglas de compilación de Unreal
#include "PizzaProcess.generated.h" 

// 1. PRIMERO VAN LOS ENUMS
UENUM(BlueprintType)
enum class EProcessState : uint8
{
    New         UMETA(DisplayName = "Nuevo (Menú)"),
    Ready       UMETA(DisplayName = "Listo (Caja)"),
    Running     UMETA(DisplayName = "Ejecución (Cocina)"),
    Blocked     UMETA(DisplayName = "Bloqueado (Sin Suministros)"),
    Exit        UMETA(DisplayName = "Terminado (Entrega)")
};

// 2. SEGUNDO VAN LOS STRUCTS (EL BCP)
USTRUCT(BlueprintType)
struct FProcessBlockData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BCP")
    int32 ProcessID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BCP")
    int32 Priority;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BCP")
    float RemainingExecutionTime;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BCP")
    float TotalExecutionCycle;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BCP")
    EProcessState CurrentState;
};

// 3. POR ÚLTIMO VA LA CLASE DEL ACTOR
UCLASS()
class CRUSTCOREOS_API APizzaProcess : public AActor
{
    GENERATED_BODY()

public:
    APizzaProcess();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // Aquí abajo creamos una variable interna para que este Actor tenga su propio BCP asignado
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pizza | OS Data")
    FProcessBlockData BCPData;
};