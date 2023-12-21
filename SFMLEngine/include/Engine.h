#pragma once

#include "ModuleManager.h"
#include <fstream>
#include <iostream>
#include "Modules/InputModule.h"

class Engine
{
public:
	static Engine* GetInstance();

	void Init() const;
	void Run() const;
	void Quit() { shouldQuit = true; }

	ModuleManager* GetModuleManager() const { return moduleManager; }

private:
	static Engine* instance;

	ModuleManager* moduleManager = new ModuleManager;

	bool shouldQuit = false;
};

void SetSettingsOnFile();
