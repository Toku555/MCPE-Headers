#pragma once
class ClientCommands{
	public:
		void setupDebug(ServerCommandParser &,Options &);
		void setupProfiling(ServerCommandParser &,Options &);
		void setupStandard(ServerCommandParser &,LocalPlayer &,TextureGroup &,LevelArchiver &,GameMode &);
};
