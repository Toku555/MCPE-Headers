#pragma once
class LevelSummary{
	public:
		LevelSummary(LevelSummary const&);
		LevelSummary(LevelSummary&&);
		void operator=(LevelSummary const&);
		void operator=(LevelSummary&&);
		void ~LevelSummary();
};
