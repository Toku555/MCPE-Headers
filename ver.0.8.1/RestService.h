#pragma once
class RestService{
	public:
		RestService(std::string const&);
		void getCookieData(void);
		void getCookieDataAsString(void);
		void getServiceURL(void);
		void setCookieData(std::string const&,std::string const&);
};
