#pragma once
class WebToken{
	public:
		void DERToBinary(std::string const&,int);
		void DERToBinary(std::string const&,int);
		void DERToSignature(std::string const&,int);
		WebToken(WebToken const&);
		WebToken(WebToken const&);
		WebToken(std::string);
		WebToken(std::string);
		WebToken(void);
		WebToken(void);
		void createFromData(Json::Value const&,PrivateKeyManager const&);
		void createFromData(Json::Value const&,PrivateKeyManager const&);
		void getSignerPublicKey(void);
		void getSignerPublicKey(void);
		void parse(Json::Value &,std::string const&);
		void parse(Json::Value &,std::string const&);
		void signatureToDER(void);
		void signatureToDER(void);
		void toString(void);
		void toString(void);
		void verify(std::vector<std::string,std::allocator<std::string>> const&);
		void verify(std::vector<std::string,std::allocator<std::string>> const&);
};
