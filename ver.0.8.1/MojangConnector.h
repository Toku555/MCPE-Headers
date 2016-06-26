#pragma once
class MojangConnector{
	public:
		MojangConnector(Minecraft *);
		void clearLoginInformation(void);
		void getAccountService(void);
		void getConnectionStatus(void);
		void getEncryptedJoinDataString(long long,std::string const&,std::string const&);
		void getJoinMCOPayload(void);
		void getLoginInformation(void);
		void getMCOParser(void);
		void getMCOServerList(void);
		void getMCOService(void);
		void getServerKey(void);
		void getThreadCollection(void);
		void isMCOCreateServersEnabled(void);
		void isServiceEnabled(void);
		void setLoginInformation(LoginInformation const&);
		void setMCOCreateServersEnabled(bool);
		void setMCOServerList(std::shared_ptr<std::unordered_map<long long,MCOServerListItem,std::hash<long long>,std::equal_to<long long>,std::allocator<std::pair<long long const,MCOServerListItem>>>>);
		void setMCOServiceEnabled(bool);
		void setPayload(std::string const&);
		void setServerKey(std::string const&);
		void setStatus(MojangConnectionStatus);
		void updateUIThread(void);
		void urlEncode(std::string);
		void ~MojangConnector();
};
