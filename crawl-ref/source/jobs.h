#ifndef JOBS_H
#define JOBS_H

const char *get_job_abbrev(job_type which_job);
job_type get_job_by_abbrev(const char *abbrev);
const char *get_job_name(job_type which_job);
job_type get_job_by_name(const char *name);
void job_stat_init(job_type job);

// Is the job valid for a new game?
bool is_starting_job(job_type job);

#endif
