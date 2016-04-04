#pragma once
class ScreenRenderBatch{
	public:
		void _addRenderControl(std::shared_ptr<UIControl> const&,BatchClippingState const&);
		void _addRenderControlPopulateCollection(std::shared_ptr<UIControl> const&,BatchClippingState const&,BatchClippingState const&);
		void _addToRenderBatch(int,CustomRenderComponent *,BatchClippingState const&);
		void _addToRenderBatch(int,SpriteComponent *,BatchClippingState const&);
		void _addToRenderBatch(int,TextComponent *,BatchClippingState const&);
		void populateRenderBatch(void);
		void populateRenderControlsCollection(std::shared_ptr<UIControl> const&,BatchClippingState const&,BatchClippingState const&);
		void sortRenderControlsCollection(void);
};
