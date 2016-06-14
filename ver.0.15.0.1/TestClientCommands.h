#pragma once
class TestClientCommands{
	public:
		void setupDebug(ServerCommandParser &,Options &);
		void setupDebug(ServerCommandParser &,Options &);
		void setupProfiling(ServerCommandParser &,Options &);
		void setupProfiling(ServerCommandParser &,Options &);
		void setupStandard(ServerCommandParser &,LocalPlayer &,mce::TextureGroup &,LevelArchiver &,GameMode &);
		void setupStandard(ServerCommandParser &,LocalPlayer &,mce::TextureGroup &,LevelArchiver &,GameMode &);
		void setupStartMenuScreen(ServerCommandParser &,MinecraftClient &);
		void setupStartMenuScreen(ServerCommandParser &,MinecraftClient &);
};
