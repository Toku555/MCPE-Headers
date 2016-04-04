#pragma once
class BlockItem{
	public:
		BlockItem(std::string const&,int);
		void buildDescriptionName(ItemInstance const&);
		void getIcon(int,int,bool);
		void getIconYOffset(void);
		void isEmissive(int);
		void useOn(ItemInstance *,Player *,int,int,int,signed char,float,float,float);
		void ~BlockItem();
		void ~BlockItem();
};
