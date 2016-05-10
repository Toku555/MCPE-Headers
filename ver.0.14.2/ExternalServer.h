#pragma once
class ExternalServer{
	public:
		ExternalServer(int,std::string const&,std::string const&,int);
		ExternalServer(void);
		void getAddress(void);
		void getId(void);
		void getMaxPlayers(void);
		void getName(void);
		void getPlayers(void);
		void getPort(void);
		void getProtocol(void);
		void getTitle(void);
		void getVersion(void);
		void isValidIp(std::string const&);
		void setAddress(std::string const&);
		void setMaxPlayers(int);
		void setName(std::string const&);
		void setPlayers(int);
		void setPort(int);
		void setProtocol(int);
		void setTitle(std::string const&);
		void setVersion(std::string const&);
};
