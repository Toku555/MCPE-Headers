#pragma once
class CustomRenderComponent{
	public:
		CustomRenderComponent(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void getBatchType(void);
		void getCustomId(void);
		void getInvalidCustomId(void);
		void getMaterialName(int);
		void getNumRenderPasses(void);
		void getRequiresPreRenderSetup(int);
		void getTextureName(int,int);
		void preRenderSetup(void);
		void render(UIRenderContext &,int);
		void renderCustom(MinecraftClient &,int);
		void setRenderer(std::shared_ptr<UICustomRenderer>);
		void update(UIRenderContext &);
		void updateCustom(MinecraftClient &);
		void ~CustomRenderComponent();
		void ~CustomRenderComponent();
};
