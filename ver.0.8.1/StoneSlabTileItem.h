#pragma once
class StoneSlabTileItem{
	public:
		void getDescriptionId(ItemInstance const*);
		void getIcon(int,int,bool);
		void getLevelDataForAuxValue(int);
		void getName(ItemInstance const*);
		void useOn(ItemInstance *,Player *,Level *,int,int,int,int,float,float,float);
		void ~StoneSlabTileItem();
		void ~StoneSlabTileItem();
};
