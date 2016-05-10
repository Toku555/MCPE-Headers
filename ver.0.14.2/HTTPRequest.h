#pragma once
class HTTPRequest{
	public:
		void abort(void);
		void getCookieData(void);
		void getCookieDataAsString(void);
		void getRequestBody(void);
		void getRequestContentType(void);
		void getRequestMethod(void);
		void getResponse(void);
		void getURL(void);
		void getVerbAsString(void);
		void send(void);
		void setCookies(std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>);
		void setRequestBody(std::string const&);
		void setRequestContentType(std::string const&);
		void setRequestMethod(HTTPRequest::Method);
		void setResponse(int,std::string const&,std::unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::string>>>);
		void setResponseStatus(HTTPResponse::Status);
};
