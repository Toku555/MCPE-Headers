#pragma once
namespace j{
	class NetworkHandler{
		public:
		void closeConnection(RakNet::RakNetGUID const&,std::string const&);
		void getServerLocator(void);
	}
};
