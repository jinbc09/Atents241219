#include "Input.h"

void Input::Initialize()
{
	for (auto type : pressActions)
	{
		type.clear();
	}
	for (auto type : releaseActions)
	{
		type.clear();
	}
	memset(keyPressed, 0, sizeof(bool) * static_cast<int>(KeyType::NUM_OF_KEYTYPE));
}

void Input::Update(float deltaTime)
{
}
