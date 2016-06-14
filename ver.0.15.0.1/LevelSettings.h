#pragma once
class LevelSettings{
	public:
		LevelSettings(uint,GameType,DimensionId,GeneratorType,BlockPos const&,bool,int,bool,float,float);
		LevelSettings(uint,GameType,DimensionId,GeneratorType,BlockPos const&,bool,int,bool,float,float);
		LevelSettings(void);
		LevelSettings(void);
		void gameTypeToString(GameType);
		void generatorTypeToString(GeneratorType);
		void getDayCycleStopTime(void);
		void getDayCycleStopTime(void);
		void getDefaultSpawn(void);
		void getDefaultSpawn(void);
		void getGameType(void);
		void getGameType(void);
		void getGenerator(void);
		void getGenerator(void);
		void getLightningLevel(void);
		void getLightningLevel(void);
		void getRainLevel(void);
		void getRainLevel(void);
		void getSeed(void);
		void getSeed(void);
		void hasBeenLoadedInCreative(void);
		void hasBeenLoadedInCreative(void);
		void isEduWorld(void);
		void isEduWorld(void);
		void parseSeedString(std::string const&,uint);
		void parseSeedString(std::string const&,uint);
		void setIsEduWorld(bool);
		void setIsEduWorld(bool);
		void validateGameType(GameType);
		void validateGameType(GameType);
};
