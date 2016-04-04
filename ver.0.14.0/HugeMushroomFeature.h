#pragma once
class HugeMushroomFeature{
	public:
		HugeMushroomFeature(int);
		HugeMushroomFeature(void);
		void _canSurvive(BlockID);
		void place(BlockSource &,BlockPos const&,Random &);
		void ~HugeMushroomFeature();
		void ~HugeMushroomFeature();
};
