#pragma once
namespace j{
	class ChunkSource{
		public:
		void _startPostProcessingArea(LevelChunk &);
		void loadChunk(LevelChunk &);
		void ~ChunkSource();
	}
};
