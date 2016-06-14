#pragma once
namespace j{
	class HeavyBlock{
		public:
		void checkSlide(BlockSource &,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
	}
};
