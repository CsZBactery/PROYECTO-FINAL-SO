// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OS_KernelManager.generated.h"

UCLASS()
class CRUSTCOREOS_API AOS_KernelManager : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AOS_KernelManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// --- COLAS DEL SISTEMA OPERATIVO ---

	// Array dinámico (Lista) para procesos en estado "Listo"
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "OS | Queues")
	TArray<class APizzaProcess*> ReadyQueue;

	// Array dinámico para procesos en estado "Bloqueado"
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "OS | Queues")
	TArray<class APizzaProcess*> BlockedQueue;

	// Array para simular los 2 núcleos (Hilos) del procesador
	// El tamaño máximo será estrictamente de 2, como pide la rúbrica
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "OS | Cores")
	TArray<class APizzaProcess*> ExecutionCores;

	// --- VARIABLES DE PLANIFICACIÓN (ROUND ROBIN) ---

	// El Quantum de tiempo máximo que un proceso normal puede estar en el núcleo
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OS | Scheduling")
	float TimeQuantum = 5.0f;

	// --- FUNCIONES DEL KERNEL ---

	// Función para admitir un nuevo proceso al sistema
	UFUNCTION(BlueprintCallable, Category = "OS | Functions")
	void AdmitNewProcess(class APizzaProcess* NewPizza);

	// Función que el planificador llama para revisar quién entra a los núcleos
	UFUNCTION(BlueprintCallable, Category = "OS | Functions")
	void SchedulerTick();
};