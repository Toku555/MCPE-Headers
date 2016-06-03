#pragma once
class ExternalServerFile{
	public:
		ExternalServerFile(std::string const&);
		ExternalServerFile(std::string const&);
		void addServer(std::string const&,std::string const&,int);
		void addServer(std::string const&,std::string const&,int);
		void editServer(int,std::string const&,std::string const&,int);
		void getExternalServers(void);
		void getExternalServers(void);
		void load(void);
		void removeServer(int);
		void removeServer(int);
		void save(void);
		void save(void);
};
