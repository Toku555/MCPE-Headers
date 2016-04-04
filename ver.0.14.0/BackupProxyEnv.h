#pragma once
class BackupProxyEnv{
	public:
		BackupProxyEnv(leveldb::Env *);
		void getBackupFiles(std::string const&);
		void ~BackupProxyEnv();
		void ~BackupProxyEnv();
};
