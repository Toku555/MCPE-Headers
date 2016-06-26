#pragma once
namespace WoodSlabTile{
	class Item{
		public:
		void useOn(ItemInstance *,Player *,Level *,int,int,int,int,float,float,float);
		void ~Item();
		void ~Item();
		WoodSlabTile(int,bool);
		void getResource(int,Random *);
		void getSpawnResourcesAuxValue(int);
		void getTexture(int,int);
		void getTypeDescriptionId(int);
		void ~WoodSlabTile();
		void ~WoodSlabTile();
	}
};
