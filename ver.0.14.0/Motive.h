#pragma once
class Motive{
	public:
		Motive(std::string,int,int,int,int,bool);
		void getAllMotivesAsList(void);
		void getDefaultImage(void);
		void getHeight(void);
		void getMotiveByName(std::string const&);
		void getName(void);
		void getUo(void);
		void getVo(void);
		void getWidth(void);
		void isPublic(void);
		void ~Motive();
};
