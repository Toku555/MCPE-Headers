#pragma once
namespace MapRenderer{
	class MapInstance{
		public:
		void MapInstance(MapItemSavedData const&,mce::TextureGroup &,mce::TexturePtr &,mce::MaterialPtr &,mce::Mesh &,std::array<mce::Mesh,7u> &,Font &);
		void MapInstance(MapItemSavedData const&,mce::TextureGroup &,mce::TexturePtr &,mce::MaterialPtr &,mce::Mesh &,std::array<mce::Mesh,7u> &,Font &);
		void _getMapResourceLocation(void);
		void _getMapResourceLocation(void);
		void _renderLabel(Vec3 const&,std::string const&);
		void draw(Player *,bool);
		void draw(Player *,bool);
		void updateTexture(mce::TextureGroup &);
		void updateTexture(mce::TextureGroup &);
		void ~MapInstance();
		void ~MapInstance();
		MapRenderer(mce::TextureGroup &,Font &);
		MapRenderer(mce::TextureGroup &,Font &);
		void _generateMeshes(void);
		void _generateMeshes(void);
		void _getMapInstance(MapItemSavedData const&);
		void _getMapInstance(MapItemSavedData const&);
		void _renderMapBackground(void);
		void onAppSuspended(void);
		void onAppSuspended(void);
		void render(Entity &,Vec3 const&,float,float);
		void render(Entity &,Vec3 const&,float,float);
		void render(Player *,MapItemSavedData const&,bool);
		void render(Player *,MapItemSavedData const&,bool);
		void resetData(void);
		void resetData(void);
		void update(MapItemSavedData &);
		void update(MapItemSavedData &);
		void ~MapRenderer();
		void ~MapRenderer();
		void ~MapRenderer();
		void ~MapRenderer();
	}
};
