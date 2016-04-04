#pragma once
class TextureAtlasTextureItem{
	public:
		TextureAtlasTextureItem(TextureAtlasTextureItem const&);
		TextureAtlasTextureItem(std::string const&,std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>> const&);
		TextureAtlasTextureItem(void);
		void getName(void);
		void operator[](int);
		void uvCount(void);
};
