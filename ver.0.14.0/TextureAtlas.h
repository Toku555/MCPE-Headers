#pragma once
class TextureAtlas{
	public:
		TextureAtlas(std::string const&,TextureFile);
		void _parseJSON(Json::Value const&);
		void getTextureItem(std::string const&);
};
