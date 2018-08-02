#include <HiResTimer.h>

void UserMain(void * pd) {
    //Start a timer
    HiResTimer* t = HiResTimer::getHiResTimer();
    t->init();
    t->start();

    Profiler::start(t);
    for (int i = 0; i < 5; ++i) {
        Profiler::tic(0);
        OSTimeDly(TICKS_PER_SECOND/2);
        Profiler::toc(0);
    }
    OSTimeDly(TICKS_PER_SECOND);
	Profiler::stop();
}