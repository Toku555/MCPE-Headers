#pragma once
class BeetrootTile{
	public:
		BeetrootTile(int);
		void getBasePlantId(void);
		void getBaseSeed(void);
		void getTexture(int,int);
		void spawnItem(Level *,int,int,int,ItemInstance const&);
		void spawnResources(Level *,int,int,int,int,float);
		void ~BeetrootTile();
		void ~BeetrootTile();
};
