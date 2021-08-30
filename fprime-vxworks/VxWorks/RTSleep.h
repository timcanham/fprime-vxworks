 OS_RTSLEEP_H
 OS_RTSLEEP_H

 <time.h>
 <errno.h>
 <signal.h>
 <stdio.h>

 __cplusplus
 "C" {


/* Sleep for msec milliseconds */
     rt_sleep_ms(const long msec);
/* Sleep for usec microseconds */
     rt_sleep_us(const long usec);
/* Sleep for nsec nanoseconds */
     rt_sleep_ns(const long nsec);

     __cplusplus
}



