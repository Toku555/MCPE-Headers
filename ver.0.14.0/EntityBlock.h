#pragma once
class EntityBlock{
	public:
		EntityBlock(std::string const&,int,Material const&);
		EntityBlock(std::string const&,int,std::string const&,Material const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void newBlockEntity(BlockPos const&);
		void triggerEvent(BlockSource &,BlockPos const&,int,int);
		void ~EntityBlock();
		void ~EntityBlock();
};
