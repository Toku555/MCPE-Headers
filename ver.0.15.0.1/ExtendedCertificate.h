#pragma once
class ExtendedCertificate{
	public:
		void createIdentityCertificate(PrivateKeyManager &,long long,long long,mce::UUID const&,std::string const&,std::string const&,Json::Value const*,std::unique_ptr<Certificate,std::default_delete<Certificate>>);
		void createIdentityCertificate(PrivateKeyManager &,long long,long long,mce::UUID const&,std::string const&,std::string const&,Json::Value const*,std::unique_ptr<Certificate,std::default_delete<Certificate>>);
		void getIdentity(Certificate const&);
		void getIdentity(Certificate const&);
		void getIdentityName(Certificate const&);
		void getIdentityName(Certificate const&);
		void getXuid(Certificate const&);
		void getXuid(Certificate const&);
};
