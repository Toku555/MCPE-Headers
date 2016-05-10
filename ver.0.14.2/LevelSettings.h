#pragma once
class LevelSettings{
	public:
		LevelSettings(uint,GameType,DimensionId,GeneratorType,BlockPos const&,bool,int,bool);
		LevelSettings(void);
		void gameTypeToString(GameType);
		void generatorTypeToString(GeneratorType);
		void getDayCycleStopTime(void);
		void getDefaultSpawn(void);
		void getGameType(void);
		void getGenerator(void);
		void getSeed(void);
		void hasBeenLoadedInCreative(void);
		void isEduWorld(void);
		void parseSeedString(std::string const&,uint);
		void setIsEduWorld(bool);
		void validateGameType(GameType);
};
