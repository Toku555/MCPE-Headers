#pragma once
class ImageUtils{
	public:
		void cropImage(TextureData &,int,int,bool);
		void cropImage(TextureData &,int,int,bool);
		void loadImageFromFile(TextureData &,std::string const&);
		void loadImageFromFile(TextureData &,std::string const&);
		void loadImageFromMemory(TextureData &,signed char *,int);
		void loadImageFromMemory(TextureData &,signed char *,int);
		void loadMetadataJPEG(std::string &,std::string const&);
		void loadMetadataJPEG(std::string &,std::string const&);
		void overlayImage(TextureData &,TextureData const&,TextureData const*);
		void overlayImage(TextureData &,TextureData const&,TextureData const*);
		void saveJPEG(TextureData const&,std::string const&,int);
		void saveJPEG(TextureData const&,std::string const&,int);
		void saveMetadataJPEG(std::string const&,std::string const&);
		void saveMetadataJPEG(std::string const&,std::string const&);
		void savePNG(TextureData const&,std::string const&);
		void savePNG(TextureData const&,std::string const&);
		void scaleImage(TextureData &,int,int);
		void scaleImage(TextureData &,int,int);
};
