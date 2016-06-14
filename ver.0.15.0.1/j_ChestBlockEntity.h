#pragma once
namespace j{
	class ChestBlockEntity{
		public:
		void _closeChest(BlockSource &);
		void onMove(BlockSource &,BlockPos const&,BlockPos const&);
		void pairWith(ChestBlockEntity*,bool);
		void setItem(int,ItemInstance *);
	}
};
