#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(viod) {
  // Get current process ID
  pid_t my_pid = getpid();
  pid_t my_ppid = getppid();

  // Get current time
  time_t current_time = time(NULL);
  struct tm *time_info = localtime($current_time);

  //
}
