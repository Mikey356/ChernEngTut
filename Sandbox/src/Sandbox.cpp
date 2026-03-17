#include <ChernEngTut.h>


class Sandbox : public  ChernEngTut::Application
{
public:
	Sandbox(){};
	~Sandbox(){};
};


ChernEngTut::Application* ChernEngTut::CreateApplication()
{
	return new Sandbox();
}