#pragma once
class MinecraftUIRenderContext{
	public:
		MinecraftUIRenderContext(MinecraftClient &);
		void PersistentMeshItem(BatchKey const&,std::vector<mce::TexturePtr,std::allocator<mce::TexturePtr>>,std::string const&,uint);
		void _renderImages(void);
		void _renderText(void);
		void beginSharedMeshBatch(ComponentRenderBatch &);
		void cleanup(void);
		void decreaseStencilRef(void);
		void drawImage(mce::TexturePtr const&,glm::detail::tvec2<float>,glm::detail::tvec2<float>,glm::detail::tvec2<float>,glm::detail::tvec2<float>);
		void drawRectangle(RectangleArea const&,int);
		void drawText(RectangleArea const&,std::string const&,ui::AnchorPoint,ui::FontSize,bool,bool,int,ui::FontType);
		void drawTextShadow(RectangleArea const&,std::string const&,ui::AnchorPoint,ui::FontSize,bool,bool,int,ui::FontType);
		void endSharedMeshBatch(ComponentRenderBatch &);
		void fillRectangle(RectangleArea const&);
		void fillRectangleStencil(RectangleArea const&);
		void flushImageBatch(void);
		void flushTextBatch(void);
		void getLineLength(std::string const&,float,bool);
		void getTextHeight(std::string const&,int,bool);
		void getTexture(std::string const&,TextureLocation);
		void increaseStencilRef(void);
		void measureText(std::string const&,bool);
		void removePersistentMeshes(void);
		void renderCustom(CustomRenderComponent *,int);
		void resetStencilRef(void);
		void setAlpha(float);
		void setColor(Color const&);
		void updateCustom(CustomRenderComponent *);
		void ~MinecraftUIRenderContext();
		void ~MinecraftUIRenderContext();
};
