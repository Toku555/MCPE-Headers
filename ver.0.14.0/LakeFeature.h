#pragma once
class LakeFeature{
	public:
		LakeFeature(BlockID);
		LakeFeature(BlockID,BlockID);
		void _check(BlockPos const&,bool *);
		void place(BlockSource &,BlockPos const&,Random &);
		void ~LakeFeature();
		void ~LakeFeature();
};
