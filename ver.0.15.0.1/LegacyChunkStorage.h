#pragma once
class LegacyChunkStorage{
	public:
		LegacyChunkStorage(std::unique_ptr<ChunkSource,std::default_delete<ChunkSource>>,LevelStorage &,StorageVersion);
		LegacyChunkStorage(std::unique_ptr<ChunkSource,std::default_delete<ChunkSource>>,LevelStorage &,StorageVersion);
		void _collectInfo(bool *);
		void _isImported(ChunkPos const&);
		void _loadChunk(LevelChunk &);
		void _loadEntities(void);
		void _loadEntities(void);
		void _markChunkAsImported(ChunkPos const&);
		void _openRegionFile(void);
		void acquireDiscarded(std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>> &&);
		void acquireDiscarded(std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>> &&);
		void loadChunk(LevelChunk &);
		void loadChunk(LevelChunk &);
		void saveLiveChunk(LevelChunk &);
		void saveLiveChunk(LevelChunk &);
		void ~LegacyChunkStorage();
		void ~LegacyChunkStorage();
		void ~LegacyChunkStorage();
		void ~LegacyChunkStorage();
};
