#pragma once
class GamePadLayout{
	public:
		void _clearDuplicates(int);
		void _validTokens(std::vector<std::string,std::allocator<std::string>> const&);
		void _validTokens(std::vector<std::string,std::allocator<std::string>> const&);
		void getActionString(int);
		void getActionString(int);
		void getAssignedString(int);
		void getAssignedString(int);
		void getAssignedValue(int);
		void getAssignedValue(int);
		void isAssigned(int);
		void isAssigned(int);
		void isTrigger(int);
		void isTrigger(int);
		void load(std::string const&,ControllerType);
		void load(std::string const&,ControllerType);
		void resetToDefault(ControllerType);
		void resetToDefault(ControllerType);
		void save(void);
		void save(void);
		void setButton(int,int);
		void setButton(int,int);
		void setTrigger(int,int);
		void setTrigger(int,int);
		void setUnassigned(int);
};
