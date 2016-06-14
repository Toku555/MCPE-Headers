#pragma once
class PrivateKeyManager{
	public:
		PrivateKeyManager(Crypto::Asymmetric::System);
		PrivateKeyManager(Crypto::Asymmetric::System);
		PrivateKeyManager(std::string const&,std::string const&,Crypto::Asymmetric::System);
		void computeSecret(KeyManager const&);
		void computeSecret(KeyManager const&);
		void isValid(void);
		void isValid(void);
		void sign(std::string const&,Crypto::Hash::HashType);
		void sign(std::string const&,Crypto::Hash::HashType);
		void ~PrivateKeyManager();
		void ~PrivateKeyManager();
		void ~PrivateKeyManager();
		void ~PrivateKeyManager();
};
