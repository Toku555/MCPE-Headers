#pragma once
class EntityBlock{
	public:
		EntityBlock(std::string const&,int,Material const&);
		EntityBlock(std::string const&,int,Material const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void newBlockEntity(BlockPos const&,BlockID);
		void newBlockEntity(BlockPos const&,BlockID);
		void triggerEvent(BlockSource &,BlockPos const&,int,int);
		void triggerEvent(BlockSource &,BlockPos const&,int,int);
		void ~EntityBlock();
		void ~EntityBlock();
};
