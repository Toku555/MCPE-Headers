#pragma once
class FlatLevelSource{
	public:
		void loadChunk(LevelChunk &);
		void postProcess(ChunkViewSource &);
		void requestChunk(ChunkPos const&,ChunkSource::LoadMode);
		void ~FlatLevelSource();
		void ~FlatLevelSource();
};
