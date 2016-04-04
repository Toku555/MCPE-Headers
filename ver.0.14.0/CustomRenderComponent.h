#pragma once
class CustomRenderComponent{
	public:
		CustomRenderComponent(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void getBatchType(void);
		void getCustomId(void);
		void getInvalidCustomId(void);
		void getMaterialName(void);
		void getTextureName(int);
		void preRenderSetup(void);
		void render(UIRenderContext &);
		void renderCustom(MinecraftClient &);
		void setRenderer(std::shared_ptr<UICustomRenderer>);
		void update(UIRenderContext &);
		void updateCustom(MinecraftClient &);
		void ~CustomRenderComponent();
		void ~CustomRenderComponent();
};
