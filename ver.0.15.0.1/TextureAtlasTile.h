#pragma once
class TextureAtlasTile{
	public:
		TextureAtlasTile(Color,bool,ResourceLocation,mce::TexturePtr);
		TextureAtlasTile(Color,bool,ResourceLocation,mce::TexturePtr);
		TextureAtlasTile(TextureAtlasTile&&);
		TextureAtlasTile(TextureAtlasTile&&);
		void getActualHeight(void);
		void getActualHeight(void);
		void getActualWidth(void);
		void getActualWidth(void);
		void getArea(void);
		void getArea(void);
		void getHeight(void);
		void getHeight(void);
		void getWidth(void);
		void getWidth(void);
		void loadTexture(mce::TextureGroup &);
		void loadTexture(mce::TextureGroup &);
		void operator=(TextureAtlasTile&&);
		void operator=(TextureAtlasTile&&);
};
