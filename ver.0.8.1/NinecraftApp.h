#pragma once
class NinecraftApp{
	public:
		NinecraftApp(void);
		void getTextureAtlas(TextureAtlasId);
		void handleBack(bool);
		void handleBack(void);
		void handleBackNoReturn(void);
		void init(void);
		void initGLStates(void);
		void onAppResumed(void);
		void onLowMemory(void);
		void restartServer(void);
		void teardown(void);
		void update(void);
		void updateStats(void);
		void ~NinecraftApp();
		void ~NinecraftApp();
};
