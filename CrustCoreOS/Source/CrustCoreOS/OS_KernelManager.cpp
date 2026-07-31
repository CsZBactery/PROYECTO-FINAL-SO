// Fill out your copyright notice in the Description page of Project Settings.

#include "OS_KernelManager.h"
#include "PizzaProcess.h" // ¡Muy importante incluir esto para que el Kernel reconozca los procesos!

// Sets default values
AOS_KernelManager::AOS_KernelManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Inicializamos el array de los núcleos para que tenga exactamente 2 espacios disponibles,
	// simulando así nuestro procesador Dual-Core.
	ExecutionCores.SetNum(2);
}

// Called when the game starts or when spawned
void AOS_KernelManager::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AOS_KernelManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Hacemos que el planificador se esté evaluando constantemente
	SchedulerTick();
}


// --- LÓGICA DEL KERNEL ---

void AOS_KernelManager::AdmitNewProcess(APizzaProcess* NewPizza)
{
	if (NewPizza != nullptr)
	{
		// Cuando entra una nueva orden, cambia su estado a "Listo" y entra a la cola
		NewPizza->BCPData.CurrentState = EProcessState::Ready;
		ReadyQueue.Add(NewPizza);
	}
}

void AOS_KernelManager::SchedulerTick()
{
	// Si hay espacio en los núcleos (Dual-Core) y hay procesos esperando en la cola de listos
	for (int32 i = 0; i < ExecutionCores.Num(); i++)
	{
		if (ExecutionCores[i] == nullptr && ReadyQueue.Num() > 0)
		{
			// Sacamos el primer proceso de la cola de listos (FIFO / Round Robin básico)
			APizzaProcess* NextProcess = ReadyQueue[0];
			ReadyQueue.RemoveAt(0);

			if (NextProcess != nullptr)
			{
				// Lo asignamos al núcleo disponible
				ExecutionCores[i] = NextProcess;

				// Cambiamos su estado BCP a Ejecución (Running)
				NextProcess->BCPData.CurrentState = EProcessState::Running;
			}
		}
	}
}