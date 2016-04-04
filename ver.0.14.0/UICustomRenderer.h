#pragma once
class UICustomRenderer{
	public:
		void getBatchType(void);
		void getCustomId(void);
		void getMaterialName(void);
		void getTextureName(int);
		void preRenderSetup(void);
		void update(MinecraftClient &,std::shared_ptr<UIControl> &);
		void ~UICustomRenderer();
		void ~UICustomRenderer();
};
