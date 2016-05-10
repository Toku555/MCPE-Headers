#pragma once
class LegacyChunkStorage{
	public:
		void _collectInfo(bool *);
		void _loadChunk(LevelChunk &);
		void _loadEntities(void);
		void _markChunkAsImported(ChunkPos const&);
		void _openRegionFile(void);
		void acquireDiscarded(std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>> &&);
		void loadChunk(LevelChunk &);
		void saveLiveChunk(LevelChunk &);
		void ~LegacyChunkStorage();
		void ~LegacyChunkStorage();
};
