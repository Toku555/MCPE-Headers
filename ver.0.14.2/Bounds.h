#pragma once
class Bounds{
	public:
		Bounds(BlockPos const&,BlockPos const&,int,bool);
		void contains(BlockPos const&);
};
