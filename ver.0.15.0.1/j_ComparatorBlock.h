#pragma once
namespace j{
	class ComparatorBlock{
		public:
		void _installCircuit(BlockSource &,BlockPos const&,bool);
		void _refreshOutputState(BlockSource &,BlockPos const&,int);
	}
};
