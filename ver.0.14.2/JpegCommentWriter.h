#pragma once
class JpegCommentWriter{
	public:
		JpegCommentWriter(MinecraftClient &);
		void _drawImage(TextureData &);
		void _drawPolaroidText(int,int,std::string const&,Color const&);
		void execute(std::string const&,std::string const&,Color const&);
		void ~JpegCommentWriter();
		void ~JpegCommentWriter();
};
