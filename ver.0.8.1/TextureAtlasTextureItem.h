#pragma once
class TextureAtlasTextureItem{
	public:
		TextureAtlasTextureItem(TextureAtlasTextureItem const&);
		TextureAtlasTextureItem(TextureAtlasTextureItem&&);
		TextureAtlasTextureItem(std::string const&,TextureUVCoordinateSet const&,std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>> const&);
		TextureAtlasTextureItem(void);
		void getName(void);
		void getUV(int);
		void getUVCount(void);
		void operator=(TextureAtlasTextureItem const&);
		void ~TextureAtlasTextureItem();
};
