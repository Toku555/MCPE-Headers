#pragma once
namespace j{
	class LiquidBlock{
		public:
		void solidify(BlockSource &,BlockPos const&,BlockPos const&);
		void trySpreadFire(BlockSource &,BlockPos const&,Random &);
	}
};
