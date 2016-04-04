#pragma once
namespace MapRenderer{
	class MapInstance{
		public:
		void MapInstance(MapItemSavedData const&,TextureGroup &,mce::TexturePtr &,mce::MaterialPtr &,mce::Mesh &,std::array<mce::Mesh,7u> &);
		void _getMapTextureName(void);
		void draw(Player *,bool);
		void updateTexture(TextureGroup &);
		void ~MapInstance();
		MapRenderer(TextureGroup &);
		void _generateMeshes(void);
		void _getMapInstance(MapItemSavedData const&);
		void _renderMapBackground(void);
		void onAppSuspended(void);
		void render(Entity &,Vec3 const&,float,float);
		void render(Player *,MapItemSavedData const&,bool);
		void resetData(void);
		void update(MapItemSavedData &);
		void ~MapRenderer();
		void ~MapRenderer();
	}
};
