#pragma once
namespace j{
	class GuiElementContainer{
		public:
		void render(MinecraftClient *,int,int);
		void tick(MinecraftClient *);
		void ~GuiElementContainer();
	}
};
