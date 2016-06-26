#pragma once
class TileItem{
	public:
		TileItem(int);
		void getDescriptionId(ItemInstance const*);
		void getDescriptionId(void);
		void isEmissive(int);
		void useOn(ItemInstance *,Player *,Level *,int,int,int,int,float,float,float);
		void ~TileItem();
		void ~TileItem();
};
