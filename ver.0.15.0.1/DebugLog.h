#pragma once
class DebugLog{
	public:
		void _areaFilterString(uint);
		void _initAreaFilterMap(void);
		void _initAreaFilterMap(void);
		void _initPriorityFilterMap(void);
		void _initPriorityFilterMap(void);
		void _logToFile(std::string const&);
		void _priorityFilterString(uint);
		void area(std::string const&);
		void area(std::string const&);
		void closeLog(void);
		void closeLog(void);
		void createLog(std::string const&,bool,bool,bool,bool,uint,uint);
		void createLog(std::string const&,bool,bool,bool,bool,uint,uint);
		void log(uint,uint,char const*,int,char const*,...);
		void priority(std::string const&);
		void priority(std::string const&);
		void setAppend(bool);
		void setAppend(bool);
		void setFlushImmediate(bool);
		void setFlushImmediate(bool);
		void setTimestamp(bool);
		void setTimestamp(bool);
		void setTrace(bool);
		void setTrace(bool);
		void toggleAreaFilter(uint);
		void toggleAreaFilter(uint);
		void togglePriorityFilter(uint);
		void togglePriorityFilter(uint);
};
