#pragma once
class RestCaller{
	public:
		RestCaller(MCOConnector *,std::string const&);
		void addToCookieData(std::string &,std::string const&,std::string const&);
		void call(RestCallerType,RestCallerInterup,char const*,char const*,void (MCOConnector::*);
		void create(MCOConnector *,std::string const&);
		void del(RestCallerInterup,char const*,void (MCOConnector::*);
		void get(RestCallerInterup,char const*,void (MCOConnector::*);
		void getCookieData(void);
		void globalCleanUp(void);
		void globalInit(void);
		void post(RestCallerInterup,char const*,char const*,void (MCOConnector::*);
		void put(RestCallerInterup,char const*,char const*,void (MCOConnector::*);
		void setKey(std::string const&);
		void setSidAndUser(std::string const&,std::string const&);
		void update(void);
		void urlEscape(std::string const&);
		void ~RestCaller();
		void ~RestCaller();
};
