#pragma once
class Certificate{
	public:
		Certificate(Certificate const&);
		Certificate(Certificate const&);
		Certificate(Certificate const&);
		Certificate(Certificate&&);
		Certificate(Certificate&&);
		Certificate(UnverifiedCertificate const&,std::unique_ptr<Certificate,std::default_delete<Certificate>>);
		void createBasicCertificate(PrivateKeyManager &,long long,long long,std::string const&,bool,Json::Value const*,std::unique_ptr<Certificate,std::default_delete<Certificate>>);
		void createBasicCertificate(PrivateKeyManager &,long long,long long,std::string const&,bool,Json::Value const*,std::unique_ptr<Certificate,std::default_delete<Certificate>>);
		void getData(std::string const&,Json::Value const&);
		void getExpirationDate(void);
		void getExpirationDate(void);
		void getExtraData(std::string const&,Json::Value const&);
		void getExtraData(std::string const&,Json::Value const&);
		void getIdentityPublicKey(void);
		void getIdentityPublicKey(void);
		void getNotBeforeDate(void);
		void getNotBeforeDate(void);
		void getParentCertificate(void);
		void getSignerPublicKey(void);
		void isCertificateAuthority(void);
		void isCertificateAuthority(void);
		void isValid(void);
		void isValid(void);
		void toString(void);
		void toString(void);
		void validate(long long);
		void validate(long long);
};
