#pragma once
class ClientCommands{
	public:
		void setupDebug(ServerCommandParser &,Options &);
		void setupDebugLog(ServerCommandParser &,Options &);
		void setupDebugLog(ServerCommandParser &,Options &);
		void setupProfiling(ServerCommandParser &,Options &);
		void setupStandard(ServerCommandParser &,LocalPlayer &,mce::TextureGroup &,LevelArchiver &,GameMode &);
		void setupStartMenuScreen(ServerCommandParser &,MinecraftClient &);
		void setupStartMenuScreen(ServerCommandParser &,MinecraftClient &);
};
