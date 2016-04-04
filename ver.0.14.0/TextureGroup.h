#pragma once
class TextureGroup{
	public:
		TextureGroup(void);
		void _addRef(mce::TexturePtr &);
		void _getTexture(std::string const&);
		void _initializeStagingTexture(void);
		void _removeRef(mce::TexturePtr &);
		void addEmptyTexture(std::string const&,int,int);
		void addManualTexture(TextureData &);
		void addTickingTexture(std::unique_ptr<TickingTexture,std::default_delete<TickingTexture>>);
		void findOrLoadTexture(std::string const&);
		void getInternalNameFor(DynamicTexture);
		void getTexture(DynamicTexture);
		void getTexture(std::string const&);
		void getTextureData(mce::TexturePtr const&);
		void getTextureData(std::string const&);
		void loadTexture(std::string const&,bool,bool,bool,bool);
		void reloadAll(void);
		void removeManualTextureData(TextureData &);
		void tick(bool);
		void unloadAll(void);
		void unloadTexture(std::string const&);
		void uploadTexture(std::string const&,TextureData &&);
		void ~TextureGroup();
};
