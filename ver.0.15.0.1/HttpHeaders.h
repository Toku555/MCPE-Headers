#pragma once
class HttpHeaders{
	public:
		HttpHeaders(void);
		HttpHeaders(void);
		void addHeader(std::string const&,std::string const&);
		void addHeader(std::string const&,std::string const&);
		void clear(void);
		void clear(void);
		void getHeader(std::string const&,std::string &);
		void getHeader(std::string const&,std::string &);
		void getHeaders(void);
		void getState(void);
		void getState(void);
		void getStatusCode(void);
		void getStatusLine(void);
		void parse(RakNet::BitStream &);
		void parse(RakNet::BitStream &);
		void ~HttpHeaders();
		void ~HttpHeaders();
};
