#pragma once
class TreeTile{
	public:
		TreeTile(int);
		void getDirTexture(int,int);
		void getResource(int,Random *);
		void getResourceCount(Random *);
		void getSpawnResourcesAuxValue(int);
		void getTypeDescriptionId(int);
		void onRemove(Level *,int,int,int);
		void ~TreeTile();
		void ~TreeTile();
};
