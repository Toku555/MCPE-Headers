#pragma once
class TextureData{
	public:
		TextureData(TextureData&&);
		TextureData(int,int);
		TextureData(void);
		void _loadMipmap(ImageData &,int);
		void _loadTexData(void);
		void _move(TextureData&);
		void clear(void);
		void load(void);
		void loadMipmap(ImageData &);
		void operator=(TextureData&&);
		void setData(std::string const&);
		void sync(void);
		void unload(void);
		void ~TextureData();
};
