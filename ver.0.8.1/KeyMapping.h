#pragma once
class KeyMapping{
	public:
		KeyMapping(std::string const&,int);
		void operator=(KeyMapping&&);
		void ~KeyMapping();
};
