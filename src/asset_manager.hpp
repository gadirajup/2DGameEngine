#ifndef ASSET_MANAGER_HPP
#define ASSET_MANAGER_HPP

#include <map>
#include <string>
#include "texture_manager.hpp"
#include "vector2d.hpp"
#include "ecs/ecs.hpp"
#include "SDL2/SDL_ttf.h"

class AssetManager {
public:
	AssetManager(Manager* man);
	~AssetManager();

	void CreateProjectile(Vector2D pos, Vector2D vel, int range, int speed, std::string id);

	void AddTexture(std::string id, const char* path);
	SDL_Texture* GetTexture(std::string id);

	void AddFont(std::string id, std::string path, int fontSize);
	TTF_Font* GetFont(std::string id);

private:
	Manager* manager;
	std::map<std::string, SDL_Texture*> textures;
	std::map<std::string, TTF_Font*> fonts;
};

#endif // ASSET_MANAGER_HPP