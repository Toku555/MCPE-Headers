#pragma once
class UICustomRenderer{
	public:
		void getBatchType(void);
		void getCustomId(void);
		void getMaterialName(int);
		void getNumRenderPasses(void);
		void getRequiresPreRenderSetup(int);
		void getTextureName(int,int);
		void preRenderSetup(void);
		void update(MinecraftClient &,std::shared_ptr<UIControl> &);
		void ~UICustomRenderer();
		void ~UICustomRenderer();
};
