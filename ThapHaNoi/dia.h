
#ifndef _BASE_OBJECT_H_
#define _BASE_OBJECT_H_

#include <SDL.h>
#include <SDL_image.h>
#include <Windows.h>
#include <iostream>
#include <vector> 

class BaseObject
{
public:
	BaseObject(int line);
	~BaseObject();
	SDL_Texture* GetObject() const { return p_object_; }

	virtual bool LoadImg(std::string path, SDL_Renderer* screen);
	void Render(SDL_Renderer* des, const SDL_Rect* clip = NULL);
	void Free();

protected:
	SDL_Texture* p_object_;
	SDL_Rect rect_;
};
#endif // !_BASE_OBJECT_H_
