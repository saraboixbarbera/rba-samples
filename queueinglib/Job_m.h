//
// Generated file, do not edit! Created by opp_msgtool 6.1 from Job.msg.
//

#ifndef __QUEUEING_JOB_M_H
#define __QUEUEING_JOB_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0601
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif

// dll export symbol
#ifndef QUEUEING_API
#  if defined(QUEUEING_EXPORT)
#    define QUEUEING_API  OPP_DLLEXPORT
#  elif defined(QUEUEING_IMPORT)
#    define QUEUEING_API  OPP_DLLIMPORT
#  else
#    define QUEUEING_API
#  endif
#endif


namespace queueing {

class Job;

}  // namespace queueing


namespace queueing {

// cplusplus {{
#include "QueueingDefs.h"
// }}

/**
 * Class generated from <tt>Job.msg:21</tt> by opp_msgtool.
 * <pre>
 * //
 * // Job message definition for queueing framework
 * //
 * message Job
 * {
 *     \@customize(true);
 *     int priority;                // queueing priority
 *     simtime_t totalQueueingTime; // total time spent standing in queues
 *     simtime_t totalServiceTime;  // total time spent in servers
 *     simtime_t totalDelayTime;    // total time spent in delay modules
 *     int queueCount;              // the number of queue modules visited by the job
 *     int delayCount;              // the number of delay modules visited by the job
 *     int generation;              // how many times the original ancestor was copied
 * }
 * </pre>
 *
 * Job_Base is only useful if it gets subclassed, and Job is derived from it.
 * The minimum code to be written for Job is the following:
 *
 * <pre>
 * class QUEUEING_API Job : public Job_Base
 * {
 *   private:
 *     void copy(const Job& other) { ... }

 *   public:
 *     Job(const char *name=nullptr, short kind=0) : Job_Base(name,kind) {}
 *     Job(const Job& other) : Job_Base(other) {copy(other);}
 *     Job& operator=(const Job& other) {if (this==&other) return *this; Job_Base::operator=(other); copy(other); return *this;}
 *     virtual Job *dup() const override {return new Job(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from Job_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(Job)
 * </pre>
 */
class QUEUEING_API Job_Base : public ::omnetpp::cMessage
{
  protected:
    int priority = 0;
    ::omnetpp::simtime_t totalQueueingTime = SIMTIME_ZERO;
    ::omnetpp::simtime_t totalServiceTime = SIMTIME_ZERO;
    ::omnetpp::simtime_t totalDelayTime = SIMTIME_ZERO;
    int queueCount = 0;
    int delayCount = 0;
    int generation = 0;

  private:
    void copy(const Job_Base& other);

  protected:
    bool operator==(const Job_Base&) = delete;
    // make constructors protected to avoid instantiation
    Job_Base(const char *name=nullptr, short kind=0);
    Job_Base(const Job_Base& other);
    // make assignment operator protected to force the user override it
    Job_Base& operator=(const Job_Base& other);

  public:
    virtual ~Job_Base();
    virtual Job_Base *dup() const override {throw omnetpp::cRuntimeError("You forgot to manually add a dup() function to class Job");}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual int getPriority() const;
    virtual void setPriority(int priority);

    virtual ::omnetpp::simtime_t getTotalQueueingTime() const;
    virtual void setTotalQueueingTime(::omnetpp::simtime_t totalQueueingTime);

    virtual ::omnetpp::simtime_t getTotalServiceTime() const;
    virtual void setTotalServiceTime(::omnetpp::simtime_t totalServiceTime);

    virtual ::omnetpp::simtime_t getTotalDelayTime() const;
    virtual void setTotalDelayTime(::omnetpp::simtime_t totalDelayTime);

    virtual int getQueueCount() const;
    virtual void setQueueCount(int queueCount);

    virtual int getDelayCount() const;
    virtual void setDelayCount(int delayCount);

    virtual int getGeneration() const;
    virtual void setGeneration(int generation);
};


}  // namespace queueing


namespace omnetpp {

template<> inline queueing::Job_Base *fromAnyPtr(any_ptr ptr) { return check_and_cast<queueing::Job_Base*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __QUEUEING_JOB_M_H

