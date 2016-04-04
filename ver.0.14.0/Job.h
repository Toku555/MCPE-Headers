#pragma once
class Job{
	public:
		void addToThreadCollection(std::shared_ptr<Job>,ThreadCollection &);
		void getStatus(void);
		void trySetStatus(JobStatus);
};
