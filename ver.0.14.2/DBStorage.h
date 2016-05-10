#pragma once
class DBStorage{
	public:
		DBStorage(std::string const&,std::string const&);
		void _checkStatusValid(leveldb::Status const&);
		void _legacyLoadClientPlayer(std::string const&);
		void _legacyLoadPlayer(std::string const&);
		void _playerKey(Player const&);
		void _playerKey(std::string const&);
		void _read(leveldb::Slice const&,KeyValueInput &);
		void _read(std::string const&);
		void _read(std::string const&,std::string &);
		void _write(leveldb::WriteBatch &);
		void _write(std::string const&,std::string const&);
		void asyncWriteTag(std::string const&,CompoundTag &);
		void closeStorage(void);
		void createChunkStorage(std::unique_ptr<ChunkSource,std::default_delete<ChunkSource>>,StorageVersion);
		void deleteAllWithPrefix(leveldb::Slice const&);
		void getBackupFiles(void);
		void getFullPath(void);
		void getLevelId(void);
		void getState(void);
		void hasKey(std::string const&);
		void isCorrupted(void);
		void isStorageOpen(void);
		void loadAllPlayerIDs(void);
		void loadData(std::string const&);
		void loadLevelData(LevelData &);
		void loadPlayerData(std::string const&);
		void openStorage(void);
		void save(Player &);
		void saveData(std::string const&,std::string &&);
		void saveLevelData(LevelData &);
		void savePlayerData(std::string const&,std::string &&);
		void tryRepair(std::string const&);
		void writeTag(std::string const&,CompoundTag &);
		void ~DBStorage();
		void ~DBStorage();
};
