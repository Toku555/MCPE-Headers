#pragma once
class ConnectionRequest{
	public:
		ConnectionRequest(ConnectionRequest const&);
		ConnectionRequest(ConnectionRequest const&);
		ConnectionRequest(std::unique_ptr<WebToken,std::default_delete<WebToken>>,std::string const&);
		ConnectionRequest(std::unique_ptr<WebToken,std::default_delete<WebToken>>,std::string const&);
		void create(PrivateKeyManager &,Certificate const&,std::string const&,ulong long,std::string const&,std::string const&);
		void create(PrivateKeyManager &,Certificate const&,std::string const&,ulong long,std::string const&,std::string const&);
		void fromString(std::string const&);
		void fromString(std::string const&);
		void getBinaryData(std::string const&);
		void getCertificate(void);
		void getCertificate(void);
		void getClientRandomId(void);
		void getClientRandomId(void);
		void getData(std::string const&);
		void getServerAddress(void);
		void getSkinData(void);
		void getSkinData(void);
		void getSkinId(void);
		void getSkinId(void);
		void toString(void);
		void toString(void);
		void validate(std::unique_ptr<Certificate,std::default_delete<Certificate>>,long long);
		void verify(std::vector<std::string,std::allocator<std::string>> const&,long long);
		void verify(std::vector<std::string,std::allocator<std::string>> const&,long long);
		void verifySelfSigned(void);
		void verifySelfSigned(void);
		void ~ConnectionRequest();
		void ~ConnectionRequest();
};
