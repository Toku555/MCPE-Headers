#pragma once
namespace j{
	class TorchBlock{
		public:
		void _checkDoPop(BlockSource &,BlockPos const&);
		void canBePlacedOn(BlockSource &,BlockPos const&,signed char);
	}
};
