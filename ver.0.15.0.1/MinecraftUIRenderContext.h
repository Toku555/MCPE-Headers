#pragma once
class MinecraftUIRenderContext{
	public:
		MinecraftUIRenderContext(MinecraftClient &);
		MinecraftUIRenderContext(MinecraftClient &);
		void PersistentMeshItem(BatchKey const&,std::vector<mce::TexturePtr,std::allocator<mce::TexturePtr>>,std::string const&,uint);
		void PersistentMeshItem(BatchKey const&,std::vector<mce::TexturePtr,std::allocator<mce::TexturePtr>>,std::string const&,uint);
		void _renderImages(void);
		void _renderImages(void);
		void _renderText(void);
		void _renderText(void);
		void beginSharedMeshBatch(ComponentRenderBatch &);
		void beginSharedMeshBatch(ComponentRenderBatch &);
		void cleanup(void);
		void cleanup(void);
		void decreaseStencilRef(void);
		void decreaseStencilRef(void);
		void disableScissorTest(void);
		void disableScissorTest(void);
		void drawImage(mce::TexturePtr const&,glm::detail::tvec2<float>,glm::detail::tvec2<float>,glm::detail::tvec2<float>,glm::detail::tvec2<float>);
		void drawImage(mce::TexturePtr const&,glm::detail::tvec2<float>,glm::detail::tvec2<float>,glm::detail::tvec2<float>,glm::detail::tvec2<float>);
		void drawRectangle(RectangleArea const&,int);
		void drawRectangle(RectangleArea const&,int);
		void drawText(RectangleArea const&,std::string const&,ui::AnchorPoint,ui::FontSize,bool,bool,int,ui::FontType);
		void drawText(RectangleArea const&,std::string const&,ui::AnchorPoint,ui::FontSize,bool,bool,int,ui::FontType);
		void drawTextShadow(RectangleArea const&,std::string const&,ui::AnchorPoint,ui::FontSize,bool,bool,int,ui::FontType);
		void drawTextShadow(RectangleArea const&,std::string const&,ui::AnchorPoint,ui::FontSize,bool,bool,int,ui::FontType);
		void enableScissorTest(RectangleArea const&);
		void enableScissorTest(RectangleArea const&);
		void endSharedMeshBatch(ComponentRenderBatch &);
		void endSharedMeshBatch(ComponentRenderBatch &);
		void fillRectangle(RectangleArea const&);
		void fillRectangle(RectangleArea const&);
		void fillRectangleStencil(RectangleArea const&);
		void fillRectangleStencil(RectangleArea const&);
		void flushImageBatch(void);
		void flushImageBatch(void);
		void flushTextBatch(void);
		void flushTextBatch(void);
		void getLineLength(std::string const&,float,bool);
		void getLineLength(std::string const&,float,bool);
		void getTextHeight(std::string const&,int,bool);
		void getTextHeight(std::string const&,int,bool);
		void getTexture(ResourceLocation const&);
		void getTexture(ResourceLocation const&);
		void getZippedTexture(std::string const&,ResourceLocation const&);
		void getZippedTexture(std::string const&,ResourceLocation const&);
		void increaseStencilRef(void);
		void increaseStencilRef(void);
		void measureText(std::string const&,bool);
		void measureText(std::string const&,bool);
		void function<bool ();
		void function<bool ();
		void removePersistentMeshes(void);
		void removePersistentMeshes(void);
		void renderCustom(CustomRenderComponent *,int,RectangleArea &);
		void renderCustom(CustomRenderComponent *,int,RectangleArea &);
		void resetStencilRef(void);
		void resetStencilRef(void);
		void setAlpha(float);
		void setAlpha(float);
		void setColor(Color const&);
		void setColor(Color const&);
		void setMaterial(std::string const&);
		void setMaterial(std::string const&);
		void updateCustom(CustomRenderComponent *);
		void updateCustom(CustomRenderComponent *);
		void ~MinecraftUIRenderContext();
		void ~MinecraftUIRenderContext();
		void ~MinecraftUIRenderContext();
		void ~MinecraftUIRenderContext();
};
