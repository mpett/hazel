#pragma once

#ifdef HZ_PLATFORM_WINDOWS
#include "Log.h"
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized log!");
	int a = 5;
	HZ_INFO("test Var={0}", a);
	
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif
