#include "Input.h"

#include <iostream>

void Input::Tick()
{
	mCurrentKeys = SDL_GetKeyboardState(NULL); // Called every frame.
}

bool Input::isKeyPressed(SDL_Scancode _keyCode)
{
	if (mCurrentKeys[_keyCode])
	{ 
		return true; 
	}
	else 
	{
		return false; 
	}
}