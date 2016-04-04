#pragma once
class AuxDataBlockItem{
	public:
		AuxDataBlockItem(std::string const&,int,Block *);
		void buildDescriptionName(ItemInstance const&);
		void getLevelDataForAuxValue(int);
		void ~AuxDataBlockItem();
		void ~AuxDataBlockItem();
};
