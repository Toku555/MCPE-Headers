#pragma once
class MinecraftUIRenderContext{
	public:
		MinecraftUIRenderContext(MinecraftClient &);
		void PersistentMeshItem(std::vector<mce::TexturePtr,std::allocator<mce::TexturePtr>>,std::string const&,uint);
		void _renderImages(void);
		void _renderText(void);
		void cleanup(void);
		void decreaseStencilRef(void);
		void drawImage(mce::TexturePtr const&,glm::detail::tvec2<float>,glm::detail::tvec2<float>,glm::detail::tvec2<float>,glm::detail::tvec2<float>);
		void drawRectangle(RectangleArea const&,int);
		void drawText(RectangleArea const&,std::string const&,UI::AnchorPoint,UI::FontSize,bool,bool,UI::FontType);
		void drawTextShadow(RectangleArea const&,std::string const&,UI::AnchorPoint,UI::FontSize,bool,bool,UI::FontType);
		void fillRectangle(RectangleArea const&);
		void fillRectangleStencil(RectangleArea const&);
		void flushImageBatch(void);
		void flushMeshBatch(ComponentRenderBatch &);
		void flushTextBatch(void);
		void getLineLength(std::string const&,bool);
		void getTexture(std::string const&);
		void increaseStencilRef(void);
		void measureText(std::string const&,bool);
		void prepareMeshBatch(ComponentRenderBatch &);
		void removePersistentMeshes(void);
		void renderCustom(CustomRenderComponent *);
		void resetStencilRef(void);
		void setAlpha(float);
		void setColor(Color const&);
		void updateCustom(CustomRenderComponent *);
		void ~MinecraftUIRenderContext();
		void ~MinecraftUIRenderContext();
};
