#pragma once
#include "System.h"

class Input : public System
{
public:
	virtual void Initialize() override;
	virtual void Destroy() override;
	virtual void Update(float deltaTime) override;
};

