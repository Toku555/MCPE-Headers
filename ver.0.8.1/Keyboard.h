#pragma once
class Keyboard{
	public:
		void feed(uchar,int);
		void feedText(std::string const&,bool);
		void reset(void);
};
