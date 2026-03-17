#pragma once

#include "Core.h"

namespace ChernEngTut {
	class CHERNENGTUT_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Defined in CLIENT 
	Application* CreateApplication();
}