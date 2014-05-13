#pragma once

class GAMESPEC_EXPORT GameInit
{
public:
	static bool GetGameLoaded();

	static void LoadGameFirstLaunch(bool (*callBeforeLoad)());

	static void SetLoadScreens();

	static void ReloadGame();
};