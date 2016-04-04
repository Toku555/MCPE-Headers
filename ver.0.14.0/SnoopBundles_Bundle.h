#pragma once
namespace SnoopBundles{
	class Bundle{
		public:
		void Bundle(SnoopBundles*,std::string const&);
		void Bundle(SnoopBundles::Bundle&&);
		void Bundle(void);
		void _abort(void);
		void _close(void);
		void hasData(void);
		void isOpen(void);
		void onFailure(void);
		void onSuccess(void);
		void readLine(std::string &);
		void ~Bundle();
		SnoopBundles(std::string const&,int,int);
		void _getBundleFilePath(int);
		void _getMetaDataFilePath(void);
		void _makeNewWritableBundle(void);
		void _onBundleFailed(void);
		void _onBundleSuccess(void);
		void _writeBundleMetaData(void);
		void addData(std::string const&);
		void getDataBundle(void);
		void hasData(void);
		void ~SnoopBundles();
	}
};
