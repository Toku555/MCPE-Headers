#pragma once
class SkullItem{
	public:
		SkullItem(std::string const&,int);
		void buildDescriptionName(ItemInstance const&);
		void getIcon(int,int,bool);
		void getLevelDataForAuxValue(int);
		void useOn(ItemInstance *,Player *,int,int,int,signed char,float,float,float);
		void ~SkullItem();
		void ~SkullItem();
};
