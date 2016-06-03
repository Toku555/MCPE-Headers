#pragma once
namespace j{
	class BlockEntity{
		public:
		void clearCache(void);
		void getPosition(void);
		void onRemoved(BlockSource &);
		void setChanged(void);
		void tick(BlockSource &);
		void ~BlockEntity();
	}
};
