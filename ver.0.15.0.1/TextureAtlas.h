#pragma once
class TextureAtlas{
	public:
		TextureAtlas(ResourceLocation const&,mce::TextureGroup *);
		TextureAtlas(ResourceLocation const&,mce::TextureGroup *);
		void _addElement(Json::Value,ParsedAtlasNode &,int);
		void _addElement(Json::Value,ParsedAtlasNode &,int);
		void _addTile(std::vector<TextureAtlasTile,std::allocator<TextureAtlasTile>> &,TextureUVCoordinateSet *,bool,ResourceLocation &,Color const&);
		void _addTile(std::vector<TextureAtlasTile,std::allocator<TextureAtlasTile>> &,TextureUVCoordinateSet *,bool,ResourceLocation &,Color const&);
		void _loadAtlasNodes(Json::Value,std::vector<ParsedAtlasNode,std::allocator<ParsedAtlasNode>> &);
		void _loadAtlasNodes(Json::Value,std::vector<ParsedAtlasNode,std::allocator<ParsedAtlasNode>> &);
		void _readNode(Json::Value,ParsedAtlasNode &,bool);
		void _readNode(Json::Value,ParsedAtlasNode &,bool);
		void _renderAtlasLevel(mce::TexturePtr &,uint,std::vector<TextureAtlasTile,std::allocator<TextureAtlasTile>> const&);
		void _renderAtlasLevel(mce::TexturePtr &,uint,std::vector<TextureAtlasTile,std::allocator<TextureAtlasTile>> const&);
		void _tryAssignUVs(uint,uint,std::vector<TextureAtlasTile,std::allocator<TextureAtlasTile>> &);
		void _tryAssignUVs(uint,uint,std::vector<TextureAtlasTile,std::allocator<TextureAtlasTile>> &);
		void getAtlasFaceSize(void);
		void getAtlasFaceSize(void);
		void getPadSize(void);
		void getPadSize(void);
		void getTextureItem(std::string const&);
		void getTextureItem(std::string const&);
		void loadMetaFile(void);
		void loadMetaFile(void);
		void onAppResumed(void);
		void onAppResumed(void);
		void redrawAtlas(void);
		void redrawAtlas(void);
		void ~TextureAtlas();
		void ~TextureAtlas();
		void ~TextureAtlas();
		void ~TextureAtlas();
};
