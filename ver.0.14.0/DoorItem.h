#pragma once
class DoorItem{
	public:
		DoorItem(std::string const&,int,Material const&,DoorBlock::DoorType);
		void place(BlockSource *,int,int,int,int,Block *);
		void useOn(ItemInstance *,Player *,int,int,int,signed char,float,float,float);
		void ~DoorItem();
		void ~DoorItem();
};
