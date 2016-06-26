#pragma once
class MCOParser{
	public:
		void parseErrorMessage(std::string const&,std::string &,int &);
		void parseJoinWorld(std::string const&,std::string &,ushort &,std::string &);
		void parseMCOAccountValidSessionReturnValue(std::string const&);
		void parseServerList(std::string const&);
		void parseStatus(std::string const&,bool &,bool &,bool &);
};
