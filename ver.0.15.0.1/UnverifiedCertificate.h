#pragma once
class UnverifiedCertificate{
	public:
		UnverifiedCertificate(UnverifiedCertificate const&);
		UnverifiedCertificate(UnverifiedCertificate const&);
		UnverifiedCertificate(UnverifiedCertificate const&);
		UnverifiedCertificate(UnverifiedCertificate&&);
		UnverifiedCertificate(UnverifiedCertificate&&);
		UnverifiedCertificate(WebToken const&,std::unique_ptr<UnverifiedCertificate,std::default_delete<UnverifiedCertificate>>);
		void addToChain(Json::Value &);
		void addToChain(Json::Value &);
		void fromString(std::string const&);
		void fromString(std::string const&);
		void getIdentityPublicKey(void);
		void getIdentityPublicKey(void);
		void toString(void);
		void toString(void);
		void verify(std::vector<std::string,std::allocator<std::string>> const&);
		void verify(std::vector<std::string,std::allocator<std::string>> const&);
		void ~UnverifiedCertificate();
		void ~UnverifiedCertificate();
};
