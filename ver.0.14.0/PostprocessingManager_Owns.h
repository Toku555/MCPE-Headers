#pragma once
namespace PostprocessingManager{
	class Owns{
		public:
		void Owns(ChunkPos const&);
		void Owns(void);
		void operator bool(void);
		void ~Owns();
		PostprocessingManager(void);
		void _release(ChunkPos const&);
		void tryLock(ChunkPos const&);
		void ~PostprocessingManager();
	}
};
