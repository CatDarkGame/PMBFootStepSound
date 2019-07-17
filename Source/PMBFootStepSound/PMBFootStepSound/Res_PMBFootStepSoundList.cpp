// Fill out your copyright notice in the Description page of Project Settings.


#include "Res_PMBFootStepSoundList.h"
#include "Sound/SoundBase.h"

USoundBase* URes_PMBFootStepSoundList::GetSound(FString sSoundName)
{
	for (TMap<FString, USoundBase*>::TIterator it = m_pSoundList.CreateIterator(); it; ++it)
	{
		if (it->Key == sSoundName)
		{
			return it->Value;
		}
	}
	return nullptr;
}