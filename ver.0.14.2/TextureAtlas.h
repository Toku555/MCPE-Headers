#pragma once
class TextureAtlas{
	public:
		void _parseJSON(Json::Value const&);
		void getAtlasFaceSize(void);
		void getTextureItem(std::string const&);
};
