#pragma once
class FlyingItemRenderer{
	public:
		FlyingItemRenderer(void);
		void _addNewFlyingItems(PropertyBag &);
		void clone(void);
		void getBatchType(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int);
		void update(MinecraftClient &,std::shared_ptr<UIControl> &);
		void ~FlyingItemRenderer();
		void ~FlyingItemRenderer();
};
