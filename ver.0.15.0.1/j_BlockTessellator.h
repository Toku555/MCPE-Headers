#pragma once
namespace j{
	class BlockTessellator{
		public:
		void clearBlockCache(void);
		void tessellateBlockInWorld(Block &,BlockPos const&,int);
	}
};
