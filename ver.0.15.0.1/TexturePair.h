#pragma once
class TexturePair{
	public:
		TexturePair(TextureData &&);
		TexturePair(TextureData &&);
		TexturePair(TexturePair&&);
		TexturePair(int,int);
		TexturePair(int,int);
		void _loadTexData(void);
		void _loadTexData(void);
		void clear(void);
		void clear(void);
		void load(void);
		void load(void);
		void operator=(TexturePair&&);
		void operator=(TexturePair&&);
		void setData(std::string const&);
		void setData(std::string const&);
		void softUnload(void);
		void softUnload(void);
		void sync(void);
		void sync(void);
		void unload(void);
		void unload(void);
};
