#pragma once
class Textures{
	public:
		Textures(Options *,AppPlatform *);
		void _loadTexImage(ImageData const&);
		void addDynamicTexture(DynamicTexture *);
		void assignTexture(std::string const&,TextureData &,bool);
		void bind(uint);
		void clear(bool);
		void crispBlend(int,int);
		void loadAndBindTexture(std::string const&);
		void loadAndGetTextureData(std::string const&);
		void loadTexture(std::string const&,bool,bool);
		void reloadAll(void);
		void smoothBlend(int,int);
		void tick(bool);
		void ~Textures();
};
