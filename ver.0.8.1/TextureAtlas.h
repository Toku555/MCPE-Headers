#pragma once
class TextureAtlas{
	public:
		TextureAtlas(std::string const&);
		void _parseJSON(Json::Value const&);
		void getTextureItem(std::string const&);
		void load(NinecraftApp *);
};
