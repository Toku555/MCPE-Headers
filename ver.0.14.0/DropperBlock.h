#pragma once
class DropperBlock{
	public:
		DropperBlock(std::string const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void dispenseFrom(BlockSource &,BlockPos const&);
		void getAttachedFace(int);
		void getResource(Random &,int,int);
		void getSilkTouchItemInstance(uchar);
		void ~DropperBlock();
		void ~DropperBlock();
};
