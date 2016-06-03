#pragma once
class ServerInstance{
	public:
		ServerInstance(Whitelist const&,std::string const&,std::chrono::duration<long long,std::ratio<1ll,1ll>>,std::string,std::string,LevelSettings,Difficulty,int,int,int,bool,std::string,bool);
		ServerInstance(Whitelist const&,std::string const&,std::chrono::duration<long long,std::ratio<1ll,1ll>>,std::string,std::string,LevelSettings,Difficulty,int,int,int,bool,std::string,bool);
		void stop(void);
		void tick(void);
		void tick(void);
		void ~ServerInstance();
		void ~ServerInstance();
};
