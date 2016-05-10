#pragma once
class BlockPlanterItem{
	public:
		BlockPlanterItem(std::string const&,int,Block *,bool);
		void isEmissive(int);
		void useOn(ItemInstance *,Player *,int,int,int,signed char,float,float,float);
		void ~BlockPlanterItem();
		void ~BlockPlanterItem();
};
