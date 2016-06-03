#pragma once
class ScreenRenderBatch{
	public:
		ScreenRenderBatch(void);
		ScreenRenderBatch(void);
		void _addRenderControl(std::shared_ptr<UIControl> const&,BatchClippingState const&);
		void _addRenderControl(std::shared_ptr<UIControl> const&,BatchClippingState const&);
		void _addToRenderBatch(UIRenderContext &,int,CustomRenderComponent *,BatchClippingState const&);
		void _addToRenderBatch(UIRenderContext &,int,CustomRenderComponent *,BatchClippingState const&);
		void _addToRenderBatch(int,SpriteComponent *,BatchClippingState const&);
		void _addToRenderBatch(int,SpriteComponent *,BatchClippingState const&);
		void _addToRenderBatch(int,TextComponent *,BatchClippingState const&);
		void _addToRenderBatch(int,TextComponent *,BatchClippingState const&);
		void _populateRenderBatch(UIRenderContext &);
		void _populateRenderBatch(UIRenderContext &);
		void _populateRenderControlsCollection(std::shared_ptr<UIControl> const&,BatchClippingState const&,BatchClippingState const&);
		void _populateRenderControlsCollection(std::shared_ptr<UIControl> const&,BatchClippingState const&,BatchClippingState const&);
		void _sortRenderControlsCollection(void);
		void _storeTextureState(std::shared_ptr<UIControl> const&,bool);
		void _storeTextureState(std::shared_ptr<UIControl> const&,bool);
		void _unloadUnusedTextures(void);
		void update(std::shared_ptr<UIControl> const&,UIRenderContext &);
		void update(std::shared_ptr<UIControl> const&,UIRenderContext &);
		void ~ScreenRenderBatch();
		void ~ScreenRenderBatch();
};
