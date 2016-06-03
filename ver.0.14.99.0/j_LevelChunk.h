#pragma once
namespace j{
	class LevelChunk{
		public:
		void changeState(ChunkState,ChunkState);
		void onBlocksChanged(void);
		void operator delete(void *);
		void trimMemoryPool(void);
		void trimMemoryPool(void);
	}
};
