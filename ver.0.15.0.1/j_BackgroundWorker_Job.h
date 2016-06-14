#pragma once
namespace j{
	class BackgroundWorker{
		public:
		void clear(void);
		void _resetData(void);
		void _tryPopReal(BackgroundWorker::Job &);
	}
};
