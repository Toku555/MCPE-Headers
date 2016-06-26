#pragma once
class Motive{
	public:
		Motive(std::string,int,int,int,int,bool);
		void getAllMotivesAsList(void);
		void getMotiveByName(std::string const&);
		void ~Motive();
};
