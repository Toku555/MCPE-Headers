#pragma once
class FlowerFeature{
	public:
		FlowerFeature(BlockID);
		void place(BlockSource &,BlockPos const&,Random &);
		void placeFlower(BlockSource &,BlockPos const&,FullBlock,Random &);
		void ~FlowerFeature();
		void ~FlowerFeature();
};
