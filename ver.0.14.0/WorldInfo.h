#pragma once
class WorldInfo{
	public:
		WorldInfo(WorldInfoType);
		void getDescription1(void);
		void getDescription2(void);
		void getHeader(void);
		void getWorldDetails(void);
		void getWorldType(void);
		void setHeader(std::string const&);
		void setWorldType(WorldInfoType);
};
