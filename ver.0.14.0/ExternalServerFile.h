#pragma once
class ExternalServerFile{
	public:
		ExternalServerFile(std::string const&);
		void addServer(std::string const&,std::string const&,int);
		void editServer(int,std::string const&,std::string const&,int);
		void getExternalServers(void);
		void removeServer(int);
		void save(void);
};
