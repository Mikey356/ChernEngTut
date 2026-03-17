#pragma once

#ifdef CT_PLATFORM_WINDOWS	

extern ChernEngTut::Application* ChernEngTut::CreateApplication();

int main(int argc, char** argv)
{
	auto app = ChernEngTut::CreateApplication();
	app->Run();
	delete app;
}
#endif