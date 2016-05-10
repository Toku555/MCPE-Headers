#pragma once
class ScreenRenderBatch{
	public:
		void _addRenderControl(std::shared_ptr<UIControl> const&,BatchClippingState const&);
		void _addToRenderBatch(UIRenderContext &,int,CustomRenderComponent *,BatchClippingState const&);
		void _addToRenderBatch(int,SpriteComponent *,BatchClippingState const&);
		void _addToRenderBatch(int,TextComponent *,BatchClippingState const&);
		void _populateRenderBatch(UIRenderContext &);
		void _populateRenderControlsCollection(std::shared_ptr<UIControl> const&,BatchClippingState const&,BatchClippingState const&);
		void _sortRenderControlsCollection(void);
		void update(std::shared_ptr<UIControl> const&,UIRenderContext &);
};
