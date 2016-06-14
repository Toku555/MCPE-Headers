#pragma once
class CustomRenderComponent{
	public:
		CustomRenderComponent(std::shared_ptr<UIControl> &);
		CustomRenderComponent(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void getBatchType(void);
		void getBatchType(void);
		void getCustomId(void);
		void getCustomId(void);
		void getInvalidCustomId(void);
		void getInvalidCustomId(void);
		void getMaterialName(int);
		void getMaterialName(int);
		void getNumRenderPasses(void);
		void getNumRenderPasses(void);
		void getRequiresPreRenderSetup(int);
		void getRequiresPreRenderSetup(int);
		void getResourceLocation(int,int);
		void getResourceLocation(int,int);
		void preRenderSetup(void);
		void preRenderSetup(void);
		void render(UIRenderContext &,int,RectangleArea &);
		void render(UIRenderContext &,int,RectangleArea &);
		void renderCustom(MinecraftClient &,int,RectangleArea &);
		void renderCustom(MinecraftClient &,int,RectangleArea &);
		void setRenderer(std::shared_ptr<UICustomRenderer>);
		void setRenderer(std::shared_ptr<UICustomRenderer>);
		void update(UIRenderContext &);
		void update(UIRenderContext &);
		void updateCustom(MinecraftClient &);
		void updateCustom(MinecraftClient &);
		void ~CustomRenderComponent();
		void ~CustomRenderComponent();
		void ~CustomRenderComponent();
		void ~CustomRenderComponent();
};
