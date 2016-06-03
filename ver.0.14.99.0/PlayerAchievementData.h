#pragma once
class PlayerAchievementData{
	public:
		PlayerAchievementData(PlayerAchievementData const&);
		PlayerAchievementData(void);
		PlayerAchievementData(void);
		void addAchievementData(AchievementData &);
		void addAchievementData(AchievementData &);
		void clear(void);
		void clear(void);
		void getAchievementData(int);
		void getAchievementData(int);
		void getAchievementData(void);
		void getAchievementData(void);
		void getAchievementsUnlocked(void);
		void getAchievementsUnlocked(void);
		void getCurrGamerScore(void);
		void getCurrGamerScore(void);
		void getMaxAchievements(void);
		void getMaxAchievements(void);
		void getMaxGamerScore(void);
		void getMaxGamerScore(void);
		void getTimePlayed(void);
		void getTimePlayed(void);
		void operator=(PlayerAchievementData const&);
		void operator=(PlayerAchievementData const&);
		void setAchievementsUnlocked(int);
		void setAchievementsUnlocked(int);
		void setCurrGamerScore(int);
		void setCurrGamerScore(int);
		void setMaxAchievements(int);
		void setMaxAchievements(int);
		void setMaxGamerScore(int);
		void setMaxGamerScore(int);
		void setTimePlayed(int);
		void setTimePlayed(int);
};
