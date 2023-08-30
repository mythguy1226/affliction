// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"

void ADoor::OpenDoor()
{
	// Begin sequence
	m_bIsOpening = true;
}

void ADoor::Tick(float DeltaTime)
{
	// Check if door is opening
	if (m_bIsOpening)
	{
		// Get the travel distance
		float fTravelDist = (m_fDistance / m_fTimeToOpen) * DeltaTime;

		// Get the new location to move to
		FVector vOffset = FVector(0.0f, 0.0f, -fTravelDist);
		SetActorLocation(GetActorLocation() + vOffset);

		// Update total distance
		m_fTotalDistanceTraveled += fTravelDist;

		// If location is reached then reset distance and stop opening
		if (m_fTotalDistanceTraveled >= m_fDistance)
		{
			m_bIsOpening = false;
			m_fTotalDistanceTraveled = 0.0f;

			// Iterate through and unlock all spawns
			if (m_aSpawnsToUnlock.Num() > 0)
			{
				for (int i = 0; i < m_aSpawnsToUnlock.Num(); i++)
				{
					m_aSpawnsToUnlock[i]->m_bIsLocked = false;
				}
			}
		}
	}
}
