#pragma once
class LeafTile{
	public:
		LeafTile(int,std::string const&);
		void getCarriedTexture(int,int);
		void getColor(LevelSource *,int,int,int);
		void getRenderLayer(void);
		void getResource(int,Random *);
		void getResourceCount(Random *);
		void getSpawnResourcesAuxValue(int);
		void getTexture(int,int);
		void isSolidRender(void);
		void onGraphicsModeChanged(bool);
		void onRemove(Level *,int,int,int);
		void playerDestroy(Level *,Player *,int,int,int,int);
		void spawnResources(Level *,int,int,int,int,float);
		void tick(Level *,int,int,int,Random *);
		void ~LeafTile();
		void ~LeafTile();
};
