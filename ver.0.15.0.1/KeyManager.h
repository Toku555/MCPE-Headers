#pragma once
class KeyManager{
	public:
		KeyManager(std::string const&,Crypto::Asymmetric::System);
		KeyManager(std::string const&,Crypto::Asymmetric::System);
		KeyManager(std::string const&,Crypto::Asymmetric::System);
		void getPublicKey(void);
		void getPublicKey(void);
		void isValid(void);
		void isValid(void);
		void verify(std::string const&,std::string const&,Crypto::Hash::HashType);
		void verify(std::string const&,std::string const&,Crypto::Hash::HashType);
		void ~KeyManager();
		void ~KeyManager();
		void ~KeyManager();
		void ~KeyManager();
};
