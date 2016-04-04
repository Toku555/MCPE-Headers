#pragma once
class GamePadLayout{
	public:
		void _clearDuplicates(int);
		void _validTokens(std::vector<std::string,std::allocator<std::string>> const&);
		void getActionString(int);
		void getAssignedString(int);
		void getAssignedValue(int);
		void getDefaultLayout(int);
		void isAssigned(int);
		void isTrigger(int);
		void load(std::string const&);
		void save(void);
		void setButton(int,int);
		void setTrigger(int,int);
		void setUnassigned(int);
};
