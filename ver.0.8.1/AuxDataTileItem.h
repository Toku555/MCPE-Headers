#pragma once
class AuxDataTileItem{
	public:
		AuxDataTileItem(int,Tile *);
		void getDescription(ItemInstance const*);
		void getIcon(int,int,bool);
		void getLevelDataForAuxValue(int);
		void getName(ItemInstance const*);
		void ~AuxDataTileItem();
		void ~AuxDataTileItem();
};
