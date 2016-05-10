#pragma once
class HangingEntityItem{
	public:
		HangingEntityItem(std::string const&,int,EntityType);
		void createEntity(BlockSource &,int,int,int,int);
		void useOn(ItemInstance *,Player *,int,int,int,signed char,float,float,float);
		void ~HangingEntityItem();
		void ~HangingEntityItem();
};
