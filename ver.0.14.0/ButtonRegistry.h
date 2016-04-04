#pragma once
class ButtonRegistry{
	public:
		ButtonRegistry(bool);
		void _registerButtonInternal(std::string const&,short);
		void findKeyForButtonId(short);
		void getButtonId(std::string const&);
		void hasEntry(std::string const&);
		void registerButton(std::string const&);
};
